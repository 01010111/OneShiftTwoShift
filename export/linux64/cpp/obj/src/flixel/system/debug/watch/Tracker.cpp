#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void Tracker_obj::__construct(::flixel::_system::debug::watch::TrackerProfile Profile,Dynamic ObjectOrClass,::String WindowTitle)
{
HX_STACK_FRAME("flixel.system.debug.watch.Tracker","new",0xf6eed663,"flixel.system.debug.watch.Tracker.new","flixel/system/debug/watch/Tracker.hx",148,0x14368dcf)
HX_STACK_THIS(this)
HX_STACK_ARG(Profile,"Profile")
HX_STACK_ARG(ObjectOrClass,"ObjectOrClass")
HX_STACK_ARG(WindowTitle,"WindowTitle")
{
	HX_STACK_LINE(149)
	super::__construct(true);
	HX_STACK_LINE(151)
	::flixel::_system::debug::watch::Tracker_obj::initProfiles();
	HX_STACK_LINE(152)
	this->_object = ObjectOrClass;
	HX_STACK_LINE(153)
	Dynamic tmp = this->_object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::flixel::_system::debug::watch::Tracker_obj::objectsBeingTracked->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(155)
	::flixel::_system::debug::watch::TrackerProfile tmp1 = Profile;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	this->initWatchEntries(tmp1);
	HX_STACK_LINE(157)
	::openfl::_legacy::text::TextField tmp2 = this->_title;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	bool tmp3 = (WindowTitle == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	if ((tmp3)){
		HX_STACK_LINE(157)
		Dynamic tmp5 = this->_object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		Dynamic Obj = tmp5;		HX_STACK_VAR(Obj,"Obj");
		HX_STACK_LINE(157)
		::hx::Class cl;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(157)
		Dynamic tmp6 = Obj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		if ((tmp7)){
			HX_STACK_LINE(157)
			cl = ((::hx::Class)(Obj));
		}
		else{
			HX_STACK_LINE(157)
			Dynamic tmp8 = Obj;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(157)
			::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(157)
			cl = tmp9;
		}
		HX_STACK_LINE(157)
		::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		::String s = tmp9;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(157)
		bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		if ((tmp10)){
			HX_STACK_LINE(157)
			::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(157)
			::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(157)
			s = tmp12;
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(157)
				int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(157)
				::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(157)
				s = tmp15;
			}
		}
		HX_STACK_LINE(157)
		tmp4 = s;
	}
	else{
		HX_STACK_LINE(157)
		tmp4 = WindowTitle;
	}
	HX_STACK_LINE(157)
	tmp2->set_text(tmp4);
	HX_STACK_LINE(158)
	this->set_visible(true);
	HX_STACK_LINE(160)
	::flixel::_system::debug::watch::WatchEntry tmp5 = ::flixel::util::FlxArrayUtil_obj::last(this->_watchEntries);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	Float tmp6 = tmp5->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic )->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(160)
	Float lastWatchEntryY = tmp6;		HX_STACK_VAR(lastWatchEntryY,"lastWatchEntryY");
	HX_STACK_LINE(161)
	Float tmp7 = (lastWatchEntryY + (int)30);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(161)
	this->resize((int)200,tmp7);
	HX_STACK_LINE(164)
	int tmp8 = ::flixel::_system::debug::watch::Tracker_obj::_numTrackerWindows;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int tmp9 = (tmp8 * (int)80);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(164)
	this->set_x(tmp9);
	HX_STACK_LINE(165)
	int tmp10 = ::flixel::_system::debug::watch::Tracker_obj::_numTrackerWindows;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(165)
	int tmp11 = (tmp10 * (int)25);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(165)
	int tmp12 = (tmp11 + (int)20);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(165)
	this->set_y(tmp12);
	HX_STACK_LINE(166)
	(::flixel::_system::debug::watch::Tracker_obj::_numTrackerWindows)++;
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		::flixel::_system::frontEnds::SignalFrontEnd tmp13 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(168)
		Dynamic tmp14 = this->close_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(168)
		tmp13->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp14);
	}
}
;
	return null();
}

//Tracker_obj::~Tracker_obj() { }

