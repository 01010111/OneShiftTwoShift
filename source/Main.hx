package;

import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(256, 256, PlayState));
		addChild(new openfl.display.FPS(10,10,0xffffff));
	}
}