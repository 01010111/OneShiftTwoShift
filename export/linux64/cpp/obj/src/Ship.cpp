#include <hxcpp.h>

#ifndef INCLUDED_Poof
#include <Poof.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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

Void Ship_obj::__construct()
{
HX_STACK_FRAME("Ship","new",0x0728bace,"Ship.new","Ship.hx",9,0xcfd11862)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->temp_speed = ((Float)350);
	HX_STACK_LINE(14)
	this->speed = ((Float)250);
	HX_STACK_LINE(13)
	this->accel = ((Float)1200);
	HX_STACK_LINE(18)
	int tmp = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Float tmp1 = (tmp * ((Float)0.75));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	super::__construct((int)0,tmp1,null());
	HX_STACK_LINE(19)
	this->loadGraphic(HX_HCSTRING("assets/images/ship.png","\xa2","\xf5","\xa3","\xeb"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(20)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	tmp2->add(HX_HCSTRING("slow","\x01","\xde","\x55","\x4c"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)48,null(),null(),null());
	HX_STACK_LINE(21)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	tmp3->add(HX_HCSTRING("fast","\x9c","\xc2","\xb5","\x43"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)30,null(),null(),null());
	HX_STACK_LINE(22)
	this->screenCenter(::flixel::util::FlxAxes_obj::X);
	HX_STACK_LINE(23)
	::flixel::math::FlxPoint tmp4 = this->maxVelocity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	tmp4->set((int)150,(int)75);
	HX_STACK_LINE(24)
	::flixel::math::FlxPoint tmp5 = this->drag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	Float tmp6 = this->accel;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	Float tmp7 = this->accel;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	tmp5->set(tmp6,tmp7);
	HX_STACK_LINE(25)
	this->setSize((int)8,(int)1);
	HX_STACK_LINE(26)
	::flixel::math::FlxPoint tmp8 = this->offset;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	tmp8->set((int)12,(int)16);
	HX_STACK_LINE(27)
	::Poof tmp9 = ::Poof_obj::__new((int)8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	this->poofs = tmp9;
	HX_STACK_LINE(28)
	this->health = (int)100;
}
;
	return null();
}

//Ship_obj::~Ship_obj() { }

Dynamic Ship_obj::__CreateEmpty() { return  new Ship_obj; }
hx::ObjectPtr< Ship_obj > Ship_obj::__new()
{  hx::ObjectPtr< Ship_obj > _result_ = new Ship_obj();
	_result_->__construct();
	return _result_;}

Dynamic Ship_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ship_obj > _result_ = new Ship_obj();
	_result_->__construct();
	return _result_;}

Void Ship_obj::update( Float e){
{
		HX_STACK_FRAME("Ship","update",0x7154545b,"Ship.update","Ship.hx",34,0xcfd11862)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(35)
		::flixel::math::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		tmp->set(null(),null());
		HX_STACK_LINE(39)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			::flixel::input::keyboard::FlxKeyList _this = tmp2->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(39)
			int tmp3 = _this->status;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			tmp1 = _this->keyManager->checkStatus((int)88,tmp3);
		}
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(41)
			Float tmp2 = this->temp_speed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			this->speed = tmp2;
			HX_STACK_LINE(42)
			Float tmp3 = hx::MultEq(this->temp_speed,((Float)1.005));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			Float tmp4 = ::zerolib::ZMath_obj::clamp(tmp3,(int)0,(int)425);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			this->temp_speed = tmp4;
		}
		else{
			HX_STACK_LINE(46)
			this->speed = (int)200;
			HX_STACK_LINE(47)
			Float tmp2 = this->temp_speed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(47)
			Float tmp3 = ((int)350 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			Float tmp4 = (tmp3 * ((Float)0.02));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			hx::AddEq(this->temp_speed,tmp4);
		}
		HX_STACK_LINE(50)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::flixel::input::keyboard::FlxKeyList _this = tmp3->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(50)
			int tmp4 = _this->status;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			tmp2 = _this->keyManager->checkStatus((int)38,tmp4);
		}
		HX_STACK_LINE(50)
		if ((tmp2)){
			HX_STACK_LINE(50)
			::flixel::math::FlxPoint tmp3 = this->acceleration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::flixel::math::FlxPoint _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			Float tmp4 = _g->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			Float tmp5 = this->accel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			_g->set_y(tmp6);
		}
		HX_STACK_LINE(51)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			::flixel::input::keyboard::FlxKeyList _this = tmp4->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(51)
			int tmp5 = _this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			tmp3 = _this->keyManager->checkStatus((int)40,tmp5);
		}
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::flixel::math::FlxPoint tmp4 = this->acceleration;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				::flixel::math::FlxPoint _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				Float tmp5 = _g->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Float tmp6 = this->accel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				_g->set_y(tmp7);
			}
			HX_STACK_LINE(54)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				::flixel::input::keyboard::FlxKeyList _this = tmp5->pressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(54)
				int tmp6 = _this->status;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				tmp4 = _this->keyManager->checkStatus((int)88,tmp6);
			}
			HX_STACK_LINE(54)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			if ((tmp5)){
				HX_STACK_LINE(55)
				Float tmp6 = ((Float)0.375);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				hx::MultEq(this->speed,tmp6);
			}
		}
		HX_STACK_LINE(57)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			::flixel::input::keyboard::FlxKeyList _this = tmp5->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			int tmp6 = _this->status;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			tmp4 = _this->keyManager->checkStatus((int)37,tmp6);
		}
		HX_STACK_LINE(57)
		if ((tmp4)){
			HX_STACK_LINE(57)
			::flixel::math::FlxPoint tmp5 = this->acceleration;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			::flixel::math::FlxPoint _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			Float tmp7 = this->accel;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(57)
			_g->set_x(tmp8);
		}
		HX_STACK_LINE(58)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			::flixel::input::keyboard::FlxKeyList _this = tmp6->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(58)
			int tmp7 = _this->status;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			tmp5 = _this->keyManager->checkStatus((int)39,tmp7);
		}
		HX_STACK_LINE(58)
		if ((tmp5)){
			HX_STACK_LINE(58)
			::flixel::math::FlxPoint tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			::flixel::math::FlxPoint _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			Float tmp7 = _g->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			Float tmp8 = this->accel;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			_g->set_x(tmp9);
		}
		HX_STACK_LINE(60)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::flixel::input::keyboard::FlxKeyList _this = tmp7->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(60)
			int tmp8 = _this->status;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			tmp6 = _this->keyManager->checkStatus((int)88,tmp8);
		}
		HX_STACK_LINE(60)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		if ((tmp6)){
			HX_STACK_LINE(60)
			tmp7 = HX_HCSTRING("fast","\x9c","\xc2","\xb5","\x43");
		}
		else{
			HX_STACK_LINE(60)
			tmp7 = HX_HCSTRING("slow","\x01","\xde","\x55","\x4c");
		}
		HX_STACK_LINE(60)
		::String _anim = tmp7;		HX_STACK_VAR(_anim,"_anim");
		HX_STACK_LINE(61)
		::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		::String tmp9 = _anim;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		tmp8->play(tmp9,null(),null(),null());
		HX_STACK_LINE(63)
		::flixel::math::FlxPoint tmp10 = this->getMidpoint(null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		::flixel::math::FlxPoint _m = tmp10;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(64)
		bool tmp11 = (_m->x <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(64)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(64)
		if ((tmp12)){
			HX_STACK_LINE(64)
			::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			::flixel::math::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(64)
			::flixel::math::FlxPoint tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(64)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(64)
			tmp13 = (tmp17 < (int)0);
		}
		else{
			HX_STACK_LINE(64)
			tmp13 = false;
		}
		HX_STACK_LINE(64)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(64)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		if ((tmp14)){
			HX_STACK_LINE(64)
			Float tmp16 = _m->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(64)
			int tmp17 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(64)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(64)
			bool tmp19 = (tmp16 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(64)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(64)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(64)
			if ((tmp21)){
				HX_STACK_LINE(64)
				::flixel::math::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(64)
				::flixel::math::FlxPoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(64)
				::flixel::math::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(64)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(64)
				tmp15 = (tmp25 > (int)0);
			}
			else{
				HX_STACK_LINE(64)
				tmp15 = false;
			}
		}
		else{
			HX_STACK_LINE(64)
			tmp15 = true;
		}
		HX_STACK_LINE(64)
		if ((tmp15)){
			HX_STACK_LINE(65)
			::flixel::math::FlxPoint tmp16 = this->velocity;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(65)
			tmp16->set_x((int)0);
		}
		HX_STACK_LINE(66)
		bool tmp16 = (_m->y <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(66)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(66)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(66)
		if ((tmp17)){
			HX_STACK_LINE(66)
			::flixel::math::FlxPoint tmp19 = this->velocity;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(66)
			::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(66)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(66)
			tmp18 = (tmp22 < (int)0);
		}
		else{
			HX_STACK_LINE(66)
			tmp18 = false;
		}
		HX_STACK_LINE(66)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(66)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(66)
		if ((tmp19)){
			HX_STACK_LINE(66)
			Float tmp21 = _m->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			int tmp22 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(66)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(66)
			bool tmp24 = (tmp21 >= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(66)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(66)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(66)
			if ((tmp26)){
				HX_STACK_LINE(66)
				::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(66)
				::flixel::math::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(66)
				::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(66)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(66)
				tmp20 = (tmp30 > (int)0);
			}
			else{
				HX_STACK_LINE(66)
				tmp20 = false;
			}
		}
		else{
			HX_STACK_LINE(66)
			tmp20 = true;
		}
		HX_STACK_LINE(66)
		if ((tmp20)){
			HX_STACK_LINE(67)
			::flixel::math::FlxPoint tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(67)
			tmp21->set_y((int)0);
		}
		HX_STACK_LINE(69)
		::flixel::math::FlxPoint tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(69)
		Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(69)
		Float tmp23 = (tmp22 * ((Float)0.075));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(69)
		this->set_angle(tmp23);
		HX_STACK_LINE(71)
		Float tmp24 = e;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(71)
		this->super::update(tmp24);
	}
return null();
}



Ship_obj::Ship_obj()
{
}

void Ship_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ship);
	HX_MARK_MEMBER_NAME(poofs,"poofs");
	HX_MARK_MEMBER_NAME(accel,"accel");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(temp_speed,"temp_speed");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ship_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(poofs,"poofs");
	HX_VISIT_MEMBER_NAME(accel,"accel");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(temp_speed,"temp_speed");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ship_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"poofs") ) { return poofs; }
		if (HX_FIELD_EQ(inName,"accel") ) { return accel; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"temp_speed") ) { return temp_speed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ship_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"poofs") ) { poofs=inValue.Cast< ::Poof >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accel") ) { accel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"temp_speed") ) { temp_speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ship_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("poofs","\xdd","\x3a","\x94","\xc6"));
	outFields->push(HX_HCSTRING("accel","\xe8","\xdb","\x99","\x1b"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("temp_speed","\xdc","\x28","\x2c","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Poof*/ ,(int)offsetof(Ship_obj,poofs),HX_HCSTRING("poofs","\xdd","\x3a","\x94","\xc6")},
	{hx::fsFloat,(int)offsetof(Ship_obj,accel),HX_HCSTRING("accel","\xe8","\xdb","\x99","\x1b")},
	{hx::fsFloat,(int)offsetof(Ship_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsFloat,(int)offsetof(Ship_obj,temp_speed),HX_HCSTRING("temp_speed","\xdc","\x28","\x2c","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("poofs","\xdd","\x3a","\x94","\xc6"),
	HX_HCSTRING("accel","\xe8","\xdb","\x99","\x1b"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("temp_speed","\xdc","\x28","\x2c","\x64"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
};

#endif

hx::Class Ship_obj::__mClass;

void Ship_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Ship","\xdc","\xfb","\x2b","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ship_obj >;
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

