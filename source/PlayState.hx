package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.group.FlxGroup;
import flixel.input.gamepad.FlxGamepad;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxAxes;
import openfl.display.BlendMode;
import zerolib.ZMath;
import zerolib.ZCountDown;

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
	var indicator:FlxSprite;
	var indi_pos:Float;
	var goal:Float = 1000;
	var cur_dist:Float = 0;
	var indi_map:Array<Float> = new Array();
	var timer:ZCountDown;
	var health_bar:FlxBar;

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
		add(layer0);

		tracks = new Array();
		for (i in 0...3)
			tracks.push(new Track(i * -256, i));

		layer1 = new FlxGroup();
		add(layer1);

		ship = new Ship();
		add(ship);

		layer2 = new FlxGroup();
		add(layer2);

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
		indi_map.push(indi_line.x + indi_line.width + 2);

		FlxG.watch.add(this, "cur_track_pixel", "P:");

		FlxG.mouse.visible = false;
	}

	override public function update(elapsed:Float):Void
	{
		real_speed += (speed - real_speed) * 0.05;
		speed = ship.speed;
		super.update(elapsed);
		for (i in 0...tracks.length)
		{
			if (ship.y > tracks[i].y && ship.y < tracks[i].y + 255)
				check_track(ship, tracks[i]);
			tracks[i].set_speed(real_speed);
		}	
		if (tracks[0].y > FlxG.height) swap_tilemaps();
		bg.velocity.y = real_speed * 0.5;
		if (FlxG.keys.justPressed.R) FlxG.resetState();
		goal_stuff();
	}

	function goal_stuff():Void
	{
		var indi_x = ZMath.map(cur_dist, 0, goal, indi_map[0], indi_map[1]);
		indicator.x += (indi_x - indicator.x) * 0.1;
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