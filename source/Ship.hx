package;

import flixel.math.FlxMath;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxAxes;
import zerolib.ZMath;

class Ship extends FlxSprite
{

	public var poofs:Poof;
	var accel:Float = 1200;
	public var speed:Float = 250;

	public function new()
	{
		super(0, FlxG.height * 0.75);
		loadGraphic("assets/images/ship.png", true, 32, 32);
		animation.add("slow", [0,1,2,3], 48);
		animation.add("fast", [4,5,6,7], 30);
		screenCenter(FlxAxes.X);
		maxVelocity.set(150, 75);
		drag.set(accel, accel);
		setSize(8, 1);
		offset.set(12, 16);
		poofs = new Poof(8);
		health = 100;
	}

	var temp_speed:Float = 350;

	override public function update(e:Float):Void
	{
		acceleration.set();

		//speed = FlxG.keys.pressed.X ? 400 : 180;

		if (FlxG.keys.pressed.X)
		{
			speed = temp_speed;
			temp_speed = ZMath.clamp(temp_speed *= 1.005, 0, 425);
		}
		else 
		{
			speed = 200;
			temp_speed += (350 - temp_speed) * 0.02;
		}

		if (FlxG.keys.pressed.UP) acceleration.y -= accel;
		if (FlxG.keys.pressed.DOWN) 
		{
			acceleration.y += accel;
			if (!FlxG.keys.pressed.X) 
				speed *= 75/200;
		}	
		if (FlxG.keys.pressed.LEFT) acceleration.x -= accel;
		if (FlxG.keys.pressed.RIGHT) acceleration.x += accel;

		var _anim = FlxG.keys.pressed.X ? "fast" : "slow";
		animation.play(_anim); 

		var _m = getMidpoint();
		if (_m.x <= 0 && velocity.x < 0 || _m.x >= FlxG.width && velocity.x > 0)
			velocity.x = 0;
		if (_m.y <= 0 && velocity.y < 0 || _m.y >= FlxG.height && velocity.y > 0)
			velocity.y = 0;

		angle = velocity.x * 0.075;

		super.update(e);
	}

}