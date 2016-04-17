package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/images/bg.png", "assets/images/bg.png");
			type.set ("assets/images/bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/flag.png", "assets/images/flag.png");
			type.set ("assets/images/flag.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/indicator.png", "assets/images/indicator.png");
			type.set ("assets/images/indicator.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tracks.ase", "assets/images/tracks.ase");
			type.set ("assets/images/tracks.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/ship.ase", "assets/images/ship.ase");
			type.set ("assets/images/ship.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/indicator.ase", "assets/images/indicator.ase");
			type.set ("assets/images/indicator.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tracks.png", "assets/images/tracks.png");
			type.set ("assets/images/tracks.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/palette.ase", "assets/images/palette.ase");
			type.set ("assets/images/palette.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/ship.png", "assets/images/ship.png");
			type.set ("assets/images/ship.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/warning.png", "assets/images/warning.png");
			type.set ("assets/images/warning.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/poof1.ase", "assets/images/poof1.ase");
			type.set ("assets/images/poof1.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/poof1.png", "assets/images/poof1.png");
			type.set ("assets/images/poof1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
