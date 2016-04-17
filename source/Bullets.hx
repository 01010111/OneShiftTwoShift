package;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import openfl.display.BlendMode;
import zerolib.ZMath;
/**
 * ...
 * @author 01010111
 */
class Bullets extends FlxTypedGroup<Bullet>
{

	public function new(amt:Int) 
	{
		super();
		for (i in 0...amt)
			add(new Bullet());
		PlayState.i.layer1.add(this);
	}
	
	public function fire(_p:FlxPoint, _v:FlxPoint):Void
	{
		if (getFirstAvailable() != null) getFirstAvailable().fire(_p, _v);
	}
	
}

class Bullet extends FlxSprite
{
	
	public function new ()
	{
		super(0, 0, "assets/images/shot.png");
		exists = false;
		setSize(2, 2);
		offset.set(1, 1);
		//blend = BlendMode.SCREEN;
	}
	
	public function fire(_p:FlxPoint, _v:FlxPoint):Void
	{
		angle = ZMath.angleFromVelocity(_v.x, _v.y) + 90;
		scale.set(1, 1);
		setPosition(_p.x, _p.y);
		velocity.set(_v.x, _v.y);
		exists = true;
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (y < -16) exists = false;
		if (exists) 
		{
			scale.x *= 1.02;
			scale.y *= 1.1;
		}
		super.update(elapsed);
	}
	
}