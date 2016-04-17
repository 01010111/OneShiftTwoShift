#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void Watch_obj::__construct(hx::Null< bool >  __o_Closable)
{
HX_STACK_FRAME("flixel.system.debug.watch.Watch","new",0xfeaf943a,"flixel.system.debug.watch.Watch.new","flixel/system/debug/watch/Watch.hx",13,0x446c9b58)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Closable,"Closable")
bool Closable = __o_Closable.Default(false);
{
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/watch/Watch.hx",21,0x446c9b58)
			{
				HX_STACK_LINE(21)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(21)
	this->_quickWatchList = _Function_1_1::Block();
	HX_STACK_LINE(20)
	this->_watchEntries = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(28)
	::flixel::_system::debug::GraphicWatch tmp = ::flixel::_system::debug::GraphicWatch_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = Closable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	super::__construct(HX_HCSTRING("Watch","\x2f","\x86","\x52","\x58"),tmp,(int)0,(int)0,true,null(),tmp1);
	HX_STACK_LINE(30)
	::openfl::_legacy::display::Sprite tmp2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->_names = tmp2;
	HX_STACK_LINE(31)
	::openfl::_legacy::display::Sprite tmp3 = this->_names;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	tmp3->set_x((int)2);
	HX_STACK_LINE(32)
	::openfl::_legacy::display::Sprite tmp4 = this->_names;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	tmp4->set_y((int)15);
	HX_STACK_LINE(33)
	::openfl::_legacy::display::Sprite tmp5 = this->_names;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	this->addChild(tmp5);
	HX_STACK_LINE(35)
	::openfl::_legacy::display::Sprite tmp6 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	this->_values = tmp6;
	HX_STACK_LINE(36)
	::openfl::_legacy::display::Sprite tmp7 = this->_values;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	tmp7->set_x((int)2);
	HX_STACK_LINE(37)
	::openfl::_legacy::display::Sprite tmp8 = this->_values;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	tmp8->set_y((int)15);
	HX_STACK_LINE(38)
	::openfl::_legacy::display::Sprite tmp9 = this->_values;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	this->addChild(tmp9);
	HX_STACK_LINE(40)
	this->removeAll();
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		Dynamic tmp11 = this->removeAll_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		tmp10->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11);
	}
}
;
	return null();
}

//Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(hx::Null< bool >  __o_Closable)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(__o_Closable);
	return _result_;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Watch_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","destroy",0x94d9e5d4,"flixel.system.debug.watch.Watch.destroy","flixel/system/debug/watch/Watch.hx",45,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::openfl::_legacy::display::Sprite tmp = this->_names;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::openfl::_legacy::display::Sprite tmp1 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		this->_names = tmp1;
		HX_STACK_LINE(47)
		::openfl::_legacy::display::Sprite tmp2 = this->_values;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		::openfl::_legacy::display::Sprite tmp3 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		this->_values = tmp3;
		HX_STACK_LINE(48)
		this->_watchEntries = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_watchEntries);
		HX_STACK_LINE(49)
		this->_quickWatchList = null();
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::flixel::_system::frontEnds::SignalFrontEnd tmp4 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			Dynamic tmp5 = this->removeAll_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			tmp4->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
		}
		HX_STACK_LINE(52)
		this->super::destroy();
	}
return null();
}


Void Watch_obj::add( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","add",0xfea5b5fb,"flixel.system.debug.watch.Watch.add","flixel/system/debug/watch/Watch.hx",63,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
		HX_STACK_ARG(DisplayName,"DisplayName")
		HX_STACK_LINE(64)
		bool tmp = (DisplayName == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(65)
			DisplayName = VariableName;
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			Array< ::Dynamic > _g1 = this->_watchEntries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(68)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(68)
				if ((tmp2)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				::flixel::_system::debug::watch::WatchEntry tmp3 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				::flixel::_system::debug::watch::WatchEntry watchEntry = tmp3;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(68)
				++(_g);
				HX_STACK_LINE(70)
				bool tmp4 = (watchEntry->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic ) == AnyObject);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				if ((tmp4)){
					HX_STACK_LINE(70)
					tmp5 = (watchEntry->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ) == VariableName);
				}
				else{
					HX_STACK_LINE(70)
					tmp5 = false;
				}
				HX_STACK_LINE(70)
				if ((tmp5)){
					HX_STACK_LINE(72)
					return null();
				}
			}
		}
		HX_STACK_LINE(77)
		Dynamic tmp1 = AnyObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::String tmp2 = VariableName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::String tmp3 = DisplayName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		this->addEntry(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,add,(void))

