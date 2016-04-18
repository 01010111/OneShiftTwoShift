package ;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;

class Explosions extends FlxTypedGroup<Explosion>
{

	public function new(_amt:Int)
	{
		super();
		for (i in 0..._amt)
			add(new Explosion());
		PlayState.i.layer1.add(this);
	}

	public function fire(_p:FlxPoint):Void
	{
		if (getFirstAvailable() != null) getFirstAvailable().fire(_p);
	}

}

class Explosion extends FlxSprite
{

	public function new()
	{
		super();
		loadGraphic("assets/images/explosion.png", true, 48, 48);
		animation.add("play", [0,1,2,3,4,5,5,6,6,7,7,8,8,8,9,9,9,10,10,10],48,false);
		exists = false;
		offset.set(24,24);
	}

	public function fire(_p:FlxPoint):Void
	{
		setPosition(_p.x, _p.y);
		var _s = Math.random() + 1;
		scale.set(_s,_s);
		animation.play("play");
		exists = true;
	}

	override public function update(e:Float):Void
	{
		super.update(e);
		velocity.y = PlayState.i.real_speed;
		if (animation.finished)
			exists = false;
	}

}