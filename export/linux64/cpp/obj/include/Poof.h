#ifndef INCLUDED_Poof
#define INCLUDED_Poof

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS0(Poof)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)


class HXCPP_CLASS_ATTRIBUTES  Poof_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef Poof_obj OBJ_;
		Poof_obj();
		Void __construct(int _amt);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Poof")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Poof_obj > __new(int _amt);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Poof_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Poof","\xf6","\xac","\x35","\x35"); }

		int counter;
		virtual Void fire( ::flixel::math::FlxPoint _p);
		Dynamic fire_dyn();

		virtual Void update( Float e);

};


#endif /* INCLUDED_Poof */ 