Void Watch_obj::updateQuickWatch( ::String Name,Dynamic NewValue){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","updateQuickWatch",0xf0feef71,"flixel.system.debug.watch.Watch.updateQuickWatch","flixel/system/debug/watch/Watch.hx",88,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(NewValue,"NewValue")
		HX_STACK_LINE(90)
		::haxe::ds::StringMap tmp = this->_quickWatchList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::flixel::_system::debug::watch::WatchEntry tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		::flixel::_system::debug::watch::WatchEntry tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		if ((tmp4)){
			HX_STACK_LINE(92)
			::String tmp5 = Name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			::flixel::_system::debug::watch::WatchEntry tmp6 = this->addEntry(null(),null(),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(92)
			::flixel::_system::debug::watch::WatchEntry quickWatch = tmp6;		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(93)
			::haxe::ds::StringMap tmp7 = this->_quickWatchList;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			::String tmp8 = Name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			::flixel::_system::debug::watch::WatchEntry tmp9 = quickWatch;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			tmp7->set(tmp8,tmp9);
		}
		HX_STACK_LINE(97)
		::haxe::ds::StringMap tmp5 = this->_quickWatchList;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		::String tmp6 = Name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		::flixel::_system::debug::watch::WatchEntry tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		::flixel::_system::debug::watch::WatchEntry quickWatch = tmp7;		HX_STACK_VAR(quickWatch,"quickWatch");
		HX_STACK_LINE(98)
		bool tmp8 = (quickWatch != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		if ((tmp8)){
			HX_STACK_LINE(100)
			Dynamic tmp9 = NewValue;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			quickWatch->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,updateQuickWatch,(void))

::flixel::_system::debug::watch::WatchEntry Watch_obj::addEntry( Dynamic object,::String field,::String custom){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","addEntry",0xc2d1a477,"flixel.system.debug.watch.Watch.addEntry","flixel/system/debug/watch/Watch.hx",105,0x446c9b58)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(custom,"custom")
	HX_STACK_LINE(106)
	int tmp = this->_watchEntries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = (tmp * (int)15);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	Float tmp2 = this->getNameWidth();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	Float tmp3 = this->getValueWidth();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	::String tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	::String tmp6 = custom;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	::flixel::_system::debug::watch::WatchEntry tmp7 = ::flixel::_system::debug::watch::WatchEntry_obj::__new(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	::flixel::_system::debug::watch::WatchEntry entry = tmp7;		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(107)
	::openfl::_legacy::display::Sprite tmp8 = this->_names;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(107)
	::openfl::_legacy::text::TextField tmp9 = entry->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(107)
	tmp8->addChild(tmp9);
	HX_STACK_LINE(108)
	::openfl::_legacy::display::Sprite tmp10 = this->_values;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(108)
	::openfl::_legacy::text::TextField tmp11 = entry->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(108)
	tmp10->addChild(tmp11);
	HX_STACK_LINE(109)
	::flixel::_system::debug::watch::WatchEntry tmp12 = entry;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(109)
	this->_watchEntries->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
	HX_STACK_LINE(110)
	::flixel::_system::debug::watch::WatchEntry tmp13 = entry;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(110)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,addEntry,return )

Void Watch_obj::remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","remove",0xa5c13caa,"flixel.system.debug.watch.Watch.remove","flixel/system/debug/watch/Watch.hx",121,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
		HX_STACK_ARG(QuickWatchName,"QuickWatchName")
		HX_STACK_LINE(122)
		bool tmp = (QuickWatchName != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		if ((tmp)){
			HX_STACK_LINE(124)
			::haxe::ds::StringMap tmp1 = this->_quickWatchList;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			::String tmp2 = QuickWatchName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			::flixel::_system::debug::watch::WatchEntry tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			::flixel::_system::debug::watch::WatchEntry quickWatch = tmp3;		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(125)
			bool tmp4 = (quickWatch != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			if ((tmp4)){
				HX_STACK_LINE(127)
				::flixel::_system::debug::watch::WatchEntry tmp5 = quickWatch;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(127)
				::flixel::_system::debug::watch::WatchEntry tmp6 = quickWatch;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(127)
				int tmp7 = this->_watchEntries->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(127)
				this->removeEntry(tmp5,tmp7);
			}
			HX_STACK_LINE(129)
			::haxe::ds::StringMap tmp5 = this->_quickWatchList;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			::String tmp6 = QuickWatchName;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(129)
			tmp5->remove(tmp6);
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(134)
			int tmp1 = this->_watchEntries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(134)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(134)
				if ((tmp3)){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(134)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(136)
				::flixel::_system::debug::watch::WatchEntry tmp5 = this->_watchEntries->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(136)
				::flixel::_system::debug::watch::WatchEntry watchEntry = tmp5;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(137)
				bool tmp6 = (watchEntry != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				if ((tmp7)){
					HX_STACK_LINE(137)
					tmp8 = (watchEntry->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic ) == AnyObject);
				}
				else{
					HX_STACK_LINE(137)
					tmp8 = false;
				}
				HX_STACK_LINE(137)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(137)
				if ((tmp8)){
					HX_STACK_LINE(137)
					bool tmp10 = (VariableName == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(137)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(137)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(137)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(137)
					if ((tmp15)){
						HX_STACK_LINE(137)
						tmp9 = (watchEntry->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ) == VariableName);
					}
					else{
						HX_STACK_LINE(137)
						tmp9 = true;
					}
				}
				else{
					HX_STACK_LINE(137)
					tmp9 = false;
				}
				HX_STACK_LINE(137)
				if ((tmp9)){
					HX_STACK_LINE(139)
					::flixel::_system::debug::watch::WatchEntry tmp10 = watchEntry;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(139)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(139)
					this->removeEntry(tmp10,tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,remove,(void))

Void Watch_obj::removeEntry( ::flixel::_system::debug::watch::WatchEntry Entry,int Index){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","removeEntry",0x44a48368,"flixel.system.debug.watch.Watch.removeEntry","flixel/system/debug/watch/Watch.hx",148,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Entry,"Entry")
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			Array< ::Dynamic > array = this->_watchEntries;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(149)
			::flixel::_system::debug::watch::WatchEntry tmp = Entry;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(149)
			int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			int index = tmp1;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(149)
			bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			if ((tmp2)){
				HX_STACK_LINE(149)
				int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(149)
				::flixel::_system::debug::watch::WatchEntry tmp4 = array->__get(tmp3).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				array[index] = tmp4;
				HX_STACK_LINE(149)
				array->pop().StaticCast< ::flixel::_system::debug::watch::WatchEntry >();
				HX_STACK_LINE(149)
				array;
			}
			else{
				HX_STACK_LINE(149)
				array;
			}
		}
		HX_STACK_LINE(151)
		::openfl::_legacy::display::Sprite tmp = this->_names;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		::openfl::_legacy::text::TextField tmp1 = Entry->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		tmp->removeChild(tmp1);
		HX_STACK_LINE(152)
		::openfl::_legacy::display::Sprite tmp2 = this->_values;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		::openfl::_legacy::text::TextField tmp3 = Entry->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		tmp2->removeChild(tmp3);
		HX_STACK_LINE(153)
		Entry->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(156)
			int tmp4 = this->_watchEntries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(156)
			while((true)){
				HX_STACK_LINE(156)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(156)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(156)
				if ((tmp6)){
					HX_STACK_LINE(156)
					break;
				}
				HX_STACK_LINE(156)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(158)
				::flixel::_system::debug::watch::WatchEntry tmp8 = this->_watchEntries->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(158)
				int tmp9 = (i * (int)15);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(158)
				tmp8->__Field(HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"), hx::paccDynamic )(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,removeEntry,(void))

Void Watch_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","removeAll",0xc23c3a97,"flixel.system.debug.watch.Watch.removeAll","flixel/system/debug/watch/Watch.hx",166,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			Array< ::Dynamic > _g1 = this->_watchEntries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(167)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(167)
				if ((tmp1)){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				::flixel::_system::debug::watch::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				::flixel::_system::debug::watch::WatchEntry watchEntry = tmp2;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(167)
				++(_g);
				HX_STACK_LINE(169)
				::openfl::_legacy::display::Sprite tmp3 = this->_names;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(169)
				::openfl::_legacy::text::TextField tmp4 = watchEntry->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(169)
				tmp3->removeChild(tmp4);
				HX_STACK_LINE(170)
				::openfl::_legacy::display::Sprite tmp5 = this->_values;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(170)
				::openfl::_legacy::text::TextField tmp6 = watchEntry->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(170)
				tmp5->removeChild(tmp6);
				HX_STACK_LINE(171)
				watchEntry->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			}
		}
		HX_STACK_LINE(174)
		this->_watchEntries = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(175)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(175)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			tmp = tmp2;
		}
		HX_STACK_LINE(175)
		this->_quickWatchList = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

Void Watch_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","update",0x283e266f,"flixel.system.debug.watch.Watch.update","flixel/system/debug/watch/Watch.hx",183,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		Array< ::Dynamic > _g1 = this->_watchEntries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(183)
		while((true)){
			HX_STACK_LINE(183)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(183)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			if ((tmp1)){
				HX_STACK_LINE(183)
				break;
			}
			HX_STACK_LINE(183)
			::flixel::_system::debug::watch::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			::flixel::_system::debug::watch::WatchEntry watchEntry = tmp2;		HX_STACK_VAR(watchEntry,"watchEntry");
			HX_STACK_LINE(183)
			++(_g);
			HX_STACK_LINE(184)
			watchEntry->__Field(HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"), hx::paccDynamic )();
		}
	}
return null();
}


Void Watch_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","updateSize",0x79f056d0,"flixel.system.debug.watch.Watch.updateSize","flixel/system/debug/watch/Watch.hx",192,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		int tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		int tmp2 = this->_watchEntries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		int tmp3 = (tmp2 * (int)15);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		int tmp4 = (tmp3 + (int)17);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		bool tmp5 = (tmp1 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		if ((tmp5)){
			HX_STACK_LINE(195)
			int tmp6 = this->_watchEntries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(195)
			int tmp7 = (tmp6 * (int)15);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(195)
			int tmp8 = (tmp7 + (int)17);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(195)
			this->_height = tmp8;
		}
		HX_STACK_LINE(198)
		this->super::updateSize();
		HX_STACK_LINE(200)
		Float tmp6 = this->getNameWidth();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		Float newNameWidth = tmp6;		HX_STACK_VAR(newNameWidth,"newNameWidth");
		HX_STACK_LINE(201)
		::openfl::_legacy::display::Sprite tmp7 = this->_values;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		Float tmp8 = (newNameWidth + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(201)
		tmp7->set_x(tmp8);
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			Array< ::Dynamic > _g1 = this->_watchEntries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(203)
			while((true)){
				HX_STACK_LINE(203)
				bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(203)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(203)
				if ((tmp10)){
					HX_STACK_LINE(203)
					break;
				}
				HX_STACK_LINE(203)
				::flixel::_system::debug::watch::WatchEntry tmp11 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(203)
				::flixel::_system::debug::watch::WatchEntry watchEntry = tmp11;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(203)
				++(_g);
				HX_STACK_LINE(205)
				Float tmp12 = newNameWidth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(205)
				Float tmp13 = this->getValueWidth();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(205)
				watchEntry->__Field(HX_HCSTRING("updateWidth","\x3d","\x1f","\xfb","\xaf"), hx::paccDynamic )(tmp12,tmp13);
			}
		}
	}
return null();
}


Float Watch_obj::getNameWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","getNameWidth",0x2a6c112b,"flixel.system.debug.watch.Watch.getNameWidth","flixel/system/debug/watch/Watch.hx",210,0x446c9b58)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	Float tmp2 = ::Math_obj::min((int)100,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getNameWidth,return )

Float Watch_obj::getValueWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","getValueWidth",0x95a64165,"flixel.system.debug.watch.Watch.getValueWidth","flixel/system/debug/watch/Watch.hx",215,0x446c9b58)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	Float tmp1 = this->getNameWidth();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	Float tmp3 = (tmp2 - (int)10);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(216)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getValueWidth,return )

int Watch_obj::LINE_HEIGHT;


Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(_names,"_names");
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_watchEntries,"_watchEntries");
	HX_MARK_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_names,"_names");
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_watchEntries,"_watchEntries");
	HX_VISIT_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Watch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { return _names; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEntry") ) { return addEntry_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return removeEntry_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getNameWidth") ) { return getNameWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_watchEntries") ) { return _watchEntries; }
		if (HX_FIELD_EQ(inName,"getValueWidth") ) { return getValueWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { return _quickWatchList; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateQuickWatch") ) { return updateQuickWatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { _names=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_watchEntries") ) { _watchEntries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { _quickWatchList=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_names","\x09","\xd7","\x6b","\x92"));
	outFields->push(HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe"));
	outFields->push(HX_HCSTRING("_watchEntries","\xa0","\xc9","\xf9","\x7e"));
	outFields->push(HX_HCSTRING("_quickWatchList","\x3f","\x0e","\xf2","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Watch_obj,_names),HX_HCSTRING("_names","\x09","\xd7","\x6b","\x92")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Watch_obj,_values),HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Watch_obj,_watchEntries),HX_HCSTRING("_watchEntries","\xa0","\xc9","\xf9","\x7e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Watch_obj,_quickWatchList),HX_HCSTRING("_quickWatchList","\x3f","\x0e","\xf2","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Watch_obj::LINE_HEIGHT,HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_names","\x09","\xd7","\x6b","\x92"),
	HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe"),
	HX_HCSTRING("_watchEntries","\xa0","\xc9","\xf9","\x7e"),
	HX_HCSTRING("_quickWatchList","\x3f","\x0e","\xf2","\x22"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("updateQuickWatch","\x8b","\x93","\x1f","\x3e"),
	HX_HCSTRING("addEntry","\x91","\x9e","\xe3","\xe9"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeEntry","\x8e","\x55","\xba","\x6e"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("getNameWidth","\x45","\x20","\x6e","\xd3"),
	HX_HCSTRING("getValueWidth","\x0b","\x69","\x71","\xce"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#endif

hx::Class Watch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea"),
	::String(null()) };

void Watch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.Watch","\x48","\xaf","\x96","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Watch_obj >;
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

void Watch_obj::__boot()
{
	LINE_HEIGHT= (int)15;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
