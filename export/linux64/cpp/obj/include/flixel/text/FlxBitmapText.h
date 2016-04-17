#ifndef INCLUDED_flixel_text_FlxBitmapText
#define INCLUDED_flixel_text_FlxBitmapText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxBitmapFont)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,text,FlxBitmapText)
HX_DECLARE_CLASS2(flixel,text,FlxTextBorderStyle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapText_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxBitmapText_obj OBJ_;
		FlxBitmapText_obj();
		Void __construct(::flixel::graphics::frames::FlxBitmapFont font);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.text.FlxBitmapText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBitmapText_obj > __new(::flixel::graphics::frames::FlxBitmapFont font);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapText_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBitmapText","\x2e","\x07","\xaf","\x6c"); }

		::flixel::graphics::frames::FlxBitmapFont font;
		::String text;
		::openfl::_legacy::geom::ColorTransform _colorParams;
		Array< ::String > _lines;
		Array< int > _linesWidth;
		::String alignment;
		int lineSpacing;
		int letterSpacing;
		bool autoUpperCase;
		bool wordWrap;
		bool wrapByWord;
		bool autoSize;
		int padding;
		int textWidth;
		int textHeight;
		int lineHeight;
		int numSpacesInTab;
		int textColor;
		bool useTextColor;
		::flixel::text::FlxTextBorderStyle borderStyle;
		int borderColor;
		Float borderSize;
		Float borderQuality;
		::flixel::math::FlxPoint shadowOffset;
		bool background;
		int backgroundColor;
		bool multiLine;
		int numLines;
		int _fieldWidth;
		bool pendingTextChange;
		bool pendingTextBitmapChange;
		bool pendingPixelsChange;
		Array< Float > textData;
		Array< Float > textDrawData;
		Array< Float > borderDrawData;
		::openfl::_legacy::display::BitmapData textBitmap;
		virtual Void destroy( );

		virtual Void drawFrame( hx::Null< bool >  Force);

		virtual Void checkPendingChanges( hx::Null< bool >  useTiles);
		Dynamic checkPendingChanges_dyn();

		virtual Void draw( );

		virtual int set_color( int Color);

		virtual Float set_alpha( Float value);

		virtual int set_textColor( int value);
		Dynamic set_textColor_dyn();

		virtual bool set_useTextColor( bool value);
		Dynamic set_useTextColor_dyn();

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual Void updateText( );
		Dynamic updateText_dyn();

		virtual Void computeTextSize( );
		Dynamic computeTextSize_dyn();

		virtual int getLineWidth( int lineIndex);
		Dynamic getLineWidth_dyn();

		virtual int getStringWidth( ::String str);
		Dynamic getStringWidth_dyn();

		virtual Void cutLines( );
		Dynamic cutLines_dyn();

		virtual Void wrap( );
		Dynamic wrap_dyn();

		virtual Void splitLineIntoWords( ::String line,Array< ::String > words);
		Dynamic splitLineIntoWords_dyn();

		virtual Void wrapLineByWord( Array< ::String > words,Array< ::String > newLines);
		Dynamic wrapLineByWord_dyn();

		virtual Void wrapLineByCharacter( Array< ::String > words,Array< ::String > newLines);
		Dynamic wrapLineByCharacter_dyn();

		virtual Void updateTextBitmap( hx::Null< bool >  useTiles);
		Dynamic updateTextBitmap_dyn();

		virtual Void drawLine( int lineIndex,int posX,int posY,hx::Null< bool >  useTiles);
		Dynamic drawLine_dyn();

		virtual Void blitLine( int lineIndex,int startX,int startY);
		Dynamic blitLine_dyn();

		virtual Void tileLine( int lineIndex,int startX,int startY);
		Dynamic tileLine_dyn();

		virtual Void updatePixels( hx::Null< bool >  useTiles);
		Dynamic updatePixels_dyn();

		virtual Void drawText( int posX,int posY,hx::Null< bool >  isFront,::openfl::_legacy::display::BitmapData bitmap,hx::Null< bool >  useTiles);
		Dynamic drawText_dyn();

		virtual Void blitText( int posX,int posY,hx::Null< bool >  isFront,::openfl::_legacy::display::BitmapData bitmap);
		Dynamic blitText_dyn();

		virtual Void tileText( int posX,int posY,hx::Null< bool >  isFront);
		Dynamic tileText_dyn();

		virtual Void setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,hx::Null< int >  Color,hx::Null< Float >  Size,hx::Null< Float >  Quality);
		Dynamic setBorderStyle_dyn();

		virtual int get_fieldWidth( );
		Dynamic get_fieldWidth_dyn();

		virtual int set_fieldWidth( int value);
		Dynamic set_fieldWidth_dyn();

		virtual ::String set_alignment( ::String value);
		Dynamic set_alignment_dyn();

		virtual bool set_multiLine( bool value);
		Dynamic set_multiLine_dyn();

		virtual ::flixel::graphics::frames::FlxBitmapFont set_font( ::flixel::graphics::frames::FlxBitmapFont value);
		Dynamic set_font_dyn();

		virtual int set_lineSpacing( int value);
		Dynamic set_lineSpacing_dyn();

		virtual int set_letterSpacing( int value);
		Dynamic set_letterSpacing_dyn();

		virtual bool set_autoUpperCase( bool value);
		Dynamic set_autoUpperCase_dyn();

		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

		virtual bool set_wrapByWord( bool value);
		Dynamic set_wrapByWord_dyn();

		virtual bool set_autoSize( bool value);
		Dynamic set_autoSize_dyn();

		virtual int set_padding( int value);
		Dynamic set_padding_dyn();

		virtual int set_numSpacesInTab( int value);
		Dynamic set_numSpacesInTab_dyn();

		virtual bool set_background( bool value);
		Dynamic set_background_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual ::flixel::text::FlxTextBorderStyle set_borderStyle( ::flixel::text::FlxTextBorderStyle style);
		Dynamic set_borderStyle_dyn();

		virtual int set_borderColor( int value);
		Dynamic set_borderColor_dyn();

		virtual Float set_borderSize( Float value);
		Dynamic set_borderSize_dyn();

		virtual Float set_borderQuality( Float value);
		Dynamic set_borderQuality_dyn();

		virtual int get_numLines( );
		Dynamic get_numLines_dyn();

		virtual int get_textWidth( );
		Dynamic get_textWidth_dyn();

		virtual int get_textHeight( );
		Dynamic get_textHeight_dyn();

		virtual int get_lineHeight( );
		Dynamic get_lineHeight_dyn();

		virtual Float get_width( );

		virtual Float get_height( );

};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxBitmapText */ 
