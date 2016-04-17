#ifndef INCLUDED_flixel_graphics_frames_FlxBitmapFont
#define INCLUDED_flixel_graphics_frames_FlxBitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxBitmapFont)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace graphics{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapFont_obj : public ::flixel::graphics::frames::FlxFramesCollection_obj{
	public:
		typedef ::flixel::graphics::frames::FlxFramesCollection_obj super;
		typedef FlxBitmapFont_obj OBJ_;
		FlxBitmapFont_obj();
		Void __construct(::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint border);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.FlxBitmapFont")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBitmapFont_obj > __new(::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint border);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapFont_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBitmapFont","\x50","\x98","\x75","\x63"); }

		static void __boot();
		static int spaceCode;
		static int tabCode;
		static int newLineCode;
		static ::String defaultFontKey;
		static ::String defaultFontData;
		static ::String DEFAULT_CHARS;
		static ::openfl::_legacy::geom::Point point;
		static ::openfl::_legacy::geom::Rectangle flashRect;
		static ::flixel::graphics::frames::FlxBitmapFont getDefaultFont( );
		static Dynamic getDefaultFont_dyn();

		static ::flixel::graphics::frames::FlxBitmapFont fromAngelCode( Dynamic Source,Dynamic Data);
		static Dynamic fromAngelCode_dyn();

		static ::flixel::graphics::frames::FlxBitmapFont fromXNA( Dynamic source,::String letters,hx::Null< int >  charBGColor);
		static Dynamic fromXNA_dyn();

		static ::openfl::_legacy::geom::Point transformPoint( ::openfl::_legacy::geom::Point point,::flixel::graphics::frames::FlxFrame frame);
		static Dynamic transformPoint_dyn();

		static ::flixel::graphics::frames::FlxBitmapFont fromMonospace( Dynamic source,::String letters,::flixel::math::FlxPoint charSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint spacing);
		static Dynamic fromMonospace_dyn();

		static ::flixel::graphics::frames::FlxBitmapFont findFont( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint border);
		static Dynamic findFont_dyn();

		int size;
		int lineHeight;
		bool bold;
		bool italic;
		::String fontName;
		int numLetters;
		int minOffsetX;
		int spaceWidth;
		::haxe::ds::IntMap charMap;
		::haxe::ds::IntMap charAdvance;
		::flixel::graphics::frames::FlxFrame frame;
		virtual Void destroy( );

		virtual Void addCharFrame( int charCode,::flixel::math::FlxRect frame,::flixel::math::FlxPoint offset,int xAdvance);
		Dynamic addCharFrame_dyn();

		virtual Void updateSourceHeight( );
		Dynamic updateSourceHeight_dyn();

		virtual bool charExists( int charCode);
		Dynamic charExists_dyn();

		virtual ::flixel::graphics::frames::FlxFrame getCharFrame( int charCode);
		Dynamic getCharFrame_dyn();

		virtual int getCharAdvance( int charCode);
		Dynamic getCharAdvance_dyn();

		virtual Float getCharWidth( int charCode);
		Dynamic getCharWidth_dyn();

		virtual ::flixel::graphics::frames::FlxFramesCollection addBorder( ::flixel::math::FlxPoint border);

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

#endif /* INCLUDED_flixel_graphics_frames_FlxBitmapFont */ 
