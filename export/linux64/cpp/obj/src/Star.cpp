#include <hxcpp.h>

#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_zerolib_ZMath
#include <zerolib/ZMath.h>
#endif

Void Star_obj::__construct()
{
HX_STACK_FRAME("Star","new",0xee1c91e4,"Star.new","PlayState.hx",202,0xb30d7781)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(203)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(204)
	Float tmp = ::zerolib::ZMath_obj::randomRange(((Float)0.1),((Float)0.8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	Float i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(205)
	Float tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	Float tmp2 = ::zerolib::ZMath_obj::map(tmp1,((Float)0.1),((Float)0.8),(int)24,(int)128);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	int s = tmp3;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(206)
	this->spd_mult = i;
	HX_STACK_LINE(207)
	Float tmp4 = (((Float)0.5) * i);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	this->set_alpha(tmp4);
	HX_STACK_LINE(208)
	int tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(208)
	int tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(208)
	this->makeGraphic(tmp5,tmp6,(int)-14045697,null(),null());
	HX_STACK_LINE(209)
	this->set_angle((int)45);
	HX_STACK_LINE(210)
	this->set_blend(::openfl::_legacy::display::BlendMode_obj::ADD);
	HX_STACK_LINE(211)
	::flixel::math::FlxPoint tmp7 = this->offset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(211)
	Float tmp8 = (s * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(211)
	Float tmp9 = (s * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(211)
	tmp7->set(tmp8,tmp9);
	HX_STACK_LINE(212)
	Float tmp10 = ::zerolib::ZMath_obj::randomRange((int)0,(int)256);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(212)
	Float tmp11 = ::zerolib::ZMath_obj::randomRange((int)0,(int)256);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(212)
	this->setPosition(tmp10,tmp11);
}
;
	return null();
}

//Star_obj::~Star_obj() { }

Dynamic Star_obj::__CreateEmpty() { return  new Star_obj; }
hx::ObjectPtr< Star_obj > Star_obj::__new()
{  hx::ObjectPtr< Star_obj > _result_ = new Star_obj();
	_result_->__construct();
	return _result_;}

Dynamic Star_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Star_obj > _result_ = new Star_obj();
	_result_->__construct();
	return _result_;}

Void Star_obj::update( Float e){
{
		HX_STACK_FRAME("Star","update",0x4fab8f05,"Star.update","PlayState.hx",216,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(217)
		Float tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		this->super::update(tmp);
		HX_STACK_LINE(218)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		Float tmp2 = this->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		Float tmp4 = ((int)256 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(218)
		bool tmp5 = (tmp1 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		if ((tmp5)){
			HX_STACK_LINE(220)
			Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(220)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(220)
			Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(220)
			this->set_y(tmp8);
			HX_STACK_LINE(221)
			Float tmp9 = ::zerolib::ZMath_obj::randomRange((int)0,(int)256);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(221)
			this->set_x(tmp9);
		}
	}
return null();
}


Void Star_obj::set_speed( Float i){
{
		HX_STACK_FRAME("Star","set_speed",0x3bc49c6e,"Star.set_speed","PlayState.hx",226,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(227)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		Float tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		Float tmp2 = this->spd_mult;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		tmp->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Star_obj,set_speed,(void))


Star_obj::Star_obj()
{
}

Dynamic Star_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spd_mult") ) { return spd_mult; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_speed") ) { return set_speed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Star_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"spd_mult") ) { spd_mult=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Star_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("spd_mult","\x48","\xd1","\x33","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Star_obj,spd_mult),HX_HCSTRING("spd_mult","\x48","\xd1","\x33","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("spd_mult","\x48","\xd1","\x33","\xda"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_speed","\xea","\xdf","\x63","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#endif

hx::Class Star_obj::__mClass;

void Star_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Star","\xf2","\x0f","\x35","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Star_obj >;
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

