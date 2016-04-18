package;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import zerolib.ZMath;
/**
 * ...
 * @author 01010111
 */
class EnemyBullets extends FlxTypedGroup<EnemyBullet>
{

	public function new(_amt:Int) 
	{
		super();
		for (i in 0..._amt)
			add(new EnemyBullet());
		PlayState.i.layer2.add(this);
	}
	
	public function fire(_p:FlxPoint, _a:Float):Void
	{
		if (getFirstAvailable() != null) getFirstAvailable().fire(_p, ZMath.velocityFromAngle(_a, 100));
	}
	
}

class EnemyBullet extends FlxSprite
{
	
	public function new()
	{
		super(0, 0, "assets/images/bullet.png");
		exists = false;
		setSize(6, 6);
		offset.set(3, 3);
		PlayState.i.enemy_bullets.add(this);
	}
	
	public function fire(_p:FlxPoint, _v:FlxPoint):Void
	{
		setPosition(_p.x - 3, _p.y - 3);
		velocity.set(_v.x, _v.y);
		exists = true;
		FlxTween.tween(scale, {x:1.3, y:1.3}, 0.1, {type:FlxTween.PINGPONG, ease:FlxEase.sineInOut});
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (!isOnScreen())
			exists = false;
		super.update(elapsed);
		angle = ZMath.angleFromVelocity(velocity.x, velocity.y);
	}
	
}