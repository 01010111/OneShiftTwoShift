package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{
	var tracks:Array<Track>;
	var ship:Ship;
	var dolly:FlxObject;
	var cur_track_pixel:Int;

	override public function create():Void
	{
		super.create();

		tracks = new Array();
		for (i in 0...3)
			tracks.push(new Track(i * -512));

		ship = new Ship();
		add(ship);

		dolly = new FlxObject(FlxG.width * 0.5, FlxG.height * 0.5, 0, 0);
		add(dolly);

		FlxG.camera.follow(dolly);

		FlxG.watch.add(this, "cur_track_pixel", "P:");
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		for (i in 0...tracks.length)
			FlxG.overlap(ship,tracks[i],check_track);
		dolly.y = ship.getMidpoint().y;
		if (dolly.y < tracks[1].y) swap_tilemaps();
		//ship.color = cur_track_pixel;
	}

	function swap_tilemaps():Void
	{
		tracks.push(tracks.shift());
		tracks[tracks.length - 1].y -= FlxG.height * tracks.length;
		FlxG.worldBounds.setPosition(0, tracks[tracks.length - 1].y);
	}

	function check_track(_s:Ship, _t:Track):Void
	{
		cur_track_pixel = _t.get_pixel_at_point(_s.getMidpoint());
		if (cur_track_pixel != 0 && cur_track_pixel != 0xff000000)
			FlxG.camera.shake();
	}

}

class Ship extends FlxSprite
{

	public function new()
	{
		super();
		loadGraphic("assets/images/ship.png", true, 32, 32);
		animation.frameIndex = 1;
		screenCenter();

		velocity.y = -600;
	}

	override public function update(e:Float):Void
	{
		velocity.x = 0;
		if (FlxG.keys.pressed.LEFT) velocity.x -= 120;
		if (FlxG.keys.pressed.RIGHT) velocity.x += 120;
		super.update(e);
	}

}

class Track extends FlxSprite
{

	public function new(y:Float)
	{
		super(0, y);
		loadGraphic("assets/images/tracks.png", true, 288, 512);

		FlxG.state.add(this);
	}

	override public function update(e:Float):Void
	{
		if (y > FlxG.height)
			y = 511 * -2;
		super.update(e);
	}

	public function get_pixel_at_point(_p:FlxPoint):Int
	{
		return framePixels.getPixel32(Std.int(_p.x - x), Std.int(_p.y - y));
	}

}