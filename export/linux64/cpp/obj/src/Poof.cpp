#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Poof
#include <Poof.h>
#endif
#ifndef INCLUDED_PoofPart
#include <PoofPart.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_zerolib_ZMath
#include <zerolib/ZMath.h>
#endif

Void Poof_obj::__construct(int _amt)
{
HX_STACK_FRAME("Poof","new",0x22ca00e8,"Poof.new","Poof.hx",8,0x8d5b9388)
HX_STACK_THIS(this)
HX_STACK_ARG(_amt,"_amt")
{
	HX_STACK_LINE(11)
	this->counter = (int)0;
	HX_STACK_LINE(15)
	super::__construct(null());
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		while((true)){
			HX_STACK_LINE(16)
			bool tmp = (_g < _amt);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(16)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(16)
			if ((tmp1)){
				HX_STACK_LINE(16)
				break;
			}
			HX_STACK_LINE(16)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(16)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(17)
			::PoofPart tmp3 = ::PoofPart_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			this->add(tmp3);
		}
	}
	HX_STACK_LINE(18)
	::PlayState tmp = ::PlayState_obj::i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	tmp->layer1->add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Poof_obj::~Poof_obj() { }

Dynamic Poof_obj::__CreateEmpty() { return  new Poof_obj; }
hx::ObjectPtr< Poof_obj > Poof_obj::__new(int _amt)
{  hx::ObjectPtr< Poof_obj > _result_ = new Poof_obj();
	_result_->__construct(_amt);
	return _result_;}

Dynamic Poof_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Poof_obj > _result_ = new Poof_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Poof_obj::fire( ::flixel::math::FlxPoint _p){
{
		HX_STACK_FRAME("Poof","fire",0x48b01a2e,"Poof.fire","Poof.hx",22,0x8d5b9388)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(23)
		::PoofPart tmp = this->getFirstAvailable(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		if ((tmp1)){
			HX_STACK_LINE(23)
			int tmp3 = this->counter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(23)
			tmp2 = false;
		}
		HX_STACK_LINE(23)
		if ((tmp2)){
			HX_STACK_LINE(23)
			::PoofPart tmp3 = this->getFirstAvailable(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::flixel::math::FlxPoint tmp4 = _p;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			tmp3->fire(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Poof_obj,fire,(void))

Void Poof_obj::update( Float e){
{
		HX_STACK_FRAME("Poof","update",0xe6725a81,"Poof.update","Poof.hx",27,0x8d5b9388)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(28)
		Float tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		this->super::update(tmp);
		HX_STACK_LINE(29)
		int tmp1 = this->counter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(30)
			int tmp3 = ::zerolib::ZMath_obj::randomRangeInt((int)3,(int)9);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			this->counter = tmp3;
		}
		else{
			HX_STACK_LINE(32)
			(this->counter)--;
		}
	}
return null();
}



Poof_obj::Poof_obj()
{
}

Dynamic Poof_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return counter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Poof_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Poof_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Poof_obj,counter),HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Poof_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Poof_obj::__mClass,"__mClass");
};

#endif

hx::Class Poof_obj::__mClass;

void Poof_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Poof","\xf6","\xac","\x35","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Poof_obj >;
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

