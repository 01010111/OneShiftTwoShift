package;
import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
/**
 * ...
 * @author 01010111
 */
class Alerts extends FlxTypedGroup<Alert>
{
	
	public static var MSG_LIFE_PLUS:Int = 0;
	public static var MSG_TIME_PLUS:Int = 1;
	
	public function new() 
	{
		super();
		for (i in 0...4)
			add(new Alert());
		PlayState.i.add(this);
	}
	
	public function alert(_m:Int)
	{
		if (getFirstAvailable() != null) getFirstAvailable().alert(_m);
		pop_up();
	}
	
	public function pop_up()
	{
		for (i in 0...members.length)
		{
			if (members[i].exists)
				members[i].pop_up();
		}
	}
	
}

class Alert extends FlxSprite
{
	
	public function new()
	{
		super();
		loadGraphic("assets/images/alerts.png", true, 64, 11);
		exists = false;
	}
	
	public function alert(_m:Int)
	{
		alpha = 0;
		setPosition(FlxG.width - 74, FlxG.height - 21);
		FlxTween.tween(this, {alpha:1}, 0.25);
		animation.frameIndex = _m;
		exists = true;
		new FlxTimer().start(2).onComplete = function(t:FlxTimer):Void
		{
			FlxTween.tween(this, {alpha:0}, 1).onComplete = function(t:FlxTween):Void
			{
				exists = false;
			}
		}
	}
	
	public function pop_up()
	{
		FlxTween.tween(this, {y:y - 12}, 0.25);
		FlxG.sound.play("yes");
	}
	
}