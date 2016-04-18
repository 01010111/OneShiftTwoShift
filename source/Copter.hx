package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
import zerolib.ZMath;

class Copter extends FlxSprite
{

	var target:FlxPoint;
	var doritos:Doritos;
	var poofs:Poof;
	var explosions:Explosions;
	var bullets:EnemyBullets;
	var a_offset:Float;

	public function new()
	{
		super();
		health = 10;
		loadGraphic("assets/images/copter.png", true, 48, 48);
		animation.add("play", [0,1,2,3,4,5,6,7], 60);
		animation.play("play");

		maxVelocity.set(50, 50);

		set_target();
		setPosition(ZMath.randomRange(48, FlxG.width - 96), FlxG.height + 48);
		PlayState.i.copters.add(this);

		doritos = new Doritos(8);
		poofs = new Poof(8, false);
		explosions = new Explosions(4);
		bullets = new EnemyBullets(5);

		allowCollisions = 0x0000;
		scale.set(2,2);
		alpha = 1;
		color = 0xff101010;
		
		a_offset = 60;
		FlxTween.tween(this, {a_offset:120}, 1.5, {type:FlxTween.PINGPONG, ease:FlxEase.sineInOut});
		
		FlxTween.color(this, 4, 0xff101010, 0xffffffff, {ease:FlxEase.expoIn});
		//FlxTween.tween(this,{alpha:1, color:0xffffffff},4,{ease:FlxEase.expoIn});
		FlxTween.tween(scale,{x:1,y:1},4,{ease:FlxEase.expoIn}).onComplete = function(t:FlxTween):Void
		{
			allowCollisions = 0x1111;
			new FlxTimer().start(1, shoot);
		}
	}
	
	function shoot(?t:FlxTimer):Void
	{
		if (exists)
		{
			for (i in 0...5)
			{
				new FlxTimer().start(i * 0.25).onComplete = function(t:FlxTimer):Void
				{
					if (exists)
						really_shoot();
				}
			}
			new FlxTimer().start(4, shoot);
		}
	}
	
	function really_shoot():Void
	{
		FlxG.camera.shake(0.005, 0.025);
		bullets.fire(getMidpoint(), a_offset);
	}

	function set_target()
	{
		target = FlxPoint.get(ZMath.randomRange(48, FlxG.width - 48), ZMath.randomRange(48,96));
	}

	override public function update(e:Float):Void
	{
		var _ac = ZMath.velocityFromAngle(ZMath.angleBetween(getMidpoint(), target), ZMath.distance(getMidpoint(), target));
		acceleration.set(_ac.x, _ac.y);
		angle = velocity.x * 0.075;
		super.update(e);
	}

	override public function hurt(_d:Float):Void
	{
		poofs.fire(getMidpoint());
		doritos.fire(getMidpoint(), 1, false);
		doritos.fire(getMidpoint(), 1, true);
		super.hurt(_d);
	}

	override public function kill():Void
	{
		for (i in 0...4)
		{
			new FlxTimer().start(i * 0.2).onComplete = function (t:FlxTimer):Void
			{
				var m = getMidpoint();
				m.set(m.x + ZMath.randomRange( -10, 10), m.y + ZMath.randomRange( -10, 10));
				explosions.fire(m);
			}
		}
		new FlxTimer().start(2).onComplete = function(t:FlxTimer):Void
		{
			poofs.kill();
			doritos.kill();
			explosions.kill();
			bullets.kill();
		}
		super.kill();
	}

}