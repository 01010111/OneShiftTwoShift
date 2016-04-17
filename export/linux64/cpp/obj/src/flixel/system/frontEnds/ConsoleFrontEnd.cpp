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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
namespace flixel{
namespace _system{
namespace frontEnds{

Void ConsoleFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.ConsoleFrontEnd","new",0x926b3ea1,"flixel.system.frontEnds.ConsoleFrontEnd.new","flixel/system/frontEnds/ConsoleFrontEnd.hx",5,0x0ff3a650)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->autoPause = true;
}
;
	return null();
}

//ConsoleFrontEnd_obj::~ConsoleFrontEnd_obj() { }

Dynamic ConsoleFrontEnd_obj::__CreateEmpty() { return  new ConsoleFrontEnd_obj; }
hx::ObjectPtr< ConsoleFrontEnd_obj > ConsoleFrontEnd_obj::__new()
{  hx::ObjectPtr< ConsoleFrontEnd_obj > _result_ = new ConsoleFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConsoleFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleFrontEnd_obj > _result_ = new ConsoleFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void ConsoleFrontEnd_obj::registerFunction( ::String FunctionAlias,Dynamic Function){
{
		HX_STACK_FRAME("flixel.system.frontEnds.ConsoleFrontEnd","registerFunction",0xa673a5ba,"flixel.system.frontEnds.ConsoleFrontEnd.registerFunction","flixel/system/frontEnds/ConsoleFrontEnd.hx",21,0x0ff3a650)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FunctionAlias,"FunctionAlias")
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(21)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		::flixel::_system::debug::console::Console tmp1 = tmp->debugger->__Field(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::flixel::_system::debug::console::Console _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			Dynamic value = Function;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(21)
			::String tmp2 = FunctionAlias;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			_this->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
		}
		HX_STACK_LINE(21)
		bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		if ((tmp2)){
			HX_STACK_LINE(21)
			::String tmp3 = FunctionAlias;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			_this->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerFunction,(void))

Void ConsoleFrontEnd_obj::registerObject( ::String ObjectAlias,Dynamic AnyObject){
{
		HX_STACK_FRAME("flixel.system.frontEnds.ConsoleFrontEnd","registerObject",0x557f2ce1,"flixel.system.frontEnds.ConsoleFrontEnd.registerObject","flixel/system/frontEnds/ConsoleFrontEnd.hx",34,0x0ff3a650)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectAlias,"ObjectAlias")
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_LINE(34)
		Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(34)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::flixel::_system::debug::console::Console tmp1 = tmp->debugger->__Field(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::String tmp2 = ObjectAlias;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		tmp1->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerObject,(void))

Void ConsoleFrontEnd_obj::registerClass( ::hx::Class cl){
{
		HX_STACK_FRAME("flixel.system.frontEnds.ConsoleFrontEnd","registerClass",0x3d276456,"flixel.system.frontEnds.ConsoleFrontEnd.registerClass","flixel/system/frontEnds/ConsoleFrontEnd.hx",46,0x0ff3a650)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cl,"cl")
		HX_STACK_LINE(46)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
			HX_STACK_LINE(46)
			::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			if ((tmp2)){
				HX_STACK_LINE(46)
				cl1 = cl;
			}
			else{
				HX_STACK_LINE(46)
				::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(46)
				cl1 = tmp4;
			}
			HX_STACK_LINE(46)
			::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			::String s = tmp4;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(46)
			bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			if ((tmp5)){
				HX_STACK_LINE(46)
				::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				s = tmp7;
				HX_STACK_LINE(46)
				int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(46)
				int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				s = tmp10;
			}
			HX_STACK_LINE(46)
			tmp = s;
		}
		HX_STACK_LINE(46)
		::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			Dynamic value = cl;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(46)
			::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			::flixel::_system::debug::console::Console tmp2 = tmp1->debugger->__Field(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			::String tmp3 = objectAlias;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			tmp2->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,registerClass,(void))


ConsoleFrontEnd_obj::ConsoleFrontEnd_obj()
{
}

Dynamic ConsoleFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return autoPause; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerClass") ) { return registerClass_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { return registerObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return registerFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ConsoleFrontEnd_obj,autoPause),HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerClass","\xd5","\x3a","\xc1","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleFrontEnd_obj::__mClass;

void ConsoleFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.ConsoleFrontEnd","\x2f","\x5a","\x25","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleFrontEnd_obj >;
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

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
