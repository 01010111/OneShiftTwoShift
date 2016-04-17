#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Ship)
HX_DECLARE_CLASS0(Track)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(zerolib,ZCountDown)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		static ::PlayState i;
		Array< ::Dynamic > tracks;
		::Ship ship;
		::flixel::FlxObject dolly;
		int cur_track_pixel;
		Float speed;
		Float real_speed;
		::flixel::addons::display::FlxBackdrop bg;
		::flixel::group::FlxTypedGroup layer0;
		::flixel::group::FlxTypedGroup layer1;
		::flixel::group::FlxTypedGroup layer2;
		::flixel::FlxSprite indicator;
		Float indi_pos;
		Float goal;
		Float cur_dist;
		Array< Float > indi_map;
		::zerolib::ZCountDown timer;
		::flixel::ui::FlxBar health_bar;
		virtual Void create( );

		virtual Void update( Float elapsed);

		virtual Void goal_stuff( );
		Dynamic goal_stuff_dyn();

		virtual Void swap_tilemaps( );
		Dynamic swap_tilemaps_dyn();

		virtual Void check_track( ::Ship _s,::Track _t);
		Dynamic check_track_dyn();

};


#endif /* INCLUDED_PlayState */ 
