package;
import flixel.system.FlxSound;
import flixel.util.FlxSave;

/**
 * ...
 * @author 01010111
 */
class Save
{
	
	public static var _save:FlxSave;
	public static var hi:Int = 0;
	
	public static function save() 
	{
		_save.data.hi = hi;
		_save.flush();
	}
	
	public static function load()
	{
		_save = new FlxSave();
		_save.bind("TWO_SHIFT_DRIFT");
		
		if (_save.data.hi != null)
		{
			hi = _save.data.hi;
		}
	}
	
	public static function music()
	{
		var s:FlxSound = new FlxSound();
		s.loadEmbedded("tune");
		s.volume = 0.75;
		s.looped = true;
		s.play();
		//s.fadeIn(7, 0, 0.75);
	}
	
}