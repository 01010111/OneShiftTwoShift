package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import zerolib.ZMath;

class Barriers extends FlxTypedGroup<Barrier>
{

	public function new()
	{
		super();

		for (i in 0...8)
			add(new Barrier());

		//PlayState.i.layer1.add(this);
	}

	public function place(_a:Array<Int>):Void
	{
		var e = ZMath.randomRangeInt(1,5);
		for (i in 0...8)
		{
			if (getFirstAvailable() != null && _a[i] == 1) getFirstAvailable().place(FlxPoint.get(i * 32, -48));
		}
	}

}

class Barrier extends FlxSprite
{

	var doritos:Doritos;

	public function new()
	{
		super();
		loadGraphic("assets/images/crystal.png", true, 32, 48);
		animation.add("play", [0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7],30);
		animation.play("play");
		exists = false;
		immovable = true;
		setSize(23, 16);
		offset.set(4, 32);
		doritos = new Doritos(6);
		PlayState.i.sprite_group.add(this);
	}

	public function place(_p:FlxPoint):Void
	{
		setPosition(_p.x, _p.y);
		exists = true;
	}

	override public function update(e:Float):Void
	{
		super.update(e);
		velocity.y = PlayState.i.real_speed * 0.95;
		if (y > FlxG.height)
			kill();
	}

	public function explode():Void
	{
		doritos.fire(getMidpoint(), 6, false);
		kill();
	}

}