#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Poof
#include <Poof.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Track
#include <Track.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_zerolib_ZCountDown
#include <zerolib/ZCountDown.h>
#endif
#ifndef INCLUDED_zerolib_ZMath
#include <zerolib/ZMath.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",22,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(38)
	this->indi_map = Array_obj< Float >::__new();
	HX_STACK_LINE(37)
	this->cur_dist = ((Float)0);
	HX_STACK_LINE(36)
	this->goal = ((Float)1000);
	HX_STACK_LINE(29)
	this->real_speed = ((Float)0);
	HX_STACK_LINE(28)
	this->speed = ((Float)500);
	HX_STACK_LINE(22)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",45,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::create();
		HX_STACK_LINE(50)
		::PlayState_obj::i = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(52)
		::flixel::addons::display::FlxBackdrop tmp = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_HCSTRING("assets/images/bg.png","\x6b","\x23","\xcd","\xe0"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		this->bg = tmp;
		HX_STACK_LINE(53)
		::flixel::addons::display::FlxBackdrop tmp1 = this->bg;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		this->add(tmp1);
		HX_STACK_LINE(55)
		::flixel::group::FlxTypedGroup tmp2 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		this->layer0 = tmp2;
		HX_STACK_LINE(56)
		::flixel::group::FlxTypedGroup tmp3 = this->layer0;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		this->add(tmp3);
		HX_STACK_LINE(58)
		this->tracks = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			while((true)){
				HX_STACK_LINE(59)
				bool tmp4 = (_g < (int)3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				if ((tmp5)){
					HX_STACK_LINE(59)
					break;
				}
				HX_STACK_LINE(59)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(60)
				int tmp7 = (i * (int)-256);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				::Track tmp9 = ::Track_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(60)
				this->tracks->push(tmp9);
			}
		}
		HX_STACK_LINE(62)
		::flixel::group::FlxTypedGroup tmp4 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		this->layer1 = tmp4;
		HX_STACK_LINE(63)
		::flixel::group::FlxTypedGroup tmp5 = this->layer1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		this->add(tmp5);
		HX_STACK_LINE(65)
		::Ship tmp6 = ::Ship_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		this->ship = tmp6;
		HX_STACK_LINE(66)
		::Ship tmp7 = this->ship;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		this->add(tmp7);
		HX_STACK_LINE(68)
		::flixel::group::FlxTypedGroup tmp8 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		this->layer2 = tmp8;
		HX_STACK_LINE(69)
		::flixel::group::FlxTypedGroup tmp9 = this->layer2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		this->add(tmp9);
		HX_STACK_LINE(71)
		::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(71)
			::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(71)
			int tmp13 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			int tmp14 = (tmp13 - (int)24);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			::flixel::math::FlxPoint tmp15 = tmp12->set((int)10,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			::flixel::math::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(71)
			point->_inPool = false;
			HX_STACK_LINE(71)
			tmp10 = point;
		}
		HX_STACK_LINE(71)
		::zerolib::ZCountDown tmp11 = ::zerolib::ZCountDown_obj::__new(tmp10,(int)2,null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(71)
		this->timer = tmp11;
		HX_STACK_LINE(72)
		::zerolib::ZCountDown tmp12 = this->timer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(72)
		this->add(tmp12);
		HX_STACK_LINE(74)
		int tmp13 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		int tmp14 = (tmp13 - (int)12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(74)
		int tmp15 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(74)
		int tmp16 = (tmp15 - (int)20);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(74)
		::Ship tmp17 = this->ship;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(74)
		::flixel::ui::FlxBar tmp18 = ::flixel::ui::FlxBar_obj::__new((int)10,tmp14,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT,tmp16,(int)4,tmp17,HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),(int)0,(int)100,true);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(74)
		this->health_bar = tmp18;
		HX_STACK_LINE(75)
		::flixel::ui::FlxBar tmp19 = this->health_bar;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(75)
		tmp19->createFilledBar((int)-15658735,(int)-65456,true,(int)-15658735);
		HX_STACK_LINE(76)
		::flixel::ui::FlxBar tmp20 = this->health_bar;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(76)
		this->add(tmp20);
		HX_STACK_LINE(78)
		int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(78)
		int tmp22 = (tmp21 - (int)21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(78)
		::flixel::FlxSprite tmp23 = ::flixel::FlxSprite_obj::__new((int)54,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(78)
		::flixel::FlxSprite flag_bg = tmp23;		HX_STACK_VAR(flag_bg,"flag_bg");
		HX_STACK_LINE(79)
		int tmp24 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(79)
		Float tmp25 = flag_bg->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(79)
		Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(79)
		Float tmp27 = (tmp26 - (int)10);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(79)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(79)
		flag_bg->makeGraphic(tmp28,(int)8,(int)-15658735,null(),null());
		HX_STACK_LINE(80)
		::flixel::FlxSprite tmp29 = flag_bg;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(80)
		this->add(tmp29);
		HX_STACK_LINE(82)
		Float tmp30 = (flag_bg->x + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(82)
		Float tmp31 = (flag_bg->y + (int)6);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(82)
		::flixel::FlxSprite tmp32 = ::flixel::FlxSprite_obj::__new(tmp30,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(82)
		::flixel::FlxSprite indi_line = tmp32;		HX_STACK_VAR(indi_line,"indi_line");
		HX_STACK_LINE(83)
		Float tmp33 = flag_bg->get_width();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(83)
		Float tmp34 = (tmp33 - (int)2);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(83)
		int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(83)
		indi_line->makeGraphic(tmp35,(int)1,(int)-2162689,null(),null());
		HX_STACK_LINE(84)
		::flixel::FlxSprite tmp36 = indi_line;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(84)
		this->add(tmp36);
		HX_STACK_LINE(86)
		Float tmp37 = indi_line->x;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(86)
		Float tmp38 = indi_line->get_width();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(86)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(86)
		Float tmp40 = (tmp39 - (int)5);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(86)
		Float tmp41 = (indi_line->y - (int)5);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(86)
		::flixel::FlxSprite tmp42 = ::flixel::FlxSprite_obj::__new(tmp40,tmp41,HX_HCSTRING("assets/images/flag.png","\x92","\xe9","\xf3","\x48"));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(86)
		::flixel::FlxSprite flag = tmp42;		HX_STACK_VAR(flag,"flag");
		HX_STACK_LINE(87)
		::flixel::FlxSprite tmp43 = flag;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(87)
		this->add(tmp43);
		HX_STACK_LINE(89)
		Float tmp44 = indi_line->x;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(89)
		Float tmp45 = (indi_line->y - (int)6);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(89)
		::flixel::FlxSprite tmp46 = ::flixel::FlxSprite_obj::__new(tmp44,tmp45,HX_HCSTRING("assets/images/indicator.png","\xff","\xb1","\x17","\x86"));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(89)
		this->indicator = tmp46;
		HX_STACK_LINE(90)
		::flixel::FlxSprite tmp47 = this->indicator;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(90)
		this->add(tmp47);
		HX_STACK_LINE(92)
		Float tmp48 = (indi_line->x - (int)2);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(92)
		this->indi_map->push(tmp48);
		HX_STACK_LINE(93)
		Float tmp49 = indi_line->x;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(93)
		Float tmp50 = indi_line->get_width();		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(93)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(93)
		Float tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(93)
		this->indi_map->push(tmp52);
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::flixel::FlxGame tmp53 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(95)
			::flixel::_system::debug::watch::Watch tmp54 = tmp53->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(95)
			tmp54->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("cur_track_pixel","\x13","\x0a","\x38","\x3e"),HX_HCSTRING("P:","\xea","\x45","\x00","\x00"));
		}
		HX_STACK_LINE(97)
		::flixel::input::mouse::FlxMouse tmp53 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(97)
		tmp53->set_visible(false);
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",101,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(102)
		Float tmp = this->speed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		Float tmp1 = this->real_speed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		Float tmp3 = (tmp2 * ((Float)0.05));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		hx::AddEq(this->real_speed,tmp3);
		HX_STACK_LINE(103)
		::Ship tmp4 = this->ship;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		this->speed = tmp4->speed;
		HX_STACK_LINE(104)
		Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		this->super::update(tmp5);
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			int tmp6 = this->tracks->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(105)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(105)
				if ((tmp8)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(105)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				::Ship tmp10 = this->ship;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(107)
				Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(107)
				::Track tmp12 = this->tracks->__get(i).StaticCast< ::Track >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(107)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(107)
				bool tmp14 = (tmp11 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(107)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(107)
				if ((tmp14)){
					HX_STACK_LINE(107)
					::Ship tmp16 = this->ship;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(107)
					::Ship tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(107)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(107)
					::Track tmp19 = this->tracks->__get(i).StaticCast< ::Track >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(107)
					::Track tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(107)
					Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(107)
					Float tmp22 = (tmp21 + (int)255);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(107)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(107)
					tmp15 = (tmp18 < tmp23);
				}
				else{
					HX_STACK_LINE(107)
					tmp15 = false;
				}
				HX_STACK_LINE(107)
				if ((tmp15)){
					HX_STACK_LINE(108)
					::Ship tmp16 = this->ship;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(108)
					::Track tmp17 = this->tracks->__get(i).StaticCast< ::Track >();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(108)
					this->check_track(tmp16,tmp17);
				}
				HX_STACK_LINE(109)
				::Track tmp16 = this->tracks->__get(i).StaticCast< ::Track >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(109)
				Float tmp17 = this->real_speed;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				tmp16->set_speed(tmp17);
			}
		}
		HX_STACK_LINE(111)
		::Track tmp6 = this->tracks->__get((int)0).StaticCast< ::Track >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		int tmp8 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		if ((tmp9)){
			HX_STACK_LINE(111)
			this->swap_tilemaps();
		}
		HX_STACK_LINE(112)
		::flixel::addons::display::FlxBackdrop tmp10 = this->bg;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		Float tmp11 = this->real_speed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		tmp10->velocity->set_y(tmp12);
		HX_STACK_LINE(113)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::flixel::input::keyboard::FlxKeyboard tmp14 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(113)
			::flixel::input::keyboard::FlxKeyList _this = tmp14->justPressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(113)
			int tmp15 = _this->status;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(113)
			tmp13 = _this->keyManager->checkStatus((int)82,tmp15);
		}
		HX_STACK_LINE(113)
		if ((tmp13)){
			HX_STACK_LINE(113)
			::flixel::FlxGame tmp14 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(113)
			::flixel::FlxState tmp15 = tmp14->_state;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(113)
			::hx::Class tmp16 = ::Type_obj::getClass(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(113)
			::flixel::FlxState tmp17 = ::Type_obj::createInstance(tmp16,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(113)
			::flixel::FlxState nextState = tmp17;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(113)
			::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(113)
			::flixel::FlxState tmp19 = nextState;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(113)
			bool tmp20 = tmp18->_state->switchTo(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(113)
			if ((tmp20)){
				HX_STACK_LINE(113)
				::flixel::FlxGame tmp21 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(113)
				tmp21->_requestedState = nextState;
			}
		}
		HX_STACK_LINE(114)
		this->goal_stuff();
	}
return null();
}


Void PlayState_obj::goal_stuff( ){
{
		HX_STACK_FRAME("PlayState","goal_stuff",0x17e86cf9,"PlayState.goal_stuff","PlayState.hx",118,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		Float tmp = this->cur_dist;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		Float tmp1 = this->goal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		Float tmp2 = this->indi_map->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		Float tmp3 = this->indi_map->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Float tmp4 = ::zerolib::ZMath_obj::map(tmp,(int)0,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		Float indi_x = tmp4;		HX_STACK_VAR(indi_x,"indi_x");
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::flixel::FlxSprite tmp5 = this->indicator;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			::flixel::FlxSprite _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			Float tmp7 = indi_x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			::flixel::FlxSprite tmp8 = this->indicator;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(120)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			Float tmp11 = (tmp10 * ((Float)0.1));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(120)
			Float tmp12 = (tmp6 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			_g->set_x(tmp12);
		}
		HX_STACK_LINE(121)
		Float tmp5 = this->real_speed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		Float tmp6 = (Float(tmp5) / Float((int)500));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		hx::AddEq(this->cur_dist,tmp6);
		HX_STACK_LINE(123)
		Float tmp7 = this->cur_dist;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		Float tmp8 = this->goal;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		if ((tmp9)){
			HX_STACK_LINE(125)
			this->cur_dist = (int)0;
			HX_STACK_LINE(126)
			hx::MultEq(this->goal,((Float)1.1));
			HX_STACK_LINE(127)
			::zerolib::ZCountDown tmp10 = this->timer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			tmp10->add_time((int)0,(int)30);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,goal_stuff,(void))

Void PlayState_obj::swap_tilemaps( ){
{
		HX_STACK_FRAME("PlayState","swap_tilemaps",0x6cf86220,"PlayState.swap_tilemaps","PlayState.hx",132,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::Track tmp = this->tracks->__get((int)0).StaticCast< ::Track >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::Track tmp1 = this->tracks->__get((int)2).StaticCast< ::Track >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		Float tmp2 = tmp1->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		Float tmp3 = (tmp2 - (int)256);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		tmp->set_y(tmp3);
		HX_STACK_LINE(134)
		::Track tmp4 = this->tracks->__get((int)0).StaticCast< ::Track >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::Track tmp5 = this->tracks->__get((int)2).StaticCast< ::Track >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		int tmp6 = tmp5->ends->__Field(HX_HCSTRING("top","\x95","\x66","\x58","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		tmp4->change_frame(tmp6);
		HX_STACK_LINE(135)
		::Track tmp7 = this->tracks->shift().StaticCast< ::Track >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		this->tracks->push(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,swap_tilemaps,(void))

Void PlayState_obj::check_track( ::Ship _s,::Track _t){
{
		HX_STACK_FRAME("PlayState","check_track",0xc8d28203,"PlayState.check_track","PlayState.hx",139,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_s,"_s")
		HX_STACK_ARG(_t,"_t")
		HX_STACK_LINE(140)
		::flixel::math::FlxPoint tmp = _s->getMidpoint(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		int tmp1 = _t->get_pixel_at_point(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		this->cur_track_pixel = tmp1;
		HX_STACK_LINE(141)
		int tmp2 = this->cur_track_pixel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		if ((tmp3)){
			HX_STACK_LINE(143)
			::flixel::FlxCamera tmp4 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			tmp4->shake(((Float)0.01),((Float)0.05),null(),null(),null());
			HX_STACK_LINE(144)
			this->speed = (int)75;
			HX_STACK_LINE(145)
			::Ship tmp5 = this->ship;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			::Ship tmp6 = this->ship;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			::flixel::math::FlxPoint tmp7 = tmp6->getMidpoint(null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(145)
			tmp5->poofs->fire(tmp7);
			HX_STACK_LINE(146)
			::Ship tmp8 = this->ship;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			tmp8->hurt((int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,check_track,(void))

::PlayState PlayState_obj::i;


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(tracks,"tracks");
	HX_MARK_MEMBER_NAME(ship,"ship");
	HX_MARK_MEMBER_NAME(dolly,"dolly");
	HX_MARK_MEMBER_NAME(cur_track_pixel,"cur_track_pixel");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(real_speed,"real_speed");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(layer0,"layer0");
	HX_MARK_MEMBER_NAME(layer1,"layer1");
	HX_MARK_MEMBER_NAME(layer2,"layer2");
	HX_MARK_MEMBER_NAME(indicator,"indicator");
	HX_MARK_MEMBER_NAME(indi_pos,"indi_pos");
	HX_MARK_MEMBER_NAME(goal,"goal");
	HX_MARK_MEMBER_NAME(cur_dist,"cur_dist");
	HX_MARK_MEMBER_NAME(indi_map,"indi_map");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(health_bar,"health_bar");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tracks,"tracks");
	HX_VISIT_MEMBER_NAME(ship,"ship");
	HX_VISIT_MEMBER_NAME(dolly,"dolly");
	HX_VISIT_MEMBER_NAME(cur_track_pixel,"cur_track_pixel");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(real_speed,"real_speed");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(layer0,"layer0");
	HX_VISIT_MEMBER_NAME(layer1,"layer1");
	HX_VISIT_MEMBER_NAME(layer2,"layer2");
	HX_VISIT_MEMBER_NAME(indicator,"indicator");
	HX_VISIT_MEMBER_NAME(indi_pos,"indi_pos");
	HX_VISIT_MEMBER_NAME(goal,"goal");
	HX_VISIT_MEMBER_NAME(cur_dist,"cur_dist");
	HX_VISIT_MEMBER_NAME(indi_map,"indi_map");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(health_bar,"health_bar");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ship") ) { return ship; }
		if (HX_FIELD_EQ(inName,"goal") ) { return goal; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dolly") ) { return dolly; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tracks") ) { return tracks; }
		if (HX_FIELD_EQ(inName,"layer0") ) { return layer0; }
		if (HX_FIELD_EQ(inName,"layer1") ) { return layer1; }
		if (HX_FIELD_EQ(inName,"layer2") ) { return layer2; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"indi_pos") ) { return indi_pos; }
		if (HX_FIELD_EQ(inName,"cur_dist") ) { return cur_dist; }
		if (HX_FIELD_EQ(inName,"indi_map") ) { return indi_map; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"indicator") ) { return indicator; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"real_speed") ) { return real_speed; }
		if (HX_FIELD_EQ(inName,"health_bar") ) { return health_bar; }
		if (HX_FIELD_EQ(inName,"goal_stuff") ) { return goal_stuff_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"check_track") ) { return check_track_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"swap_tilemaps") ) { return swap_tilemaps_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_track_pixel") ) { return cur_track_pixel; }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { outValue = i; return true;  }
	}
	return false;
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ship") ) { ship=inValue.Cast< ::Ship >(); return inValue; }
		if (HX_FIELD_EQ(inName,"goal") ) { goal=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dolly") ) { dolly=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::zerolib::ZCountDown >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tracks") ) { tracks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer0") ) { layer0=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer1") ) { layer1=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer2") ) { layer2=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"indi_pos") ) { indi_pos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cur_dist") ) { cur_dist=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indi_map") ) { indi_map=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"indicator") ) { indicator=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"real_speed") ) { real_speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health_bar") ) { health_bar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_track_pixel") ) { cur_track_pixel=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=ioValue.Cast< ::PlayState >(); return true; }
	}
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45"));
	outFields->push(HX_HCSTRING("ship","\xbc","\xcf","\x52","\x4c"));
	outFields->push(HX_HCSTRING("dolly","\x4e","\x03","\xc3","\xdd"));
	outFields->push(HX_HCSTRING("cur_track_pixel","\x13","\x0a","\x38","\x3e"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("real_speed","\xa6","\x04","\xe4","\x8e"));
	outFields->push(HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("layer0","\x3f","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("layer1","\x40","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("layer2","\x41","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("indicator","\xcf","\xe7","\xad","\x93"));
	outFields->push(HX_HCSTRING("indi_pos","\x3f","\x76","\xcd","\x03"));
	outFields->push(HX_HCSTRING("goal","\x13","\x89","\x69","\x44"));
	outFields->push(HX_HCSTRING("cur_dist","\xc5","\x0d","\xfb","\xa9"));
	outFields->push(HX_HCSTRING("indi_map","\x47","\x23","\xcb","\x03"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("health_bar","\x70","\x9d","\xd2","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,tracks),HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45")},
	{hx::fsObject /*::Ship*/ ,(int)offsetof(PlayState_obj,ship),HX_HCSTRING("ship","\xbc","\xcf","\x52","\x4c")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(PlayState_obj,dolly),HX_HCSTRING("dolly","\x4e","\x03","\xc3","\xdd")},
	{hx::fsInt,(int)offsetof(PlayState_obj,cur_track_pixel),HX_HCSTRING("cur_track_pixel","\x13","\x0a","\x38","\x3e")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,real_speed),HX_HCSTRING("real_speed","\xa6","\x04","\xe4","\x8e")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(PlayState_obj,bg),HX_HCSTRING("bg","\xc5","\x55","\x00","\x00")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,layer0),HX_HCSTRING("layer0","\x3f","\x15","\xb1","\x58")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,layer1),HX_HCSTRING("layer1","\x40","\x15","\xb1","\x58")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,layer2),HX_HCSTRING("layer2","\x41","\x15","\xb1","\x58")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,indicator),HX_HCSTRING("indicator","\xcf","\xe7","\xad","\x93")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,indi_pos),HX_HCSTRING("indi_pos","\x3f","\x76","\xcd","\x03")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,goal),HX_HCSTRING("goal","\x13","\x89","\x69","\x44")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,cur_dist),HX_HCSTRING("cur_dist","\xc5","\x0d","\xfb","\xa9")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(PlayState_obj,indi_map),HX_HCSTRING("indi_map","\x47","\x23","\xcb","\x03")},
	{hx::fsObject /*::zerolib::ZCountDown*/ ,(int)offsetof(PlayState_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayState_obj,health_bar),HX_HCSTRING("health_bar","\x70","\x9d","\xd2","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(void *) &PlayState_obj::i,HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45"),
	HX_HCSTRING("ship","\xbc","\xcf","\x52","\x4c"),
	HX_HCSTRING("dolly","\x4e","\x03","\xc3","\xdd"),
	HX_HCSTRING("cur_track_pixel","\x13","\x0a","\x38","\x3e"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("real_speed","\xa6","\x04","\xe4","\x8e"),
	HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"),
	HX_HCSTRING("layer0","\x3f","\x15","\xb1","\x58"),
	HX_HCSTRING("layer1","\x40","\x15","\xb1","\x58"),
	HX_HCSTRING("layer2","\x41","\x15","\xb1","\x58"),
	HX_HCSTRING("indicator","\xcf","\xe7","\xad","\x93"),
	HX_HCSTRING("indi_pos","\x3f","\x76","\xcd","\x03"),
	HX_HCSTRING("goal","\x13","\x89","\x69","\x44"),
	HX_HCSTRING("cur_dist","\xc5","\x0d","\xfb","\xa9"),
	HX_HCSTRING("indi_map","\x47","\x23","\xcb","\x03"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("health_bar","\x70","\x9d","\xd2","\x10"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("goal_stuff","\x88","\xf7","\xcf","\x8b"),
	HX_HCSTRING("swap_tilemaps","\xf1","\x9a","\x68","\xb9"),
	HX_HCSTRING("check_track","\x94","\x34","\x84","\xbf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::i,"i");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::i,"i");
};

#endif

hx::Class PlayState_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	::String(null()) };

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

