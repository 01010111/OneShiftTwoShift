package;

import flixel.math.FlxMath;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxAxes;
import flixel.util.FlxTimer;
import zerolib.ZMath;

class Ship extends FlxSprite
{

	public var poofs:Poof;
	public var bullets:Bullets;
	var accel:Float = 1200;
	public var speed:Float = 250;
	var doritos:Doritos;
	var explosions:Explosions;

	public function new()
	{
		super(0, FlxG.height * 0.75);
		loadGraphic("assets/images/ship.png", true, 32, 32);
		animation.add("slow", [0,1,2,3], 48);
		animation.add("fast", [4,5,6,7], 30);
		maxVelocity.set(150, 75);
		drag.set(accel, accel);
		setSize(8, 1);
		offset.set(12, 16);
		poofs = new Poof(8);
		bullets = new Bullets(16);
		doritos = new Doritos(48);
		explosions = new Explosions(6);
		health = 100;
		screenCenter(FlxAxes.X);
	}

	var temp_speed:Float = 350;
	var bullet_timer:Int = 0;
	var bullet_alt:Bool = true;
	public var in_control:Bool = true;

	override public function update(e:Float):Void
	{
		acceleration.set();

		if (in_control)
		{
			if (FlxG.keys.pressed.X)
			{
				speed = temp_speed;
				temp_speed = ZMath.clamp(temp_speed *= 1.005, 0, 425);
			}
			else 
			{
				speed = 200;
				temp_speed += (350 - temp_speed) * 0.02;
				if (FlxG.keys.pressed.C)
				{
					if (bullet_timer == 0)
						shoot();
					else
						bullet_timer--;
				}
				else
					bullet_timer = 0;
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
			
			if (FlxG.keys.justPressed.X)
				FlxG.sound.play("boostin", 0.5);
			else if (FlxG.keys.justReleased.X)
				FlxG.sound.play("boostout", 0.5);
			
			var _anim = FlxG.keys.pressed.X ? "fast" : "slow";
			animation.play(_anim); 

			angle = velocity.x * 0.075;
		}
		else
		{
			speed = 0;
		}
	
		super.update(e);
	}

	function shoot():Void
	{
		bullet_timer = 3;
		var _b_p = getMidpoint();
		_b_p.x += bullet_alt ? -7 : 5;
		_b_p.y -= 4;
		bullet_alt = !bullet_alt;
		bullets.fire(_b_p, ZMath.velocityFromAngle(angle - 90, 600));
		FlxG.camera.shake(0.005, 0.025);
	}

	override public function kill():Void
	{
		if (alive)
		{
			PlayState.i.player_die();
			for (i in 0...6)
			{
				new FlxTimer().start(i * 0.1).onComplete = function(t:FlxTimer):Void
				{
					var m = getMidpoint();
					m.set(m.x + ZMath.randomRange( -20, 20), m.y + ZMath.randomRange( -40, 10));
					explosions.fire(m);
				}
			}
			PlayState.i.timer.pause();
			super.kill();
		}
	}

	override public function hurt(_d:Float):Void
	{
		if (_d < 5 && Math.random() > 0.75) 
			doritos.fire(getMidpoint(), Std.int(_d), true);
		else if (_d >= 5)
		{
			doritos.fire(getMidpoint(), Std.int(_d), true);
			in_control = false;
			animation.play("slow");
			velocity.set(ZMath.randomRange(-10,10), 100);
			var _a = angle;
			angle -= 360 * 2;
			FlxTween.tween(this, {angle:_a}, 0.75, {ease:FlxEase.expoOut});
			new FlxTimer().start(0.75).onComplete = function(t:FlxTimer):Void
			{
				in_control = true;
			}
		}
		super.hurt(_d);
	}

}