package ;

import flixel.FlxSprite;
import flixel.FlxG;

class Missile extends FlxSprite
{

	var poofs:Poof;

	public function new(i:Int)
	{
		super(i * 32 + 4, -80);
		loadGraphic("assets/images/missile.png", true, 24, 32);
		animation.add("play",[0,1,2,3]);
		animation.play("play");
		PlayState.i.missiles.add(this);
		poofs = new Poof(8);
	}

	var poof_timer:Int = 0;

	override public function update(e:Float):Void
	{
		super.update(e);
		velocity.y = PlayState.i.real_speed;
		if (y > FlxG.height + 10) 
		{
			poofs.kill();
			kill();
		}
		if (poof_timer == 0)
		{
			poof_timer = 3;
			poofs.fire(getMidpoint(), false);
		}
		else
			poof_timer--;
	}

	public function explode():Void
	{
		poofs.kill();
		super.kill();
	}

}