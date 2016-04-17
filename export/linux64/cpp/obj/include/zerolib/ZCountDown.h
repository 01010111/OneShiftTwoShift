#ifndef INCLUDED_zerolib_ZCountDown
#define INCLUDED_zerolib_ZCountDown

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,text,FlxBitmapText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(zerolib,ZBitmapText)
HX_DECLARE_CLASS1(zerolib,ZCountDown)
namespace zerolib{


class HXCPP_CLASS_ATTRIBUTES  ZCountDown_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef ZCountDown_obj OBJ_;
		ZCountDown_obj();
		Void __construct(::flixel::math::FlxPoint _p,hx::Null< int >  __o__min,hx::Null< int >  __o__text_color,hx::Null< int >  __o__bg_color,hx::Null< bool >  __o__big);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zerolib.ZCountDown")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZCountDown_obj > __new(::flixel::math::FlxPoint _p,hx::Null< int >  __o__min,hx::Null< int >  __o__text_color,hx::Null< int >  __o__bg_color,hx::Null< bool >  __o__big);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZCountDown_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZCountDown","\x17","\x81","\x8f","\x90"); }

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		int min;
		int sec;
		int msc;
		::zerolib::ZBitmapText min_text;
		::zerolib::ZBitmapText sec_text;
		::zerolib::ZBitmapText msc_text;
		::flixel::FlxSprite colons;
		bool countdown;
		Array< ::Dynamic > bitmap_data_array_big;
		Array< ::Dynamic > bitmap_data_array_sm;
		bool counting;
		bool done;
		virtual Void update( Float elapsed);

		virtual Void setText( );
		Dynamic setText_dyn();

		virtual int get_minutes( );
		Dynamic get_minutes_dyn();

		virtual int get_seconds( );
		Dynamic get_seconds_dyn();

		virtual int get_milisec( );
		Dynamic get_milisec_dyn();

		virtual ::String get_time_string( );
		Dynamic get_time_string_dyn();

		virtual Void add_time( hx::Null< int >  _min,hx::Null< int >  _sec);
		Dynamic add_time_dyn();

};

} // end namespace zerolib

#endif /* INCLUDED_zerolib_ZCountDown */ 
