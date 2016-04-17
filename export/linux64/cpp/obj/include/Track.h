#ifndef INCLUDED_Track
#define INCLUDED_Track

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Track)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)


class HXCPP_CLASS_ATTRIBUTES  Track_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Track_obj OBJ_;
		Track_obj();
		Void __construct(Float y,int f);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Track")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Track_obj > __new(Float y,int f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Track_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Track","\x6b","\xfe","\x4c","\xa9"); }

		Float speed;
		Dynamic ends;
		virtual Void update( Float e);

		virtual Void set_speed( Float s);
		Dynamic set_speed_dyn();

		virtual int get_pixel_at_point( ::flixel::math::FlxPoint _p);
		Dynamic get_pixel_at_point_dyn();

		virtual Void change_frame( int _t);
		Dynamic change_frame_dyn();

		virtual Void set_new_frame( int _f);
		Dynamic set_new_frame_dyn();

};


#endif /* INCLUDED_Track */ 
