package;

import flixel.FlxSprite;
import TrackInfo.TrackEnds;
import flixel.FlxG;
import zerolib.ZMath;
import flixel.math.FlxPoint;

class Track extends FlxSprite
{

	var speed:Float = 500;
	public var ends:TrackEnds;

	public function new(y:Float, f:Int)
	{
		super(0, y);
		loadGraphic("assets/images/tracks.png", true, 256, 256);
		set_new_frame(f);
		FlxG.state.add(this);
		FlxG.watch.add(this, "ends", "e:");
	}

	override public function update(e:Float):Void
	{
		velocity.y = speed;
		super.update(e);
	}

	public function set_speed(s:Float):Void
	{
		speed = s;
	}

	public function get_pixel_at_point(_p:FlxPoint):Int
	{
		return framePixels.getPixel32(Std.int(_p.x - x), Math.floor(_p.y - y));
	}

	public function change_frame(_t:Int):Void
	{
		set_new_frame(ZMath.randomRangeInt(0, TrackInfo.tracks.length - 1));

		while(ends.bottom != _t)
			set_new_frame(ZMath.randomRangeInt(0,TrackInfo.tracks.length - 1));
	}

	public function set_new_frame(_f:Int):Void
	{
		animation.frameIndex = _f;
		ends = TrackInfo.tracks[_f];
	}

}