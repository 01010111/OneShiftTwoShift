#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Track
#include <Track.h>
#endif
#ifndef INCLUDED_TrackInfo
#include <TrackInfo.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_zerolib_ZMath
#include <zerolib/ZMath.h>
#endif

Void Track_obj::__construct(Float y,int f)
{
HX_STACK_FRAME("Track","new",0xc13fb0dd,"Track.new","Track.hx",9,0x5942d933)
HX_STACK_THIS(this)
HX_STACK_ARG(y,"y")
HX_STACK_ARG(f,"f")
{
	HX_STACK_LINE(12)
	this->speed = ((Float)500);
	HX_STACK_LINE(17)
	Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct((int)0,tmp,null());
	HX_STACK_LINE(18)
	this->loadGraphic(HX_HCSTRING("assets/images/tracks.png","\x2e","\x68","\x06","\x20"),true,(int)256,(int)256,null(),null());
	HX_STACK_LINE(19)
	int tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->set_new_frame(tmp1);
	HX_STACK_LINE(20)
	::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	tmp2->_state->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		::flixel::_system::debug::watch::Watch tmp4 = tmp3->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		tmp4->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("ends","\x38","\x5c","\x16","\x43"),HX_HCSTRING("e:","\x35","\x58","\x00","\x00"));
	}
}
;
	return null();
}

//Track_obj::~Track_obj() { }

Dynamic Track_obj::__CreateEmpty() { return  new Track_obj; }
hx::ObjectPtr< Track_obj > Track_obj::__new(Float y,int f)
{  hx::ObjectPtr< Track_obj > _result_ = new Track_obj();
	_result_->__construct(y,f);
	return _result_;}

Dynamic Track_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Track_obj > _result_ = new Track_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Track_obj::update( Float e){
{
		HX_STACK_FRAME("Track","update",0x4d6551ac,"Track.update","Track.hx",25,0x5942d933)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(26)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		Float tmp1 = this->speed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		tmp->set_y(tmp1);
		HX_STACK_LINE(27)
		Float tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		this->super::update(tmp2);
	}
return null();
}


Void Track_obj::set_speed( Float s){
{
		HX_STACK_FRAME("Track","set_speed",0x8172bc27,"Track.set_speed","Track.hx",32,0x5942d933)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(32)
		this->speed = s;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Track_obj,set_speed,(void))

int Track_obj::get_pixel_at_point( ::flixel::math::FlxPoint _p){
	HX_STACK_FRAME("Track","get_pixel_at_point",0x20204dc9,"Track.get_pixel_at_point","Track.hx",36,0x5942d933)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(37)
	::openfl::_legacy::display::BitmapData tmp = this->framePixels;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Float tmp1 = _p->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	Float tmp5 = _p->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	int tmp9 = tmp->getPixel32(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(37)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Track_obj,get_pixel_at_point,return )

Void Track_obj::change_frame( int _t){
{
		HX_STACK_FRAME("Track","change_frame",0x0bf8acc1,"Track.change_frame","Track.hx",41,0x5942d933)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_t,"_t")
		HX_STACK_LINE(42)
		int tmp = ::TrackInfo_obj::tracks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		int tmp2 = ::zerolib::ZMath_obj::randomRangeInt((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		this->set_new_frame(tmp2);
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			Dynamic tmp3 = this->ends;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			int tmp4 = tmp3->__Field(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			int tmp5 = _t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			if ((tmp7)){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(45)
			int tmp8 = ::TrackInfo_obj::tracks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			int tmp10 = ::zerolib::ZMath_obj::randomRangeInt((int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			this->set_new_frame(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Track_obj,change_frame,(void))

Void Track_obj::set_new_frame( int _f){
{
		HX_STACK_FRAME("Track","set_new_frame",0x510f0c6e,"Track.set_new_frame","Track.hx",49,0x5942d933)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_f,"_f")
		HX_STACK_LINE(50)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		int tmp1 = _f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		tmp->set_frameIndex(tmp1);
		HX_STACK_LINE(51)
		Dynamic tmp2 = ::TrackInfo_obj::tracks->__GetItem(_f);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		this->ends = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Track_obj,set_new_frame,(void))


Track_obj::Track_obj()
{
}

void Track_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Track);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(ends,"ends");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Track_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(ends,"ends");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Track_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ends") ) { return ends; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_speed") ) { return set_speed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"change_frame") ) { return change_frame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_new_frame") ) { return set_new_frame_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_pixel_at_point") ) { return get_pixel_at_point_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Track_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ends") ) { ends=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Track_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("ends","\x38","\x5c","\x16","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Track_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Track_obj,ends),HX_HCSTRING("ends","\x38","\x5c","\x16","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("ends","\x38","\x5c","\x16","\x43"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_speed","\xea","\xdf","\x63","\xa8"),
	HX_HCSTRING("get_pixel_at_point","\xa6","\x19","\x2c","\xba"),
	HX_HCSTRING("change_frame","\xde","\x04","\x04","\xb5"),
	HX_HCSTRING("set_new_frame","\xb1","\xcd","\xf0","\x91"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Track_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Track_obj::__mClass,"__mClass");
};

#endif

hx::Class Track_obj::__mClass;

void Track_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Track","\x6b","\xfe","\x4c","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Track_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

