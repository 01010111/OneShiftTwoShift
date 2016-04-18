package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.input.gamepad.FlxGamepad;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxAxes;
import flixel.util.FlxSort;
import flixel.util.FlxTimer;
import openfl.display.BlendMode;
import zerolib.ZMath;
import zerolib.ZCountDown;
import Barriers.Barrier;
import Bullets.Bullet;
import EnemyBullets.EnemyBullet;

class PlayState extends FlxState
{
	var tracks:Array<Track>;
	var ship:Ship;
	var dolly:FlxObject;
	var cur_track_pixel:Int;
	var speed:Float = 500;
	public var real_speed:Float = 0;
	var bg:FlxBackdrop;
	public var layer0:FlxGroup;
	public var layer1:FlxGroup;
	public var layer2:FlxGroup;
	public var layer3:FlxSpriteGroup;
	var indicator:FlxSprite;
	var indi_pos:Float;
	var goal:Float = 1000;
	var cur_dist:Float = 0;
	var indi_map:Array<Float> = new Array();
	public var timer:ZCountDown;
	var health_bar:FlxBar;
	var barriers:Barriers;
	public var missiles:FlxTypedGroup<Missile>;
	public var copters:FlxTypedGroup<Copter>;
	public var enemy_bullets:FlxTypedGroup<EnemyBullet>;
	var red_box:FlxSprite;
	var warnings:Warnings;
	public var sprite_group:FlxSpriteGroup;

	public static var i:PlayState;

	override public function create():Void
	{
		super.create();
		
		#if desktop
		FlxG.fullscreen = true;
		#end
		
		i = this;

		bg = new FlxBackdrop("assets/images/bg.png");
		add(bg);

		layer0 = new FlxGroup();
		layer1 = new FlxGroup();
		layer2 = new FlxGroup();
		layer3 = new FlxSpriteGroup();
		missiles = new FlxTypedGroup();
		copters = new FlxTypedGroup();
		enemy_bullets = new FlxTypedGroup();

		add(layer0);

		tracks = new Array();
		for (i in 0...3)
			tracks.push(new Track(i * -256, i));

		add(layer1);

		sprite_group = new FlxSpriteGroup();
		add(sprite_group);

		ship = new Ship();
		sprite_group.add(ship);

		add(layer2);
		add(layer3);

		timer = new ZCountDown(FlxPoint.get(10,FlxG.height - 24),2);
		add(timer);

		health_bar = new FlxBar(10, FlxG.height - 12, FlxBarFillDirection.LEFT_TO_RIGHT, FlxG.width - 20, 4, ship, "health", 0, 100, true);
		health_bar.createFilledBar(0xff111111, 0xffff0050, true, 0xff111111);
		add(health_bar);

		var flag_bg = new FlxSprite(54, FlxG.height - 21);
		flag_bg.makeGraphic(Std.int(FlxG.width - flag_bg.x - 10), 8, 0xff111111);
		add(flag_bg);

		var indi_line = new FlxSprite(flag_bg.x + 1, flag_bg.y + 6);
		indi_line.makeGraphic(Std.int(flag_bg.width - 2), 1, 0xffdeffff);
		add(indi_line);

		var flag = new FlxSprite(indi_line.x + indi_line.width - 5, indi_line.y - 5, "assets/images/flag.png");
		add(flag);

		indicator = new FlxSprite(indi_line.x, indi_line.y - 6, "assets/images/indicator.png");
		add(indicator);

		indi_map.push(indi_line.x - 2);
		indi_map.push(indi_line.x + indi_line.width - 2);

		barriers = new Barriers();

		red_box = new FlxSprite();
		red_box.makeGraphic(FlxG.width, FlxG.height, 0xffff0050);
		red_box.blend = BlendMode.ADD;
		red_box.alpha = 0;
		add(red_box);

		warnings = new Warnings();
		add(warnings);

		FlxG.watch.add(this, "cur_track_pixel", "P:");

		FlxG.mouse.visible = false;

		new FlxTimer().start(7, spawn_obstacle, 0);
	}

