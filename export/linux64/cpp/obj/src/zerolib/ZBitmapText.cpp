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
#ifndef INCLUDED_flixel_graphics_frames_FlxBitmapFont
#include <flixel/graphics/frames/FlxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_text_FlxBitmapText
#include <flixel/text/FlxBitmapText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_zerolib_ZBitmapText
#include <zerolib/ZBitmapText.h>
#endif
namespace zerolib{

Void ZBitmapText_obj::__construct(Float X,Float Y,::String LETTERS,::flixel::math::FlxPoint LETTERSIZE,Dynamic FONTGRAPHIC,::String ALIGN,hx::Null< int >  __o_WIDTH,hx::Null< int >  __o_LINESPACING,hx::Null< int >  __o_LETTERSPACING)
{
HX_STACK_FRAME("zerolib.ZBitmapText","new",0x347cafd7,"zerolib.ZBitmapText.new","zerolib/ZBitmapText.hx",28,0x0a4ff73a)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(LETTERS,"LETTERS")
HX_STACK_ARG(LETTERSIZE,"LETTERSIZE")
HX_STACK_ARG(FONTGRAPHIC,"FONTGRAPHIC")
HX_STACK_ARG(ALIGN,"ALIGN")
HX_STACK_ARG(__o_WIDTH,"WIDTH")
HX_STACK_ARG(__o_LINESPACING,"LINESPACING")
HX_STACK_ARG(__o_LETTERSPACING,"LETTERSPACING")
int WIDTH = __o_WIDTH.Default(-1);
int LINESPACING = __o_LINESPACING.Default(0);
int LETTERSPACING = __o_LETTERSPACING.Default(0);
{
	HX_STACK_LINE(29)
	Dynamic tmp = FONTGRAPHIC;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1 = LETTERS;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	::flixel::math::FlxPoint tmp2 = LETTERSIZE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	::flixel::graphics::frames::FlxBitmapFont tmp3 = ::flixel::graphics::frames::FlxBitmapFont_obj::fromMonospace(tmp,tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	::flixel::graphics::frames::FlxBitmapFont font = tmp3;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(30)
	::flixel::graphics::frames::FlxBitmapFont tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	super::__construct(tmp4);
	HX_STACK_LINE(31)
	this->set_autoSize(false);
	HX_STACK_LINE(32)
	int tmp5 = WIDTH;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	if ((tmp7)){
		HX_STACK_LINE(32)
		int tmp8 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(32)
		Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(32)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(32)
		int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(32)
		this->set_fieldWidth(tmp11);
	}
	else{
		HX_STACK_LINE(32)
		int tmp8 = WIDTH;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(32)
		this->set_fieldWidth(tmp8);
	}
	HX_STACK_LINE(33)
	bool tmp8 = (ALIGN != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	if ((tmp8)){
		HX_STACK_LINE(33)
		::String tmp9 = ALIGN;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		this->set_alignment(tmp9);
	}
	else{
		HX_STACK_LINE(33)
		this->set_alignment(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	}
	HX_STACK_LINE(34)
	int tmp9 = LINESPACING;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	this->set_lineSpacing(tmp9);
	HX_STACK_LINE(35)
	int tmp10 = LETTERSPACING;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	this->set_letterSpacing(tmp10);
	HX_STACK_LINE(36)
	Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(36)
	Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(36)
	this->setPosition(tmp11,tmp12);
	HX_STACK_LINE(37)
	::flixel::math::FlxPoint tmp13 = this->scrollFactor;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(37)
	tmp13->set(null(),null());
}
;
	return null();
}

//ZBitmapText_obj::~ZBitmapText_obj() { }

Dynamic ZBitmapText_obj::__CreateEmpty() { return  new ZBitmapText_obj; }
hx::ObjectPtr< ZBitmapText_obj > ZBitmapText_obj::__new(Float X,Float Y,::String LETTERS,::flixel::math::FlxPoint LETTERSIZE,Dynamic FONTGRAPHIC,::String ALIGN,hx::Null< int >  __o_WIDTH,hx::Null< int >  __o_LINESPACING,hx::Null< int >  __o_LETTERSPACING)
{  hx::ObjectPtr< ZBitmapText_obj > _result_ = new ZBitmapText_obj();
	_result_->__construct(X,Y,LETTERS,LETTERSIZE,FONTGRAPHIC,ALIGN,__o_WIDTH,__o_LINESPACING,__o_LETTERSPACING);
	return _result_;}

Dynamic ZBitmapText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZBitmapText_obj > _result_ = new ZBitmapText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}


ZBitmapText_obj::ZBitmapText_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZBitmapText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZBitmapText_obj::__mClass,"__mClass");
};

#endif

hx::Class ZBitmapText_obj::__mClass;

void ZBitmapText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zerolib.ZBitmapText","\x65","\x78","\xac","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZBitmapText_obj >;
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
