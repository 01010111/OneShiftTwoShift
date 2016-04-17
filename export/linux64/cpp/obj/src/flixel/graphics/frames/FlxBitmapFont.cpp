#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxBitmapFont
#include <flixel/graphics/frames/FlxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxBitmapFont_obj::__construct(::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint border)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","new",0x6c52b9eb,"flixel.graphics.frames.FlxBitmapFont.new","flixel/graphics/frames/FlxBitmapFont.hx",23,0xde348206)
HX_STACK_THIS(this)
HX_STACK_ARG(frame,"frame")
HX_STACK_ARG(border,"border")
{
	HX_STACK_LINE(65)
	this->spaceWidth = (int)0;
	HX_STACK_LINE(60)
	this->minOffsetX = (int)0;
	HX_STACK_LINE(54)
	this->numLetters = (int)0;
	HX_STACK_LINE(50)
	this->italic = false;
	HX_STACK_LINE(48)
	this->bold = false;
	HX_STACK_LINE(46)
	this->lineHeight = (int)0;
	HX_STACK_LINE(44)
	this->size = (int)0;
	HX_STACK_LINE(87)
	::flixel::graphics::FlxGraphic tmp = frame->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::flixel::math::FlxPoint tmp1 = border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	super::__construct(tmp,::flixel::graphics::frames::FlxFrameCollectionType_obj::FONT,tmp1);
	HX_STACK_LINE(88)
	this->frame = frame;
	HX_STACK_LINE(89)
	::flixel::graphics::FlxGraphic tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	tmp2->persist = true;
	HX_STACK_LINE(90)
	::flixel::graphics::FlxGraphic tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	tmp3->set_destroyOnNoUse(false);
	HX_STACK_LINE(91)
	::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(91)
	this->charMap = tmp4;
	HX_STACK_LINE(92)
	::haxe::ds::IntMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::haxe::ds::IntMap tmp6 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		::haxe::ds::IntMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(92)
	this->charAdvance = tmp5;
}
;
	return null();
}

//FlxBitmapFont_obj::~FlxBitmapFont_obj() { }

Dynamic FlxBitmapFont_obj::__CreateEmpty() { return  new FlxBitmapFont_obj; }
hx::ObjectPtr< FlxBitmapFont_obj > FlxBitmapFont_obj::__new(::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint border)
{  hx::ObjectPtr< FlxBitmapFont_obj > _result_ = new FlxBitmapFont_obj();
	_result_->__construct(frame,border);
	return _result_;}

Dynamic FlxBitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapFont_obj > _result_ = new FlxBitmapFont_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxBitmapFont_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","destroy",0xcd603805,"flixel.graphics.frames.FlxBitmapFont.destroy","flixel/graphics/frames/FlxBitmapFont.hx",96,0xde348206)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->super::destroy();
		HX_STACK_LINE(98)
		this->frame = null();
		HX_STACK_LINE(99)
		this->fontName = null();
		HX_STACK_LINE(100)
		this->charMap = null();
		HX_STACK_LINE(101)
		this->charAdvance = null();
	}
return null();
}