	function spawn_obstacle(?t:FlxTimer):Void
	{
		FlxTween.tween(red_box, {alpha:0.5},0.25).onComplete = function(t:FlxTween):Void
		{
			FlxTween.tween(red_box, {alpha:0},0.25);
		}
		var i = ZMath.randomRangeInt(0,1);
		switch(i)
		{
			case 0: spawn_blocks();
			case 1: layer3.add(new Copter());
			case 3: spawn_missile();
		}
	}

	var barrier_arrays:Array<Array<Int>> = [
		[1,1,0,0,0,0,1,1],
		[0,0,1,1,1,1,0,0],
		[1,0,0,0,0,1,1,1],
		[1,1,1,0,0,0,0,1],
		[0,0,1,0,0,1,0,0],
		[1,1,0,1,1,0,1,1],
		[1,1,1,1,0,0,0,0],
		[0,0,0,0,1,1,1,1],
	];

	function spawn_blocks():Void
	{
		var _a = barrier_arrays[ZMath.randomRangeInt(0, 7)];
		warnings.warn(_a);
		new FlxTimer().start(1).onComplete = function(t:FlxTimer):Void
		{
			add_blocks(_a);
		}
	}

	function add_blocks(_a:Array<Int>):Void
	{
		barriers.place(_a);
	}

	function spawn_missile():Void
	{
		var _i = ZMath.randomRangeInt(3,6);
		var _a:Array<Int> = new Array();
		for ( i in 0...8)
			i == _i ? _a.push(1) : _a.push(0);
		warnings.warn(_a);
		new FlxTimer().start(1).onComplete = function(t:FlxTimer):Void
		{
			add_missile(_i);
		}
	}

	function add_missile(_i:Int):Void
	{
		sprite_group.add(new Missile(_i));
	}

	override public function update(elapsed:Float):Void
	{
		real_speed += (speed - real_speed) * 0.05;
		speed = ship.speed;
		super.update(elapsed);
		for (i in 0...tracks.length)
		{
			if (ship.exists && ship.y > tracks[i].y && ship.y < tracks[i].y + 255)
				check_track(ship, tracks[i]);
			tracks[i].set_speed(real_speed);
		}	
		if (tracks[0].y > FlxG.height) swap_tilemaps();
		bg.velocity.y = real_speed * 0.5;
		if (FlxG.keys.justPressed.R) FlxG.resetState();

		FlxG.overlap(ship, barriers, barrier_callback);
		FlxG.overlap(ship.bullets, copters, bullet_hit_copter);
		FlxG.overlap(ship, enemy_bullets, bullet_hit_player);

		sprite_group.sort(FlxSort.byY, FlxSort.ASCENDING);
		layer3.sort(FlxSort.byY, FlxSort.ASCENDING);

		goal_stuff();
	}
	
	function bullet_hit_player(_s:Ship, _b:EnemyBullet):Void
	{
		_b.kill();
		_s.hurt(5);
	}

	function bullet_hit_copter(_b:Bullet, _c:Copter):Void
	{
		_c.hurt(1);
		_b.kill();
	}

	function barrier_callback(_s:Ship, _b:Barrier):Void
	{
		_b.explode();
		if(_s.animation.curAnim.name == "fast")
		{
			FlxG.camera.shake(0.01, 0.2);
		}
		else
		{
			FlxG.camera.shake(0.02, 0.2);
			_s.hurt(10);
		}
	}

	function goal_stuff():Void
	{
		var indi_x = ZMath.map(cur_dist, 0, goal, indi_map[0], indi_map[1]);
		indicator.x += (indi_x - indicator.x) * 0.1;
		
		if (ship.exists)
			cur_dist += real_speed / 500;

		if (cur_dist >= goal)
		{
			cur_dist = 0;
			goal *= 1.1;
			timer.add_time(0, 30);
		}
	}

	function swap_tilemaps():Void
	{
		tracks[0].y = tracks[2].y - 256;
		tracks[0].change_frame(tracks[2].ends.top);
		tracks.push(tracks.shift());
	}

	function check_track(_s:Ship, _t:Track):Void
	{
		cur_track_pixel = _t.get_pixel_at_point(_s.getMidpoint());
		if (cur_track_pixel == 0)
		{
			FlxG.camera.shake(0.01, 0.05);
			speed = 75;
			ship.poofs.fire(ship.getMidpoint());
			ship.hurt(1);
		}	
	}

}