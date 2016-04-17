#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxBitmapText
#include <flixel/text/FlxBitmapText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_zerolib_ZBitmapText
#include <zerolib/ZBitmapText.h>
#endif
#ifndef INCLUDED_zerolib_ZCountDown
#include <zerolib/ZCountDown.h>
#endif
namespace zerolib{

Void ZCountDown_obj::__construct(::flixel::math::FlxPoint _p,hx::Null< int >  __o__min,hx::Null< int >  __o__text_color,hx::Null< int >  __o__bg_color,hx::Null< bool >  __o__big)
{
HX_STACK_FRAME("zerolib.ZCountDown","new",0xff134dba,"zerolib.ZCountDown.new","zerolib/ZCountDown.hx",15,0x48fc9a55)
HX_STACK_THIS(this)
HX_STACK_ARG(_p,"_p")
HX_STACK_ARG(__o__min,"_min")
HX_STACK_ARG(__o__text_color,"_text_color")
HX_STACK_ARG(__o__bg_color,"_bg_color")
HX_STACK_ARG(__o__big,"_big")
int _min = __o__min.Default(5);
int _text_color = __o__text_color.Default(-2883585);
int _bg_color = __o__bg_color.Default(-15658735);
bool _big = __o__big.Default(true);
{
	HX_STACK_LINE(141)
	this->done = false;
	HX_STACK_LINE(140)
	this->counting = true;
	HX_STACK_LINE(39)
	this->bitmap_data_array_sm = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0));
	HX_STACK_LINE(29)
	this->bitmap_data_array_big = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0));
	HX_STACK_LINE(22)
	this->msc = (int)0;
	HX_STACK_LINE(21)
	this->sec = (int)0;

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","zerolib/ZCountDown.hx",18,0x48fc9a55)
		{
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(18)
	this->callback =  Dynamic(new _Function_1_1());
	HX_STACK_LINE(56)
	::zerolib::ZCountDown _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	super::__construct(null());
	HX_STACK_LINE(60)
	this->min = _min;
	HX_STACK_LINE(63)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(_p->x,_p->y,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::flixel::FlxSprite bg = tmp;		HX_STACK_VAR(bg,"bg");
	HX_STACK_LINE(64)
	bool tmp1 = _big;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	if ((tmp1)){
		HX_STACK_LINE(64)
		int tmp2 = _bg_color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bg->makeGraphic((int)43,(int)11,tmp2,null(),null());
	}
	else{
		HX_STACK_LINE(64)
		int tmp2 = _bg_color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bg->makeGraphic((int)32,(int)9,tmp2,null(),null());
	}
	HX_STACK_LINE(65)
	bg->scrollFactor->set(null(),null());
	HX_STACK_LINE(66)
	::flixel::FlxSprite tmp2 = bg;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	this->add(tmp2);
	HX_STACK_LINE(69)
	::flixel::FlxSprite tmp3 = ::flixel::FlxSprite_obj::__new(bg->x,bg->y,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	this->colons = tmp3;
	HX_STACK_LINE(70)
	::flixel::FlxSprite tmp4 = this->colons;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	Float tmp5 = bg->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	Float tmp7 = bg->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(70)
	tmp4->makeGraphic(tmp6,tmp8,(int)16777215,null(),null());
	HX_STACK_LINE(71)
	bool tmp9 = _big;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(71)
	if ((tmp9)){
		HX_STACK_LINE(73)
		::flixel::FlxSprite tmp10 = this->colons;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		int tmp11 = _text_color;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp10,(int)14,(int)4,(int)1,(int)1,tmp11,null(),null());
		HX_STACK_LINE(74)
		::flixel::FlxSprite tmp12 = this->colons;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(74)
		int tmp13 = _text_color;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp12,(int)14,(int)8,(int)1,(int)1,tmp13,null(),null());
		HX_STACK_LINE(75)
		::flixel::FlxSprite tmp14 = this->colons;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		int tmp15 = _text_color;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(75)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp14,(int)28,(int)4,(int)1,(int)1,tmp15,null(),null());
		HX_STACK_LINE(76)
		::flixel::FlxSprite tmp16 = this->colons;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		int tmp17 = _text_color;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(76)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp16,(int)28,(int)8,(int)1,(int)1,tmp17,null(),null());
	}
	else{
		HX_STACK_LINE(80)
		::flixel::FlxSprite tmp10 = this->colons;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		int tmp11 = _text_color;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(80)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp10,(int)10,(int)3,(int)1,(int)1,tmp11,null(),null());
		HX_STACK_LINE(81)
		::flixel::FlxSprite tmp12 = this->colons;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		int tmp13 = _text_color;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp12,(int)10,(int)6,(int)1,(int)1,tmp13,null(),null());
		HX_STACK_LINE(82)
		::flixel::FlxSprite tmp14 = this->colons;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		int tmp15 = _text_color;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(82)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp14,(int)20,(int)3,(int)1,(int)1,tmp15,null(),null());
		HX_STACK_LINE(83)
		::flixel::FlxSprite tmp16 = this->colons;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(83)
		int tmp17 = _text_color;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(83)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp16,(int)20,(int)6,(int)1,(int)1,tmp17,null(),null());
	}
	HX_STACK_LINE(85)
	::flixel::FlxSprite tmp10 = this->colons;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(85)
	tmp10->scrollFactor->set(null(),null());
	HX_STACK_LINE(86)
	::flixel::FlxSprite tmp11 = this->colons;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	this->add(tmp11);
	HX_STACK_LINE(89)
	bool tmp12 = _big;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(89)
	if ((tmp12)){
		HX_STACK_LINE(91)
		::openfl::_legacy::display::BitmapData tmp13 = ::openfl::_legacy::display::BitmapData_obj::__new((int)60,(int)7,true,(int)-1,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		::openfl::_legacy::display::BitmapData bitmap_data = tmp13;		HX_STACK_VAR(bitmap_data,"bitmap_data");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(92)
			int tmp14 = this->bitmap_data_array_big->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(92)
			int _g2 = tmp14;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp15 = (_g1 < _g2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(92)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(92)
				if ((tmp16)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				int y = tmp17;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(94)
					int tmp18 = this->bitmap_data_array_big->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(94)
					int _g21 = tmp18;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(94)
					while((true)){
						HX_STACK_LINE(94)
						bool tmp19 = (_g3 < _g21);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(94)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(94)
						if ((tmp20)){
							HX_STACK_LINE(94)
							break;
						}
						HX_STACK_LINE(94)
						int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(94)
						int x = tmp21;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(96)
						int tmp22 = this->bitmap_data_array_big->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(96)
						bool tmp23 = (tmp22 == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(96)
						if ((tmp23)){
							HX_STACK_LINE(98)
							int tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(98)
							int tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(98)
							int tmp26 = _text_color;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(98)
							bitmap_data->setPixel32(tmp24,tmp25,tmp26);
						}
						else{
							HX_STACK_LINE(100)
							int tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(100)
							int tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(100)
							bitmap_data->setPixel32(tmp24,tmp25,(int)0);
						}
					}
				}
			}
		}
		HX_STACK_LINE(103)
		int _offset = (int)14;		HX_STACK_VAR(_offset,"_offset");
		HX_STACK_LINE(104)
		Float tmp14 = (bg->x + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(104)
		Float tmp15 = (bg->y + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(104)
		::flixel::math::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp17 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(104)
			::flixel::math::FlxPoint tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(104)
			::flixel::math::FlxPoint tmp19 = tmp18->set((int)6,(int)7);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(104)
			::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(104)
			point->_inPool = false;
			HX_STACK_LINE(104)
			tmp16 = point;
		}
		HX_STACK_LINE(104)
		::openfl::_legacy::display::BitmapData tmp17 = bitmap_data;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(104)
		::zerolib::ZBitmapText tmp18 = ::zerolib::ZBitmapText_obj::__new(tmp14,tmp15,HX_HCSTRING("0123456789","\x05","\x7a","\x73","\x55"),tmp16,tmp17,null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(104)
		this->min_text = tmp18;
		HX_STACK_LINE(105)
		::zerolib::ZBitmapText tmp19 = this->min_text;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(105)
		this->add(tmp19);
		HX_STACK_LINE(106)
		Float tmp20 = (bg->x + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(106)
		int tmp21 = _offset;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(106)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(106)
		Float tmp23 = (bg->y + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(106)
			::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(106)
			::flixel::math::FlxPoint tmp27 = tmp26->set((int)6,(int)7);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(106)
			::flixel::math::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(106)
			point->_inPool = false;
			HX_STACK_LINE(106)
			tmp24 = point;
		}
		HX_STACK_LINE(106)
		::openfl::_legacy::display::BitmapData tmp25 = bitmap_data;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(106)
		::zerolib::ZBitmapText tmp26 = ::zerolib::ZBitmapText_obj::__new(tmp22,tmp23,HX_HCSTRING("0123456789","\x05","\x7a","\x73","\x55"),tmp24,tmp25,null(),null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(106)
		this->sec_text = tmp26;
		HX_STACK_LINE(107)
		::zerolib::ZBitmapText tmp27 = this->sec_text;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(107)
		this->add(tmp27);
		HX_STACK_LINE(108)
		Float tmp28 = (bg->x + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(108)
		int tmp29 = (_offset * (int)2);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(108)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(108)
		Float tmp31 = (bg->y + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp33 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint tmp34 = tmp33->get();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint tmp35 = tmp34->set((int)6,(int)7);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint point = tmp35;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(108)
			point->_inPool = false;
			HX_STACK_LINE(108)
			tmp32 = point;
		}
		HX_STACK_LINE(108)
		::openfl::_legacy::display::BitmapData tmp33 = bitmap_data;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(108)
		::zerolib::ZBitmapText tmp34 = ::zerolib::ZBitmapText_obj::__new(tmp30,tmp31,HX_HCSTRING("0123456789","\x05","\x7a","\x73","\x55"),tmp32,tmp33,null(),null(),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(108)
		this->msc_text = tmp34;
		HX_STACK_LINE(109)
		::zerolib::ZBitmapText tmp35 = this->msc_text;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(109)
		this->add(tmp35);
	}
	else{
		HX_STACK_LINE(113)
		::openfl::_legacy::display::BitmapData tmp13 = ::openfl::_legacy::display::BitmapData_obj::__new((int)40,(int)5,true,(int)-1,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(113)
		::openfl::_legacy::display::BitmapData bitmap_data = tmp13;		HX_STACK_VAR(bitmap_data,"bitmap_data");
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(114)
			int tmp14 = this->bitmap_data_array_sm->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			int _g2 = tmp14;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(114)
			while((true)){
				HX_STACK_LINE(114)
				bool tmp15 = (_g1 < _g2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(114)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(114)
				if ((tmp16)){
					HX_STACK_LINE(114)
					break;
				}
				HX_STACK_LINE(114)
				int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(114)
				int y = tmp17;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(116)
					int tmp18 = this->bitmap_data_array_sm->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(116)
					int _g21 = tmp18;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(116)
					while((true)){
						HX_STACK_LINE(116)
						bool tmp19 = (_g3 < _g21);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(116)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(116)
						if ((tmp20)){
							HX_STACK_LINE(116)
							break;
						}
						HX_STACK_LINE(116)
						int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(116)
						int x = tmp21;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(118)
						int tmp22 = this->bitmap_data_array_sm->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(118)
						bool tmp23 = (tmp22 == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(118)
						if ((tmp23)){
							HX_STACK_LINE(120)
							int tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(120)
							int tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(120)
							int tmp26 = _text_color;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(120)
							bitmap_data->setPixel32(tmp24,tmp25,tmp26);
						}
						else{
							HX_STACK_LINE(122)
							int tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(122)
							int tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(122)
							bitmap_data->setPixel32(tmp24,tmp25,(int)0);
						}
					}
				}
			}
		}
		HX_STACK_LINE(125)
		int _offset = (int)10;		HX_STACK_VAR(_offset,"_offset");
		HX_STACK_LINE(126)
		Float tmp14 = (bg->x + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(126)
		Float tmp15 = (bg->y + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(126)
		::flixel::math::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp17 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(126)
			::flixel::math::FlxPoint tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(126)
			::flixel::math::FlxPoint tmp19 = tmp18->set((int)4,(int)5);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(126)
			::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(126)
			point->_inPool = false;
			HX_STACK_LINE(126)
			tmp16 = point;
		}
		HX_STACK_LINE(126)
		::openfl::_legacy::display::BitmapData tmp17 = bitmap_data;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(126)
		::zerolib::ZBitmapText tmp18 = ::zerolib::ZBitmapText_obj::__new(tmp14,tmp15,HX_HCSTRING("0123456789","\x05","\x7a","\x73","\x55"),tmp16,tmp17,null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(126)
		this->min_text = tmp18;
		HX_STACK_LINE(127)
		::zerolib::ZBitmapText tmp19 = this->min_text;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(127)
		this->add(tmp19);
		HX_STACK_LINE(128)
		Float tmp20 = (bg->x + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(128)
		int tmp21 = _offset;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(128)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(128)
		Float tmp23 = (bg->y + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(128)
		::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(128)
			::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(128)
			::flixel::math::FlxPoint tmp27 = tmp26->set((int)4,(int)5);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(128)
			::flixel::math::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(128)
			point->_inPool = false;
			HX_STACK_LINE(128)
			tmp24 = point;
		}
		HX_STACK_LINE(128)
		::openfl::_legacy::display::BitmapData tmp25 = bitmap_data;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(128)
		::zerolib::ZBitmapText tmp26 = ::zerolib::ZBitmapText_obj::__new(tmp22,tmp23,HX_HCSTRING("0123456789","\x05","\x7a","\x73","\x55"),tmp24,tmp25,null(),null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(128)
		this->sec_text = tmp26;
		HX_STACK_LINE(129)
		::zerolib::ZBitmapText tmp27 = this->sec_text;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(129)
		this->add(tmp27);
		HX_STACK_LINE(130)
		Float tmp28 = (bg->x + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(130)
		int tmp29 = (_offset * (int)2);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(130)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(130)
		Float tmp31 = (bg->y + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(130)
		::flixel::math::FlxPoint tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp33 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(130)
			::flixel::math::FlxPoint tmp34 = tmp33->get();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(130)
			::flixel::math::FlxPoint tmp35 = tmp34->set((int)4,(int)5);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(130)
			::flixel::math::FlxPoint point = tmp35;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(130)
			point->_inPool = false;
			HX_STACK_LINE(130)
			tmp32 = point;
		}
		HX_STACK_LINE(130)
		::openfl::_legacy::display::BitmapData tmp33 = bitmap_data;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(130)
		::zerolib::ZBitmapText tmp34 = ::zerolib::ZBitmapText_obj::__new(tmp30,tmp31,HX_HCSTRING("0123456789","\x05","\x7a","\x73","\x55"),tmp32,tmp33,null(),null(),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(130)
		this->msc_text = tmp34;
		HX_STACK_LINE(131)
		::zerolib::ZBitmapText tmp35 = this->msc_text;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(131)
		this->add(tmp35);
	}
	HX_STACK_LINE(134)
	::flixel::util::FlxTimer tmp13 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(134)
	::flixel::util::FlxTimer tmp14 = tmp13->start(((Float)0.5),null(),(int)0);		HX_STACK_VAR(tmp14,"tmp14");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::zerolib::ZCountDown,_g)
	int __ArgCount() const { return 1; }
	Void run(::flixel::util::FlxTimer t){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","zerolib/ZCountDown.hx",135,0x48fc9a55)
		HX_STACK_ARG(t,"t")
		{
			HX_STACK_LINE(136)
			bool tmp15 = _g->colons->visible;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(136)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(136)
			if ((tmp15)){
				HX_STACK_LINE(136)
				tmp16 = false;
			}
			else{
				HX_STACK_LINE(136)
				tmp16 = true;
			}
			HX_STACK_LINE(136)
			_g->colons->set_visible(tmp16);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(134)
	tmp14->onComplete =  Dynamic(new _Function_1_2(_g));
}
;
	return null();
}

//ZCountDown_obj::~ZCountDown_obj() { }

Dynamic ZCountDown_obj::__CreateEmpty() { return  new ZCountDown_obj; }
hx::ObjectPtr< ZCountDown_obj > ZCountDown_obj::__new(::flixel::math::FlxPoint _p,hx::Null< int >  __o__min,hx::Null< int >  __o__text_color,hx::Null< int >  __o__bg_color,hx::Null< bool >  __o__big)
{  hx::ObjectPtr< ZCountDown_obj > _result_ = new ZCountDown_obj();
	_result_->__construct(_p,__o__min,__o__text_color,__o__bg_color,__o__big);
	return _result_;}

Dynamic ZCountDown_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZCountDown_obj > _result_ = new ZCountDown_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void ZCountDown_obj::update( Float elapsed){
{
		HX_STACK_FRAME("zerolib.ZCountDown","update",0xe4cf5cef,"zerolib.ZCountDown.update","zerolib/ZCountDown.hx",144,0x48fc9a55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(145)
		(this->msc)--;
		HX_STACK_LINE(147)
		int tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		if ((tmp1)){
			HX_STACK_LINE(147)
			tmp2 = this->counting;
		}
		else{
			HX_STACK_LINE(147)
			tmp2 = false;
		}
		HX_STACK_LINE(147)
		if ((tmp2)){
			HX_STACK_LINE(149)
			int tmp3 = this->msc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			bool tmp4 = (tmp3 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			if ((tmp4)){
				HX_STACK_LINE(151)
				int tmp5 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(151)
				this->msc = tmp6;
				HX_STACK_LINE(152)
				(this->sec)--;
				HX_STACK_LINE(154)
				int tmp7 = this->sec;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				if ((tmp8)){
					HX_STACK_LINE(156)
					(this->min)--;
					HX_STACK_LINE(157)
					int tmp9 = this->min;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(157)
					bool tmp10 = (tmp9 >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(157)
					if ((tmp10)){
						HX_STACK_LINE(157)
						this->sec = (int)59;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(163)
			bool tmp3 = this->done;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			if ((tmp4)){
				HX_STACK_LINE(163)
				this->callback();
			}
			HX_STACK_LINE(164)
			int tmp5 = this->msc = (int)0;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			int tmp6 = this->sec = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			this->min = tmp6;
			HX_STACK_LINE(165)
			this->counting = false;
			HX_STACK_LINE(166)
			this->done = true;
		}
		HX_STACK_LINE(169)
		this->setText();
		HX_STACK_LINE(171)
		Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		this->super::update(tmp3);
	}
return null();
}


Void ZCountDown_obj::setText( ){
{
		HX_STACK_FRAME("zerolib.ZCountDown","setText",0xc5503fc9,"zerolib.ZCountDown.setText","zerolib/ZCountDown.hx",175,0x48fc9a55)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		::zerolib::ZBitmapText tmp = this->min_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		int tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		bool tmp2 = (tmp1 < (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		if ((tmp2)){
			HX_STACK_LINE(176)
			int tmp4 = this->min;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			tmp3 = (HX_HCSTRING("0","\x30","\x00","\x00","\x00") + tmp4);
		}
		else{
			HX_STACK_LINE(176)
			int tmp4 = this->min;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);
		}
		HX_STACK_LINE(176)
		tmp->set_text(tmp3);
		HX_STACK_LINE(177)
		::zerolib::ZBitmapText tmp4 = this->sec_text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		int tmp5 = this->sec;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		bool tmp6 = (tmp5 < (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		if ((tmp6)){
			HX_STACK_LINE(177)
			int tmp8 = this->sec;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			tmp7 = (HX_HCSTRING("0","\x30","\x00","\x00","\x00") + tmp8);
		}
		else{
			HX_STACK_LINE(177)
			int tmp8 = this->sec;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp8);
		}
		HX_STACK_LINE(177)
		tmp4->set_text(tmp7);
		HX_STACK_LINE(178)
		::zerolib::ZBitmapText tmp8 = this->msc_text;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(178)
		int tmp9 = this->msc;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(178)
		bool tmp10 = (tmp9 < (int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(178)
		::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(178)
		if ((tmp10)){
			HX_STACK_LINE(178)
			int tmp12 = this->msc;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			tmp11 = (HX_HCSTRING("0","\x30","\x00","\x00","\x00") + tmp12);
		}
		else{
			HX_STACK_LINE(178)
			int tmp12 = this->msc;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			tmp11 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp12);
		}
		HX_STACK_LINE(178)
		tmp8->set_text(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZCountDown_obj,setText,(void))

int ZCountDown_obj::get_minutes( ){
	HX_STACK_FRAME("zerolib.ZCountDown","get_minutes",0x38bc5e90,"zerolib.ZCountDown.get_minutes","zerolib/ZCountDown.hx",185,0x48fc9a55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	int tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZCountDown_obj,get_minutes,return )

int ZCountDown_obj::get_seconds( ){
	HX_STACK_FRAME("zerolib.ZCountDown","get_seconds",0x3f6b7df0,"zerolib.ZCountDown.get_seconds","zerolib/ZCountDown.hx",190,0x48fc9a55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	int tmp = this->sec;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZCountDown_obj,get_seconds,return )

int ZCountDown_obj::get_milisec( ){
	HX_STACK_FRAME("zerolib.ZCountDown","get_milisec",0x09ffe3c9,"zerolib.ZCountDown.get_milisec","zerolib/ZCountDown.hx",196,0x48fc9a55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	int tmp = this->msc;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZCountDown_obj,get_milisec,return )

::String ZCountDown_obj::get_time_string( ){
	HX_STACK_FRAME("zerolib.ZCountDown","get_time_string",0x09c08df4,"zerolib.ZCountDown.get_time_string","zerolib/ZCountDown.hx",201,0x48fc9a55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	int tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	::String tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	::String tmp2 = (tmp1 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	int tmp3 = this->sec;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(201)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(201)
	::String tmp5 = (tmp4 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(201)
	int tmp6 = this->msc;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(201)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(201)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(ZCountDown_obj,get_time_string,return )

Void ZCountDown_obj::add_time( hx::Null< int >  __o__min,hx::Null< int >  __o__sec){
int _min = __o__min.Default(0);
int _sec = __o__sec.Default(0);
	HX_STACK_FRAME("zerolib.ZCountDown","add_time",0xab577a91,"zerolib.ZCountDown.add_time","zerolib/ZCountDown.hx",204,0x48fc9a55)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_min,"_min")
	HX_STACK_ARG(_sec,"_sec")
{
		HX_STACK_LINE(205)
		int tmp = _min;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		int tmp1 = _sec;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		int tmp2 = this->sec;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		Float tmp4 = (Float(tmp3) / Float((int)60));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		int tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		hx::AddEq(this->min,tmp6);
		HX_STACK_LINE(206)
		int tmp7 = _sec;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		int tmp8 = this->sec;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(206)
		int tmp10 = hx::Mod(tmp9,(int)60);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(206)
		this->sec = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZCountDown_obj,add_time,(void))


ZCountDown_obj::ZCountDown_obj()
{
}

void ZCountDown_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZCountDown);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(sec,"sec");
	HX_MARK_MEMBER_NAME(msc,"msc");
	HX_MARK_MEMBER_NAME(min_text,"min_text");
	HX_MARK_MEMBER_NAME(sec_text,"sec_text");
	HX_MARK_MEMBER_NAME(msc_text,"msc_text");
	HX_MARK_MEMBER_NAME(colons,"colons");
	HX_MARK_MEMBER_NAME(countdown,"countdown");
	HX_MARK_MEMBER_NAME(bitmap_data_array_big,"bitmap_data_array_big");
	HX_MARK_MEMBER_NAME(bitmap_data_array_sm,"bitmap_data_array_sm");
	HX_MARK_MEMBER_NAME(counting,"counting");
	HX_MARK_MEMBER_NAME(done,"done");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZCountDown_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(sec,"sec");
	HX_VISIT_MEMBER_NAME(msc,"msc");
	HX_VISIT_MEMBER_NAME(min_text,"min_text");
	HX_VISIT_MEMBER_NAME(sec_text,"sec_text");
	HX_VISIT_MEMBER_NAME(msc_text,"msc_text");
	HX_VISIT_MEMBER_NAME(colons,"colons");
	HX_VISIT_MEMBER_NAME(countdown,"countdown");
	HX_VISIT_MEMBER_NAME(bitmap_data_array_big,"bitmap_data_array_big");
	HX_VISIT_MEMBER_NAME(bitmap_data_array_sm,"bitmap_data_array_sm");
	HX_VISIT_MEMBER_NAME(counting,"counting");
	HX_VISIT_MEMBER_NAME(done,"done");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZCountDown_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"sec") ) { return sec; }
		if (HX_FIELD_EQ(inName,"msc") ) { return msc; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return done; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colons") ) { return colons; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"min_text") ) { return min_text; }
		if (HX_FIELD_EQ(inName,"sec_text") ) { return sec_text; }
		if (HX_FIELD_EQ(inName,"msc_text") ) { return msc_text; }
		if (HX_FIELD_EQ(inName,"counting") ) { return counting; }
		if (HX_FIELD_EQ(inName,"add_time") ) { return add_time_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countdown") ) { return countdown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_minutes") ) { return get_minutes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_seconds") ) { return get_seconds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_milisec") ) { return get_milisec_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_time_string") ) { return get_time_string_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"bitmap_data_array_sm") ) { return bitmap_data_array_sm; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"bitmap_data_array_big") ) { return bitmap_data_array_big; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZCountDown_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sec") ) { sec=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"msc") ) { msc=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colons") ) { colons=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min_text") ) { min_text=inValue.Cast< ::zerolib::ZBitmapText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sec_text") ) { sec_text=inValue.Cast< ::zerolib::ZBitmapText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"msc_text") ) { msc_text=inValue.Cast< ::zerolib::ZBitmapText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"counting") ) { counting=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countdown") ) { countdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"bitmap_data_array_sm") ) { bitmap_data_array_sm=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"bitmap_data_array_big") ) { bitmap_data_array_big=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZCountDown_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("sec","\x91","\x9b","\x57","\x00"));
	outFields->push(HX_HCSTRING("msc","\x3d","\x1a","\x53","\x00"));
	outFields->push(HX_HCSTRING("min_text","\xba","\xe5","\x14","\x64"));
	outFields->push(HX_HCSTRING("sec_text","\x5b","\xbf","\x00","\xaf"));
	outFields->push(HX_HCSTRING("msc_text","\x2f","\x91","\xfe","\x9d"));
	outFields->push(HX_HCSTRING("colons","\x34","\xc2","\x86","\xc6"));
	outFields->push(HX_HCSTRING("countdown","\xb1","\x50","\xb5","\x69"));
	outFields->push(HX_HCSTRING("bitmap_data_array_big","\xd5","\x13","\x2d","\x40"));
	outFields->push(HX_HCSTRING("bitmap_data_array_sm","\x25","\xc3","\x70","\xe2"));
	outFields->push(HX_HCSTRING("counting","\x73","\x73","\x22","\x91"));
	outFields->push(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZCountDown_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsInt,(int)offsetof(ZCountDown_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsInt,(int)offsetof(ZCountDown_obj,sec),HX_HCSTRING("sec","\x91","\x9b","\x57","\x00")},
	{hx::fsInt,(int)offsetof(ZCountDown_obj,msc),HX_HCSTRING("msc","\x3d","\x1a","\x53","\x00")},
	{hx::fsObject /*::zerolib::ZBitmapText*/ ,(int)offsetof(ZCountDown_obj,min_text),HX_HCSTRING("min_text","\xba","\xe5","\x14","\x64")},
	{hx::fsObject /*::zerolib::ZBitmapText*/ ,(int)offsetof(ZCountDown_obj,sec_text),HX_HCSTRING("sec_text","\x5b","\xbf","\x00","\xaf")},
	{hx::fsObject /*::zerolib::ZBitmapText*/ ,(int)offsetof(ZCountDown_obj,msc_text),HX_HCSTRING("msc_text","\x2f","\x91","\xfe","\x9d")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ZCountDown_obj,colons),HX_HCSTRING("colons","\x34","\xc2","\x86","\xc6")},
	{hx::fsBool,(int)offsetof(ZCountDown_obj,countdown),HX_HCSTRING("countdown","\xb1","\x50","\xb5","\x69")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ZCountDown_obj,bitmap_data_array_big),HX_HCSTRING("bitmap_data_array_big","\xd5","\x13","\x2d","\x40")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ZCountDown_obj,bitmap_data_array_sm),HX_HCSTRING("bitmap_data_array_sm","\x25","\xc3","\x70","\xe2")},
	{hx::fsBool,(int)offsetof(ZCountDown_obj,counting),HX_HCSTRING("counting","\x73","\x73","\x22","\x91")},
	{hx::fsBool,(int)offsetof(ZCountDown_obj,done),HX_HCSTRING("done","\x82","\xf0","\x6d","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("sec","\x91","\x9b","\x57","\x00"),
	HX_HCSTRING("msc","\x3d","\x1a","\x53","\x00"),
	HX_HCSTRING("min_text","\xba","\xe5","\x14","\x64"),
	HX_HCSTRING("sec_text","\x5b","\xbf","\x00","\xaf"),
	HX_HCSTRING("msc_text","\x2f","\x91","\xfe","\x9d"),
	HX_HCSTRING("colons","\x34","\xc2","\x86","\xc6"),
	HX_HCSTRING("countdown","\xb1","\x50","\xb5","\x69"),
	HX_HCSTRING("bitmap_data_array_big","\xd5","\x13","\x2d","\x40"),
	HX_HCSTRING("bitmap_data_array_sm","\x25","\xc3","\x70","\xe2"),
	HX_HCSTRING("counting","\x73","\x73","\x22","\x91"),
	HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setText","\x6f","\x0d","\x7e","\x12"),
	HX_HCSTRING("get_minutes","\x36","\xf7","\xd8","\xd9"),
	HX_HCSTRING("get_seconds","\x96","\x16","\x88","\xe0"),
	HX_HCSTRING("get_milisec","\x6f","\x7c","\x1c","\xab"),
	HX_HCSTRING("get_time_string","\x9a","\x71","\x8d","\xe5"),
	HX_HCSTRING("add_time","\x2b","\x9e","\x3d","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZCountDown_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZCountDown_obj::__mClass,"__mClass");
};

#endif

hx::Class ZCountDown_obj::__mClass;

void ZCountDown_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zerolib.ZCountDown","\xc8","\xa8","\x3f","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZCountDown_obj >;
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

} // end namespace zerolib
