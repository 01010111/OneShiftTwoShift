#ifndef INCLUDED_PoofPart
#define INCLUDED_PoofPart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(PoofPart)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)


class HXCPP_CLASS_ATTRIBUTES  PoofPart_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef PoofPart_obj OBJ_;
		PoofPart_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="PoofPart")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PoofPart_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PoofPart_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PoofPart","\x09","\x70","\x39","\x39"); }

		virtual Void fire( ::flixel::math::FlxPoint _p);
		Dynamic fire_dyn();

		virtual Void update( Float e);

};


#endif /* INCLUDED_PoofPart */ 
