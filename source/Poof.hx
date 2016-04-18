package ;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import zerolib.ZMath;

class Poof extends FlxTypedGroup<PoofPart>
{

	var counter:Int = 0;
	var limit:Bool;

	public function new(_amt:Int, _limit:Bool = true)
	{
		super();
		for(i in 0..._amt)
			add(new PoofPart());
		PlayState.i.layer2.add(this);
		limit = _limit;
	}

	public function fire(_p:FlxPoint, _m:Bool = true)
	{
		if (getFirstAvailable() != null && counter == 0) getFirstAvailable().fire(_p, _m);
	}

	override public function update(e:Float):Void
	{
		super.update(e);
		if (limit)
		{
			if (counter == 0)
				counter = ZMath.randomRangeInt(3,9);
			else 
				counter--;
		}
	}
}

class PoofPart extends FlxSprite
{

	var move_real:Bool;

	public function new()
	{
		exists = false;
		super();
		loadGraphic("assets/images/poof1.png", true, 16, 16);
		animation.add("play", [0,1,2,3,4,4,5,5,6,6,6,7,7,7], 30, false);
		offset.set(8,8);
	}

	public function fire(_p:FlxPoint, _m:Bool):Void
	{
		angle = 90 * ZMath.randomRangeInt(0, 3);
		animation.play("play");
		setPosition(_p.x + ZMath.randomRange(-3,3), _p.y + ZMath.randomRange(-3,3));
		var _s = ZMath.randomRange(1,1.5);
		scale.set(_s,_s);
		exists = true;
		move_real = _m;
	}

	override public function update(e:Float):Void
	{
		super.update(e);
		if (animation.finished) exists = false;
		velocity.y = move_real ? PlayState.i.real_speed : 0;
	}
}