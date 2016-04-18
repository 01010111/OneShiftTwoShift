package ;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import flixel.util.FlxSpriteUtil;
import zerolib.ZMath;
import flixel.FlxG;

class Doritos extends FlxTypedGroup<Dorito>
{

	public function new(_amt:Int)
	{
		super();
		for ( i in 0..._amt)
		{
			add(new Dorito());
		}
		PlayState.i.layer2.add(this);
	}

	public function fire(_p:FlxPoint, _amt:Int, r:Bool = true):Void
	{
		var _a = ZMath.randomRange(0,360);
		var _a_o = 360 / _amt;
		for ( i in 0..._amt)
		{
			if (getFirstAvailable() != null) getFirstAvailable().fire(_p, ZMath.velocityFromAngle(_a + i * _a_o, ZMath.randomRange(100,200)), r);
		}
	}

}

class Dorito extends FlxSprite
{

	public function new()
	{
		super();
		loadGraphic("assets/images/dorito.png", true, 8, 8);
		animation.add("red", [0,1,2,3]);
		animation.add("blue", [4,5,6,7]);
		offset.set(4,4);
		exists = false;
		acceleration.y = 400;
	}

	public function fire(_p:FlxPoint, _v:FlxPoint, _r:Bool = true):Void
	{
		setPosition(_p.x, _p.y);
		velocity.set(_v.x, _v.y);
		if (Math.random() > 0.75)
			FlxSpriteUtil.flicker(this);
		_r ? animation.play("red") : animation.play("blue");
		angularVelocity = velocity.x * 10;
		exists = true;
	}

	override public function update(e:Float):Void
	{
		super.update(e);
		maxVelocity.y = PlayState.i.real_speed + 16;
		if (y > FlxG.height + 8)
			kill();
	}

}