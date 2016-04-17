#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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

Void PoofPart_obj::__construct()
{
HX_STACK_FRAME("PoofPart","new",0xf808497b,"PoofPart.new","Poof.hx",39,0x8d5b9388)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->set_exists(false);
	HX_STACK_LINE(41)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(42)
	this->loadGraphic(HX_HCSTRING("assets/images/poof1.png","\x4b","\x3c","\xe4","\xe3"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(43)
	::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	tmp->add(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)6).Add((int)6).Add((int)6).Add((int)7).Add((int)7).Add((int)7),(int)30,false,null(),null());
	HX_STACK_LINE(44)
	::flixel::math::FlxPoint tmp1 = this->offset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	tmp1->set((int)8,(int)8);
}
;
	return null();
}

//PoofPart_obj::~PoofPart_obj() { }

Dynamic PoofPart_obj::__CreateEmpty() { return  new PoofPart_obj; }
hx::ObjectPtr< PoofPart_obj > PoofPart_obj::__new()
{  hx::ObjectPtr< PoofPart_obj > _result_ = new PoofPart_obj();
	_result_->__construct();
	return _result_;}

Dynamic PoofPart_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PoofPart_obj > _result_ = new PoofPart_obj();
	_result_->__construct();
	return _result_;}

Void PoofPart_obj::fire( ::flixel::math::FlxPoint _p){
{
		HX_STACK_FRAME("PoofPart","fire",0x09f1523b,"PoofPart.fire","Poof.hx",48,0x8d5b9388)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(49)
		int tmp = ::zerolib::ZMath_obj::randomRangeInt((int)0,(int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		int tmp1 = ((int)90 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		this->set_angle(tmp1);
		HX_STACK_LINE(50)
		::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp2->play(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),null(),null(),null());
		HX_STACK_LINE(51)
		Float tmp3 = _p->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Float tmp4 = ::zerolib::ZMath_obj::randomRange((int)-3,(int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		Float tmp6 = _p->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		Float tmp7 = ::zerolib::ZMath_obj::randomRange((int)-3,(int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		this->setPosition(tmp5,tmp8);
		HX_STACK_LINE(52)
		Float tmp9 = ::zerolib::ZMath_obj::randomRange((int)1,((Float)1.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		Float _s = tmp9;		HX_STACK_VAR(_s,"_s");
		HX_STACK_LINE(53)
		::flixel::math::FlxPoint tmp10 = this->scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		Float tmp11 = _s;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		Float tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		tmp10->set(tmp11,tmp12);
		HX_STACK_LINE(54)
		this->set_exists(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PoofPart_obj,fire,(void))

Void PoofPart_obj::update( Float e){
{
		HX_STACK_FRAME("PoofPart","update",0x647b6fce,"PoofPart.update","Poof.hx",58,0x8d5b9388)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(59)
		Float tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->super::update(tmp);
		HX_STACK_LINE(60)
		::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		bool tmp2 = tmp1->get_finished();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		if ((tmp2)){
			HX_STACK_LINE(60)
			this->set_exists(false);
		}
		HX_STACK_LINE(61)
		::flixel::math::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		::PlayState tmp4 = ::PlayState_obj::i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		Float tmp5 = tmp4->real_speed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		tmp3->set_y(tmp5);
	}
return null();
}



PoofPart_obj::PoofPart_obj()
{
}

Dynamic PoofPart_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PoofPart_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PoofPart_obj::__mClass,"__mClass");
};

#endif

hx::Class PoofPart_obj::__mClass;

void PoofPart_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PoofPart","\x09","\x70","\x39","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PoofPart_obj >;
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

