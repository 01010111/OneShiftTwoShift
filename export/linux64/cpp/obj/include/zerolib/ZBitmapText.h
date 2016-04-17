#ifndef INCLUDED_zerolib_ZBitmapText
#define INCLUDED_zerolib_ZBitmapText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxBitmapText
#include <flixel/text/FlxBitmapText.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,text,FlxBitmapText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(zerolib,ZBitmapText)
namespace zerolib{


class HXCPP_CLASS_ATTRIBUTES  ZBitmapText_obj : public ::flixel::text::FlxBitmapText_obj{
	public:
		typedef ::flixel::text::FlxBitmapText_obj super;
		typedef ZBitmapText_obj OBJ_;
		ZBitmapText_obj();
		Void __construct(Float X,Float Y,::String LETTERS,::flixel::math::FlxPoint LETTERSIZE,Dynamic FONTGRAPHIC,::String ALIGN,hx::Null< int >  __o_WIDTH,hx::Null< int >  __o_LINESPACING,hx::Null< int >  __o_LETTERSPACING);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zerolib.ZBitmapText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZBitmapText_obj > __new(Float X,Float Y,::String LETTERS,::flixel::math::FlxPoint LETTERSIZE,Dynamic FONTGRAPHIC,::String ALIGN,hx::Null< int >  __o_WIDTH,hx::Null< int >  __o_LINESPACING,hx::Null< int >  __o_LETTERSPACING);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZBitmapText_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZBitmapText","\x36","\xe5","\x39","\x83"); }

};

} // end namespace zerolib

#endif /* INCLUDED_zerolib_ZBitmapText */ 