Void FlxBitmapFont_obj::addCharFrame( int charCode,::flixel::math::FlxRect frame,::flixel::math::FlxPoint offset,int xAdvance){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","addCharFrame",0x12fb302b,"flixel.graphics.frames.FlxBitmapFont.addCharFrame","flixel/graphics/frames/FlxBitmapFont.hx",555,0xde348206)
		HX_STACK_THIS(this)
		HX_STACK_ARG(charCode,"charCode")
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(xAdvance,"xAdvance")
		HX_STACK_LINE(556)
		::haxe::Utf8 tmp = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		::haxe::Utf8 utf8 = tmp;		HX_STACK_VAR(utf8,"utf8");
		HX_STACK_LINE(557)
		int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		utf8->addChar(tmp1);
		HX_STACK_LINE(558)
		::String tmp2 = utf8->toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(558)
		::String charName = tmp2;		HX_STACK_VAR(charName,"charName");
		HX_STACK_LINE(559)
		bool tmp3 = (frame->width == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(559)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(559)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(559)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(559)
		if ((tmp5)){
			HX_STACK_LINE(559)
			tmp6 = (frame->height == (int)0);
		}
		else{
			HX_STACK_LINE(559)
			tmp6 = true;
		}
		HX_STACK_LINE(559)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(559)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(559)
		if ((tmp7)){
			HX_STACK_LINE(559)
			::haxe::ds::StringMap tmp9 = this->framesHash;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(559)
			::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(559)
			::String tmp11 = charName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(559)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(559)
			::flixel::graphics::frames::FlxFrame tmp13 = tmp10->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(559)
			::flixel::graphics::frames::FlxFrame tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(559)
			::flixel::graphics::frames::FlxFrame tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(559)
			tmp8 = (tmp15 != null());
		}
		else{
			HX_STACK_LINE(559)
			tmp8 = true;
		}
		HX_STACK_LINE(559)
		if ((tmp8)){
			HX_STACK_LINE(559)
			return null();
		}
		HX_STACK_LINE(560)
		::flixel::graphics::frames::FlxFrame tmp9 = this->frame;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(560)
		::flixel::math::FlxRect tmp10 = frame;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(560)
		::flixel::graphics::frames::FlxFrame tmp11 = tmp9->subFrameTo(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(560)
		::flixel::graphics::frames::FlxFrame charFrame = tmp11;		HX_STACK_VAR(charFrame,"charFrame");
		HX_STACK_LINE(562)
		Float tmp12 = charFrame->sourceSize->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(562)
		Float w = tmp12;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(563)
		Float tmp13 = charFrame->sourceSize->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(563)
		Float h = tmp13;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(564)
		bool tmp14 = (offset->x > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(564)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(564)
		if ((tmp14)){
			HX_STACK_LINE(564)
			tmp15 = offset->x;
		}
		else{
			HX_STACK_LINE(564)
			tmp15 = (int)0;
		}
		HX_STACK_LINE(564)
		hx::AddEq(w,tmp15);
		HX_STACK_LINE(565)
		bool tmp16 = (offset->y > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(565)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(565)
		if ((tmp16)){
			HX_STACK_LINE(565)
			tmp17 = offset->y;
		}
		else{
			HX_STACK_LINE(565)
			tmp17 = (int)0;
		}
		HX_STACK_LINE(565)
		hx::AddEq(h,tmp17);
		HX_STACK_LINE(566)
		Float tmp18 = w;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(566)
		Float tmp19 = h;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(566)
		charFrame->sourceSize->set(tmp18,tmp19);
		HX_STACK_LINE(567)
		::flixel::math::FlxPoint tmp20 = offset;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(567)
		charFrame->offset->addPoint(tmp20);
		HX_STACK_LINE(568)
		charFrame->name = charName;
		HX_STACK_LINE(569)
		::flixel::graphics::frames::FlxFrame tmp21 = charFrame;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(569)
		this->pushFrame(tmp21);
		HX_STACK_LINE(570)
		::haxe::ds::IntMap tmp22 = this->charMap;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(570)
		int tmp23 = charCode;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(570)
		::flixel::graphics::frames::FlxFrame tmp24 = charFrame;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(570)
		tmp22->set(tmp23,tmp24);
		HX_STACK_LINE(571)
		::haxe::ds::IntMap tmp25 = this->charAdvance;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(571)
		int tmp26 = charCode;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(571)
		int tmp27 = xAdvance;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(571)
		tmp25->set(tmp26,tmp27);
		HX_STACK_LINE(572)
		offset->put();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapFont_obj,addCharFrame,(void))

Void FlxBitmapFont_obj::updateSourceHeight( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","updateSourceHeight",0x2eb589a0,"flixel.graphics.frames.FlxBitmapFont.updateSourceHeight","flixel/graphics/frames/FlxBitmapFont.hx",577,0xde348206)
		HX_STACK_THIS(this)
		HX_STACK_LINE(577)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(577)
		Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(577)
		while((true)){
			HX_STACK_LINE(577)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(577)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(577)
			if ((tmp1)){
				HX_STACK_LINE(577)
				break;
			}
			HX_STACK_LINE(577)
			::flixel::graphics::frames::FlxFrame tmp2 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(577)
			::flixel::graphics::frames::FlxFrame frame = tmp2;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(577)
			++(_g);
			HX_STACK_LINE(579)
			int tmp3 = this->lineHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			frame->sourceSize->set_y(tmp3);
			HX_STACK_LINE(580)
			frame->cacheFrameMatrix();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapFont_obj,updateSourceHeight,(void))

bool FlxBitmapFont_obj::charExists( int charCode){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","charExists",0x5c03e327,"flixel.graphics.frames.FlxBitmapFont.charExists","flixel/graphics/frames/FlxBitmapFont.hx",585,0xde348206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charCode,"charCode")
	HX_STACK_LINE(586)
	::haxe::ds::IntMap tmp = this->charMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(586)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(586)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,charExists,return )

::flixel::graphics::frames::FlxFrame FlxBitmapFont_obj::getCharFrame( int charCode){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","getCharFrame",0x22fdab16,"flixel.graphics.frames.FlxBitmapFont.getCharFrame","flixel/graphics/frames/FlxBitmapFont.hx",590,0xde348206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charCode,"charCode")
	HX_STACK_LINE(591)
	::haxe::ds::IntMap tmp = this->charMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(591)
	int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(591)
	::flixel::graphics::frames::FlxFrame tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(591)
	::flixel::graphics::frames::FlxFrame tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(591)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,getCharFrame,return )

int FlxBitmapFont_obj::getCharAdvance( int charCode){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","getCharAdvance",0xc4a787ab,"flixel.graphics.frames.FlxBitmapFont.getCharAdvance","flixel/graphics/frames/FlxBitmapFont.hx",595,0xde348206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charCode,"charCode")
	HX_STACK_LINE(596)
	::haxe::ds::IntMap tmp = this->charAdvance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(596)
	if ((tmp2)){
		HX_STACK_LINE(596)
		::haxe::ds::IntMap tmp4 = this->charAdvance;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(596)
		int tmp5 = charCode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(596)
		Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(596)
		tmp3 = tmp6;
	}
	else{
		HX_STACK_LINE(596)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(596)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,getCharAdvance,return )

Float FlxBitmapFont_obj::getCharWidth( int charCode){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","getCharWidth",0xe6dce8ef,"flixel.graphics.frames.FlxBitmapFont.getCharWidth","flixel/graphics/frames/FlxBitmapFont.hx",600,0xde348206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charCode,"charCode")
	HX_STACK_LINE(601)
	::haxe::ds::IntMap tmp = this->charMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(601)
	int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(601)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(601)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(601)
	if ((tmp2)){
		HX_STACK_LINE(601)
		::haxe::ds::IntMap tmp4 = this->charMap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(601)
		int tmp5 = charCode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(601)
		::flixel::graphics::frames::FlxFrame tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(601)
		::flixel::math::FlxPoint tmp7 = tmp6->sourceSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(601)
		tmp3 = tmp7->x;
	}
	else{
		HX_STACK_LINE(601)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(601)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapFont_obj,getCharWidth,return )

::flixel::graphics::frames::FlxFramesCollection FlxBitmapFont_obj::addBorder( ::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","addBorder",0x37f9a5b8,"flixel.graphics.frames.FlxBitmapFont.addBorder","flixel/graphics/frames/FlxBitmapFont.hx",621,0xde348206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(622)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(622)
	{
		HX_STACK_LINE(622)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(622)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(622)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(622)
		{
			HX_STACK_LINE(622)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(622)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(622)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(622)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(622)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(622)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(622)
			point->_inPool = false;
			HX_STACK_LINE(622)
			tmp1 = point;
		}
		HX_STACK_LINE(622)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(622)
		point->_weak = true;
		HX_STACK_LINE(622)
		tmp = point;
	}
	HX_STACK_LINE(622)
	::flixel::math::FlxPoint tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(622)
	::flixel::math::FlxPoint tmp2 = tmp->addPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(622)
	::flixel::math::FlxPoint tmp3 = border;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(622)
	::flixel::math::FlxPoint tmp4 = tmp2->addPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(622)
	::flixel::math::FlxPoint resultBorder = tmp4;		HX_STACK_VAR(resultBorder,"resultBorder");
	HX_STACK_LINE(624)
	::flixel::graphics::frames::FlxFrame tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(624)
	::flixel::math::FlxPoint tmp6 = resultBorder;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(624)
	::flixel::graphics::frames::FlxBitmapFont tmp7 = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(624)
	::flixel::graphics::frames::FlxBitmapFont font = tmp7;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(625)
	bool tmp8 = (font != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(625)
	if ((tmp8)){
		HX_STACK_LINE(627)
		::flixel::graphics::frames::FlxBitmapFont tmp9 = font;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(627)
		return tmp9;
	}
	HX_STACK_LINE(630)
	::flixel::graphics::frames::FlxFrame tmp9 = this->frame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(630)
	::flixel::math::FlxPoint tmp10 = border;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(630)
	::flixel::graphics::frames::FlxBitmapFont tmp11 = ::flixel::graphics::frames::FlxBitmapFont_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(630)
	font = tmp11;
	HX_STACK_LINE(631)
	int tmp12 = this->spaceWidth;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(631)
	font->spaceWidth = tmp12;
	HX_STACK_LINE(632)
	::String tmp13 = this->fontName;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(632)
	font->fontName = tmp13;
	HX_STACK_LINE(633)
	int tmp14 = this->numLetters;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(633)
	font->numLetters = tmp14;
	HX_STACK_LINE(634)
	int tmp15 = this->minOffsetX;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(634)
	font->minOffsetX = tmp15;
	HX_STACK_LINE(635)
	int tmp16 = this->size;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(635)
	font->size = tmp16;
	HX_STACK_LINE(636)
	int tmp17 = this->lineHeight;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(636)
	font->lineHeight = tmp17;
	HX_STACK_LINE(637)
	bool tmp18 = this->italic;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(637)
	font->italic = tmp18;
	HX_STACK_LINE(638)
	bool tmp19 = this->bold;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(638)
	font->bold = tmp19;
	HX_STACK_LINE(640)
	::flixel::graphics::frames::FlxFrame charWithBorder;		HX_STACK_VAR(charWithBorder,"charWithBorder");
	HX_STACK_LINE(641)
	int code;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(642)
	{
		HX_STACK_LINE(642)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(642)
		Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(642)
		while((true)){
			HX_STACK_LINE(642)
			bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(642)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(642)
			if ((tmp21)){
				HX_STACK_LINE(642)
				break;
			}
			HX_STACK_LINE(642)
			::flixel::graphics::frames::FlxFrame tmp22 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(642)
			::flixel::graphics::frames::FlxFrame _char = tmp22;		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(642)
			++(_g);
			HX_STACK_LINE(644)
			::flixel::math::FlxPoint tmp23 = border;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(644)
			::flixel::graphics::frames::FlxFrame tmp24 = _char->setBorderTo(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(644)
			charWithBorder = tmp24;
			HX_STACK_LINE(645)
			::flixel::graphics::frames::FlxFrame tmp25 = charWithBorder;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(645)
			font->pushFrame(tmp25);
			HX_STACK_LINE(646)
			::String tmp26 = _char->name;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(646)
			int tmp27 = ::haxe::Utf8_obj::charCodeAt(tmp26,(int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(646)
			code = tmp27;
			HX_STACK_LINE(647)
			int tmp28 = code;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(647)
			::flixel::graphics::frames::FlxFrame tmp29 = charWithBorder;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(647)
			font->charMap->set(tmp28,tmp29);
			HX_STACK_LINE(648)
			{
				HX_STACK_LINE(648)
				::haxe::ds::IntMap tmp30 = this->charAdvance;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(648)
				int tmp31 = code;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(648)
				Dynamic tmp32 = tmp30->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(648)
				int value = tmp32;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(648)
				int tmp33 = code;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(648)
				int tmp34 = value;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(648)
				font->charAdvance->set(tmp33,tmp34);
			}
		}
	}
	HX_STACK_LINE(651)
	font->updateSourceHeight();
	HX_STACK_LINE(652)
	::flixel::graphics::frames::FlxBitmapFont tmp20 = font;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(652)
	return tmp20;
}


int FlxBitmapFont_obj::spaceCode;

int FlxBitmapFont_obj::tabCode;

int FlxBitmapFont_obj::newLineCode;

::String FlxBitmapFont_obj::defaultFontKey;

::String FlxBitmapFont_obj::defaultFontData;

::String FlxBitmapFont_obj::DEFAULT_CHARS;

::openfl::_legacy::geom::Point FlxBitmapFont_obj::point;

::openfl::_legacy::geom::Rectangle FlxBitmapFont_obj::flashRect;

::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::getDefaultFont( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","getDefaultFont",0xc395e68f,"flixel.graphics.frames.FlxBitmapFont.getDefaultFont","flixel/graphics/frames/FlxBitmapFont.hx",108,0xde348206)
	HX_STACK_LINE(109)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	::flixel::graphics::FlxGraphic tmp1 = tmp->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(HX_HCSTRING("defaultFontKey","\x4f","\x88","\x64","\xc5"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	::flixel::graphics::FlxGraphic graphic = tmp1;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(110)
	bool tmp2 = (graphic != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	if ((tmp2)){
		HX_STACK_LINE(112)
		::flixel::graphics::frames::FlxImageFrame tmp3 = graphic->get_imageFrame();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		::flixel::graphics::frames::FlxFrame tmp4 = tmp3->get_frame();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		::flixel::graphics::frames::FlxBitmapFont tmp5 = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		::flixel::graphics::frames::FlxBitmapFont font = tmp5;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(113)
		bool tmp6 = (font != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		if ((tmp6)){
			HX_STACK_LINE(115)
			::flixel::graphics::frames::FlxBitmapFont tmp7 = font;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			return tmp7;
		}
	}
	HX_STACK_LINE(119)
	::String letters = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(letters,"letters");
	HX_STACK_LINE(120)
	::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::display::BitmapData_obj::__new((int)700,(int)9,true,(int)-7829368,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	::openfl::_legacy::display::BitmapData bd = tmp3;		HX_STACK_VAR(bd,"bd");
	HX_STACK_LINE(121)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(121)
	::openfl::_legacy::display::BitmapData tmp5 = bd;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(121)
	::flixel::graphics::FlxGraphic tmp6 = tmp4->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp5,false,HX_HCSTRING("defaultFontKey","\x4f","\x88","\x64","\xc5"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	graphic = tmp6;
	HX_STACK_LINE(123)
	int letterPos = (int)0;		HX_STACK_VAR(letterPos,"letterPos");
	HX_STACK_LINE(124)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(126)
	while((true)){
		HX_STACK_LINE(126)
		int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		int tmp8 = HX_HCSTRING(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000","\xb9","\xed","\x10","\x8a").length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		if ((tmp10)){
			HX_STACK_LINE(126)
			break;
		}
		HX_STACK_LINE(128)
		int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(128)
		::String tmp12 = HX_HCSTRING(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000","\xb9","\xed","\x10","\x8a").substr(tmp11,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(128)
		hx::AddEq(letters,tmp12);
		HX_STACK_LINE(130)
		int tmp13 = ++(i);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(130)
		::String tmp14 = HX_HCSTRING(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000","\xb9","\xed","\x10","\x8a").substr(tmp13,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(130)
		Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(130)
		int gw = tmp15;		HX_STACK_VAR(gw,"gw");
		HX_STACK_LINE(131)
		int tmp16 = ++(i);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(131)
		::String tmp17 = HX_HCSTRING(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000","\xb9","\xed","\x10","\x8a").substr(tmp16,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(131)
		Dynamic tmp18 = ::Std_obj::parseInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(131)
		int gh = tmp18;		HX_STACK_VAR(gh,"gh");
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				bool tmp19 = (_g < gh);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(133)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(133)
				if ((tmp20)){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(133)
				int py = tmp21;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(135)
				{
					HX_STACK_LINE(135)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(135)
					while((true)){
						HX_STACK_LINE(135)
						bool tmp22 = (_g1 < gw);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(135)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(135)
						if ((tmp23)){
							HX_STACK_LINE(135)
							break;
						}
						HX_STACK_LINE(135)
						int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(135)
						int px = tmp24;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(137)
						(i)++;
						HX_STACK_LINE(139)
						int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(139)
						::String tmp26 = HX_HCSTRING(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000","\xb9","\xed","\x10","\x8a").substr(tmp25,(int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(139)
						bool tmp27 = (tmp26 == HX_HCSTRING("1","\x31","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(139)
						if ((tmp27)){
							HX_STACK_LINE(141)
							int tmp28 = (letterPos * (int)7);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(141)
							int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(141)
							int tmp30 = px;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(141)
							int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(141)
							int tmp32 = ((int)1 + py);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(141)
							bd->setPixel32(tmp31,tmp32,(int)-1);
						}
						else{
							HX_STACK_LINE(145)
							int tmp28 = (letterPos * (int)7);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(145)
							int tmp29 = ((int)1 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(145)
							int tmp30 = px;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(145)
							int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(145)
							int tmp32 = ((int)1 + py);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(145)
							bd->setPixel32(tmp31,tmp32,(int)0);
						}
					}
				}
			}
		}
		HX_STACK_LINE(150)
		(i)++;
		HX_STACK_LINE(151)
		(letterPos)++;
	}
	HX_STACK_LINE(154)
	::flixel::graphics::FlxGraphic tmp7 = graphic;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(154)
	::String tmp8 = letters;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(154)
	::flixel::graphics::frames::FlxBitmapFont tmp9 = ::flixel::graphics::frames::FlxBitmapFont_obj::fromXNA(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(154)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapFont_obj,getDefaultFont,return )

::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::fromAngelCode( Dynamic Source,Dynamic Data){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","fromAngelCode",0x6c02320f,"flixel.graphics.frames.FlxBitmapFont.fromAngelCode","flixel/graphics/frames/FlxBitmapFont.hx",165,0xde348206)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(166)
	::flixel::graphics::FlxGraphic graphic = null();		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(167)
	::flixel::graphics::frames::FlxFrame frame = null();		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(169)
	Dynamic tmp = Source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::graphics::frames::FlxFrame >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	if ((tmp1)){
		HX_STACK_LINE(171)
		frame = ((::flixel::graphics::frames::FlxFrame)(Source));
		HX_STACK_LINE(172)
		graphic = frame->parent;
	}
	else{
		HX_STACK_LINE(176)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		Dynamic tmp3 = Source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		::flixel::graphics::FlxGraphic tmp4 = tmp2->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		graphic = tmp4;
		HX_STACK_LINE(177)
		::flixel::graphics::frames::FlxImageFrame tmp5 = graphic->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		::flixel::graphics::frames::FlxFrame tmp6 = tmp5->get_frame();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		frame = tmp6;
	}
	HX_STACK_LINE(180)
	::flixel::graphics::frames::FlxFrame tmp2 = frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	::flixel::graphics::frames::FlxBitmapFont tmp3 = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	::flixel::graphics::frames::FlxBitmapFont font = tmp3;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(181)
	bool tmp4 = (font != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	if ((tmp4)){
		HX_STACK_LINE(182)
		::flixel::graphics::frames::FlxBitmapFont tmp5 = font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		return tmp5;
	}
	HX_STACK_LINE(184)
	::Xml fontData = null();		HX_STACK_VAR(fontData,"fontData");
	HX_STACK_LINE(186)
	bool tmp5 = (Data != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(186)
	if ((tmp5)){
		HX_STACK_LINE(188)
		Dynamic tmp6 = Data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::Xml >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		if ((tmp7)){
			HX_STACK_LINE(190)
			fontData = ((::Xml)(Data));
		}
		else{
			HX_STACK_LINE(194)
			Dynamic tmp8 = Data;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			::String data = tmp9;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(196)
			::String tmp10 = data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(196)
			bool tmp11 = ::openfl::_legacy::Assets_obj::exists(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(196)
			if ((tmp11)){
				HX_STACK_LINE(198)
				::String tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(198)
				::String tmp13 = ::openfl::_legacy::Assets_obj::getText(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(198)
				data = tmp13;
			}
			HX_STACK_LINE(201)
			::String tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(201)
			::Xml tmp13 = ::Xml_obj::parse(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(201)
			fontData = tmp13;
		}
	}
	HX_STACK_LINE(205)
	::flixel::graphics::frames::FlxBitmapFont tmp6 = ::flixel::graphics::frames::FlxBitmapFont_obj::__new(frame,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(205)
	font = tmp6;
	HX_STACK_LINE(207)
	::Xml tmp7 = fontData->firstElement();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(207)
	::haxe::xml::Fast tmp8 = ::haxe::xml::Fast_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(207)
	::haxe::xml::Fast fast = tmp8;		HX_STACK_VAR(fast,"fast");
	HX_STACK_LINE(209)
	::haxe::xml::Fast tmp9 = fast->node->resolve(HX_HCSTRING("common","\x2b","\x75","\x2e","\xc7"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(209)
	::String tmp10 = tmp9->att->resolve(HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(209)
	Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(209)
	font->lineHeight = tmp11;
	HX_STACK_LINE(210)
	::haxe::xml::Fast tmp12 = fast->node->resolve(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(210)
	::String tmp13 = tmp12->att->resolve(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(210)
	Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(210)
	font->size = tmp14;
	HX_STACK_LINE(211)
	::haxe::xml::Fast tmp15 = fast->node->resolve(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(211)
	::String tmp16 = tmp15->att->resolve(HX_HCSTRING("face","\x9d","\xb4","\xb5","\x43"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(211)
	::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(211)
	font->fontName = tmp17;
	HX_STACK_LINE(212)
	::haxe::xml::Fast tmp18 = fast->node->resolve(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(212)
	::String tmp19 = tmp18->att->resolve(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(212)
	Dynamic tmp20 = ::Std_obj::parseInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(212)
	bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(212)
	font->bold = tmp21;
	HX_STACK_LINE(213)
	::haxe::xml::Fast tmp22 = fast->node->resolve(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(213)
	::String tmp23 = tmp22->att->resolve(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(213)
	Dynamic tmp24 = ::Std_obj::parseInt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(213)
	bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(213)
	font->italic = tmp25;
	HX_STACK_LINE(215)
	::flixel::math::FlxRect frame1;		HX_STACK_VAR(frame1,"frame1");
	HX_STACK_LINE(216)
	int frameHeight;		HX_STACK_VAR(frameHeight,"frameHeight");
	HX_STACK_LINE(217)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(218)
	::String charStr;		HX_STACK_VAR(charStr,"charStr");
	HX_STACK_LINE(219)
	int charCode;		HX_STACK_VAR(charCode,"charCode");
	HX_STACK_LINE(220)
	int xOffset;		HX_STACK_VAR(xOffset,"xOffset");
	HX_STACK_LINE(220)
	int yOffset;		HX_STACK_VAR(yOffset,"yOffset");
	HX_STACK_LINE(220)
	int xAdvance;		HX_STACK_VAR(xAdvance,"xAdvance");
	HX_STACK_LINE(221)
	int xOffsetAbs;		HX_STACK_VAR(xOffsetAbs,"xOffsetAbs");
	HX_STACK_LINE(223)
	::haxe::xml::Fast tmp26 = fast->node->resolve(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(223)
	::haxe::xml::Fast chars = tmp26;		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		::_List::ListIterator tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::List tmp28 = chars->nodes->resolve(HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(225)
			::List _this = tmp28;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(225)
			tmp27 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(225)
		::_List::ListIterator _g = tmp27;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		while((true)){
			HX_STACK_LINE(225)
			bool tmp28 = (_g->head != null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(225)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(225)
			if ((tmp29)){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(225)
			Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				Dynamic tmp31 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(225)
				_g->val = tmp31;
				HX_STACK_LINE(225)
				Dynamic tmp32 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(225)
				_g->head = tmp32;
				HX_STACK_LINE(225)
				tmp30 = _g->val;
			}
			HX_STACK_LINE(225)
			::haxe::xml::Fast _char = ((::haxe::xml::Fast)(tmp30));		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(227)
			::flixel::math::FlxRect tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(227)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(227)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(227)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(227)
				::flixel::math::FlxRect tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(227)
				{
					HX_STACK_LINE(227)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp33 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(227)
					::flixel::math::FlxRect tmp34 = tmp33->get();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(227)
					::flixel::math::FlxRect _this = tmp34;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(227)
					_this->x = X;
					HX_STACK_LINE(227)
					_this->y = Y;
					HX_STACK_LINE(227)
					_this->width = Width;
					HX_STACK_LINE(227)
					_this->height = Height;
					HX_STACK_LINE(227)
					tmp32 = _this;
				}
				HX_STACK_LINE(227)
				::flixel::math::FlxRect rect = tmp32;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(227)
				rect->_inPool = false;
				HX_STACK_LINE(227)
				tmp31 = rect;
			}
			HX_STACK_LINE(227)
			frame1 = tmp31;
			HX_STACK_LINE(228)
			::String tmp32 = _char->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(228)
			Dynamic tmp33 = ::Std_obj::parseInt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(228)
			frame1->x = tmp33;
			HX_STACK_LINE(229)
			::String tmp34 = _char->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(229)
			Dynamic tmp35 = ::Std_obj::parseInt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(229)
			frame1->y = tmp35;
			HX_STACK_LINE(230)
			::String tmp36 = _char->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(230)
			Dynamic tmp37 = ::Std_obj::parseInt(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(230)
			frame1->width = tmp37;
			HX_STACK_LINE(231)
			::String tmp38 = _char->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(231)
			Dynamic tmp39 = ::Std_obj::parseInt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(231)
			frameHeight = tmp39;
			HX_STACK_LINE(232)
			frame1->height = frameHeight;
			HX_STACK_LINE(234)
			bool tmp40 = _char->has->resolve(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(234)
			int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(234)
			if ((tmp40)){
				HX_STACK_LINE(234)
				::String tmp42 = _char->att->resolve(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(234)
				tmp41 = ::Std_obj::parseInt(tmp42);
			}
			else{
				HX_STACK_LINE(234)
				tmp41 = (int)0;
			}
			HX_STACK_LINE(234)
			xOffset = tmp41;
			HX_STACK_LINE(235)
			bool tmp42 = _char->has->resolve(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(235)
			int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(235)
			if ((tmp42)){
				HX_STACK_LINE(235)
				::String tmp44 = _char->att->resolve(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(235)
				tmp43 = ::Std_obj::parseInt(tmp44);
			}
			else{
				HX_STACK_LINE(235)
				tmp43 = (int)0;
			}
			HX_STACK_LINE(235)
			yOffset = tmp43;
			HX_STACK_LINE(236)
			bool tmp44 = _char->has->resolve(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(236)
			int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(236)
			if ((tmp44)){
				HX_STACK_LINE(236)
				::String tmp46 = _char->att->resolve(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(236)
				tmp45 = ::Std_obj::parseInt(tmp46);
			}
			else{
				HX_STACK_LINE(236)
				tmp45 = (int)0;
			}
			HX_STACK_LINE(236)
			xAdvance = tmp45;
			HX_STACK_LINE(238)
			::flixel::math::FlxPoint tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp47 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(238)
				::flixel::math::FlxPoint tmp48 = tmp47->get();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(238)
				int tmp49 = xOffset;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(238)
				int tmp50 = yOffset;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(238)
				::flixel::math::FlxPoint tmp51 = tmp48->set(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(238)
				::flixel::math::FlxPoint point = tmp51;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(238)
				point->_inPool = false;
				HX_STACK_LINE(238)
				tmp46 = point;
			}
			HX_STACK_LINE(238)
			offset = tmp46;
			HX_STACK_LINE(240)
			int tmp47 = font->minOffsetX;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(240)
			int tmp48 = xOffset;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(240)
			int tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(240)
			bool tmp50 = (tmp47 < tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(240)
			int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(240)
			if ((tmp50)){
				HX_STACK_LINE(240)
				int tmp52 = xOffset;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(240)
				tmp51 = -(tmp52);
			}
			else{
				HX_STACK_LINE(240)
				tmp51 = font->minOffsetX;
			}
			HX_STACK_LINE(240)
			font->minOffsetX = tmp51;
			HX_STACK_LINE(242)
			charCode = (int)-1;
			HX_STACK_LINE(243)
			charStr = null();
			HX_STACK_LINE(245)
			bool tmp52 = _char->has->resolve(HX_HCSTRING("letter","\xe6","\xac","\x08","\xa3"));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(245)
			if ((tmp52)){
				HX_STACK_LINE(247)
				::String tmp53 = _char->att->resolve(HX_HCSTRING("letter","\xe6","\xac","\x08","\xa3"));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(247)
				charStr = tmp53;
			}
			else{
				HX_STACK_LINE(249)
				bool tmp53 = _char->has->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(249)
				if ((tmp53)){
					HX_STACK_LINE(251)
					::String tmp54 = _char->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(251)
					Dynamic tmp55 = ::Std_obj::parseInt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(251)
					charCode = tmp55;
				}
			}
			HX_STACK_LINE(254)
			int tmp53 = charCode;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(254)
			int tmp54 = (int)-1;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(254)
			bool tmp55 = (tmp53 == tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(254)
			bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(254)
			if ((tmp55)){
				HX_STACK_LINE(254)
				tmp56 = (charStr == null());
			}
			else{
				HX_STACK_LINE(254)
				tmp56 = false;
			}
			HX_STACK_LINE(254)
			if ((tmp56)){
				HX_STACK_LINE(256)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid font xml data!","\x46","\x95","\x43","\xb9"));
			}
			HX_STACK_LINE(259)
			bool tmp57 = (charStr != null());		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(259)
			if ((tmp57)){
				HX_STACK_LINE(261)
				::String tmp58 = charStr;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(261)
				::String tmp59;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(261)
				::String _switch_1 = (tmp58);
				if (  ( _switch_1==HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"))){
					HX_STACK_LINE(263)
					tmp59 = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
				}
				else if (  ( _switch_1==HX_HCSTRING("&quot;","\x2c","\xd9","\x81","\x8f"))){
					HX_STACK_LINE(264)
					tmp59 = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");
				}
				else if (  ( _switch_1==HX_HCSTRING("&amp;","\xdd","\xd4","\xaa","\x21"))){
					HX_STACK_LINE(265)
					tmp59 = HX_HCSTRING("&","\x26","\x00","\x00","\x00");
				}
				else if (  ( _switch_1==HX_HCSTRING("&gt;","\x08","\xa9","\x6c","\x19"))){
					HX_STACK_LINE(266)
					tmp59 = HX_HCSTRING(">","\x3e","\x00","\x00","\x00");
				}
				else if (  ( _switch_1==HX_HCSTRING("&lt;","\x4d","\x74","\x70","\x19"))){
					HX_STACK_LINE(267)
					tmp59 = HX_HCSTRING("<","\x3c","\x00","\x00","\x00");
				}
				else  {
					HX_STACK_LINE(268)
					tmp59 = charStr;
				}
;
;
				HX_STACK_LINE(261)
				charStr = tmp59;
				HX_STACK_LINE(271)
				::String tmp60 = charStr;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(271)
				int tmp61 = ::haxe::Utf8_obj::charCodeAt(tmp60,(int)0);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(271)
				charCode = tmp61;
			}
			HX_STACK_LINE(274)
			int tmp58 = charCode;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(274)
			::flixel::math::FlxRect tmp59 = frame1;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(274)
			::flixel::math::FlxPoint tmp60 = offset;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(274)
			int tmp61 = xAdvance;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(274)
			font->addCharFrame(tmp58,tmp59,tmp60,tmp61);
			HX_STACK_LINE(276)
			bool tmp62 = (charCode == (int)32);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(276)
			if ((tmp62)){
				HX_STACK_LINE(278)
				font->spaceWidth = xAdvance;
			}
			else{
				HX_STACK_LINE(282)
				int tmp63 = font->lineHeight;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(282)
				int tmp64 = (frameHeight + yOffset);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(282)
				bool tmp65 = (tmp63 > tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(282)
				int tmp66;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(282)
				if ((tmp65)){
					HX_STACK_LINE(282)
					tmp66 = font->lineHeight;
				}
				else{
					HX_STACK_LINE(282)
					tmp66 = (frameHeight + yOffset);
				}
				HX_STACK_LINE(282)
				font->lineHeight = tmp66;
			}
		}
	}
	HX_STACK_LINE(286)
	font->updateSourceHeight();
	HX_STACK_LINE(287)
	::flixel::graphics::frames::FlxBitmapFont tmp27 = font;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(287)
	return tmp27;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapFont_obj,fromAngelCode,return )

::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::fromXNA( Dynamic source,::String letters,hx::Null< int >  __o_charBGColor){
int charBGColor = __o_charBGColor.Default(0);
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","fromXNA",0x00e02e6c,"flixel.graphics.frames.FlxBitmapFont.fromXNA","flixel/graphics/frames/FlxBitmapFont.hx",300,0xde348206)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(letters,"letters")
	HX_STACK_ARG(charBGColor,"charBGColor")
{
		HX_STACK_LINE(301)
		::flixel::graphics::FlxGraphic graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(302)
		::flixel::graphics::frames::FlxFrame frame = null();		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(304)
		Dynamic tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::graphics::frames::FlxFrame >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(306)
			frame = ((::flixel::graphics::frames::FlxFrame)(source));
			HX_STACK_LINE(307)
			graphic = frame->parent;
		}
		else{
			HX_STACK_LINE(311)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			Dynamic tmp3 = source;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::flixel::graphics::FlxGraphic tmp4 = tmp2->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			graphic = tmp4;
			HX_STACK_LINE(312)
			::flixel::graphics::frames::FlxImageFrame tmp5 = graphic->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			::flixel::graphics::frames::FlxFrame tmp6 = tmp5->get_frame();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(312)
			frame = tmp6;
		}
		HX_STACK_LINE(315)
		::flixel::graphics::frames::FlxFrame tmp2 = frame;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		::flixel::graphics::frames::FlxBitmapFont tmp3 = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		::flixel::graphics::frames::FlxBitmapFont font = tmp3;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(316)
		bool tmp4 = (font != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		if ((tmp4)){
			HX_STACK_LINE(317)
			::flixel::graphics::frames::FlxBitmapFont tmp5 = font;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(317)
			return tmp5;
		}
		HX_STACK_LINE(319)
		bool tmp5 = (letters == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(319)
		::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(319)
		if ((tmp5)){
			HX_STACK_LINE(319)
			tmp6 = HX_HCSTRING(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~","\x6f","\x61","\x48","\x0a");
		}
		else{
			HX_STACK_LINE(319)
			tmp6 = letters;
		}
		HX_STACK_LINE(319)
		letters = tmp6;
		HX_STACK_LINE(320)
		::flixel::graphics::frames::FlxBitmapFont tmp7 = ::flixel::graphics::frames::FlxBitmapFont_obj::__new(frame,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(320)
		font = tmp7;
		HX_STACK_LINE(321)
		font->fontName = graphic->key;
		HX_STACK_LINE(323)
		::openfl::_legacy::display::BitmapData bmd = graphic->bitmap;		HX_STACK_VAR(bmd,"bmd");
		HX_STACK_LINE(325)
		::openfl::_legacy::geom::Point tmp8 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(325)
		::openfl::_legacy::geom::Point p = tmp8;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(326)
		p->setTo((int)0,(int)0);
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			Float x = p->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(327)
			Float y = p->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(327)
			bool tmp9 = (frame->angle == (int)-90);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(327)
			if ((tmp9)){
				HX_STACK_LINE(327)
				Float tmp10 = frame->frame->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(327)
				Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(327)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(327)
				p->x = tmp12;
				HX_STACK_LINE(327)
				p->y = x;
			}
			else{
				HX_STACK_LINE(327)
				bool tmp10 = (frame->angle == (int)90);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(327)
				if ((tmp10)){
					HX_STACK_LINE(327)
					p->x = y;
					HX_STACK_LINE(327)
					Float tmp11 = frame->frame->height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(327)
					Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(327)
					Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(327)
					p->y = tmp13;
				}
			}
			HX_STACK_LINE(327)
			Float tmp10 = frame->frame->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(327)
			hx::AddEq(p->x,tmp10);
			HX_STACK_LINE(327)
			Float tmp11 = frame->frame->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(327)
			hx::AddEq(p->y,tmp11);
			HX_STACK_LINE(327)
			p;
		}
		HX_STACK_LINE(328)
		Float tmp9 = p->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(328)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(328)
		Float tmp11 = p->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(328)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(328)
		int tmp13 = bmd->getPixel(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(328)
		int globalBGColor = tmp13;		HX_STACK_VAR(globalBGColor,"globalBGColor");
		HX_STACK_LINE(330)
		Float tmp14 = frame->frame->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(330)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(330)
		int frameWidth = tmp15;		HX_STACK_VAR(frameWidth,"frameWidth");
		HX_STACK_LINE(331)
		Float tmp16 = frame->frame->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(331)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(331)
		int frameHeight = tmp17;		HX_STACK_VAR(frameHeight,"frameHeight");
		HX_STACK_LINE(332)
		int letterIdx = (int)0;		HX_STACK_VAR(letterIdx,"letterIdx");
		HX_STACK_LINE(333)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(334)
		::String tmp18 = letters;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(334)
		int tmp19 = ::haxe::Utf8_obj::length(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(334)
		int numLetters = tmp19;		HX_STACK_VAR(numLetters,"numLetters");
		HX_STACK_LINE(335)
		::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(336)
		::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(337)
		int xAdvance;		HX_STACK_VAR(xAdvance,"xAdvance");
		HX_STACK_LINE(339)
		int cy = (int)0;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(340)
		int cx;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(342)
		int gx;		HX_STACK_VAR(gx,"gx");
		HX_STACK_LINE(343)
		int gy;		HX_STACK_VAR(gy,"gy");
		HX_STACK_LINE(344)
		int gw;		HX_STACK_VAR(gw,"gw");
		HX_STACK_LINE(345)
		int gh;		HX_STACK_VAR(gh,"gh");
		HX_STACK_LINE(347)
		while((true)){
			HX_STACK_LINE(347)
			bool tmp20 = (cy < frameHeight);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(347)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(347)
			if ((tmp20)){
				HX_STACK_LINE(347)
				tmp21 = (letterIdx < numLetters);
			}
			else{
				HX_STACK_LINE(347)
				tmp21 = false;
			}
			HX_STACK_LINE(347)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(347)
			if ((tmp22)){
				HX_STACK_LINE(347)
				break;
			}
			HX_STACK_LINE(349)
			int rowHeight = (int)0;		HX_STACK_VAR(rowHeight,"rowHeight");
			HX_STACK_LINE(350)
			cx = (int)0;
			HX_STACK_LINE(352)
			while((true)){
				HX_STACK_LINE(352)
				bool tmp23 = (cx < frameWidth);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(352)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(352)
				if ((tmp23)){
					HX_STACK_LINE(352)
					tmp24 = (letterIdx < numLetters);
				}
				else{
					HX_STACK_LINE(352)
					tmp24 = false;
				}
				HX_STACK_LINE(352)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(352)
				if ((tmp25)){
					HX_STACK_LINE(352)
					break;
				}
				HX_STACK_LINE(354)
				int tmp26 = cx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(354)
				int tmp27 = cy;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(354)
				p->setTo(tmp26,tmp27);
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					Float x = p->x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(355)
					Float y = p->y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(355)
					bool tmp28 = (frame->angle == (int)-90);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(355)
					if ((tmp28)){
						HX_STACK_LINE(355)
						Float tmp29 = frame->frame->width;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(355)
						Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(355)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(355)
						p->x = tmp31;
						HX_STACK_LINE(355)
						p->y = x;
					}
					else{
						HX_STACK_LINE(355)
						bool tmp29 = (frame->angle == (int)90);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(355)
						if ((tmp29)){
							HX_STACK_LINE(355)
							p->x = y;
							HX_STACK_LINE(355)
							Float tmp30 = frame->frame->height;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(355)
							Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(355)
							Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(355)
							p->y = tmp32;
						}
					}
					HX_STACK_LINE(355)
					Float tmp29 = frame->frame->x;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(355)
					hx::AddEq(p->x,tmp29);
					HX_STACK_LINE(355)
					Float tmp30 = frame->frame->y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(355)
					hx::AddEq(p->y,tmp30);
					HX_STACK_LINE(355)
					p;
				}
				HX_STACK_LINE(357)
				Float tmp28 = p->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(357)
				int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(357)
				Float tmp30 = p->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(357)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(357)
				int tmp32 = bmd->getPixel(tmp29,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(357)
				int tmp33 = globalBGColor;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(357)
				bool tmp34 = (tmp32 != tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(357)
				if ((tmp34)){
					HX_STACK_LINE(360)
					gx = cx;
					HX_STACK_LINE(361)
					gy = cy;
					HX_STACK_LINE(363)
					int tmp35 = gx;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(363)
					int tmp36 = gy;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(363)
					p->setTo(tmp35,tmp36);
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						Float x = p->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(364)
						Float y = p->y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(364)
						bool tmp37 = (frame->angle == (int)-90);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(364)
						if ((tmp37)){
							HX_STACK_LINE(364)
							Float tmp38 = frame->frame->width;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(364)
							Float tmp39 = y;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(364)
							Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(364)
							p->x = tmp40;
							HX_STACK_LINE(364)
							p->y = x;
						}
						else{
							HX_STACK_LINE(364)
							bool tmp38 = (frame->angle == (int)90);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(364)
							if ((tmp38)){
								HX_STACK_LINE(364)
								p->x = y;
								HX_STACK_LINE(364)
								Float tmp39 = frame->frame->height;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(364)
								Float tmp40 = x;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(364)
								Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(364)
								p->y = tmp41;
							}
						}
						HX_STACK_LINE(364)
						Float tmp38 = frame->frame->x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(364)
						hx::AddEq(p->x,tmp38);
						HX_STACK_LINE(364)
						Float tmp39 = frame->frame->y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(364)
						hx::AddEq(p->y,tmp39);
						HX_STACK_LINE(364)
						p;
					}
					HX_STACK_LINE(367)
					while((true)){
						HX_STACK_LINE(367)
						Float tmp37 = p->x;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(367)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(367)
						Float tmp39 = p->y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(367)
						int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(367)
						int tmp41 = bmd->getPixel(tmp38,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(367)
						int tmp42 = globalBGColor;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(367)
						bool tmp43 = (tmp41 != tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(367)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(367)
						if ((tmp44)){
							HX_STACK_LINE(367)
							break;
						}
						HX_STACK_LINE(369)
						(gx)++;
						HX_STACK_LINE(370)
						int tmp45 = gx;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(370)
						int tmp46 = cy;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(370)
						p->setTo(tmp45,tmp46);
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(371)
							Float x = p->x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(371)
							Float y = p->y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(371)
							bool tmp47 = (frame->angle == (int)-90);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(371)
							if ((tmp47)){
								HX_STACK_LINE(371)
								Float tmp48 = frame->frame->width;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(371)
								Float tmp49 = y;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(371)
								Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(371)
								p->x = tmp50;
								HX_STACK_LINE(371)
								p->y = x;
							}
							else{
								HX_STACK_LINE(371)
								bool tmp48 = (frame->angle == (int)90);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(371)
								if ((tmp48)){
									HX_STACK_LINE(371)
									p->x = y;
									HX_STACK_LINE(371)
									Float tmp49 = frame->frame->height;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(371)
									Float tmp50 = x;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(371)
									Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(371)
									p->y = tmp51;
								}
							}
							HX_STACK_LINE(371)
							Float tmp48 = frame->frame->x;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(371)
							hx::AddEq(p->x,tmp48);
							HX_STACK_LINE(371)
							Float tmp49 = frame->frame->y;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(371)
							hx::AddEq(p->y,tmp49);
							HX_STACK_LINE(371)
							p;
						}
					}
					HX_STACK_LINE(374)
					int tmp37 = (gx - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(374)
					int tmp38 = gy;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(374)
					p->setTo(tmp37,tmp38);
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						Float x = p->x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(375)
						Float y = p->y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(375)
						bool tmp39 = (frame->angle == (int)-90);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(375)
						if ((tmp39)){
							HX_STACK_LINE(375)
							Float tmp40 = frame->frame->width;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(375)
							Float tmp41 = y;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(375)
							Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(375)
							p->x = tmp42;
							HX_STACK_LINE(375)
							p->y = x;
						}
						else{
							HX_STACK_LINE(375)
							bool tmp40 = (frame->angle == (int)90);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(375)
							if ((tmp40)){
								HX_STACK_LINE(375)
								p->x = y;
								HX_STACK_LINE(375)
								Float tmp41 = frame->frame->height;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(375)
								Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(375)
								Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(375)
								p->y = tmp43;
							}
						}
						HX_STACK_LINE(375)
						Float tmp40 = frame->frame->x;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(375)
						hx::AddEq(p->x,tmp40);
						HX_STACK_LINE(375)
						Float tmp41 = frame->frame->y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(375)
						hx::AddEq(p->y,tmp41);
						HX_STACK_LINE(375)
						p;
					}
					HX_STACK_LINE(377)
					while((true)){
						HX_STACK_LINE(377)
						Float tmp39 = p->x;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(377)
						int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(377)
						Float tmp41 = p->y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(377)
						int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(377)
						int tmp43 = bmd->getPixel(tmp40,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(377)
						int tmp44 = globalBGColor;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(377)
						bool tmp45 = (tmp43 != tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(377)
						bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(377)
						if ((tmp46)){
							HX_STACK_LINE(377)
							break;
						}
						HX_STACK_LINE(379)
						(gy)++;
						HX_STACK_LINE(380)
						int tmp47 = cx;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(380)
						int tmp48 = gy;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(380)
						p->setTo(tmp47,tmp48);
						HX_STACK_LINE(381)
						{
							HX_STACK_LINE(381)
							Float x = p->x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(381)
							Float y = p->y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(381)
							bool tmp49 = (frame->angle == (int)-90);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(381)
							if ((tmp49)){
								HX_STACK_LINE(381)
								Float tmp50 = frame->frame->width;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(381)
								Float tmp51 = y;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(381)
								Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(381)
								p->x = tmp52;
								HX_STACK_LINE(381)
								p->y = x;
							}
							else{
								HX_STACK_LINE(381)
								bool tmp50 = (frame->angle == (int)90);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(381)
								if ((tmp50)){
									HX_STACK_LINE(381)
									p->x = y;
									HX_STACK_LINE(381)
									Float tmp51 = frame->frame->height;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(381)
									Float tmp52 = x;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(381)
									Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(381)
									p->y = tmp53;
								}
							}
							HX_STACK_LINE(381)
							Float tmp50 = frame->frame->x;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(381)
							hx::AddEq(p->x,tmp50);
							HX_STACK_LINE(381)
							Float tmp51 = frame->frame->y;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(381)
							hx::AddEq(p->y,tmp51);
							HX_STACK_LINE(381)
							p;
						}
					}
					HX_STACK_LINE(384)
					int tmp39 = (gx - cx);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(384)
					gw = tmp39;
					HX_STACK_LINE(385)
					int tmp40 = (gy - cy);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(385)
					gh = tmp40;
					HX_STACK_LINE(387)
					::String tmp41 = letters;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(387)
					int tmp42 = letterIdx;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(387)
					int tmp43 = ::haxe::Utf8_obj::charCodeAt(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(387)
					charCode = tmp43;
					HX_STACK_LINE(388)
					::flixel::math::FlxRect tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						::flixel::math::FlxRect tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(388)
						{
							HX_STACK_LINE(388)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp46 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(388)
							::flixel::math::FlxRect tmp47 = tmp46->get();		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(388)
							::flixel::math::FlxRect _this = tmp47;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(388)
							_this->x = cx;
							HX_STACK_LINE(388)
							_this->y = cy;
							HX_STACK_LINE(388)
							_this->width = gw;
							HX_STACK_LINE(388)
							_this->height = gh;
							HX_STACK_LINE(388)
							tmp45 = _this;
						}
						HX_STACK_LINE(388)
						::flixel::math::FlxRect rect1 = tmp45;		HX_STACK_VAR(rect1,"rect1");
						HX_STACK_LINE(388)
						rect1->_inPool = false;
						HX_STACK_LINE(388)
						tmp44 = rect1;
					}
					HX_STACK_LINE(388)
					rect = tmp44;
					HX_STACK_LINE(389)
					::flixel::math::FlxPoint tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(389)
					{
						HX_STACK_LINE(389)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp46 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(389)
						::flixel::math::FlxPoint tmp47 = tmp46->get();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(389)
						::flixel::math::FlxPoint tmp48 = tmp47->set((int)0,(int)0);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(389)
						::flixel::math::FlxPoint point = tmp48;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(389)
						point->_inPool = false;
						HX_STACK_LINE(389)
						tmp45 = point;
					}
					HX_STACK_LINE(389)
					offset = tmp45;
					HX_STACK_LINE(390)
					xAdvance = gw;
					HX_STACK_LINE(392)
					int tmp46 = charCode;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(392)
					::flixel::math::FlxRect tmp47 = rect;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(392)
					::flixel::math::FlxPoint tmp48 = offset;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(392)
					int tmp49 = xAdvance;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(392)
					font->addCharFrame(tmp46,tmp47,tmp48,tmp49);
					HX_STACK_LINE(394)
					bool tmp50 = (charCode == (int)32);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(394)
					if ((tmp50)){
						HX_STACK_LINE(396)
						font->spaceWidth = xAdvance;
					}
					HX_STACK_LINE(400)
					bool tmp51 = (gh > rowHeight);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(400)
					if ((tmp51)){
						HX_STACK_LINE(400)
						rowHeight = gh;
					}
					HX_STACK_LINE(401)
					bool tmp52 = (gh > font->size);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(401)
					if ((tmp52)){
						HX_STACK_LINE(401)
						font->size = gh;
					}
					HX_STACK_LINE(404)
					hx::AddEq(cx,gw);
					HX_STACK_LINE(405)
					(letterIdx)++;
				}
				HX_STACK_LINE(408)
				(cx)++;
			}
			HX_STACK_LINE(412)
			int tmp23 = (rowHeight + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(412)
			hx::AddEq(cy,tmp23);
		}
		HX_STACK_LINE(415)
		font->lineHeight = font->size;
		HX_STACK_LINE(416)
		font->updateSourceHeight();
		HX_STACK_LINE(419)
		::openfl::_legacy::geom::Point tmp20 = ::flixel::graphics::frames::FlxBitmapFont_obj::point;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(419)
		Float tmp21 = frame->frame->x;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(419)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(419)
		Float tmp23 = frame->frame->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(419)
		int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(419)
		tmp20->setTo(tmp22,tmp24);
		HX_STACK_LINE(420)
		Float tmp25 = frame->frame->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(420)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(420)
		Float tmp27 = frame->frame->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(420)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(420)
		int tmp29 = bmd->getPixel32(tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(420)
		int bgColor32 = tmp29;		HX_STACK_VAR(bgColor32,"bgColor32");
		HX_STACK_LINE(422)
		::openfl::_legacy::geom::Rectangle tmp30 = ::flixel::graphics::frames::FlxBitmapFont_obj::flashRect;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(422)
		::openfl::_legacy::geom::Rectangle frameRect = tmp30;		HX_STACK_VAR(frameRect,"frameRect");
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			::flixel::math::FlxRect _this = frame->frame;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(423)
			::openfl::_legacy::geom::Rectangle FlashRect = frameRect;		HX_STACK_VAR(FlashRect,"FlashRect");
			HX_STACK_LINE(423)
			bool tmp31 = (FlashRect == null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(423)
			if ((tmp31)){
				HX_STACK_LINE(423)
				::openfl::_legacy::geom::Rectangle tmp32 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(423)
				FlashRect = tmp32;
			}
			HX_STACK_LINE(423)
			FlashRect->x = _this->x;
			HX_STACK_LINE(423)
			FlashRect->y = _this->y;
			HX_STACK_LINE(423)
			FlashRect->width = _this->width;
			HX_STACK_LINE(423)
			FlashRect->height = _this->height;
			HX_STACK_LINE(423)
			FlashRect;
		}
		HX_STACK_LINE(431)
		bool tmp31 = (charBGColor != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(431)
		if ((tmp31)){
			HX_STACK_LINE(433)
			::openfl::_legacy::display::BitmapData tmp32 = bmd;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(433)
			::openfl::_legacy::geom::Rectangle tmp33 = frameRect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(433)
			::openfl::_legacy::geom::Point tmp34 = ::flixel::graphics::frames::FlxBitmapFont_obj::point;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(433)
			int tmp35 = charBGColor;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(433)
			bmd->threshold(tmp32,tmp33,tmp34,HX_HCSTRING("==","\x60","\x35","\x00","\x00"),tmp35,(int)0,(int)-1,true);
		}
		HX_STACK_LINE(436)
		::flixel::graphics::frames::FlxBitmapFont tmp32 = font;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(436)
		return tmp32;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapFont_obj,fromXNA,return )

::openfl::_legacy::geom::Point FlxBitmapFont_obj::transformPoint( ::openfl::_legacy::geom::Point point,::flixel::graphics::frames::FlxFrame frame){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","transformPoint",0x638a0b99,"flixel.graphics.frames.FlxBitmapFont.transformPoint","flixel/graphics/frames/FlxBitmapFont.hx",440,0xde348206)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(frame,"frame")
	HX_STACK_LINE(441)
	Float x = point->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(442)
	Float y = point->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(444)
	bool tmp = (frame->angle == (int)-90);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(444)
	if ((tmp)){
		HX_STACK_LINE(446)
		Float tmp1 = frame->frame->width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		point->x = tmp3;
		HX_STACK_LINE(447)
		point->y = x;
	}
	else{
		HX_STACK_LINE(450)
		bool tmp1 = (frame->angle == (int)90);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		if ((tmp1)){
			HX_STACK_LINE(452)
			point->x = y;
			HX_STACK_LINE(453)
			Float tmp2 = frame->frame->height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(453)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(453)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(453)
			point->y = tmp4;
		}
	}
	HX_STACK_LINE(456)
	Float tmp1 = frame->frame->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(456)
	hx::AddEq(point->x,tmp1);
	HX_STACK_LINE(457)
	Float tmp2 = frame->frame->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(457)
	hx::AddEq(point->y,tmp2);
	HX_STACK_LINE(458)
	::openfl::_legacy::geom::Point tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(458)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapFont_obj,transformPoint,return )

::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::fromMonospace( Dynamic source,::String letters,::flixel::math::FlxPoint charSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint spacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","fromMonospace",0xd0af7444,"flixel.graphics.frames.FlxBitmapFont.fromMonospace","flixel/graphics/frames/FlxBitmapFont.hx",472,0xde348206)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(letters,"letters")
	HX_STACK_ARG(charSize,"charSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(spacing,"spacing")
	HX_STACK_LINE(473)
	::flixel::graphics::FlxGraphic graphic = null();		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(474)
	::flixel::graphics::frames::FlxFrame frame = null();		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(476)
	Dynamic tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::graphics::frames::FlxFrame >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	if ((tmp1)){
		HX_STACK_LINE(478)
		frame = ((::flixel::graphics::frames::FlxFrame)(source));
		HX_STACK_LINE(479)
		graphic = frame->parent;
	}
	else{
		HX_STACK_LINE(483)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(483)
		Dynamic tmp3 = source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		::flixel::graphics::FlxGraphic tmp4 = tmp2->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		graphic = tmp4;
		HX_STACK_LINE(484)
		::flixel::graphics::frames::FlxImageFrame tmp5 = graphic->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(484)
		::flixel::graphics::frames::FlxFrame tmp6 = tmp5->get_frame();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(484)
		frame = tmp6;
	}
	HX_STACK_LINE(487)
	::flixel::graphics::frames::FlxFrame tmp2 = frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(487)
	::flixel::graphics::frames::FlxBitmapFont tmp3 = ::flixel::graphics::frames::FlxBitmapFont_obj::findFont(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(487)
	::flixel::graphics::frames::FlxBitmapFont font = tmp3;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(488)
	bool tmp4 = (font != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(488)
	if ((tmp4)){
		HX_STACK_LINE(489)
		::flixel::graphics::frames::FlxBitmapFont tmp5 = font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(489)
		return tmp5;
	}
	HX_STACK_LINE(491)
	bool tmp5 = (letters == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(491)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(491)
	if ((tmp5)){
		HX_STACK_LINE(491)
		tmp6 = HX_HCSTRING(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~","\x6f","\x61","\x48","\x0a");
	}
	else{
		HX_STACK_LINE(491)
		tmp6 = letters;
	}
	HX_STACK_LINE(491)
	letters = tmp6;
	HX_STACK_LINE(492)
	bool tmp7 = (region == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(492)
	::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(492)
	if ((tmp7)){
		HX_STACK_LINE(492)
		::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(492)
				::flixel::math::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(492)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(492)
				_this->x = (int)0;
				HX_STACK_LINE(492)
				_this->y = (int)0;
				HX_STACK_LINE(492)
				Float tmp13 = frame->sourceSize->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(492)
				_this->width = tmp13;
				HX_STACK_LINE(492)
				Float tmp14 = frame->sourceSize->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(492)
				_this->height = tmp14;
				HX_STACK_LINE(492)
				tmp10 = _this;
			}
			HX_STACK_LINE(492)
			::flixel::math::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(492)
			rect->_inPool = false;
			HX_STACK_LINE(492)
			tmp9 = rect;
		}
		HX_STACK_LINE(492)
		::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(492)
		rect->_weak = true;
		HX_STACK_LINE(492)
		tmp8 = rect;
	}
	else{
		HX_STACK_LINE(492)
		tmp8 = region;
	}
	HX_STACK_LINE(492)
	region = tmp8;
	HX_STACK_LINE(493)
	bool tmp9 = (spacing == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(493)
	::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(493)
	if ((tmp9)){
		HX_STACK_LINE(493)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(493)
		::flixel::math::FlxPoint tmp13 = tmp12->set((int)0,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(493)
		::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(493)
		point->_inPool = false;
		HX_STACK_LINE(493)
		tmp10 = point;
	}
	else{
		HX_STACK_LINE(493)
		tmp10 = spacing;
	}
	HX_STACK_LINE(493)
	spacing = tmp10;
	HX_STACK_LINE(495)
	Float tmp11 = region->width;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(495)
	int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(495)
	int bitmapWidth = tmp12;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
	HX_STACK_LINE(496)
	Float tmp13 = region->height;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(496)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(496)
	int bitmapHeight = tmp14;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
	HX_STACK_LINE(498)
	Float tmp15 = region->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(498)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(498)
	int startX = tmp16;		HX_STACK_VAR(startX,"startX");
	HX_STACK_LINE(499)
	Float tmp17 = region->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(499)
	int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(499)
	int startY = tmp18;		HX_STACK_VAR(startY,"startY");
	HX_STACK_LINE(501)
	{
		HX_STACK_LINE(501)
		bool tmp19 = region->_weak;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(501)
		if ((tmp19)){
			HX_STACK_LINE(501)
			bool tmp20 = region->_inPool;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(501)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(501)
			if ((tmp21)){
				HX_STACK_LINE(501)
				region->_inPool = true;
				HX_STACK_LINE(501)
				region->_weak = false;
				HX_STACK_LINE(501)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp22 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(501)
				::flixel::math::FlxRect tmp23 = region;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(501)
				tmp22->putUnsafe(tmp23);
			}
		}
	}
	HX_STACK_LINE(503)
	Float tmp19 = spacing->x;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(503)
	int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(503)
	int xSpacing = tmp20;		HX_STACK_VAR(xSpacing,"xSpacing");
	HX_STACK_LINE(504)
	Float tmp21 = spacing->y;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(504)
	int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(504)
	int ySpacing = tmp22;		HX_STACK_VAR(ySpacing,"ySpacing");
	HX_STACK_LINE(506)
	Float tmp23 = charSize->x;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(506)
	int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(506)
	int charWidth = tmp24;		HX_STACK_VAR(charWidth,"charWidth");
	HX_STACK_LINE(507)
	Float tmp25 = charSize->y;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(507)
	int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(507)
	int charHeight = tmp26;		HX_STACK_VAR(charHeight,"charHeight");
	HX_STACK_LINE(509)
	int tmp27 = (charWidth + xSpacing);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(509)
	int spacedWidth = tmp27;		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(510)
	int tmp28 = (charHeight + ySpacing);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(510)
	int spacedHeight = tmp28;		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(512)
	bool tmp29 = (charHeight == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(512)
	int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(512)
	if ((tmp29)){
		HX_STACK_LINE(512)
		tmp30 = (int)1;
	}
	else{
		HX_STACK_LINE(512)
		int tmp31 = (bitmapHeight + ySpacing);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(512)
		int tmp32 = spacedHeight;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(512)
		Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(512)
		tmp30 = ::Std_obj::_int(tmp33);
	}
	HX_STACK_LINE(512)
	int numRows = tmp30;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(513)
	bool tmp31 = (charWidth == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(513)
	int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(513)
	if ((tmp31)){
		HX_STACK_LINE(513)
		tmp32 = (int)1;
	}
	else{
		HX_STACK_LINE(513)
		int tmp33 = (bitmapWidth + xSpacing);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(513)
		int tmp34 = spacedWidth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(513)
		Float tmp35 = (Float(tmp33) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(513)
		tmp32 = ::Std_obj::_int(tmp35);
	}
	HX_STACK_LINE(513)
	int numCols = tmp32;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(515)
	::flixel::graphics::frames::FlxBitmapFont tmp33 = ::flixel::graphics::frames::FlxBitmapFont_obj::__new(frame,null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(515)
	font = tmp33;
	HX_STACK_LINE(516)
	font->fontName = graphic->key;
	HX_STACK_LINE(517)
	int tmp34 = font->size = charHeight;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(517)
	font->lineHeight = tmp34;
	HX_STACK_LINE(519)
	::flixel::math::FlxRect charRect;		HX_STACK_VAR(charRect,"charRect");
	HX_STACK_LINE(520)
	::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(521)
	int xAdvance = charWidth;		HX_STACK_VAR(xAdvance,"xAdvance");
	HX_STACK_LINE(522)
	font->spaceWidth = xAdvance;
	HX_STACK_LINE(523)
	int letterIndex = (int)0;		HX_STACK_VAR(letterIndex,"letterIndex");
	HX_STACK_LINE(524)
	int numLetters = letters.length;		HX_STACK_VAR(numLetters,"numLetters");
	HX_STACK_LINE(526)
	{
		HX_STACK_LINE(526)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		while((true)){
			HX_STACK_LINE(526)
			bool tmp35 = (_g < numRows);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(526)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(526)
			if ((tmp36)){
				HX_STACK_LINE(526)
				break;
			}
			HX_STACK_LINE(526)
			int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(526)
			int j = tmp37;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(528)
			{
				HX_STACK_LINE(528)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(528)
				while((true)){
					HX_STACK_LINE(528)
					bool tmp38 = (_g1 < numCols);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(528)
					bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(528)
					if ((tmp39)){
						HX_STACK_LINE(528)
						break;
					}
					HX_STACK_LINE(528)
					int tmp40 = (_g1)++;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(528)
					int i = tmp40;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(530)
					::flixel::math::FlxRect tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(530)
					{
						HX_STACK_LINE(530)
						::flixel::math::FlxRect tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(530)
						{
							HX_STACK_LINE(530)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp43 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(530)
							::flixel::math::FlxRect tmp44 = tmp43->get();		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(530)
							::flixel::math::FlxRect _this = tmp44;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(530)
							int tmp45 = startX;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(530)
							int tmp46 = (i * spacedWidth);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(530)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(530)
							_this->x = tmp47;
							HX_STACK_LINE(530)
							int tmp48 = startY;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(530)
							int tmp49 = (j * spacedHeight);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(530)
							int tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(530)
							_this->y = tmp50;
							HX_STACK_LINE(530)
							_this->width = charWidth;
							HX_STACK_LINE(530)
							_this->height = charHeight;
							HX_STACK_LINE(530)
							tmp42 = _this;
						}
						HX_STACK_LINE(530)
						::flixel::math::FlxRect rect = tmp42;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(530)
						rect->_inPool = false;
						HX_STACK_LINE(530)
						tmp41 = rect;
					}
					HX_STACK_LINE(530)
					charRect = tmp41;
					HX_STACK_LINE(531)
					::flixel::math::FlxPoint tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(531)
					{
						HX_STACK_LINE(531)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp43 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(531)
						::flixel::math::FlxPoint tmp44 = tmp43->get();		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(531)
						::flixel::math::FlxPoint tmp45 = tmp44->set((int)0,(int)0);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(531)
						::flixel::math::FlxPoint point = tmp45;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(531)
						point->_inPool = false;
						HX_STACK_LINE(531)
						tmp42 = point;
					}
					HX_STACK_LINE(531)
					offset = tmp42;
					HX_STACK_LINE(532)
					::String tmp43 = letters;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(532)
					int tmp44 = letterIndex;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(532)
					int tmp45 = ::haxe::Utf8_obj::charCodeAt(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(532)
					::flixel::math::FlxRect tmp46 = charRect;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(532)
					::flixel::math::FlxPoint tmp47 = offset;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(532)
					int tmp48 = xAdvance;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(532)
					font->addCharFrame(tmp45,tmp46,tmp47,tmp48);
					HX_STACK_LINE(533)
					(letterIndex)++;
					HX_STACK_LINE(535)
					bool tmp49 = (letterIndex >= numLetters);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(535)
					if ((tmp49)){
						HX_STACK_LINE(537)
						::flixel::graphics::frames::FlxBitmapFont tmp50 = font;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(537)
						return tmp50;
					}
				}
			}
		}
	}
	HX_STACK_LINE(542)
	font->updateSourceHeight();
	HX_STACK_LINE(543)
	::flixel::graphics::frames::FlxBitmapFont tmp35 = font;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(543)
	return tmp35;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapFont_obj,fromMonospace,return )

::flixel::graphics::frames::FlxBitmapFont FlxBitmapFont_obj::findFont( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBitmapFont","findFont",0xac44093d,"flixel.graphics.frames.FlxBitmapFont.findFont","flixel/graphics/frames/FlxBitmapFont.hx",605,0xde348206)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(606)
	bool tmp = (border == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(606)
	if ((tmp)){
		HX_STACK_LINE(607)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		{
			HX_STACK_LINE(607)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(607)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(607)
			::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(607)
				::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(607)
				Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(607)
				Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(607)
				::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(607)
				::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(607)
				point->_inPool = false;
				HX_STACK_LINE(607)
				tmp2 = point;
			}
			HX_STACK_LINE(607)
			::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(607)
			point->_weak = true;
			HX_STACK_LINE(607)
			tmp1 = point;
		}
		HX_STACK_LINE(607)
		border = tmp1;
	}
	HX_STACK_LINE(609)
	Array< ::Dynamic > bitmapFonts;		HX_STACK_VAR(bitmapFonts,"bitmapFonts");
	struct _Function_1_1{
		inline static cpp::ArrayBase Block( ::flixel::graphics::frames::FlxFrame &frame){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxBitmapFont.hx",609,0xde348206)
			{
				HX_STACK_LINE(609)
				::flixel::graphics::FlxGraphic _this = frame->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(609)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::FONT;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(609)
				::flixel::graphics::frames::FlxFrameCollectionType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(609)
				cpp::ArrayBase collections = ((cpp::ArrayBase)(_this->frameCollections->get(tmp1)));		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(609)
				bool tmp2 = (collections == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(609)
				if ((tmp2)){
					HX_STACK_LINE(609)
					collections = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(609)
					::flixel::graphics::frames::FlxFrameCollectionType tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(609)
					_this->frameCollections->set(tmp3,collections);
				}
				HX_STACK_LINE(609)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(609)
	bitmapFonts = ((Array< ::Dynamic >)(_Function_1_1::Block(frame)));
	HX_STACK_LINE(610)
	{
		HX_STACK_LINE(610)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(610)
		while((true)){
			HX_STACK_LINE(610)
			bool tmp1 = (_g < bitmapFonts->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(610)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			if ((tmp2)){
				HX_STACK_LINE(610)
				break;
			}
			HX_STACK_LINE(610)
			::flixel::graphics::frames::FlxBitmapFont tmp3 = bitmapFonts->__get(_g).StaticCast< ::flixel::graphics::frames::FlxBitmapFont >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(610)
			::flixel::graphics::frames::FlxBitmapFont font = tmp3;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(610)
			++(_g);
			HX_STACK_LINE(612)
			bool tmp4 = (font->frame == frame);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(612)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(612)
			if ((tmp4)){
				HX_STACK_LINE(612)
				::flixel::math::FlxPoint _this = font->border;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(612)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(612)
				{
					HX_STACK_LINE(612)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(612)
					Float tmp7 = (_this->x - border->x);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(612)
					Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(612)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(612)
					Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(612)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(612)
					Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(612)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(612)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(612)
					Float tmp15 = aDiff;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(612)
					bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(612)
					tmp6 = tmp16;
				}
				HX_STACK_LINE(612)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(612)
				bool tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(612)
				if ((tmp8)){
					HX_STACK_LINE(612)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(612)
					Float tmp9 = (_this->y - border->y);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(612)
					Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(612)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(612)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(612)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(612)
					Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(612)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(612)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(612)
					Float tmp17 = aDiff;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(612)
					bool tmp18 = (tmp16 <= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(612)
					tmp7 = tmp18;
				}
				else{
					HX_STACK_LINE(612)
					tmp7 = false;
				}
				HX_STACK_LINE(612)
				bool result = tmp7;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(612)
				{
					HX_STACK_LINE(612)
					bool tmp9 = border->_weak;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(612)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(612)
					if ((tmp10)){
						HX_STACK_LINE(612)
						border->put();
					}
				}
				HX_STACK_LINE(612)
				tmp5 = result;
			}
			else{
				HX_STACK_LINE(612)
				tmp5 = false;
			}
			HX_STACK_LINE(612)
			if ((tmp5)){
				HX_STACK_LINE(614)
				::flixel::graphics::frames::FlxBitmapFont tmp6 = font;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(614)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(617)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapFont_obj,findFont,return )


FlxBitmapFont_obj::FlxBitmapFont_obj()
{
}

void FlxBitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapFont);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(lineHeight,"lineHeight");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(numLetters,"numLetters");
	HX_MARK_MEMBER_NAME(minOffsetX,"minOffsetX");
	HX_MARK_MEMBER_NAME(spaceWidth,"spaceWidth");
	HX_MARK_MEMBER_NAME(charMap,"charMap");
	HX_MARK_MEMBER_NAME(charAdvance,"charAdvance");
	HX_MARK_MEMBER_NAME(frame,"frame");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(lineHeight,"lineHeight");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(numLetters,"numLetters");
	HX_VISIT_MEMBER_NAME(minOffsetX,"minOffsetX");
	HX_VISIT_MEMBER_NAME(spaceWidth,"spaceWidth");
	HX_VISIT_MEMBER_NAME(charMap,"charMap");
	HX_VISIT_MEMBER_NAME(charAdvance,"charAdvance");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBitmapFont_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"bold") ) { return bold; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return italic; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charMap") ) { return charMap; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return addBorder_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { return lineHeight; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { return numLetters; }
		if (HX_FIELD_EQ(inName,"minOffsetX") ) { return minOffsetX; }
		if (HX_FIELD_EQ(inName,"spaceWidth") ) { return spaceWidth; }
		if (HX_FIELD_EQ(inName,"charExists") ) { return charExists_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"charAdvance") ) { return charAdvance; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addCharFrame") ) { return addCharFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getCharFrame") ) { return getCharFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getCharWidth") ) { return getCharWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCharAdvance") ) { return getCharAdvance_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateSourceHeight") ) { return updateSourceHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBitmapFont_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = point; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromXNA") ) { outValue = fromXNA_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flashRect") ) { outValue = flashRect; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromAngelCode") ) { outValue = fromAngelCode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromMonospace") ) { outValue = fromMonospace_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDefaultFont") ) { outValue = getDefaultFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { outValue = transformPoint_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxBitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charMap") ) { charMap=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { lineHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { numLetters=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minOffsetX") ) { minOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spaceWidth") ) { spaceWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"charAdvance") ) { charAdvance=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBitmapFont_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flashRect") ) { flashRect=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
	}
	return false;
}

void FlxBitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"));
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("numLetters","\x27","\xdb","\xae","\x34"));
	outFields->push(HX_HCSTRING("minOffsetX","\xf3","\x55","\x1c","\x9d"));
	outFields->push(HX_HCSTRING("spaceWidth","\x60","\x8b","\x97","\x2b"));
	outFields->push(HX_HCSTRING("charMap","\x66","\xcd","\x5d","\xcf"));
	outFields->push(HX_HCSTRING("charAdvance","\x4c","\xf8","\x90","\x16"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBitmapFont_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsInt,(int)offsetof(FlxBitmapFont_obj,lineHeight),HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6")},
	{hx::fsBool,(int)offsetof(FlxBitmapFont_obj,bold),HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")},
	{hx::fsBool,(int)offsetof(FlxBitmapFont_obj,italic),HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")},
	{hx::fsString,(int)offsetof(FlxBitmapFont_obj,fontName),HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb")},
	{hx::fsInt,(int)offsetof(FlxBitmapFont_obj,numLetters),HX_HCSTRING("numLetters","\x27","\xdb","\xae","\x34")},
	{hx::fsInt,(int)offsetof(FlxBitmapFont_obj,minOffsetX),HX_HCSTRING("minOffsetX","\xf3","\x55","\x1c","\x9d")},
	{hx::fsInt,(int)offsetof(FlxBitmapFont_obj,spaceWidth),HX_HCSTRING("spaceWidth","\x60","\x8b","\x97","\x2b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxBitmapFont_obj,charMap),HX_HCSTRING("charMap","\x66","\xcd","\x5d","\xcf")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxBitmapFont_obj,charAdvance),HX_HCSTRING("charAdvance","\x4c","\xf8","\x90","\x16")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxBitmapFont_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxBitmapFont_obj::spaceCode,HX_HCSTRING("spaceCode","\x13","\x45","\x91","\x73")},
	{hx::fsInt,(void *) &FlxBitmapFont_obj::tabCode,HX_HCSTRING("tabCode","\x22","\x86","\x3a","\x3a")},
	{hx::fsInt,(void *) &FlxBitmapFont_obj::newLineCode,HX_HCSTRING("newLineCode","\xc1","\xeb","\xca","\xa3")},
	{hx::fsString,(void *) &FlxBitmapFont_obj::defaultFontKey,HX_HCSTRING("defaultFontKey","\x4f","\x88","\x64","\xc5")},
	{hx::fsString,(void *) &FlxBitmapFont_obj::defaultFontData,HX_HCSTRING("defaultFontData","\x7a","\x31","\xef","\xed")},
	{hx::fsString,(void *) &FlxBitmapFont_obj::DEFAULT_CHARS,HX_HCSTRING("DEFAULT_CHARS","\x5f","\x77","\x29","\xb9")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxBitmapFont_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxBitmapFont_obj::flashRect,HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"),
	HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"),
	HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"),
	HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),
	HX_HCSTRING("numLetters","\x27","\xdb","\xae","\x34"),
	HX_HCSTRING("minOffsetX","\xf3","\x55","\x1c","\x9d"),
	HX_HCSTRING("spaceWidth","\x60","\x8b","\x97","\x2b"),
	HX_HCSTRING("charMap","\x66","\xcd","\x5d","\xcf"),
	HX_HCSTRING("charAdvance","\x4c","\xf8","\x90","\x16"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("addCharFrame","\x16","\x23","\x30","\xbf"),
	HX_HCSTRING("updateSourceHeight","\xcb","\xfe","\x5f","\x70"),
	HX_HCSTRING("charExists","\x52","\xb5","\xff","\x33"),
	HX_HCSTRING("getCharFrame","\x01","\x9e","\x32","\xcf"),
	HX_HCSTRING("getCharAdvance","\x56","\x4b","\x2f","\x9e"),
	HX_HCSTRING("getCharWidth","\xda","\xdb","\x11","\x93"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::spaceCode,"spaceCode");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::tabCode,"tabCode");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::newLineCode,"newLineCode");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::defaultFontKey,"defaultFontKey");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::defaultFontData,"defaultFontData");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_CHARS,"DEFAULT_CHARS");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxBitmapFont_obj::flashRect,"flashRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::spaceCode,"spaceCode");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::tabCode,"tabCode");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::newLineCode,"newLineCode");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::defaultFontKey,"defaultFontKey");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::defaultFontData,"defaultFontData");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::DEFAULT_CHARS,"DEFAULT_CHARS");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxBitmapFont_obj::flashRect,"flashRect");
};

#endif

hx::Class FlxBitmapFont_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("spaceCode","\x13","\x45","\x91","\x73"),
	HX_HCSTRING("tabCode","\x22","\x86","\x3a","\x3a"),
	HX_HCSTRING("newLineCode","\xc1","\xeb","\xca","\xa3"),
	HX_HCSTRING("defaultFontKey","\x4f","\x88","\x64","\xc5"),
	HX_HCSTRING("defaultFontData","\x7a","\x31","\xef","\xed"),
	HX_HCSTRING("DEFAULT_CHARS","\x5f","\x77","\x29","\xb9"),
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02"),
	HX_HCSTRING("getDefaultFont","\x3a","\xaa","\x1d","\x9d"),
	HX_HCSTRING("fromAngelCode","\xc4","\xcc","\x21","\x6e"),
	HX_HCSTRING("fromXNA","\x61","\x23","\x06","\x58"),
	HX_HCSTRING("transformPoint","\x44","\xcf","\x11","\x3d"),
	HX_HCSTRING("fromMonospace","\xf9","\x0e","\xcf","\xd2"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	::String(null()) };

void FlxBitmapFont_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxBitmapFont","\x79","\xe8","\x86","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapFont_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBitmapFont_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapFont_obj >;
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

void FlxBitmapFont_obj::__boot()
{
	spaceCode= (int)32;
	tabCode= (int)9;
	newLineCode= (int)10;
	defaultFontKey= HX_HCSTRING("defaultFontKey","\x4f","\x88","\x64","\xc5");
	defaultFontData= HX_HCSTRING(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000","\xb9","\xed","\x10","\x8a");
	DEFAULT_CHARS= HX_HCSTRING(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~","\x6f","\x61","\x48","\x0a");
	point= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	flashRect= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
