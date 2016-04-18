package ;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.tweens.FlxTween;
import flixel.util.FlxSpriteUtil;

class Warnings extends FlxTypedGroup<Warning>
{

	public function new()
	{
		super();
		for(i in 0...8)
			add(new Warning(i));
	}

	public function warn(_a:Array<Int>):Void
	{
		for (i in 0..._a.length)
		{
			if (_a[i] == 1)
			{
				members[i].warn();
			}
		}
	}

}

class Warning extends FlxSprite
{

	public function new(i:Int)
	{
		super(32 * i, 8,"assets/images/warning.png");
		visible = false;
		scale.set(0.5,0.5);
	}

	public function warn():Void
	{
		scale.set(0.5,0.5);
		FlxSpriteUtil.flicker(this, 1, 0.125, false);
		FlxTween.tween(scale, {x:1,y:1},1);
	}

}