Dynamic Tracker_obj::__CreateEmpty() { return  new Tracker_obj; }
hx::ObjectPtr< Tracker_obj > Tracker_obj::__new(::flixel::_system::debug::watch::TrackerProfile Profile,Dynamic ObjectOrClass,::String WindowTitle)
{  hx::ObjectPtr< Tracker_obj > _result_ = new Tracker_obj();
	_result_->__construct(Profile,ObjectOrClass,WindowTitle);
	return _result_;}

Dynamic Tracker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tracker_obj > _result_ = new Tracker_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Tracker_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Tracker","destroy",0x264ff07d,"flixel.system.debug.watch.Tracker.destroy","flixel/system/debug/watch/Tracker.hx",172,0x14368dcf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(173)
			Dynamic tmp1 = this->close_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(173)
			tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(174)
		(::flixel::_system::debug::watch::Tracker_obj::_numTrackerWindows)--;
		HX_STACK_LINE(175)
		Dynamic tmp = this->_object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		::flixel::_system::debug::watch::Tracker_obj::objectsBeingTracked->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(176)
		this->_object = null();
		HX_STACK_LINE(177)
		this->super::destroy();
	}
return null();
}


::flixel::_system::debug::watch::TrackerProfile Tracker_obj::findProfileByClass( ::hx::Class ObjectClass){
	HX_STACK_FRAME("flixel.system.debug.watch.Tracker","findProfileByClass",0x1c23782e,"flixel.system.debug.watch.Tracker.findProfileByClass","flixel/system/debug/watch/Tracker.hx",181,0x14368dcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		Array< ::Dynamic > _g1 = ::flixel::_system::debug::watch::Tracker_obj::profiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(182)
		while((true)){
			HX_STACK_LINE(182)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			if ((tmp1)){
				HX_STACK_LINE(182)
				break;
			}
			HX_STACK_LINE(182)
			::flixel::_system::debug::watch::TrackerProfile tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::TrackerProfile >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			::flixel::_system::debug::watch::TrackerProfile profile = tmp2;		HX_STACK_VAR(profile,"profile");
			HX_STACK_LINE(182)
			++(_g);
			HX_STACK_LINE(184)
			bool tmp3 = (profile->__Field(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"), hx::paccDynamic ) == ObjectClass);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			if ((tmp3)){
				HX_STACK_LINE(186)
				::flixel::_system::debug::watch::TrackerProfile tmp4 = profile;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(186)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfileByClass,return )

Void Tracker_obj::initWatchEntries( ::flixel::_system::debug::watch::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Tracker","initWatchEntries",0xac4e4a0e,"flixel.system.debug.watch.Tracker.initWatchEntries","flixel/system/debug/watch/Tracker.hx",193,0x14368dcf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(194)
		bool tmp = (Profile != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		if ((tmp)){
			HX_STACK_LINE(196)
			::flixel::_system::debug::watch::TrackerProfile tmp1 = Profile;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(196)
			this->addExtensions(tmp1);
			HX_STACK_LINE(197)
			this->addVariables(Profile->__Field(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"), hx::paccDynamic ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,initWatchEntries,(void))

Void Tracker_obj::addExtensions( ::flixel::_system::debug::watch::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Tracker","addExtensions",0x13338d58,"flixel.system.debug.watch.Tracker.addExtensions","flixel/system/debug/watch/Tracker.hx",202,0x14368dcf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(203)
		bool tmp = (Profile->__Field(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		if ((tmp)){
			HX_STACK_LINE(205)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			Array< ::Dynamic > _g1 = Profile->__Field(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(205)
			while((true)){
				HX_STACK_LINE(205)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(205)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(205)
				if ((tmp2)){
					HX_STACK_LINE(205)
					break;
				}
				HX_STACK_LINE(205)
				::hx::Class tmp3 = _g1->__get(_g).StaticCast< ::hx::Class >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(205)
				::hx::Class extension = tmp3;		HX_STACK_VAR(extension,"extension");
				HX_STACK_LINE(205)
				++(_g);
				HX_STACK_LINE(207)
				bool tmp4 = (extension != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(207)
				if ((tmp4)){
					HX_STACK_LINE(209)
					::hx::Class tmp5 = extension;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(209)
					::flixel::_system::debug::watch::TrackerProfile tmp6 = this->findProfileByClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(209)
					::flixel::_system::debug::watch::TrackerProfile extensionProfile = tmp6;		HX_STACK_VAR(extensionProfile,"extensionProfile");
					HX_STACK_LINE(210)
					bool tmp7 = (extensionProfile != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(210)
					if ((tmp7)){
						HX_STACK_LINE(212)
						this->addVariables(extensionProfile->__Field(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"), hx::paccDynamic ));
						HX_STACK_LINE(213)
						::flixel::_system::debug::watch::TrackerProfile tmp8 = extensionProfile;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(213)
						this->addExtensions(tmp8);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addExtensions,(void))

Void Tracker_obj::addVariables( Array< ::String > Variables){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Tracker","addVariables",0x5f6aa5f3,"flixel.system.debug.watch.Tracker.addVariables","flixel/system/debug/watch/Tracker.hx",221,0x14368dcf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Variables,"Variables")
		HX_STACK_LINE(222)
		bool tmp = (Variables != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		if ((tmp)){
			HX_STACK_LINE(224)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			while((true)){
				HX_STACK_LINE(224)
				bool tmp1 = (_g < Variables->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(224)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(224)
				if ((tmp2)){
					HX_STACK_LINE(224)
					break;
				}
				HX_STACK_LINE(224)
				::String tmp3 = Variables->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(224)
				::String variable = tmp3;		HX_STACK_VAR(variable,"variable");
				HX_STACK_LINE(224)
				++(_g);
				HX_STACK_LINE(226)
				Dynamic tmp4 = this->_object;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(226)
				::String tmp5 = variable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				::String tmp6 = variable;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				this->add(tmp4,tmp5,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addVariables,(void))

Array< ::Dynamic > Tracker_obj::profiles;

cpp::ArrayBase Tracker_obj::objectsBeingTracked;

int Tracker_obj::_numTrackerWindows;

Void Tracker_obj::addProfile( ::flixel::_system::debug::watch::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Tracker","addProfile",0x17dc8565,"flixel.system.debug.watch.Tracker.addProfile","flixel/system/debug/watch/Tracker.hx",54,0x14368dcf)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(55)
		bool tmp = (Profile != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(57)
			::flixel::_system::debug::watch::Tracker_obj::initProfiles();
			HX_STACK_LINE(58)
			::flixel::_system::debug::watch::TrackerProfile tmp1 = Profile;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addProfile,(void))

::flixel::_system::debug::watch::TrackerProfile Tracker_obj::findProfile( Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.watch.Tracker","findProfile",0x9e194af3,"flixel.system.debug.watch.Tracker.findProfile","flixel/system/debug/watch/Tracker.hx",63,0x14368dcf)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(64)
	::flixel::_system::debug::watch::Tracker_obj::initProfiles();
	HX_STACK_LINE(66)
	::flixel::_system::debug::watch::TrackerProfile lastMatchingProfile = null();		HX_STACK_VAR(lastMatchingProfile,"lastMatchingProfile");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		Array< ::Dynamic > _g1 = ::flixel::_system::debug::watch::Tracker_obj::profiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			if ((tmp1)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			::flixel::_system::debug::watch::TrackerProfile tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::TrackerProfile >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			::flixel::_system::debug::watch::TrackerProfile profile = tmp2;		HX_STACK_VAR(profile,"profile");
			HX_STACK_LINE(67)
			++(_g);
			HX_STACK_LINE(69)
			Dynamic tmp3 = Object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			::hx::Class tmp4 = profile->__Field(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			Dynamic tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			::hx::Class tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			bool tmp7 = ::Std_obj::is(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			if ((tmp8)){
				HX_STACK_LINE(69)
				tmp9 = (Object == profile->__Field(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(69)
				tmp9 = true;
			}
			HX_STACK_LINE(69)
			if ((tmp9)){
				HX_STACK_LINE(71)
				lastMatchingProfile = profile;
			}
		}
	}
	HX_STACK_LINE(74)
	::flixel::_system::debug::watch::TrackerProfile tmp = lastMatchingProfile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfile,return )

Void Tracker_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Tracker","onStateSwitch",0xc2667bc9,"flixel.system.debug.watch.Tracker.onStateSwitch","flixel/system/debug/watch/Tracker.hx",79,0x14368dcf)
		HX_STACK_LINE(79)
		::flixel::_system::debug::watch::Tracker_obj::_numTrackerWindows = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,onStateSwitch,(void))

Void Tracker_obj::initProfiles( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Tracker","initProfiles",0x6f40e3f7,"flixel.system.debug.watch.Tracker.initProfiles","flixel/system/debug/watch/Tracker.hx",83,0x14368dcf)
		HX_STACK_LINE(84)
		bool tmp = (::flixel::_system::debug::watch::Tracker_obj::profiles == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		if ((tmp)){
			HX_STACK_LINE(86)
			::flixel::_system::debug::watch::Tracker_obj::profiles = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxG >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")).Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")).Add(HX_HCSTRING("worldBounds.x","\xb1","\xea","\x53","\xfe")).Add(HX_HCSTRING("worldBounds.y","\xb2","\xea","\x53","\xfe")).Add(HX_HCSTRING("worldBounds.width","\xbf","\xb0","\xca","\x83")).Add(HX_HCSTRING("worldBounds.height","\x0e","\x6f","\xdf","\x83")).Add(HX_HCSTRING("worldDivisions","\xf4","\x19","\x32","\xa0")).Add(HX_HCSTRING("updateFramerate","\x44","\xb6","\xd6","\x9d")).Add(HX_HCSTRING("drawFramerate","\xe9","\xf8","\x72","\xad")).Add(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")).Add(HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24")).Add(HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b")).Add(HX_HCSTRING("fixedTimestep","\x6d","\x87","\xbc","\x49")).Add(HX_HCSTRING("timeScale","\x3d","\xa3","\xbf","\x2d")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(88)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(88)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(88)
				if ((tmp2)){
					HX_STACK_LINE(88)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(88)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(88)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::math::FlxPoint >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00")).Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(91)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(91)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(91)
				if ((tmp2)){
					HX_STACK_LINE(91)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(91)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(91)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::math::FlxRect >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")).Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::math::FlxPoint >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(92)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(92)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(92)
				if ((tmp2)){
					HX_STACK_LINE(92)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(92)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(92)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxBasic >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")).Add(HX_HCSTRING("alive","\xcd","\x63","\x91","\x21")).Add(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(94)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(94)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				if ((tmp2)){
					HX_STACK_LINE(94)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(94)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(94)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxObject >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")).Add(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")).Add(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")).Add(HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::math::FlxRect >()).Add(hx::ClassOf< ::flixel::FlxBasic >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(95)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(95)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				if ((tmp2)){
					HX_STACK_LINE(95)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(95)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(95)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::tile::FlxTilemap >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40")).Add(HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4")).Add(HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97")).Add(HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16")).Add(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")).Add(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxObject >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(97)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(97)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(97)
				if ((tmp2)){
					HX_STACK_LINE(97)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(97)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(97)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxSprite >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad")).Add(HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0")).Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")).Add(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")).Add(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")).Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxObject >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(98)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(98)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				if ((tmp2)){
					HX_STACK_LINE(98)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(98)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(98)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::ui::FlxTypedButton >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")).Add(HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(99)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(99)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				if ((tmp2)){
					HX_STACK_LINE(99)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(99)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(99)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::ui::FlxBar >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00")).Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")).Add(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4")).Add(HX_HCSTRING("pct","\x21","\x53","\x55","\x00")).Add(HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b")).Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(100)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				if ((tmp2)){
					HX_STACK_LINE(100)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(100)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(100)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::text::FlxText >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")).Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")).Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")).Add(HX_HCSTRING("embedded","\x8a","\x19","\x62","\xde")).Add(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")).Add(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")).Add(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")).Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")).Add(HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(101)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(101)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(101)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::group::FlxTypedGroup >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")).Add(HX_HCSTRING("members.length","\xdb","\xfb","\xd2","\x52")).Add(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxBasic >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(104)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(104)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				if ((tmp2)){
					HX_STACK_LINE(104)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(104)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(104)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::group::FlxTypedSpriteGroup >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()).Add(hx::ClassOf< ::flixel::group::FlxTypedGroup >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(105)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(105)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				if ((tmp2)){
					HX_STACK_LINE(105)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(105)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(105)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxState >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50")).Add(HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2")).Add(HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e")).Add(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::group::FlxTypedGroup >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(106)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(106)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				if ((tmp2)){
					HX_STACK_LINE(106)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(106)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(106)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxCamera >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")).Add(HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9")).Add(HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9")).Add(HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d")).Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")).Add(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")).Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxBasic >()).Add(hx::ClassOf< ::flixel::math::FlxRect >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(108)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(108)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(108)
				if ((tmp2)){
					HX_STACK_LINE(108)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(108)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(108)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::tweens::FlxTween >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")).Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")).Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")).Add(HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27")).Add(HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c")).Add(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3")).Add(HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(111)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(111)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				if ((tmp2)){
					HX_STACK_LINE(111)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(111)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(111)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxPath >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("speed","\x87","\x97","\x69","\x81")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")).Add(HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71")).Add(HX_HCSTRING("nodeIndex","\xb0","\x79","\x4a","\x62")).Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(114)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(114)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(114)
				if ((tmp2)){
					HX_STACK_LINE(114)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(114)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(114)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxTimer >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")).Add(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78")).Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")).Add(HX_HCSTRING("timeLeft","\xb4","\x8a","\x11","\xe8")).Add(HX_HCSTRING("elapsedTime","\x69","\x5e","\xcd","\xc6")).Add(HX_HCSTRING("loopsLeft","\x36","\x99","\x1c","\x04")).Add(HX_HCSTRING("elapsedLoops","\xb3","\x6f","\xa9","\x95")).Add(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(115)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(115)
				if ((tmp2)){
					HX_STACK_LINE(115)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(115)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(115)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::animation::FlxAnimationController >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1")).Add(HX_HCSTRING("frameName","\x18","\x31","\x80","\x36")).Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")).Add(HX_HCSTRING("paused","\xae","\x40","\x84","\xef")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")).Add(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(117)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(117)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(117)
				if ((tmp2)){
					HX_STACK_LINE(117)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(117)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(117)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::effects::particles::FlxTypedEmitter >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("emitting","\xc1","\x90","\x7b","\x58")).Add(HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb")).Add(HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::group::FlxTypedGroup >()).Add(hx::ClassOf< ::flixel::math::FlxRect >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(119)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				if ((tmp2)){
					HX_STACK_LINE(119)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(119)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(119)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::mouse::FlxMouse >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")).Add(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")).Add(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")).Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")).Add(HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9")).Add(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")).Add(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")).Add(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")).Add(HX_HCSTRING("pressedMiddle","\x97","\xbf","\x58","\x17")).Add(HX_HCSTRING("justPressedMiddle","\xcb","\x59","\xd3","\xc4")).Add(HX_HCSTRING("justReleasedMiddle","\x3e","\xcf","\x55","\xd7")).Add(HX_HCSTRING("pressedRight","\xda","\xdd","\x81","\x58")).Add(HX_HCSTRING("justPressedRight","\x26","\x86","\x9a","\xc0")).Add(HX_HCSTRING("justReleasedRight","\x13","\xc0","\x4a","\x68")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::math::FlxPoint >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(123)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(123)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(123)
				if ((tmp2)){
					HX_STACK_LINE(123)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(123)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(123)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::gamepad::FlxGamepad >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")).Add(HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58")).Add(HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00")).Add(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")).Add(HX_HCSTRING("dpadUp","\xaa","\xeb","\xfa","\xb8")).Add(HX_HCSTRING("dpadDown","\x71","\xaf","\x0f","\x13")).Add(HX_HCSTRING("dpadLeft","\x16","\xbf","\x51","\x18")).Add(HX_HCSTRING("dpadRight","\xed","\x81","\x42","\xa6")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(131)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(131)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(131)
				if ((tmp2)){
					HX_STACK_LINE(131)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(131)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(131)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::FlxSwipe >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")).Add(HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf")).Add(HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82")).Add(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")).Add(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(135)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(135)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(135)
				if ((tmp2)){
					HX_STACK_LINE(135)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(135)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(135)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::display::DisplayObject >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("z","\x7a","\x00","\x00","\x00")).Add(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")).Add(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")).Add(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")).Add(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")).Add(HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c")).Add(HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c")).Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::math::FlxRect >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(138)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(138)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(138)
				if ((tmp2)){
					HX_STACK_LINE(138)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(138)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(138)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::geom::Point >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::math::FlxPoint >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(139)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(139)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(139)
				if ((tmp2)){
					HX_STACK_LINE(139)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(139)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(139)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::geom::Rectangle >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::math::FlxRect >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(140)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(140)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(140)
				if ((tmp2)){
					HX_STACK_LINE(140)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(140)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(140)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::flixel::_system::debug::watch::TrackerProfile tmp1 = ::flixel::_system::debug::watch::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::geom::Matrix >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00")).Add(HX_HCSTRING("b","\x62","\x00","\x00","\x00")).Add(HX_HCSTRING("c","\x63","\x00","\x00","\x00")).Add(HX_HCSTRING("d","\x64","\x00","\x00","\x00")).Add(HX_HCSTRING("tx","\x84","\x65","\x00","\x00")).Add(HX_HCSTRING("ty","\x85","\x65","\x00","\x00")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				::flixel::_system::debug::watch::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(141)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(141)
				if ((tmp2)){
					HX_STACK_LINE(141)
					::flixel::_system::debug::watch::Tracker_obj::initProfiles();
					HX_STACK_LINE(141)
					::flixel::_system::debug::watch::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(141)
					::flixel::_system::debug::watch::Tracker_obj::profiles->push(tmp3);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,initProfiles,(void))


Tracker_obj::Tracker_obj()
{
}

void Tracker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tracker);
	HX_MARK_MEMBER_NAME(_object,"_object");
	::flixel::_system::debug::watch::Watch_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tracker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	::flixel::_system::debug::watch::Watch_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tracker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addVariables") ) { return addVariables_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addExtensions") ) { return addExtensions_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initWatchEntries") ) { return initWatchEntries_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"findProfileByClass") ) { return findProfileByClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tracker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { outValue = profiles; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addProfile") ) { outValue = addProfile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findProfile") ) { outValue = findProfile_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initProfiles") ) { outValue = initProfiles_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { outValue = onStateSwitch_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { outValue = _numTrackerWindows; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { outValue = objectsBeingTracked; return true;  }
	}
	return false;
}

Dynamic Tracker_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tracker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { profiles=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { _numTrackerWindows=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { objectsBeingTracked=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void Tracker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tracker_obj,_object),HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Tracker_obj::profiles,HX_HCSTRING("profiles","\x2a","\xbb","\xd6","\xec")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Tracker_obj::objectsBeingTracked,HX_HCSTRING("objectsBeingTracked","\x5f","\x25","\x3a","\xd9")},
	{hx::fsInt,(void *) &Tracker_obj::_numTrackerWindows,HX_HCSTRING("_numTrackerWindows","\x52","\x53","\xbe","\x06")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("findProfileByClass","\xd1","\x42","\xd7","\xf5"),
	HX_HCSTRING("initWatchEntries","\xf1","\x15","\xcd","\x8f"),
	HX_HCSTRING("addExtensions","\x95","\xc5","\xb9","\xf3"),
	HX_HCSTRING("addVariables","\x56","\x04","\xb7","\x81"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_MARK_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_MARK_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_VISIT_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_VISIT_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#endif

hx::Class Tracker_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("profiles","\x2a","\xbb","\xd6","\xec"),
	HX_HCSTRING("objectsBeingTracked","\x5f","\x25","\x3a","\xd9"),
	HX_HCSTRING("_numTrackerWindows","\x52","\x53","\xbe","\x06"),
	HX_HCSTRING("addProfile","\x08","\x75","\xd3","\x5a"),
	HX_HCSTRING("findProfile","\xf0","\x09","\x34","\xf3"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	HX_HCSTRING("initProfiles","\x5a","\x42","\x8d","\x91"),
	::String(null()) };

void Tracker_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.Tracker","\xf1","\x68","\xcd","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tracker_obj::__GetStatic;
	__mClass->mSetStaticField = &Tracker_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tracker_obj >;
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

void Tracker_obj::__boot()
{
	objectsBeingTracked= cpp::ArrayBase_obj::__new();
	_numTrackerWindows= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
