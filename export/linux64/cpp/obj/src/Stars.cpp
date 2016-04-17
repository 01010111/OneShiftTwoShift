#include <hxcpp.h>

#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_Stars
#include <Stars.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void Stars_obj::__construct()
{
HX_STACK_FRAME("Stars","new",0xfb4239b3,"Stars.new","PlayState.hx",182,0xb30d7781)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	super::__construct(null());
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while((true)){
			HX_STACK_LINE(184)
			bool tmp = (_g < (int)32);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(184)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			if ((tmp1)){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(184)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(185)
			::Star tmp3 = ::Star_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			this->add(tmp3);
		}
	}
}
;
	return null();
}

//Stars_obj::~Stars_obj() { }

Dynamic Stars_obj::__CreateEmpty() { return  new Stars_obj; }
hx::ObjectPtr< Stars_obj > Stars_obj::__new()
{  hx::ObjectPtr< Stars_obj > _result_ = new Stars_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stars_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stars_obj > _result_ = new Stars_obj();
	_result_->__construct();
	return _result_;}

Void Stars_obj::set_speed( Float t){
{
		HX_STACK_FRAME("Stars","set_speed",0x52fc897d,"Stars.set_speed","PlayState.hx",190,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(190)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(190)
		int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(190)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			if ((tmp2)){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(190)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(191)
			::Star tmp4 = this->members->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			tmp4->set_speed(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stars_obj,set_speed,(void))


Stars_obj::Stars_obj()
{
}

Dynamic Stars_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"set_speed") ) { return set_speed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set_speed","\xea","\xdf","\x63","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stars_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stars_obj::__mClass,"__mClass");
};

#endif

hx::Class Stars_obj::__mClass;

void Stars_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Stars","\x41","\xe4","\x38","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stars_obj >;
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

