#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxBitmapFont
#include <flixel/graphics/frames/FlxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxBitmapText
#include <flixel/text/FlxBitmapText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
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
namespace flixel{
namespace text{

Void FlxBitmapText_obj::__construct(::flixel::graphics::frames::FlxBitmapFont font)
{
HX_STACK_FRAME("flixel.text.FlxBitmapText","new",0x8de9daf1,"flixel.text.FlxBitmapText.new","flixel/text/FlxBitmapText.hx",25,0x5518a9ff)
HX_STACK_THIS(this)
HX_STACK_ARG(font,"font")
{
	HX_STACK_LINE(185)
	this->pendingPixelsChange = true;
	HX_STACK_LINE(184)
	this->pendingTextBitmapChange = true;
	HX_STACK_LINE(183)
	this->pendingTextChange = true;
	HX_STACK_LINE(173)
	this->numLines = (int)0;
	HX_STACK_LINE(168)
	this->multiLine = true;
	HX_STACK_LINE(163)
	this->backgroundColor = (int)0;
	HX_STACK_LINE(158)
	this->background = false;
	HX_STACK_LINE(147)
	this->borderQuality = ((Float)0);
	HX_STACK_LINE(140)
	this->borderSize = ((Float)1);
	HX_STACK_LINE(135)
	this->borderColor = (int)-16777216;
	HX_STACK_LINE(130)
	this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE;
	HX_STACK_LINE(125)
	this->useTextColor = false;
	HX_STACK_LINE(120)
	this->textColor = (int)-1;
	HX_STACK_LINE(114)
	this->numSpacesInTab = (int)4;
	HX_STACK_LINE(94)
	this->padding = (int)0;
	HX_STACK_LINE(89)
	this->autoSize = true;
	HX_STACK_LINE(83)
	this->wrapByWord = true;
	HX_STACK_LINE(77)
	this->wordWrap = true;
	HX_STACK_LINE(72)
	this->autoUpperCase = false;
	HX_STACK_LINE(67)
	this->letterSpacing = (int)0;
	HX_STACK_LINE(62)
	this->lineSpacing = (int)0;
	HX_STACK_LINE(57)
	this->alignment = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	HX_STACK_LINE(50)
	this->_linesWidth = Array_obj< int >::__new();
	HX_STACK_LINE(46)
	this->_lines = Array_obj< ::String >::__new();
	HX_STACK_LINE(40)
	this->_colorParams = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(35)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(202)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(204)
	int tmp = this->set_fieldWidth((int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	this->set_width(tmp);
	HX_STACK_LINE(205)
	this->set_alpha((int)1);
	HX_STACK_LINE(207)
	bool tmp1 = (font == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	::flixel::graphics::frames::FlxBitmapFont tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	if ((tmp1)){
		HX_STACK_LINE(207)
		tmp2 = ::flixel::graphics::frames::FlxBitmapFont_obj::getDefaultFont();
	}
	else{
		HX_STACK_LINE(207)
		tmp2 = font;
	}
	HX_STACK_LINE(207)
	this->set_font(tmp2);
	HX_STACK_LINE(209)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(209)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(209)
		::flixel::math::FlxPoint tmp6 = tmp5->set((int)1,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(209)
		point->_inPool = false;
		HX_STACK_LINE(209)
		tmp3 = point;
	}
	HX_STACK_LINE(209)
	this->shadowOffset = tmp3;
	HX_STACK_LINE(211)
	bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	if ((tmp4)){
		HX_STACK_LINE(213)
		::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		this->set_pixels(tmp5);
	}
	else{
		HX_STACK_LINE(217)
		this->textData = Array_obj< Float >::__new();
		HX_STACK_LINE(219)
		this->textDrawData = Array_obj< Float >::__new();
		HX_STACK_LINE(220)
		this->borderDrawData = Array_obj< Float >::__new();
	}
}
;
	return null();
}

//FlxBitmapText_obj::~FlxBitmapText_obj() { }

Dynamic FlxBitmapText_obj::__CreateEmpty() { return  new FlxBitmapText_obj; }
hx::ObjectPtr< FlxBitmapText_obj > FlxBitmapText_obj::__new(::flixel::graphics::frames::FlxBitmapFont font)
{  hx::ObjectPtr< FlxBitmapText_obj > _result_ = new FlxBitmapText_obj();
	_result_->__construct(font);
	return _result_;}

Dynamic FlxBitmapText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapText_obj > _result_ = new FlxBitmapText_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxBitmapText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","destroy",0xb403540b,"flixel.text.FlxBitmapText.destroy","flixel/text/FlxBitmapText.hx",228,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->set_font(null());
		HX_STACK_LINE(230)
		this->set_text(null());
		HX_STACK_LINE(231)
		this->_lines = null();
		HX_STACK_LINE(232)
		this->_linesWidth = null();
		HX_STACK_LINE(234)
		::flixel::math::FlxPoint tmp = this->shadowOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		this->shadowOffset = tmp1;
		HX_STACK_LINE(235)
		::openfl::_legacy::display::BitmapData tmp2 = this->textBitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		::openfl::_legacy::display::BitmapData tmp3 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		this->textBitmap = tmp3;
		HX_STACK_LINE(237)
		this->_colorParams = null();
		HX_STACK_LINE(239)
		bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		if ((tmp4)){
			HX_STACK_LINE(241)
			this->textData = null();
			HX_STACK_LINE(242)
			this->textDrawData = null();
			HX_STACK_LINE(243)
			this->borderDrawData = null();
		}
		HX_STACK_LINE(245)
		this->super::destroy();
	}
return null();
}


Void FlxBitmapText_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","drawFrame",0x14f07ada,"flixel.text.FlxBitmapText.drawFrame","flixel/text/FlxBitmapText.hx",252,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(253)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		if ((tmp)){
			HX_STACK_LINE(255)
			Force = true;
		}
		HX_STACK_LINE(257)
		bool tmp1 = this->pendingTextBitmapChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		if ((tmp2)){
			HX_STACK_LINE(257)
			tmp3 = Force;
		}
		else{
			HX_STACK_LINE(257)
			tmp3 = true;
		}
		HX_STACK_LINE(257)
		this->pendingTextBitmapChange = tmp3;
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			bool useTiles = false;		HX_STACK_VAR(useTiles,"useTiles");
			HX_STACK_LINE(258)
			bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			if ((tmp4)){
				HX_STACK_LINE(258)
				useTiles = false;
			}
			HX_STACK_LINE(258)
			bool tmp5 = this->pendingTextChange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			if ((tmp5)){
				HX_STACK_LINE(258)
				this->updateText();
				HX_STACK_LINE(258)
				this->pendingTextBitmapChange = true;
			}
			HX_STACK_LINE(258)
			bool tmp6 = this->pendingTextBitmapChange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			if ((tmp6)){
				HX_STACK_LINE(258)
				bool tmp7 = useTiles;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(258)
				this->updateTextBitmap(tmp7);
				HX_STACK_LINE(258)
				this->pendingPixelsChange = true;
			}
			HX_STACK_LINE(258)
			bool tmp7 = this->pendingPixelsChange;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			if ((tmp7)){
				HX_STACK_LINE(258)
				bool tmp8 = useTiles;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(258)
				this->updatePixels(tmp8);
			}
		}
		HX_STACK_LINE(259)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		if ((tmp4)){
			HX_STACK_LINE(261)
			bool tmp5 = Force;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			this->super::drawFrame(tmp5);
		}
	}
return null();
}


Void FlxBitmapText_obj::checkPendingChanges( hx::Null< bool >  __o_useTiles){
bool useTiles = __o_useTiles.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","checkPendingChanges",0xc17800e5,"flixel.text.FlxBitmapText.checkPendingChanges","flixel/text/FlxBitmapText.hx",266,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useTiles,"useTiles")
{
		HX_STACK_LINE(267)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			useTiles = false;
		}
		HX_STACK_LINE(272)
		bool tmp1 = this->pendingTextChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		if ((tmp1)){
			HX_STACK_LINE(274)
			this->updateText();
			HX_STACK_LINE(275)
			this->pendingTextBitmapChange = true;
		}
		HX_STACK_LINE(278)
		bool tmp2 = this->pendingTextBitmapChange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		if ((tmp2)){
			HX_STACK_LINE(280)
			bool tmp3 = useTiles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			this->updateTextBitmap(tmp3);
			HX_STACK_LINE(281)
			this->pendingPixelsChange = true;
		}
		HX_STACK_LINE(284)
		bool tmp3 = this->pendingPixelsChange;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		if ((tmp3)){
			HX_STACK_LINE(286)
			bool tmp4 = useTiles;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			this->updatePixels(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,checkPendingChanges,(void))

Void FlxBitmapText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","draw",0x98236053,"flixel.text.FlxBitmapText.draw","flixel/text/FlxBitmapText.hx",291,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		if ((tmp)){
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				bool useTiles = false;		HX_STACK_VAR(useTiles,"useTiles");
				HX_STACK_LINE(294)
				bool tmp1 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(294)
				if ((tmp1)){
					HX_STACK_LINE(294)
					useTiles = false;
				}
				HX_STACK_LINE(294)
				bool tmp2 = this->pendingTextChange;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(294)
				if ((tmp2)){
					HX_STACK_LINE(294)
					this->updateText();
					HX_STACK_LINE(294)
					this->pendingTextBitmapChange = true;
				}
				HX_STACK_LINE(294)
				bool tmp3 = this->pendingTextBitmapChange;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(294)
				if ((tmp3)){
					HX_STACK_LINE(294)
					bool tmp4 = useTiles;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(294)
					this->updateTextBitmap(tmp4);
					HX_STACK_LINE(294)
					this->pendingPixelsChange = true;
				}
				HX_STACK_LINE(294)
				bool tmp4 = this->pendingPixelsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(294)
				if ((tmp4)){
					HX_STACK_LINE(294)
					bool tmp5 = useTiles;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(294)
					this->updatePixels(tmp5);
				}
			}
			HX_STACK_LINE(295)
			this->super::draw();
		}
		else{
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(299)
				bool useTiles = true;		HX_STACK_VAR(useTiles,"useTiles");
				HX_STACK_LINE(299)
				bool tmp1 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(299)
				if ((tmp1)){
					HX_STACK_LINE(299)
					useTiles = false;
				}
				HX_STACK_LINE(299)
				bool tmp2 = this->pendingTextChange;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(299)
				if ((tmp2)){
					HX_STACK_LINE(299)
					this->updateText();
					HX_STACK_LINE(299)
					this->pendingTextBitmapChange = true;
				}
				HX_STACK_LINE(299)
				bool tmp3 = this->pendingTextBitmapChange;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				if ((tmp3)){
					HX_STACK_LINE(299)
					bool tmp4 = useTiles;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(299)
					this->updateTextBitmap(tmp4);
					HX_STACK_LINE(299)
					this->pendingPixelsChange = true;
				}
				HX_STACK_LINE(299)
				bool tmp4 = this->pendingPixelsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				if ((tmp4)){
					HX_STACK_LINE(299)
					bool tmp5 = useTiles;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(299)
					this->updatePixels(tmp5);
				}
			}
			HX_STACK_LINE(301)
			int tmp1 = this->textDrawData->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(301)
			Float tmp2 = (Float(tmp1) / Float((int)3));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(301)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			int textLength = tmp3;		HX_STACK_VAR(textLength,"textLength");
			HX_STACK_LINE(302)
			int tmp4 = this->borderDrawData->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			Float tmp5 = (Float(tmp4) / Float((int)3));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(302)
			int borderLength = tmp6;		HX_STACK_VAR(borderLength,"borderLength");
			HX_STACK_LINE(304)
			int dataPos;		HX_STACK_VAR(dataPos,"dataPos");
			HX_STACK_LINE(306)
			int tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(306)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(306)
			int tmp9 = (int(tmp8) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(306)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(306)
			Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(306)
			Float cr = tmp11;		HX_STACK_VAR(cr,"cr");
			HX_STACK_LINE(307)
			int tmp12 = this->color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(307)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(307)
			int tmp14 = (int(tmp13) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(307)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(307)
			Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(307)
			Float cg = tmp16;		HX_STACK_VAR(cg,"cg");
			HX_STACK_LINE(308)
			int tmp17 = this->color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(308)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(308)
			int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(308)
			Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(308)
			Float cb = tmp20;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(310)
			int tmp21 = this->borderColor;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(310)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(310)
			int tmp23 = (int(tmp22) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(310)
			int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(310)
			Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(310)
			Float tmp26 = cr;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(310)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(310)
			Float borderRed = tmp27;		HX_STACK_VAR(borderRed,"borderRed");
			HX_STACK_LINE(311)
			int tmp28 = this->borderColor;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(311)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(311)
			int tmp30 = (int(tmp29) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(311)
			int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(311)
			Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(311)
			Float tmp33 = cg;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(311)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(311)
			Float borderGreen = tmp34;		HX_STACK_VAR(borderGreen,"borderGreen");
			HX_STACK_LINE(312)
			int tmp35 = this->borderColor;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(312)
			int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(312)
			int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(312)
			Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(312)
			Float tmp39 = cb;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(312)
			Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(312)
			Float borderBlue = tmp40;		HX_STACK_VAR(borderBlue,"borderBlue");
			HX_STACK_LINE(313)
			int tmp41 = this->borderColor;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(313)
			int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(313)
			int tmp43 = (int(tmp42) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(313)
			int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(313)
			Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(313)
			Float tmp46 = this->alpha;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(313)
			Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(313)
			Float bAlpha = tmp47;		HX_STACK_VAR(bAlpha,"bAlpha");
			HX_STACK_LINE(315)
			Float textRed = cr;		HX_STACK_VAR(textRed,"textRed");
			HX_STACK_LINE(316)
			Float textGreen = cg;		HX_STACK_VAR(textGreen,"textGreen");
			HX_STACK_LINE(317)
			Float textBlue = cb;		HX_STACK_VAR(textBlue,"textBlue");
			HX_STACK_LINE(318)
			Float tmp48 = this->alpha;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(318)
			Float tAlpha = tmp48;		HX_STACK_VAR(tAlpha,"tAlpha");
			HX_STACK_LINE(320)
			bool tmp49 = this->useTextColor;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(320)
			if ((tmp49)){
				HX_STACK_LINE(322)
				int tmp50 = this->textColor;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(322)
				int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(322)
				int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(322)
				int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(322)
				Float tmp54 = (Float(tmp53) / Float((int)255));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(322)
				hx::MultEq(textRed,tmp54);
				HX_STACK_LINE(323)
				int tmp55 = this->textColor;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(323)
				int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(323)
				int tmp57 = (int(tmp56) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(323)
				int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(323)
				Float tmp59 = (Float(tmp58) / Float((int)255));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(323)
				hx::MultEq(textGreen,tmp59);
				HX_STACK_LINE(324)
				int tmp60 = this->textColor;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(324)
				int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(324)
				int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(324)
				Float tmp63 = (Float(tmp62) / Float((int)255));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(324)
				hx::MultEq(textBlue,tmp63);
				HX_STACK_LINE(325)
				int tmp64 = this->textColor;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(325)
				int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(325)
				int tmp66 = (int(tmp65) >> int((int)24));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(325)
				int tmp67 = (int(tmp66) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(325)
				hx::MultEq(tAlpha,tmp67);
			}
			HX_STACK_LINE(328)
			Float bgRed = cr;		HX_STACK_VAR(bgRed,"bgRed");
			HX_STACK_LINE(329)
			Float bgGreen = cg;		HX_STACK_VAR(bgGreen,"bgGreen");
			HX_STACK_LINE(330)
			Float bgBlue = cb;		HX_STACK_VAR(bgBlue,"bgBlue");
			HX_STACK_LINE(331)
			Float tmp50 = this->alpha;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(331)
			Float bgAlpha = tmp50;		HX_STACK_VAR(bgAlpha,"bgAlpha");
			HX_STACK_LINE(333)
			bool tmp51 = this->background;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(333)
			if ((tmp51)){
				HX_STACK_LINE(335)
				int tmp52 = this->backgroundColor;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(335)
				int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(335)
				int tmp54 = (int(tmp53) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(335)
				int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(335)
				Float tmp56 = (Float(tmp55) / Float((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(335)
				hx::MultEq(bgRed,tmp56);
				HX_STACK_LINE(336)
				int tmp57 = this->backgroundColor;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(336)
				int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(336)
				int tmp59 = (int(tmp58) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(336)
				int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(336)
				Float tmp61 = (Float(tmp60) / Float((int)255));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(336)
				hx::MultEq(bgGreen,tmp61);
				HX_STACK_LINE(337)
				int tmp62 = this->backgroundColor;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(337)
				int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(337)
				int tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(337)
				Float tmp65 = (Float(tmp64) / Float((int)255));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(337)
				hx::MultEq(bgBlue,tmp65);
				HX_STACK_LINE(338)
				int tmp66 = this->backgroundColor;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(338)
				int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(338)
				int tmp68 = (int(tmp67) >> int((int)24));		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(338)
				int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(338)
				Float tmp70 = (Float(tmp69) / Float((int)255));		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(338)
				hx::MultEq(bgAlpha,tmp70);
			}
			HX_STACK_LINE(341)
			::flixel::graphics::tile::FlxDrawTilesItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(342)
			::flixel::graphics::frames::FlxFrame currFrame = null();		HX_STACK_VAR(currFrame,"currFrame");
			HX_STACK_LINE(343)
			Float currTileX = (int)0;		HX_STACK_VAR(currTileX,"currTileX");
			HX_STACK_LINE(344)
			Float currTileY = (int)0;		HX_STACK_VAR(currTileY,"currTileY");
			HX_STACK_LINE(345)
			::flixel::math::FlxPoint tmp52 = this->scale;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(345)
			Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(345)
			int tmp54 = this->_facingHorizontalMult;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(345)
			Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(345)
			Float sx = tmp55;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(346)
			::flixel::math::FlxPoint tmp56 = this->scale;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(346)
			Float tmp57 = tmp56->y;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(346)
			int tmp58 = this->_facingVerticalMult;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(346)
			Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(346)
			Float sy = tmp59;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(348)
			::flixel::math::FlxPoint tmp60 = this->origin;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(348)
			Float ox = tmp60->x;		HX_STACK_VAR(ox,"ox");
			HX_STACK_LINE(349)
			::flixel::math::FlxPoint tmp61 = this->origin;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(349)
			Float oy = tmp61->y;		HX_STACK_VAR(oy,"oy");
			HX_STACK_LINE(351)
			int tmp62 = this->_facingHorizontalMult;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(351)
			bool tmp63 = (tmp62 != (int)1);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(351)
			if ((tmp63)){
				HX_STACK_LINE(353)
				int tmp64 = this->frameWidth;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(353)
				Float tmp65 = ox;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(353)
				Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(353)
				ox = tmp66;
			}
			HX_STACK_LINE(355)
			int tmp64 = this->_facingVerticalMult;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(355)
			bool tmp65 = (tmp64 != (int)1);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(355)
			if ((tmp65)){
				HX_STACK_LINE(357)
				int tmp66 = this->frameHeight;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(357)
				Float tmp67 = oy;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(357)
				Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(357)
				oy = tmp68;
			}
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(360)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(360)
				Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(360)
				while((true)){
					HX_STACK_LINE(360)
					bool tmp66 = (_g < _g1->length);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(360)
					bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(360)
					if ((tmp67)){
						HX_STACK_LINE(360)
						break;
					}
					HX_STACK_LINE(360)
					::flixel::FlxCamera tmp68 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(360)
					::flixel::FlxCamera camera = tmp68;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(360)
					++(_g);
					HX_STACK_LINE(362)
					bool tmp69 = camera->visible;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(362)
					bool tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(362)
					bool tmp71 = !(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(362)
					bool tmp72 = !(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(362)
					bool tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(362)
					bool tmp74;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(362)
					if ((tmp73)){
						HX_STACK_LINE(362)
						bool tmp75 = camera->exists;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(362)
						bool tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(362)
						bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(362)
						tmp74 = !(tmp77);
					}
					else{
						HX_STACK_LINE(362)
						tmp74 = true;
					}
					HX_STACK_LINE(362)
					bool tmp75 = !(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(362)
					bool tmp76;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(362)
					if ((tmp75)){
						HX_STACK_LINE(362)
						::flixel::FlxCamera tmp77 = camera;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(362)
						::flixel::FlxCamera tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(362)
						bool tmp79 = this->isOnScreen(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(362)
						bool tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(362)
						bool tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(362)
						tmp76 = !(tmp81);
					}
					else{
						HX_STACK_LINE(362)
						tmp76 = true;
					}
					HX_STACK_LINE(362)
					if ((tmp76)){
						HX_STACK_LINE(364)
						continue;
					}
					HX_STACK_LINE(367)
					::flixel::math::FlxPoint tmp77 = this->_point;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(367)
					::flixel::FlxCamera tmp78 = camera;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(367)
					::flixel::math::FlxPoint tmp79 = this->getScreenPosition(tmp77,tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(367)
					::flixel::math::FlxPoint tmp80 = this->offset;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(367)
					tmp79->subtractPoint(tmp80);
					HX_STACK_LINE(369)
					::flixel::FlxCamera tmp81 = camera;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(369)
					bool tmp82 = this->isPixelPerfectRender(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(369)
					if ((tmp82)){
						HX_STACK_LINE(371)
						::flixel::math::FlxPoint tmp83 = this->_point;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(371)
						::flixel::math::FlxPoint _this = tmp83;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(371)
						Float tmp84 = _this->x;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(371)
						int tmp85 = ::Math_obj::floor(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(371)
						_this->set_x(tmp85);
						HX_STACK_LINE(371)
						Float tmp86 = _this->y;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(371)
						int tmp87 = ::Math_obj::floor(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(371)
						_this->set_y(tmp87);
						HX_STACK_LINE(371)
						_this;
					}
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						bool tmp83 = this->_angleChanged;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(374)
						if ((tmp83)){
							HX_STACK_LINE(374)
							Float tmp84 = this->angle;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(374)
							Float tmp85 = ::Math_obj::PI;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(374)
							Float tmp86 = (Float(tmp85) / Float((int)180));		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(374)
							Float tmp87 = (tmp84 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(374)
							Float radians = tmp87;		HX_STACK_VAR(radians,"radians");
							HX_STACK_LINE(374)
							Float tmp88 = radians;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(374)
							Float tmp89 = ::Math_obj::sin(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(374)
							this->_sinAngle = tmp89;
							HX_STACK_LINE(374)
							Float tmp90 = radians;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(374)
							Float tmp91 = ::Math_obj::cos(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(374)
							this->_cosAngle = tmp91;
							HX_STACK_LINE(374)
							this->_angleChanged = false;
						}
					}
					HX_STACK_LINE(376)
					bool tmp83 = this->background;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(376)
					if ((tmp83)){
						HX_STACK_LINE(379)
						::flixel::_system::frontEnds::BitmapFrontEnd tmp84 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(379)
						::flixel::graphics::frames::FlxFrame tmp85 = tmp84->__Field(HX_HCSTRING("get_whitePixel","\x66","\x2f","\xed","\x8f"), hx::paccDynamic )();		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(379)
						currFrame = tmp85;
						HX_STACK_LINE(380)
						::flixel::math::FlxMatrix tmp86 = this->_matrix;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(380)
						tmp86->identity();
						HX_STACK_LINE(381)
						::flixel::math::FlxMatrix tmp87 = this->_matrix;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(381)
						int tmp88 = this->frameWidth;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(381)
						Float tmp89 = (((Float)0.1) * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(381)
						int tmp90 = this->frameHeight;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(381)
						Float tmp91 = (((Float)0.1) * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(381)
						tmp87->scale(tmp89,tmp91);
						HX_STACK_LINE(382)
						::flixel::math::FlxMatrix tmp92 = this->_matrix;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(382)
						Float tmp93 = ox;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(382)
						Float tmp94 = -(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(382)
						Float tmp95 = oy;		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(382)
						Float tmp96 = -(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(382)
						tmp92->translate(tmp94,tmp96);
						HX_STACK_LINE(383)
						::flixel::math::FlxMatrix tmp97 = this->_matrix;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(383)
						Float tmp98 = sx;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(383)
						Float tmp99 = sy;		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(383)
						tmp97->scale(tmp98,tmp99);
						HX_STACK_LINE(385)
						Float tmp100 = this->angle;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(385)
						bool tmp101 = (tmp100 != (int)0);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(385)
						if ((tmp101)){
							HX_STACK_LINE(387)
							::flixel::math::FlxMatrix tmp102 = this->_matrix;		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(387)
							::flixel::math::FlxMatrix _this = tmp102;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(387)
							Float tmp103 = this->_cosAngle;		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(387)
							Float cos = tmp103;		HX_STACK_VAR(cos,"cos");
							HX_STACK_LINE(387)
							Float tmp104 = this->_sinAngle;		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(387)
							Float sin = tmp104;		HX_STACK_VAR(sin,"sin");
							HX_STACK_LINE(387)
							Float tmp105 = (_this->a * cos);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(387)
							Float tmp106 = (_this->b * sin);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(387)
							Float tmp107 = (tmp105 - tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(387)
							Float a1 = tmp107;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(387)
							Float tmp108 = (_this->a * sin);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(387)
							Float tmp109 = (_this->b * cos);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(387)
							Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(387)
							_this->b = tmp110;
							HX_STACK_LINE(387)
							_this->a = a1;
							HX_STACK_LINE(387)
							Float tmp111 = (_this->c * cos);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(387)
							Float tmp112 = (_this->d * sin);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(387)
							Float tmp113 = (tmp111 - tmp112);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(387)
							Float c1 = tmp113;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(387)
							Float tmp114 = (_this->c * sin);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(387)
							Float tmp115 = (_this->d * cos);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(387)
							Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(387)
							_this->d = tmp116;
							HX_STACK_LINE(387)
							_this->c = c1;
							HX_STACK_LINE(387)
							Float tmp117 = (_this->tx * cos);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(387)
							Float tmp118 = (_this->ty * sin);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(387)
							Float tmp119 = (tmp117 - tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(387)
							Float tx1 = tmp119;		HX_STACK_VAR(tx1,"tx1");
							HX_STACK_LINE(387)
							Float tmp120 = (_this->tx * sin);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(387)
							Float tmp121 = (_this->ty * cos);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(387)
							Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(387)
							_this->ty = tmp122;
							HX_STACK_LINE(387)
							_this->tx = tx1;
							HX_STACK_LINE(387)
							_this;
						}
						HX_STACK_LINE(390)
						::flixel::math::FlxMatrix tmp102 = this->_matrix;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(390)
						::flixel::math::FlxPoint tmp103 = this->_point;		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(390)
						Float tmp104 = tmp103->x;		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(390)
						Float tmp105 = ox;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(390)
						Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(390)
						::flixel::math::FlxPoint tmp107 = this->_point;		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(390)
						Float tmp108 = tmp107->y;		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(390)
						Float tmp109 = oy;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(390)
						Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(390)
						tmp102->translate(tmp106,tmp110);
						HX_STACK_LINE(391)
						::openfl::_legacy::geom::ColorTransform tmp111 = this->_colorParams;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(391)
						Float tmp112 = bgRed;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(391)
						Float tmp113 = bgGreen;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(391)
						Float tmp114 = bgBlue;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(391)
						Float tmp115 = bgAlpha;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(391)
						::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp111,tmp112,tmp113,tmp114,tmp115);
						HX_STACK_LINE(392)
						::flixel::graphics::frames::FlxFrame tmp116 = currFrame;		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(392)
						::flixel::math::FlxMatrix tmp117 = this->_matrix;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(392)
						::openfl::_legacy::geom::ColorTransform tmp118 = this->_colorParams;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(392)
						::openfl::_legacy::display::BlendMode tmp119 = this->blend;		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(392)
						bool tmp120 = this->antialiasing;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(392)
						camera->drawPixels(tmp116,null(),tmp117,tmp118,tmp119,tmp120);
					}
					HX_STACK_LINE(395)
					::openfl::_legacy::geom::ColorTransform tmp84 = this->colorTransform;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(395)
					bool tmp85 = (tmp84 != null());		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(395)
					bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(395)
					if ((tmp85)){
						HX_STACK_LINE(395)
						::openfl::_legacy::geom::ColorTransform tmp87 = this->colorTransform;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(395)
						::openfl::_legacy::geom::ColorTransform tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(395)
						::openfl::_legacy::geom::ColorTransform tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(395)
						tmp86 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(tmp89);
					}
					else{
						HX_STACK_LINE(395)
						tmp86 = false;
					}
					HX_STACK_LINE(395)
					bool hasColorOffsets = tmp86;		HX_STACK_VAR(hasColorOffsets,"hasColorOffsets");
					HX_STACK_LINE(397)
					::flixel::graphics::frames::FlxBitmapFont tmp87 = this->font;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(397)
					::flixel::graphics::FlxGraphic tmp88 = tmp87->parent;		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(397)
					bool tmp89 = hasColorOffsets;		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(397)
					::openfl::_legacy::display::BlendMode tmp90 = this->blend;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(397)
					bool tmp91 = this->antialiasing;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(397)
					::flixel::graphics::tile::FlxDrawTilesItem tmp92 = camera->startQuadBatch(tmp88,true,tmp89,tmp90,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(397)
					drawItem = tmp92;
					HX_STACK_LINE(399)
					{
						HX_STACK_LINE(399)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(399)
						while((true)){
							HX_STACK_LINE(399)
							bool tmp93 = (_g2 < borderLength);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(399)
							bool tmp94 = !(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(399)
							if ((tmp94)){
								HX_STACK_LINE(399)
								break;
							}
							HX_STACK_LINE(399)
							int tmp95 = (_g2)++;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(399)
							int j = tmp95;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(401)
							int tmp96 = (j * (int)3);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(401)
							dataPos = tmp96;
							HX_STACK_LINE(403)
							::flixel::graphics::frames::FlxFrame tmp97;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(403)
							{
								HX_STACK_LINE(403)
								Float tmp98 = this->borderDrawData->__get(dataPos);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(403)
								int tmp99 = ::Std_obj::_int(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(403)
								int charCode = tmp99;		HX_STACK_VAR(charCode,"charCode");
								HX_STACK_LINE(403)
								::flixel::graphics::frames::FlxBitmapFont tmp100 = this->font;		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(403)
								int tmp101 = charCode;		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(403)
								::flixel::graphics::frames::FlxFrame tmp102 = tmp100->charMap->get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(403)
								tmp97 = tmp102;
							}
							HX_STACK_LINE(403)
							currFrame = tmp97;
							HX_STACK_LINE(405)
							int tmp98 = (dataPos + (int)1);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(405)
							Float tmp99 = this->borderDrawData->__get(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(405)
							currTileX = tmp99;
							HX_STACK_LINE(406)
							int tmp100 = (dataPos + (int)2);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(406)
							Float tmp101 = this->borderDrawData->__get(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(406)
							currTileY = tmp101;
							HX_STACK_LINE(408)
							::flixel::math::FlxMatrix tmp102 = this->_matrix;		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(408)
							currFrame->prepareMatrix(tmp102,null(),null(),null());
							HX_STACK_LINE(409)
							::flixel::math::FlxMatrix tmp103 = this->_matrix;		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(409)
							Float tmp104 = (currTileX - ox);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(409)
							Float tmp105 = (currTileY - oy);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(409)
							tmp103->translate(tmp104,tmp105);
							HX_STACK_LINE(410)
							::flixel::math::FlxMatrix tmp106 = this->_matrix;		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(410)
							Float tmp107 = sx;		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(410)
							Float tmp108 = sy;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(410)
							tmp106->scale(tmp107,tmp108);
							HX_STACK_LINE(411)
							Float tmp109 = this->angle;		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(411)
							bool tmp110 = (tmp109 != (int)0);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(411)
							if ((tmp110)){
								HX_STACK_LINE(413)
								::flixel::math::FlxMatrix tmp111 = this->_matrix;		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(413)
								::flixel::math::FlxMatrix _this = tmp111;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(413)
								Float tmp112 = this->_cosAngle;		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(413)
								Float cos = tmp112;		HX_STACK_VAR(cos,"cos");
								HX_STACK_LINE(413)
								Float tmp113 = this->_sinAngle;		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(413)
								Float sin = tmp113;		HX_STACK_VAR(sin,"sin");
								HX_STACK_LINE(413)
								Float tmp114 = (_this->a * cos);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(413)
								Float tmp115 = (_this->b * sin);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(413)
								Float tmp116 = (tmp114 - tmp115);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(413)
								Float a1 = tmp116;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(413)
								Float tmp117 = (_this->a * sin);		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(413)
								Float tmp118 = (_this->b * cos);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(413)
								Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(413)
								_this->b = tmp119;
								HX_STACK_LINE(413)
								_this->a = a1;
								HX_STACK_LINE(413)
								Float tmp120 = (_this->c * cos);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(413)
								Float tmp121 = (_this->d * sin);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(413)
								Float tmp122 = (tmp120 - tmp121);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(413)
								Float c1 = tmp122;		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(413)
								Float tmp123 = (_this->c * sin);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(413)
								Float tmp124 = (_this->d * cos);		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(413)
								Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(413)
								_this->d = tmp125;
								HX_STACK_LINE(413)
								_this->c = c1;
								HX_STACK_LINE(413)
								Float tmp126 = (_this->tx * cos);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(413)
								Float tmp127 = (_this->ty * sin);		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(413)
								Float tmp128 = (tmp126 - tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(413)
								Float tx1 = tmp128;		HX_STACK_VAR(tx1,"tx1");
								HX_STACK_LINE(413)
								Float tmp129 = (_this->tx * sin);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(413)
								Float tmp130 = (_this->ty * cos);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(413)
								Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(413)
								_this->ty = tmp131;
								HX_STACK_LINE(413)
								_this->tx = tx1;
								HX_STACK_LINE(413)
								_this;
							}
							HX_STACK_LINE(416)
							::flixel::math::FlxMatrix tmp111 = this->_matrix;		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(416)
							::flixel::math::FlxPoint tmp112 = this->_point;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(416)
							Float tmp113 = tmp112->x;		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(416)
							Float tmp114 = ox;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(416)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(416)
							::flixel::math::FlxPoint tmp116 = this->_point;		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(416)
							Float tmp117 = tmp116->y;		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(416)
							Float tmp118 = oy;		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(416)
							Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(416)
							tmp111->translate(tmp115,tmp119);
							HX_STACK_LINE(417)
							::openfl::_legacy::geom::ColorTransform tmp120 = this->_colorParams;		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(417)
							Float tmp121 = borderRed;		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(417)
							Float tmp122 = borderGreen;		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(417)
							Float tmp123 = borderBlue;		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(417)
							Float tmp124 = bAlpha;		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(417)
							::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp120,tmp121,tmp122,tmp123,tmp124);
							HX_STACK_LINE(418)
							::flixel::graphics::frames::FlxFrame tmp125 = currFrame;		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(418)
							::flixel::math::FlxMatrix tmp126 = this->_matrix;		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(418)
							::openfl::_legacy::geom::ColorTransform tmp127 = this->_colorParams;		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(418)
							drawItem->addQuad(tmp125,tmp126,tmp127);
						}
					}
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(421)
						while((true)){
							HX_STACK_LINE(421)
							bool tmp93 = (_g2 < textLength);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(421)
							bool tmp94 = !(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(421)
							if ((tmp94)){
								HX_STACK_LINE(421)
								break;
							}
							HX_STACK_LINE(421)
							int tmp95 = (_g2)++;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(421)
							int j = tmp95;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(423)
							int tmp96 = (j * (int)3);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(423)
							dataPos = tmp96;
							HX_STACK_LINE(425)
							::flixel::graphics::frames::FlxFrame tmp97;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(425)
							{
								HX_STACK_LINE(425)
								Float tmp98 = this->textDrawData->__get(dataPos);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(425)
								int tmp99 = ::Std_obj::_int(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(425)
								int charCode = tmp99;		HX_STACK_VAR(charCode,"charCode");
								HX_STACK_LINE(425)
								::flixel::graphics::frames::FlxBitmapFont tmp100 = this->font;		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(425)
								int tmp101 = charCode;		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(425)
								::flixel::graphics::frames::FlxFrame tmp102 = tmp100->charMap->get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(425)
								tmp97 = tmp102;
							}
							HX_STACK_LINE(425)
							currFrame = tmp97;
							HX_STACK_LINE(427)
							int tmp98 = (dataPos + (int)1);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(427)
							Float tmp99 = this->textDrawData->__get(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(427)
							currTileX = tmp99;
							HX_STACK_LINE(428)
							int tmp100 = (dataPos + (int)2);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(428)
							Float tmp101 = this->textDrawData->__get(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(428)
							currTileY = tmp101;
							HX_STACK_LINE(430)
							::flixel::math::FlxMatrix tmp102 = this->_matrix;		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(430)
							currFrame->prepareMatrix(tmp102,null(),null(),null());
							HX_STACK_LINE(431)
							::flixel::math::FlxMatrix tmp103 = this->_matrix;		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(431)
							Float tmp104 = (currTileX - ox);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(431)
							Float tmp105 = (currTileY - oy);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(431)
							tmp103->translate(tmp104,tmp105);
							HX_STACK_LINE(432)
							::flixel::math::FlxMatrix tmp106 = this->_matrix;		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(432)
							Float tmp107 = sx;		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(432)
							Float tmp108 = sy;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(432)
							tmp106->scale(tmp107,tmp108);
							HX_STACK_LINE(433)
							Float tmp109 = this->angle;		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(433)
							bool tmp110 = (tmp109 != (int)0);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(433)
							if ((tmp110)){
								HX_STACK_LINE(435)
								::flixel::math::FlxMatrix tmp111 = this->_matrix;		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(435)
								::flixel::math::FlxMatrix _this = tmp111;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(435)
								Float tmp112 = this->_cosAngle;		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(435)
								Float cos = tmp112;		HX_STACK_VAR(cos,"cos");
								HX_STACK_LINE(435)
								Float tmp113 = this->_sinAngle;		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(435)
								Float sin = tmp113;		HX_STACK_VAR(sin,"sin");
								HX_STACK_LINE(435)
								Float tmp114 = (_this->a * cos);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(435)
								Float tmp115 = (_this->b * sin);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(435)
								Float tmp116 = (tmp114 - tmp115);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(435)
								Float a1 = tmp116;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(435)
								Float tmp117 = (_this->a * sin);		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(435)
								Float tmp118 = (_this->b * cos);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(435)
								Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(435)
								_this->b = tmp119;
								HX_STACK_LINE(435)
								_this->a = a1;
								HX_STACK_LINE(435)
								Float tmp120 = (_this->c * cos);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(435)
								Float tmp121 = (_this->d * sin);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(435)
								Float tmp122 = (tmp120 - tmp121);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(435)
								Float c1 = tmp122;		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(435)
								Float tmp123 = (_this->c * sin);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(435)
								Float tmp124 = (_this->d * cos);		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(435)
								Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(435)
								_this->d = tmp125;
								HX_STACK_LINE(435)
								_this->c = c1;
								HX_STACK_LINE(435)
								Float tmp126 = (_this->tx * cos);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(435)
								Float tmp127 = (_this->ty * sin);		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(435)
								Float tmp128 = (tmp126 - tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(435)
								Float tx1 = tmp128;		HX_STACK_VAR(tx1,"tx1");
								HX_STACK_LINE(435)
								Float tmp129 = (_this->tx * sin);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(435)
								Float tmp130 = (_this->ty * cos);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(435)
								Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(435)
								_this->ty = tmp131;
								HX_STACK_LINE(435)
								_this->tx = tx1;
								HX_STACK_LINE(435)
								_this;
							}
							HX_STACK_LINE(438)
							::flixel::math::FlxMatrix tmp111 = this->_matrix;		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(438)
							::flixel::math::FlxPoint tmp112 = this->_point;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(438)
							Float tmp113 = tmp112->x;		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(438)
							Float tmp114 = ox;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(438)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(438)
							::flixel::math::FlxPoint tmp116 = this->_point;		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(438)
							Float tmp117 = tmp116->y;		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(438)
							Float tmp118 = oy;		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(438)
							Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(438)
							tmp111->translate(tmp115,tmp119);
							HX_STACK_LINE(440)
							::openfl::_legacy::geom::ColorTransform tmp120 = this->_colorParams;		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(440)
							Float tmp121 = textRed;		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(440)
							Float tmp122 = textGreen;		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(440)
							Float tmp123 = textBlue;		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(440)
							Float tmp124 = tAlpha;		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(440)
							::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp120,tmp121,tmp122,tmp123,tmp124);
							HX_STACK_LINE(441)
							::flixel::graphics::frames::FlxFrame tmp125 = currFrame;		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(441)
							::flixel::math::FlxMatrix tmp126 = this->_matrix;		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(441)
							::openfl::_legacy::geom::ColorTransform tmp127 = this->_colorParams;		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(441)
							drawItem->addQuad(tmp125,tmp126,tmp127);
						}
					}
					HX_STACK_LINE(445)
					(::flixel::FlxBasic_obj::visibleCount)++;
				}
			}
			HX_STACK_LINE(450)
			::flixel::_system::frontEnds::DebuggerFrontEnd tmp66 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(450)
			bool tmp67 = tmp66->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(450)
			if ((tmp67)){
				HX_STACK_LINE(452)
				this->drawDebug();
			}
		}
	}
return null();
}


int FlxBitmapText_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_color",0xb7b88717,"flixel.text.FlxBitmapText.set_color","flixel/text/FlxBitmapText.hx",459,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(460)
	int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	this->super::set_color(tmp);
	HX_STACK_LINE(461)
	bool tmp1 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(461)
	if ((tmp1)){
		HX_STACK_LINE(463)
		this->pendingTextBitmapChange = true;
	}
	HX_STACK_LINE(465)
	int tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(465)
	return tmp2;
}


Float FlxBitmapText_obj::set_alpha( Float value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_alpha",0x8ef2bd12,"flixel.text.FlxBitmapText.set_alpha","flixel/text/FlxBitmapText.hx",469,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(470)
	this->alpha = value;
	HX_STACK_LINE(471)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	if ((tmp)){
		HX_STACK_LINE(473)
		this->pendingTextBitmapChange = true;
	}
	HX_STACK_LINE(475)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(475)
	return tmp1;
}


int FlxBitmapText_obj::set_textColor( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_textColor",0x3cf5012a,"flixel.text.FlxBitmapText.set_textColor","flixel/text/FlxBitmapText.hx",479,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(480)
	int tmp = this->textColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	if ((tmp2)){
		HX_STACK_LINE(482)
		this->textColor = value;
		HX_STACK_LINE(483)
		bool tmp3 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		if ((tmp3)){
			HX_STACK_LINE(485)
			this->pendingPixelsChange = true;
		}
	}
	HX_STACK_LINE(489)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(489)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_textColor,return )

bool FlxBitmapText_obj::set_useTextColor( bool value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_useTextColor",0xe3de3cfb,"flixel.text.FlxBitmapText.set_useTextColor","flixel/text/FlxBitmapText.hx",493,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(494)
	bool tmp = this->useTextColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(494)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(494)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(494)
	if ((tmp2)){
		HX_STACK_LINE(496)
		this->useTextColor = value;
		HX_STACK_LINE(497)
		bool tmp3 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		if ((tmp3)){
			HX_STACK_LINE(499)
			this->pendingPixelsChange = true;
		}
	}
	HX_STACK_LINE(503)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(503)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_useTextColor,return )

Void FlxBitmapText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","calcFrame",0x3fee60a9,"flixel.text.FlxBitmapText.calcFrame","flixel/text/FlxBitmapText.hx",507,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(508)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		if ((tmp)){
			HX_STACK_LINE(510)
			bool tmp1 = RunOnCpp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(510)
			this->drawFrame(tmp1);
		}
		else{
			HX_STACK_LINE(514)
			bool tmp1 = RunOnCpp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(514)
			this->super::calcFrame(tmp1);
		}
	}
return null();
}


::String FlxBitmapText_obj::set_text( ::String value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_text",0x7916e979,"flixel.text.FlxBitmapText.set_text","flixel/text/FlxBitmapText.hx",519,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(520)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(520)
	::String tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(520)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(520)
	if ((tmp2)){
		HX_STACK_LINE(522)
		this->text = value;
		HX_STACK_LINE(523)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(526)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(526)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_text,return )

Void FlxBitmapText_obj::updateText( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","updateText",0x54e090e5,"flixel.text.FlxBitmapText.updateText","flixel/text/FlxBitmapText.hx",530,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(531)
		bool tmp = this->autoUpperCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(531)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(531)
		if ((tmp)){
			HX_STACK_LINE(531)
			::String tmp2 = this->text;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(531)
			tmp1 = tmp2.toUpperCase();
		}
		else{
			HX_STACK_LINE(531)
			tmp1 = this->text;
		}
		HX_STACK_LINE(531)
		::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		this->_lines = tmp2.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		HX_STACK_LINE(535)
		bool tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(535)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		if ((tmp4)){
			HX_STACK_LINE(537)
			bool tmp5 = this->wordWrap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(537)
			if ((tmp5)){
				HX_STACK_LINE(539)
				this->wrap();
			}
			else{
				HX_STACK_LINE(543)
				this->cutLines();
			}
		}
		HX_STACK_LINE(547)
		bool tmp5 = this->multiLine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(547)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(547)
		if ((tmp6)){
			HX_STACK_LINE(549)
			::String tmp7 = this->_lines->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(549)
			this->_lines = Array_obj< ::String >::__new().Add(tmp7);
		}
		HX_STACK_LINE(552)
		::String line;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(553)
		int tmp7 = this->_lines->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		int numLines = tmp7;		HX_STACK_VAR(numLines,"numLines");
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(554)
			while((true)){
				HX_STACK_LINE(554)
				bool tmp8 = (_g < numLines);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(554)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(554)
				if ((tmp9)){
					HX_STACK_LINE(554)
					break;
				}
				HX_STACK_LINE(554)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(554)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(556)
				::String tmp11 = this->_lines->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(556)
				::String tmp12 = ::StringTools_obj::rtrim(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(556)
				this->_lines[i] = tmp12;
			}
		}
		HX_STACK_LINE(559)
		this->pendingTextChange = false;
		HX_STACK_LINE(560)
		this->pendingTextBitmapChange = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,updateText,(void))

Void FlxBitmapText_obj::computeTextSize( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","computeTextSize",0x8453e6b6,"flixel.text.FlxBitmapText.computeTextSize","flixel/text/FlxBitmapText.hx",567,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(568)
		int tmp = this->get_textWidth();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		int txtWidth = tmp;		HX_STACK_VAR(txtWidth,"txtWidth");
		HX_STACK_LINE(569)
		int tmp1 = this->get_textHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		int tmp2 = this->padding;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		int tmp3 = ((int)2 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(569)
		int tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(569)
		int txtHeight = tmp4;		HX_STACK_VAR(txtHeight,"txtHeight");
		HX_STACK_LINE(571)
		bool tmp5 = this->autoSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(571)
		if ((tmp5)){
			HX_STACK_LINE(573)
			int tmp6 = this->padding;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(573)
			int tmp7 = ((int)2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(573)
			hx::AddEq(txtWidth,tmp7);
		}
		else{
			HX_STACK_LINE(577)
			int tmp6 = this->get_fieldWidth();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(577)
			txtWidth = tmp6;
		}
		HX_STACK_LINE(580)
		bool tmp6 = (txtWidth == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(580)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(580)
		if ((tmp6)){
			HX_STACK_LINE(580)
			tmp7 = (int)1;
		}
		else{
			HX_STACK_LINE(580)
			tmp7 = txtWidth;
		}
		HX_STACK_LINE(580)
		this->frameWidth = tmp7;
		HX_STACK_LINE(581)
		bool tmp8 = (txtHeight == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(581)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(581)
		if ((tmp8)){
			HX_STACK_LINE(581)
			tmp9 = (int)1;
		}
		else{
			HX_STACK_LINE(581)
			tmp9 = txtHeight;
		}
		HX_STACK_LINE(581)
		this->frameHeight = tmp9;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,computeTextSize,(void))

int FlxBitmapText_obj::getLineWidth( int lineIndex){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","getLineWidth",0x033af14b,"flixel.text.FlxBitmapText.getLineWidth","flixel/text/FlxBitmapText.hx",591,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(592)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(592)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(592)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(592)
	if ((tmp1)){
		HX_STACK_LINE(592)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(592)
		int tmp4 = this->_lines->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(592)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(592)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(592)
		tmp2 = true;
	}
	HX_STACK_LINE(592)
	if ((tmp2)){
		HX_STACK_LINE(594)
		return (int)0;
	}
	HX_STACK_LINE(597)
	::String tmp3 = this->_lines->__get(lineIndex);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(597)
	int tmp4 = this->getStringWidth(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(597)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,getLineWidth,return )

int FlxBitmapText_obj::getStringWidth( ::String str){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","getStringWidth",0xe2e3078e,"flixel.text.FlxBitmapText.getStringWidth","flixel/text/FlxBitmapText.hx",607,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(608)
	::flixel::graphics::frames::FlxBitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(608)
	int spaceWidth = tmp->spaceWidth;		HX_STACK_VAR(spaceWidth,"spaceWidth");
	HX_STACK_LINE(609)
	int tmp1 = spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(609)
	int tmp2 = this->numSpacesInTab;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(609)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(609)
	int tabWidth = tmp3;		HX_STACK_VAR(tabWidth,"tabWidth");
	HX_STACK_LINE(611)
	::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(611)
	int tmp5 = ::haxe::Utf8_obj::length(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(611)
	int lineLength = tmp5;		HX_STACK_VAR(lineLength,"lineLength");
	HX_STACK_LINE(612)
	::flixel::graphics::frames::FlxBitmapFont tmp6 = this->font;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(612)
	Float lineWidth = tmp6->minOffsetX;		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(614)
	int charCode;		HX_STACK_VAR(charCode,"charCode");
	HX_STACK_LINE(615)
	Float charWidth;		HX_STACK_VAR(charWidth,"charWidth");
	HX_STACK_LINE(616)
	::flixel::graphics::frames::FlxFrame charFrame;		HX_STACK_VAR(charFrame,"charFrame");
	HX_STACK_LINE(618)
	{
		HX_STACK_LINE(618)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(618)
		while((true)){
			HX_STACK_LINE(618)
			bool tmp7 = (_g < lineLength);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(618)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(618)
			if ((tmp8)){
				HX_STACK_LINE(618)
				break;
			}
			HX_STACK_LINE(618)
			int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(618)
			int c = tmp9;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(620)
			::String tmp10 = str;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(620)
			int tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(620)
			int tmp12 = ::haxe::Utf8_obj::charCodeAt(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(620)
			charCode = tmp12;
			HX_STACK_LINE(621)
			charWidth = (int)0;
			HX_STACK_LINE(623)
			bool tmp13 = (charCode == (int)32);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(623)
			if ((tmp13)){
				HX_STACK_LINE(625)
				charWidth = spaceWidth;
			}
			else{
				HX_STACK_LINE(627)
				bool tmp14 = (charCode == (int)9);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(627)
				if ((tmp14)){
					HX_STACK_LINE(629)
					charWidth = tabWidth;
				}
				else{
					HX_STACK_LINE(631)
					::flixel::graphics::frames::FlxBitmapFont tmp15 = this->font;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(631)
					int tmp16 = charCode;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(631)
					bool tmp17 = tmp15->charMap->exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(631)
					if ((tmp17)){
						HX_STACK_LINE(633)
						int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::flixel::graphics::frames::FlxBitmapFont tmp19 = this->font;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(633)
							::flixel::graphics::frames::FlxBitmapFont _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							int tmp20 = charCode;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(633)
							bool tmp21 = _this->charAdvance->exists(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(633)
							if ((tmp21)){
								HX_STACK_LINE(633)
								int tmp22 = charCode;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(633)
								Dynamic tmp23 = _this->charAdvance->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(633)
								tmp18 = tmp23;
							}
							else{
								HX_STACK_LINE(633)
								tmp18 = (int)0;
							}
						}
						HX_STACK_LINE(633)
						charWidth = tmp18;
						HX_STACK_LINE(635)
						int tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(635)
						int tmp20 = (lineLength - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(635)
						bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(635)
						if ((tmp21)){
							HX_STACK_LINE(637)
							::flixel::graphics::frames::FlxBitmapFont tmp22 = this->font;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(637)
							int tmp23 = charCode;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(637)
							::flixel::graphics::frames::FlxFrame tmp24 = tmp22->charMap->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(637)
							charFrame = tmp24;
							HX_STACK_LINE(638)
							Float tmp25 = charFrame->sourceSize->x;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(638)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(638)
							charWidth = tmp26;
						}
					}
				}
			}
			HX_STACK_LINE(642)
			Float tmp14 = charWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(642)
			int tmp15 = this->letterSpacing;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(642)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(642)
			hx::AddEq(lineWidth,tmp16);
		}
	}
	HX_STACK_LINE(645)
	bool tmp7 = (lineLength > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(645)
	if ((tmp7)){
		HX_STACK_LINE(647)
		int tmp8 = this->letterSpacing;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(647)
		hx::SubEq(lineWidth,tmp8);
	}
	HX_STACK_LINE(650)
	Float tmp8 = lineWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(650)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(650)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,getStringWidth,return )

Void FlxBitmapText_obj::cutLines( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","cutLines",0x876b98ec,"flixel.text.FlxBitmapText.cutLines","flixel/text/FlxBitmapText.hx",657,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(658)
		Array< ::String > newLines = Array_obj< ::String >::__new();		HX_STACK_VAR(newLines,"newLines");
		HX_STACK_LINE(660)
		int lineLength;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(662)
		int c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(663)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(664)
		Float charWidth;		HX_STACK_VAR(charWidth,"charWidth");
		HX_STACK_LINE(666)
		::haxe::Utf8 subLine;		HX_STACK_VAR(subLine,"subLine");
		HX_STACK_LINE(667)
		Float subLineWidth;		HX_STACK_VAR(subLineWidth,"subLineWidth");
		HX_STACK_LINE(669)
		::flixel::graphics::frames::FlxBitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(669)
		int spaceWidth = tmp->spaceWidth;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(670)
		int tmp1 = spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(670)
		int tmp2 = this->numSpacesInTab;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(670)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(670)
		int tabWidth = tmp3;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(672)
		::flixel::graphics::frames::FlxBitmapFont tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		int startX = tmp4->minOffsetX;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(674)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(674)
			Array< ::String > _g1 = this->_lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(674)
			while((true)){
				HX_STACK_LINE(674)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(674)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(674)
				if ((tmp6)){
					HX_STACK_LINE(674)
					break;
				}
				HX_STACK_LINE(674)
				::String tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(674)
				::String line = tmp7;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(674)
				++(_g);
				HX_STACK_LINE(676)
				::String tmp8 = line;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(676)
				int tmp9 = ::haxe::Utf8_obj::length(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(676)
				lineLength = tmp9;
				HX_STACK_LINE(677)
				::haxe::Utf8 tmp10 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(677)
				subLine = tmp10;
				HX_STACK_LINE(678)
				subLineWidth = startX;
				HX_STACK_LINE(680)
				c = (int)0;
				HX_STACK_LINE(681)
				while((true)){
					HX_STACK_LINE(681)
					bool tmp11 = (c < lineLength);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(681)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(681)
					if ((tmp12)){
						HX_STACK_LINE(681)
						break;
					}
					HX_STACK_LINE(683)
					::String tmp13 = line;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(683)
					int tmp14 = c;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(683)
					int tmp15 = ::haxe::Utf8_obj::charCodeAt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(683)
					charCode = tmp15;
					HX_STACK_LINE(685)
					bool tmp16 = (charCode == (int)32);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(685)
					if ((tmp16)){
						HX_STACK_LINE(687)
						charWidth = spaceWidth;
					}
					else{
						HX_STACK_LINE(689)
						bool tmp17 = (charCode == (int)9);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(689)
						if ((tmp17)){
							HX_STACK_LINE(691)
							charWidth = tabWidth;
						}
						else{
							HX_STACK_LINE(695)
							int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(695)
							{
								HX_STACK_LINE(695)
								::flixel::graphics::frames::FlxBitmapFont tmp19 = this->font;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(695)
								::flixel::graphics::frames::FlxBitmapFont _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(695)
								int tmp20 = charCode;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(695)
								bool tmp21 = _this->charAdvance->exists(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(695)
								if ((tmp21)){
									HX_STACK_LINE(695)
									int tmp22 = charCode;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(695)
									Dynamic tmp23 = _this->charAdvance->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(695)
									tmp18 = tmp23;
								}
								else{
									HX_STACK_LINE(695)
									tmp18 = (int)0;
								}
							}
							HX_STACK_LINE(695)
							charWidth = tmp18;
						}
					}
					HX_STACK_LINE(697)
					int tmp17 = this->letterSpacing;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(697)
					hx::AddEq(charWidth,tmp17);
					HX_STACK_LINE(699)
					Float tmp18 = (subLineWidth + charWidth);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(699)
					int tmp19 = this->_fieldWidth;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(699)
					int tmp20 = this->padding;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(699)
					int tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(699)
					int tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(699)
					bool tmp23 = (tmp18 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(699)
					if ((tmp23)){
						HX_STACK_LINE(701)
						int tmp24 = charCode;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(701)
						subLine->addChar(tmp24);
						HX_STACK_LINE(702)
						::String tmp25 = subLine->toString();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(702)
						newLines->push(tmp25);
						HX_STACK_LINE(703)
						::haxe::Utf8 tmp26 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(703)
						subLine = tmp26;
						HX_STACK_LINE(704)
						subLineWidth = startX;
						HX_STACK_LINE(705)
						c = lineLength;
					}
					else{
						HX_STACK_LINE(709)
						int tmp24 = charCode;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(709)
						subLine->addChar(tmp24);
						HX_STACK_LINE(710)
						hx::AddEq(subLineWidth,charWidth);
					}
					HX_STACK_LINE(713)
					(c)++;
				}
			}
		}
		HX_STACK_LINE(717)
		this->_lines = newLines;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,cutLines,(void))

Void FlxBitmapText_obj::wrap( ){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","wrap",0xa4b26e19,"flixel.text.FlxBitmapText.wrap","flixel/text/FlxBitmapText.hx",725,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(727)
		Array< ::String > newLines = Array_obj< ::String >::__new();		HX_STACK_VAR(newLines,"newLines");
		HX_STACK_LINE(728)
		Array< ::String > words;		HX_STACK_VAR(words,"words");
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(730)
			Array< ::String > _g1 = this->_lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(730)
			while((true)){
				HX_STACK_LINE(730)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(730)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(730)
				if ((tmp1)){
					HX_STACK_LINE(730)
					break;
				}
				HX_STACK_LINE(730)
				::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(730)
				::String line = tmp2;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(730)
				++(_g);
				HX_STACK_LINE(732)
				words = Array_obj< ::String >::__new();
				HX_STACK_LINE(734)
				::String tmp3 = line;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(734)
				this->splitLineIntoWords(tmp3,words);
				HX_STACK_LINE(736)
				bool tmp4 = this->wrapByWord;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(736)
				if ((tmp4)){
					HX_STACK_LINE(738)
					this->wrapLineByWord(words,newLines);
				}
				else{
					HX_STACK_LINE(742)
					this->wrapLineByCharacter(words,newLines);
				}
			}
		}
		HX_STACK_LINE(746)
		this->_lines = newLines;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,wrap,(void))

Void FlxBitmapText_obj::splitLineIntoWords( ::String line,Array< ::String > words){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","splitLineIntoWords",0x05b5c56a,"flixel.text.FlxBitmapText.splitLineIntoWords","flixel/text/FlxBitmapText.hx",756,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line,"line")
		HX_STACK_ARG(words,"words")
		HX_STACK_LINE(757)
		::String word = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(758)
		::haxe::Utf8 tmp = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		::haxe::Utf8 wordUtf8 = tmp;		HX_STACK_VAR(wordUtf8,"wordUtf8");
		HX_STACK_LINE(759)
		bool isSpaceWord = false;		HX_STACK_VAR(isSpaceWord,"isSpaceWord");
		HX_STACK_LINE(760)
		::String tmp1 = line;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(760)
		int tmp2 = ::haxe::Utf8_obj::length(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(760)
		int lineLength = tmp2;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(762)
		int tmp3 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(762)
		int hyphenCode = tmp3;		HX_STACK_VAR(hyphenCode,"hyphenCode");
		HX_STACK_LINE(764)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(765)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(766)
		::haxe::Utf8 charUtf8;		HX_STACK_VAR(charUtf8,"charUtf8");
		HX_STACK_LINE(768)
		while((true)){
			HX_STACK_LINE(768)
			bool tmp4 = (c < lineLength);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(768)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(768)
			if ((tmp5)){
				HX_STACK_LINE(768)
				break;
			}
			HX_STACK_LINE(770)
			::String tmp6 = line;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(770)
			int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(770)
			int tmp8 = ::haxe::Utf8_obj::charCodeAt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(770)
			charCode = tmp8;
			HX_STACK_LINE(771)
			::String tmp9 = wordUtf8->toString();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(771)
			word = tmp9;
			HX_STACK_LINE(773)
			bool tmp10 = (charCode == (int)32);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(773)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(773)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(773)
			if ((tmp11)){
				HX_STACK_LINE(773)
				tmp12 = (charCode == (int)9);
			}
			else{
				HX_STACK_LINE(773)
				tmp12 = true;
			}
			HX_STACK_LINE(773)
			if ((tmp12)){
				HX_STACK_LINE(775)
				bool tmp13 = isSpaceWord;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(775)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(775)
				if ((tmp14)){
					HX_STACK_LINE(777)
					isSpaceWord = true;
					HX_STACK_LINE(779)
					bool tmp15 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(779)
					if ((tmp15)){
						HX_STACK_LINE(781)
						::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(781)
						words->push(tmp16);
						HX_STACK_LINE(782)
						::haxe::Utf8 tmp17 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(782)
						wordUtf8 = tmp17;
					}
				}
				HX_STACK_LINE(786)
				int tmp15 = charCode;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(786)
				wordUtf8->addChar(tmp15);
			}
			else{
				HX_STACK_LINE(788)
				bool tmp13 = (charCode == hyphenCode);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(788)
				if ((tmp13)){
					HX_STACK_LINE(790)
					bool tmp14 = isSpaceWord;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(790)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(790)
					if ((tmp14)){
						HX_STACK_LINE(790)
						tmp15 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(790)
						tmp15 = false;
					}
					HX_STACK_LINE(790)
					if ((tmp15)){
						HX_STACK_LINE(792)
						isSpaceWord = false;
						HX_STACK_LINE(793)
						::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(793)
						words->push(tmp16);
						HX_STACK_LINE(794)
						words->push(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(796)
						bool tmp16 = (isSpaceWord == false);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(796)
						if ((tmp16)){
							HX_STACK_LINE(798)
							::haxe::Utf8 tmp17 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(798)
							charUtf8 = tmp17;
							HX_STACK_LINE(799)
							int tmp18 = charCode;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(799)
							charUtf8->addChar(tmp18);
							HX_STACK_LINE(800)
							::String tmp19 = word;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(800)
							::String tmp20 = charUtf8->toString();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(800)
							::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(800)
							words->push(tmp21);
						}
					}
					HX_STACK_LINE(803)
					::haxe::Utf8 tmp16 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(803)
					wordUtf8 = tmp16;
				}
				else{
					HX_STACK_LINE(807)
					bool tmp14 = isSpaceWord;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(807)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(807)
					if ((tmp14)){
						HX_STACK_LINE(807)
						tmp15 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(807)
						tmp15 = false;
					}
					HX_STACK_LINE(807)
					if ((tmp15)){
						HX_STACK_LINE(809)
						isSpaceWord = false;
						HX_STACK_LINE(810)
						::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(810)
						words->push(tmp16);
						HX_STACK_LINE(811)
						::haxe::Utf8 tmp17 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(811)
						wordUtf8 = tmp17;
					}
					HX_STACK_LINE(814)
					int tmp16 = charCode;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(814)
					wordUtf8->addChar(tmp16);
				}
			}
			HX_STACK_LINE(817)
			(c)++;
		}
		HX_STACK_LINE(820)
		::String tmp4 = wordUtf8->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(820)
		word = tmp4;
		HX_STACK_LINE(821)
		bool tmp5 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(821)
		if ((tmp5)){
			HX_STACK_LINE(821)
			::String tmp6 = word;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(821)
			words->push(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapText_obj,splitLineIntoWords,(void))

Void FlxBitmapText_obj::wrapLineByWord( Array< ::String > words,Array< ::String > newLines){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","wrapLineByWord",0x3ea521ce,"flixel.text.FlxBitmapText.wrapLineByWord","flixel/text/FlxBitmapText.hx",831,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(words,"words")
		HX_STACK_ARG(newLines,"newLines")
		HX_STACK_LINE(832)
		int numWords = words->length;		HX_STACK_VAR(numWords,"numWords");
		HX_STACK_LINE(833)
		int w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(834)
		::String word;		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(835)
		Float wordWidth;		HX_STACK_VAR(wordWidth,"wordWidth");
		HX_STACK_LINE(836)
		int wordLength;		HX_STACK_VAR(wordLength,"wordLength");
		HX_STACK_LINE(838)
		bool isSpaceWord = false;		HX_STACK_VAR(isSpaceWord,"isSpaceWord");
		HX_STACK_LINE(840)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(841)
		Float charWidth = (int)0;		HX_STACK_VAR(charWidth,"charWidth");
		HX_STACK_LINE(843)
		Array< ::String > subLines = Array_obj< ::String >::__new();		HX_STACK_VAR(subLines,"subLines");
		HX_STACK_LINE(845)
		::String subLine;		HX_STACK_VAR(subLine,"subLine");
		HX_STACK_LINE(846)
		Float subLineWidth;		HX_STACK_VAR(subLineWidth,"subLineWidth");
		HX_STACK_LINE(848)
		::flixel::graphics::frames::FlxBitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(848)
		int spaceWidth = tmp->spaceWidth;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(849)
		int tmp1 = spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(849)
		int tmp2 = this->numSpacesInTab;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(849)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(849)
		int tabWidth = tmp3;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(851)
		::flixel::graphics::frames::FlxBitmapFont tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(851)
		int startX = tmp4->minOffsetX;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(853)
		bool tmp5 = (numWords > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(853)
		if ((tmp5)){
			HX_STACK_LINE(855)
			w = (int)0;
			HX_STACK_LINE(856)
			subLineWidth = startX;
			HX_STACK_LINE(857)
			subLine = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(859)
			while((true)){
				HX_STACK_LINE(859)
				bool tmp6 = (w < numWords);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(859)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(859)
				if ((tmp7)){
					HX_STACK_LINE(859)
					break;
				}
				HX_STACK_LINE(861)
				wordWidth = (int)0;
				HX_STACK_LINE(862)
				::String tmp8 = words->__get(w);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(862)
				word = tmp8;
				HX_STACK_LINE(863)
				::String tmp9 = word;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(863)
				int tmp10 = ::haxe::Utf8_obj::length(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(863)
				wordLength = tmp10;
				HX_STACK_LINE(865)
				::String tmp11 = word;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(865)
				int tmp12 = ::haxe::Utf8_obj::charCodeAt(tmp11,(int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(865)
				charCode = tmp12;
				HX_STACK_LINE(866)
				bool tmp13 = (charCode == (int)32);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(866)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(866)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(866)
				if ((tmp14)){
					HX_STACK_LINE(866)
					tmp15 = (charCode == (int)9);
				}
				else{
					HX_STACK_LINE(866)
					tmp15 = true;
				}
				HX_STACK_LINE(866)
				isSpaceWord = tmp15;
				HX_STACK_LINE(868)
				{
					HX_STACK_LINE(868)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(868)
					while((true)){
						HX_STACK_LINE(868)
						bool tmp16 = (_g < wordLength);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(868)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(868)
						if ((tmp17)){
							HX_STACK_LINE(868)
							break;
						}
						HX_STACK_LINE(868)
						int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(868)
						int c = tmp18;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(870)
						::String tmp19 = word;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(870)
						int tmp20 = c;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(870)
						int tmp21 = ::haxe::Utf8_obj::charCodeAt(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(870)
						charCode = tmp21;
						HX_STACK_LINE(872)
						bool tmp22 = (charCode == (int)32);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(872)
						if ((tmp22)){
							HX_STACK_LINE(874)
							charWidth = spaceWidth;
						}
						else{
							HX_STACK_LINE(876)
							bool tmp23 = (charCode == (int)9);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(876)
							if ((tmp23)){
								HX_STACK_LINE(878)
								charWidth = tabWidth;
							}
							else{
								HX_STACK_LINE(882)
								int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(882)
								{
									HX_STACK_LINE(882)
									::flixel::graphics::frames::FlxBitmapFont tmp25 = this->font;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(882)
									::flixel::graphics::frames::FlxBitmapFont _this = tmp25;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(882)
									int tmp26 = charCode;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(882)
									bool tmp27 = _this->charAdvance->exists(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(882)
									if ((tmp27)){
										HX_STACK_LINE(882)
										int tmp28 = charCode;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(882)
										Dynamic tmp29 = _this->charAdvance->get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(882)
										tmp24 = tmp29;
									}
									else{
										HX_STACK_LINE(882)
										tmp24 = (int)0;
									}
								}
								HX_STACK_LINE(882)
								charWidth = tmp24;
							}
						}
						HX_STACK_LINE(885)
						hx::AddEq(wordWidth,charWidth);
					}
				}
				HX_STACK_LINE(888)
				int tmp16 = (wordLength - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(888)
				int tmp17 = this->letterSpacing;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(888)
				int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(888)
				hx::AddEq(wordWidth,tmp18);
				HX_STACK_LINE(890)
				Float tmp19 = (subLineWidth + wordWidth);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(890)
				int tmp20 = this->_fieldWidth;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(890)
				int tmp21 = this->padding;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(890)
				int tmp22 = ((int)2 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(890)
				int tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(890)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(890)
				if ((tmp24)){
					HX_STACK_LINE(892)
					bool tmp25 = isSpaceWord;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(892)
					if ((tmp25)){
						HX_STACK_LINE(894)
						::String tmp26 = subLine;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(894)
						subLines->push(tmp26);
						HX_STACK_LINE(895)
						subLine = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						HX_STACK_LINE(896)
						subLineWidth = startX;
					}
					else{
						HX_STACK_LINE(898)
						bool tmp26 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(898)
						if ((tmp26)){
							HX_STACK_LINE(900)
							::String tmp27 = subLine;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(900)
							subLines->push(tmp27);
							HX_STACK_LINE(901)
							subLine = word;
							HX_STACK_LINE(902)
							Float tmp28 = (startX + wordWidth);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(902)
							int tmp29 = this->letterSpacing;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(902)
							Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(902)
							subLineWidth = tmp30;
						}
						else{
							HX_STACK_LINE(906)
							subLine = word;
							HX_STACK_LINE(907)
							Float tmp27 = (startX + wordWidth);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(907)
							int tmp28 = this->letterSpacing;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(907)
							Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(907)
							subLineWidth = tmp29;
						}
					}
				}
				else{
					HX_STACK_LINE(912)
					hx::AddEq(subLine,word);
					HX_STACK_LINE(913)
					Float tmp25 = wordWidth;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(913)
					int tmp26 = this->letterSpacing;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(913)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(913)
					hx::AddEq(subLineWidth,tmp27);
				}
				HX_STACK_LINE(916)
				(w)++;
			}
			HX_STACK_LINE(919)
			bool tmp6 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(919)
			if ((tmp6)){
				HX_STACK_LINE(921)
				::String tmp7 = subLine;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(921)
				subLines->push(tmp7);
			}
		}
		HX_STACK_LINE(925)
		{
			HX_STACK_LINE(925)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(925)
			while((true)){
				HX_STACK_LINE(925)
				bool tmp6 = (_g < subLines->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(925)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(925)
				if ((tmp7)){
					HX_STACK_LINE(925)
					break;
				}
				HX_STACK_LINE(925)
				::String tmp8 = subLines->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(925)
				::String subline = tmp8;		HX_STACK_VAR(subline,"subline");
				HX_STACK_LINE(925)
				++(_g);
				HX_STACK_LINE(927)
				::String tmp9 = subline;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(927)
				newLines->push(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapText_obj,wrapLineByWord,(void))

Void FlxBitmapText_obj::wrapLineByCharacter( Array< ::String > words,Array< ::String > newLines){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","wrapLineByCharacter",0x96232d25,"flixel.text.FlxBitmapText.wrapLineByCharacter","flixel/text/FlxBitmapText.hx",938,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(words,"words")
		HX_STACK_ARG(newLines,"newLines")
		HX_STACK_LINE(939)
		int numWords = words->length;		HX_STACK_VAR(numWords,"numWords");
		HX_STACK_LINE(940)
		int w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(941)
		::String word;		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(942)
		int wordLength;		HX_STACK_VAR(wordLength,"wordLength");
		HX_STACK_LINE(944)
		bool isSpaceWord = false;		HX_STACK_VAR(isSpaceWord,"isSpaceWord");
		HX_STACK_LINE(946)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(947)
		int c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(948)
		Float charWidth = (int)0;		HX_STACK_VAR(charWidth,"charWidth");
		HX_STACK_LINE(950)
		Array< ::String > subLines = Array_obj< ::String >::__new();		HX_STACK_VAR(subLines,"subLines");
		HX_STACK_LINE(952)
		::String subLine;		HX_STACK_VAR(subLine,"subLine");
		HX_STACK_LINE(953)
		::haxe::Utf8 subLineUtf8;		HX_STACK_VAR(subLineUtf8,"subLineUtf8");
		HX_STACK_LINE(954)
		Float subLineWidth;		HX_STACK_VAR(subLineWidth,"subLineWidth");
		HX_STACK_LINE(956)
		::flixel::graphics::frames::FlxBitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(956)
		int spaceWidth = tmp->spaceWidth;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(957)
		int tmp1 = spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(957)
		int tmp2 = this->numSpacesInTab;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(957)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(957)
		int tabWidth = tmp3;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(959)
		::flixel::graphics::frames::FlxBitmapFont tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(959)
		int startX = tmp4->minOffsetX;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(961)
		bool tmp5 = (numWords > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(961)
		if ((tmp5)){
			HX_STACK_LINE(963)
			w = (int)0;
			HX_STACK_LINE(964)
			subLineWidth = startX;
			HX_STACK_LINE(965)
			::haxe::Utf8 tmp6 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(965)
			subLineUtf8 = tmp6;
			HX_STACK_LINE(967)
			while((true)){
				HX_STACK_LINE(967)
				bool tmp7 = (w < numWords);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(967)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(967)
				if ((tmp8)){
					HX_STACK_LINE(967)
					break;
				}
				HX_STACK_LINE(969)
				::String tmp9 = words->__get(w);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(969)
				word = tmp9;
				HX_STACK_LINE(970)
				::String tmp10 = word;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(970)
				int tmp11 = ::haxe::Utf8_obj::length(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(970)
				wordLength = tmp11;
				HX_STACK_LINE(972)
				::String tmp12 = word;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(972)
				int tmp13 = ::haxe::Utf8_obj::charCodeAt(tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(972)
				charCode = tmp13;
				HX_STACK_LINE(973)
				bool tmp14 = (charCode == (int)32);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(973)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(973)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(973)
				if ((tmp15)){
					HX_STACK_LINE(973)
					tmp16 = (charCode == (int)9);
				}
				else{
					HX_STACK_LINE(973)
					tmp16 = true;
				}
				HX_STACK_LINE(973)
				isSpaceWord = tmp16;
				HX_STACK_LINE(975)
				c = (int)0;
				HX_STACK_LINE(977)
				while((true)){
					HX_STACK_LINE(977)
					bool tmp17 = (c < wordLength);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(977)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(977)
					if ((tmp18)){
						HX_STACK_LINE(977)
						break;
					}
					HX_STACK_LINE(979)
					::String tmp19 = word;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(979)
					int tmp20 = c;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(979)
					int tmp21 = ::haxe::Utf8_obj::charCodeAt(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(979)
					charCode = tmp21;
					HX_STACK_LINE(981)
					bool tmp22 = (charCode == (int)32);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(981)
					if ((tmp22)){
						HX_STACK_LINE(983)
						charWidth = spaceWidth;
					}
					else{
						HX_STACK_LINE(985)
						bool tmp23 = (charCode == (int)9);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(985)
						if ((tmp23)){
							HX_STACK_LINE(987)
							charWidth = tabWidth;
						}
						else{
							HX_STACK_LINE(991)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(991)
							{
								HX_STACK_LINE(991)
								::flixel::graphics::frames::FlxBitmapFont tmp25 = this->font;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(991)
								::flixel::graphics::frames::FlxBitmapFont _this = tmp25;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(991)
								int tmp26 = charCode;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(991)
								bool tmp27 = _this->charAdvance->exists(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(991)
								if ((tmp27)){
									HX_STACK_LINE(991)
									int tmp28 = charCode;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(991)
									Dynamic tmp29 = _this->charAdvance->get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(991)
									tmp24 = tmp29;
								}
								else{
									HX_STACK_LINE(991)
									tmp24 = (int)0;
								}
							}
							HX_STACK_LINE(991)
							charWidth = tmp24;
						}
					}
					HX_STACK_LINE(994)
					Float tmp23 = (subLineWidth + charWidth);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(994)
					int tmp24 = this->_fieldWidth;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(994)
					int tmp25 = this->padding;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(994)
					int tmp26 = ((int)2 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(994)
					int tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(994)
					bool tmp28 = (tmp23 > tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(994)
					if ((tmp28)){
						HX_STACK_LINE(996)
						::String tmp29 = subLineUtf8->toString();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(996)
						subLine = tmp29;
						HX_STACK_LINE(998)
						bool tmp30 = isSpaceWord;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(998)
						if ((tmp30)){
							HX_STACK_LINE(1000)
							::String tmp31 = subLine;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1000)
							subLines->push(tmp31);
							HX_STACK_LINE(1001)
							c = wordLength;
							HX_STACK_LINE(1002)
							::haxe::Utf8 tmp32 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1002)
							subLineUtf8 = tmp32;
							HX_STACK_LINE(1003)
							subLineWidth = startX;
						}
						else{
							HX_STACK_LINE(1005)
							bool tmp31 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1005)
							if ((tmp31)){
								HX_STACK_LINE(1007)
								::String tmp32 = subLine;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1007)
								subLines->push(tmp32);
								HX_STACK_LINE(1008)
								::haxe::Utf8 tmp33 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1008)
								subLineUtf8 = tmp33;
								HX_STACK_LINE(1009)
								int tmp34 = charCode;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1009)
								subLineUtf8->addChar(tmp34);
								HX_STACK_LINE(1010)
								Float tmp35 = (startX + charWidth);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1010)
								int tmp36 = this->letterSpacing;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1010)
								Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1010)
								subLineWidth = tmp37;
							}
							else{
								HX_STACK_LINE(1014)
								::haxe::Utf8 tmp32 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1014)
								subLineUtf8 = tmp32;
								HX_STACK_LINE(1015)
								int tmp33 = charCode;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1015)
								subLineUtf8->addChar(tmp33);
								HX_STACK_LINE(1016)
								Float tmp34 = (startX + charWidth);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1016)
								int tmp35 = this->letterSpacing;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1016)
								Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1016)
								subLineWidth = tmp36;
							}
						}
					}
					else{
						HX_STACK_LINE(1021)
						int tmp29 = charCode;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1021)
						subLineUtf8->addChar(tmp29);
						HX_STACK_LINE(1022)
						Float tmp30 = charWidth;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1022)
						int tmp31 = this->letterSpacing;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1022)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1022)
						hx::AddEq(subLineWidth,tmp32);
					}
					HX_STACK_LINE(1025)
					(c)++;
				}
				HX_STACK_LINE(1028)
				(w)++;
			}
			HX_STACK_LINE(1031)
			::String tmp7 = subLineUtf8->toString();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1031)
			subLine = tmp7;
			HX_STACK_LINE(1033)
			bool tmp8 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1033)
			if ((tmp8)){
				HX_STACK_LINE(1035)
				::String tmp9 = subLine;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1035)
				subLines->push(tmp9);
			}
		}
		HX_STACK_LINE(1039)
		{
			HX_STACK_LINE(1039)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1039)
			while((true)){
				HX_STACK_LINE(1039)
				bool tmp6 = (_g < subLines->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1039)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1039)
				if ((tmp7)){
					HX_STACK_LINE(1039)
					break;
				}
				HX_STACK_LINE(1039)
				::String tmp8 = subLines->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1039)
				::String subline = tmp8;		HX_STACK_VAR(subline,"subline");
				HX_STACK_LINE(1039)
				++(_g);
				HX_STACK_LINE(1041)
				::String tmp9 = subline;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1041)
				newLines->push(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapText_obj,wrapLineByCharacter,(void))

Void FlxBitmapText_obj::updateTextBitmap( hx::Null< bool >  __o_useTiles){
bool useTiles = __o_useTiles.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","updateTextBitmap",0xa8004eb4,"flixel.text.FlxBitmapText.updateTextBitmap","flixel/text/FlxBitmapText.hx",1049,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useTiles,"useTiles")
{
		HX_STACK_LINE(1050)
		this->computeTextSize();
		HX_STACK_LINE(1052)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1052)
		if ((tmp)){
			HX_STACK_LINE(1054)
			useTiles = false;
		}
		HX_STACK_LINE(1057)
		bool tmp1 = useTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1057)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1057)
		if ((tmp2)){
			HX_STACK_LINE(1059)
			::openfl::_legacy::display::BitmapData tmp3 = this->textBitmap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1059)
			int tmp4 = this->frameWidth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1059)
			int tmp5 = this->frameHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1059)
			::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1059)
			this->textBitmap = tmp6;
			HX_STACK_LINE(1061)
			::openfl::_legacy::display::BitmapData tmp7 = this->textBitmap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1061)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1061)
			if ((tmp8)){
				HX_STACK_LINE(1063)
				int tmp9 = this->frameWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1063)
				int tmp10 = this->frameHeight;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1063)
				::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp9,tmp10,true,(int)0,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1063)
				this->textBitmap = tmp11;
			}
			else{
				HX_STACK_LINE(1067)
				::openfl::_legacy::display::BitmapData tmp9 = this->textBitmap;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1067)
				::openfl::_legacy::display::BitmapData tmp10 = this->textBitmap;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1067)
				::openfl::_legacy::geom::Rectangle tmp11 = tmp10->get_rect();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1067)
				tmp9->fillRect(tmp11,(int)0);
			}
			HX_STACK_LINE(1070)
			::openfl::_legacy::display::BitmapData tmp9 = this->textBitmap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1070)
			tmp9->lock();
		}
		else{
			HX_STACK_LINE(1072)
			bool tmp3 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1072)
			if ((tmp3)){
				HX_STACK_LINE(1074)
				int tmp4 = this->textData->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1074)
				this->textData->splice((int)0,tmp4);
			}
		}
		HX_STACK_LINE(1077)
		int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1077)
		this->_fieldWidth = tmp3;
		HX_STACK_LINE(1079)
		int tmp4 = this->_lines->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1079)
		int numLines = tmp4;		HX_STACK_VAR(numLines,"numLines");
		HX_STACK_LINE(1080)
		::String line;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(1081)
		int lineWidth;		HX_STACK_VAR(lineWidth,"lineWidth");
		HX_STACK_LINE(1083)
		int ox;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(1083)
		int oy;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(1085)
		{
			HX_STACK_LINE(1085)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1085)
			while((true)){
				HX_STACK_LINE(1085)
				bool tmp5 = (_g < numLines);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1085)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1085)
				if ((tmp6)){
					HX_STACK_LINE(1085)
					break;
				}
				HX_STACK_LINE(1085)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1085)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1087)
				::String tmp8 = this->_lines->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1087)
				line = tmp8;
				HX_STACK_LINE(1088)
				int tmp9 = this->_linesWidth->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1088)
				lineWidth = tmp9;
				HX_STACK_LINE(1091)
				::flixel::graphics::frames::FlxBitmapFont tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1091)
				ox = tmp10->minOffsetX;
				HX_STACK_LINE(1092)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1092)
				::flixel::graphics::frames::FlxBitmapFont tmp12 = this->font;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1092)
				int tmp13 = tmp12->lineHeight;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1092)
				int tmp14 = this->lineSpacing;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1092)
				int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1092)
				int tmp16 = (tmp11 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1092)
				int tmp17 = this->padding;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1092)
				int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1092)
				oy = tmp18;
				HX_STACK_LINE(1094)
				::String tmp19 = this->alignment;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1094)
				bool tmp20 = (tmp19 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1094)
				if ((tmp20)){
					HX_STACK_LINE(1096)
					int tmp21 = this->frameWidth;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1096)
					int tmp22 = lineWidth;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1096)
					int tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1096)
					Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1096)
					int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1096)
					hx::AddEq(ox,tmp25);
				}
				else{
					HX_STACK_LINE(1098)
					::String tmp21 = this->alignment;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1098)
					bool tmp22 = (tmp21 == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1098)
					if ((tmp22)){
						HX_STACK_LINE(1100)
						int tmp23 = this->frameWidth;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1100)
						int tmp24 = lineWidth;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1100)
						int tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1100)
						int tmp26 = this->padding;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1100)
						int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1100)
						hx::AddEq(ox,tmp27);
					}
					else{
						HX_STACK_LINE(1104)
						int tmp23 = this->padding;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1104)
						hx::AddEq(ox,tmp23);
					}
				}
				HX_STACK_LINE(1107)
				int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1107)
				int tmp22 = ox;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1107)
				int tmp23 = oy;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1107)
				bool tmp24 = useTiles;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1107)
				this->drawLine(tmp21,tmp22,tmp23,tmp24);
			}
		}
		HX_STACK_LINE(1110)
		bool tmp5 = useTiles;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1110)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1110)
		if ((tmp6)){
			HX_STACK_LINE(1112)
			::openfl::_legacy::display::BitmapData tmp7 = this->textBitmap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1112)
			tmp7->unlock(null());
		}
		HX_STACK_LINE(1115)
		this->pendingTextBitmapChange = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,updateTextBitmap,(void))

Void FlxBitmapText_obj::drawLine( int lineIndex,int posX,int posY,hx::Null< bool >  __o_useTiles){
bool useTiles = __o_useTiles.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","drawLine",0x5a21c9e7,"flixel.text.FlxBitmapText.drawLine","flixel/text/FlxBitmapText.hx",1119,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_ARG(posX,"posX")
	HX_STACK_ARG(posY,"posY")
	HX_STACK_ARG(useTiles,"useTiles")
{
		HX_STACK_LINE(1120)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1120)
		if ((tmp)){
			HX_STACK_LINE(1122)
			useTiles = false;
		}
		HX_STACK_LINE(1125)
		bool tmp1 = useTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1125)
		if ((tmp1)){
			HX_STACK_LINE(1127)
			int tmp2 = lineIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1127)
			int tmp3 = posX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1127)
			int tmp4 = posY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1127)
			this->tileLine(tmp2,tmp3,tmp4);
		}
		else{
			HX_STACK_LINE(1131)
			int tmp2 = lineIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1131)
			int tmp3 = posX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1131)
			int tmp4 = posY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1131)
			this->blitLine(tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapText_obj,drawLine,(void))

Void FlxBitmapText_obj::blitLine( int lineIndex,int startX,int startY){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","blitLine",0x66e34298,"flixel.text.FlxBitmapText.blitLine","flixel/text/FlxBitmapText.hx",1136,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lineIndex,"lineIndex")
		HX_STACK_ARG(startX,"startX")
		HX_STACK_ARG(startY,"startY")
		HX_STACK_LINE(1137)
		::flixel::graphics::frames::FlxFrame charFrame;		HX_STACK_VAR(charFrame,"charFrame");
		HX_STACK_LINE(1138)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(1139)
		Float curX = startX;		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1140)
		int curY = startY;		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1142)
		::String tmp = this->_lines->__get(lineIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1142)
		::String line = tmp;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(1143)
		::flixel::graphics::frames::FlxBitmapFont tmp1 = this->font;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1143)
		int spaceWidth = tmp1->spaceWidth;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(1144)
		::String tmp2 = line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1144)
		int tmp3 = ::haxe::Utf8_obj::length(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1144)
		int lineLength = tmp3;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(1145)
		int tmp4 = this->get_textWidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1145)
		int textWidth = tmp4;		HX_STACK_VAR(textWidth,"textWidth");
		HX_STACK_LINE(1147)
		::String tmp5 = this->alignment;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1147)
		bool tmp6 = (tmp5 == HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1147)
		if ((tmp6)){
			HX_STACK_LINE(1149)
			int numSpaces = (int)0;		HX_STACK_VAR(numSpaces,"numSpaces");
			HX_STACK_LINE(1151)
			{
				HX_STACK_LINE(1151)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1151)
				while((true)){
					HX_STACK_LINE(1151)
					bool tmp7 = (_g < lineLength);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1151)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1151)
					if ((tmp8)){
						HX_STACK_LINE(1151)
						break;
					}
					HX_STACK_LINE(1151)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1151)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1153)
					::String tmp10 = line;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1153)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1153)
					int tmp12 = ::haxe::Utf8_obj::charCodeAt(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1153)
					charCode = tmp12;
					HX_STACK_LINE(1155)
					bool tmp13 = (charCode == (int)32);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1155)
					if ((tmp13)){
						HX_STACK_LINE(1157)
						(numSpaces)++;
					}
					else{
						HX_STACK_LINE(1159)
						bool tmp14 = (charCode == (int)9);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1159)
						if ((tmp14)){
							HX_STACK_LINE(1161)
							int tmp15 = this->numSpacesInTab;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1161)
							hx::AddEq(numSpaces,tmp15);
						}
					}
				}
			}
			HX_STACK_LINE(1165)
			::String tmp7 = line;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1165)
			int tmp8 = this->getStringWidth(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1165)
			int lineWidth = tmp8;		HX_STACK_VAR(lineWidth,"lineWidth");
			HX_STACK_LINE(1166)
			int tmp9 = numSpaces;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1166)
			::flixel::graphics::frames::FlxBitmapFont tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1166)
			int tmp11 = tmp10->spaceWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1166)
			int tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1166)
			int totalSpacesWidth = tmp12;		HX_STACK_VAR(totalSpacesWidth,"totalSpacesWidth");
			HX_STACK_LINE(1167)
			int tmp13 = (textWidth - lineWidth);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1167)
			int tmp14 = totalSpacesWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1167)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1167)
			int tmp16 = numSpaces;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1167)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1167)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1167)
			spaceWidth = tmp18;
		}
		HX_STACK_LINE(1170)
		int tmp7 = spaceWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1170)
		int tmp8 = this->numSpacesInTab;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1170)
		int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1170)
		int tabWidth = tmp9;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(1172)
		{
			HX_STACK_LINE(1172)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1172)
			while((true)){
				HX_STACK_LINE(1172)
				bool tmp10 = (_g < lineLength);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1172)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1172)
				if ((tmp11)){
					HX_STACK_LINE(1172)
					break;
				}
				HX_STACK_LINE(1172)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1172)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1174)
				::String tmp13 = line;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1174)
				int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1174)
				int tmp15 = ::haxe::Utf8_obj::charCodeAt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1174)
				charCode = tmp15;
				HX_STACK_LINE(1176)
				bool tmp16 = (charCode == (int)32);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1176)
				if ((tmp16)){
					HX_STACK_LINE(1178)
					hx::AddEq(curX,spaceWidth);
				}
				else{
					HX_STACK_LINE(1180)
					bool tmp17 = (charCode == (int)9);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1180)
					if ((tmp17)){
						HX_STACK_LINE(1182)
						hx::AddEq(curX,tabWidth);
					}
					else{
						HX_STACK_LINE(1186)
						::flixel::graphics::frames::FlxBitmapFont tmp18 = this->font;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1186)
						int tmp19 = charCode;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1186)
						::flixel::graphics::frames::FlxFrame tmp20 = tmp18->charMap->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1186)
						charFrame = tmp20;
						HX_STACK_LINE(1187)
						bool tmp21 = (charFrame != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1187)
						if ((tmp21)){
							HX_STACK_LINE(1189)
							::openfl::_legacy::geom::Point tmp22 = this->_flashPoint;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1189)
							Float tmp23 = curX;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1189)
							int tmp24 = curY;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1189)
							tmp22->setTo(tmp23,tmp24);
							HX_STACK_LINE(1190)
							::openfl::_legacy::display::BitmapData tmp25 = this->textBitmap;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1190)
							::openfl::_legacy::geom::Point tmp26 = this->_flashPoint;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1190)
							charFrame->paint(tmp25,tmp26,true,null());
							HX_STACK_LINE(1191)
							::haxe::Utf8 tmp27 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1191)
							::haxe::Utf8 charUt8 = tmp27;		HX_STACK_VAR(charUt8,"charUt8");
							HX_STACK_LINE(1192)
							int tmp28 = charCode;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1192)
							charUt8->addChar(tmp28);
							HX_STACK_LINE(1193)
							int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1193)
							{
								HX_STACK_LINE(1193)
								::flixel::graphics::frames::FlxBitmapFont tmp30 = this->font;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1193)
								::flixel::graphics::frames::FlxBitmapFont _this = tmp30;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1193)
								int tmp31 = charCode;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1193)
								bool tmp32 = _this->charAdvance->exists(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1193)
								if ((tmp32)){
									HX_STACK_LINE(1193)
									int tmp33 = charCode;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1193)
									Dynamic tmp34 = _this->charAdvance->get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1193)
									tmp29 = tmp34;
								}
								else{
									HX_STACK_LINE(1193)
									tmp29 = (int)0;
								}
							}
							HX_STACK_LINE(1193)
							hx::AddEq(curX,tmp29);
						}
					}
				}
				HX_STACK_LINE(1197)
				int tmp17 = this->letterSpacing;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1197)
				hx::AddEq(curX,tmp17);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapText_obj,blitLine,(void))

Void FlxBitmapText_obj::tileLine( int lineIndex,int startX,int startY){
{
		HX_STACK_FRAME("flixel.text.FlxBitmapText","tileLine",0x7fbe4611,"flixel.text.FlxBitmapText.tileLine","flixel/text/FlxBitmapText.hx",1202,0x5518a9ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lineIndex,"lineIndex")
		HX_STACK_ARG(startX,"startX")
		HX_STACK_ARG(startY,"startY")
		HX_STACK_LINE(1203)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1203)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1203)
		if ((tmp1)){
			HX_STACK_LINE(1203)
			return null();
		}
		HX_STACK_LINE(1205)
		::flixel::graphics::frames::FlxFrame charFrame;		HX_STACK_VAR(charFrame,"charFrame");
		HX_STACK_LINE(1206)
		int tmp2 = this->textData->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1206)
		int pos = tmp2;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(1208)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(1209)
		Float curX = startX;		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1210)
		int curY = startY;		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1212)
		::String tmp3 = this->_lines->__get(lineIndex);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1212)
		::String line = tmp3;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(1213)
		::flixel::graphics::frames::FlxBitmapFont tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1213)
		int spaceWidth = tmp4->spaceWidth;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(1214)
		::String tmp5 = line;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1214)
		int tmp6 = ::haxe::Utf8_obj::length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1214)
		int lineLength = tmp6;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(1215)
		int tmp7 = this->get_textWidth();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1215)
		int textWidth = tmp7;		HX_STACK_VAR(textWidth,"textWidth");
		HX_STACK_LINE(1217)
		::String tmp8 = this->alignment;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1217)
		bool tmp9 = (tmp8 == HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1217)
		if ((tmp9)){
			HX_STACK_LINE(1219)
			int numSpaces = (int)0;		HX_STACK_VAR(numSpaces,"numSpaces");
			HX_STACK_LINE(1221)
			{
				HX_STACK_LINE(1221)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1221)
				while((true)){
					HX_STACK_LINE(1221)
					bool tmp10 = (_g < lineLength);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1221)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1221)
					if ((tmp11)){
						HX_STACK_LINE(1221)
						break;
					}
					HX_STACK_LINE(1221)
					int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1221)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1223)
					::String tmp13 = line;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1223)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1223)
					int tmp15 = ::haxe::Utf8_obj::charCodeAt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1223)
					charCode = tmp15;
					HX_STACK_LINE(1225)
					bool tmp16 = (charCode == (int)32);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1225)
					if ((tmp16)){
						HX_STACK_LINE(1227)
						(numSpaces)++;
					}
					else{
						HX_STACK_LINE(1229)
						bool tmp17 = (charCode == (int)9);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1229)
						if ((tmp17)){
							HX_STACK_LINE(1231)
							int tmp18 = this->numSpacesInTab;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1231)
							hx::AddEq(numSpaces,tmp18);
						}
					}
				}
			}
			HX_STACK_LINE(1235)
			::String tmp10 = line;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1235)
			int tmp11 = this->getStringWidth(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1235)
			int lineWidth = tmp11;		HX_STACK_VAR(lineWidth,"lineWidth");
			HX_STACK_LINE(1236)
			int tmp12 = numSpaces;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1236)
			::flixel::graphics::frames::FlxBitmapFont tmp13 = this->font;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1236)
			int tmp14 = tmp13->spaceWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1236)
			int tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1236)
			int totalSpacesWidth = tmp15;		HX_STACK_VAR(totalSpacesWidth,"totalSpacesWidth");
			HX_STACK_LINE(1237)
			int tmp16 = (textWidth - lineWidth);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1237)
			int tmp17 = totalSpacesWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1237)
			int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1237)
			int tmp19 = numSpaces;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1237)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1237)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1237)
			spaceWidth = tmp21;
		}
		HX_STACK_LINE(1240)
		int tmp10 = spaceWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1240)
		int tmp11 = this->numSpacesInTab;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1240)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1240)
		int tabWidth = tmp12;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(1242)
		{
			HX_STACK_LINE(1242)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1242)
			while((true)){
				HX_STACK_LINE(1242)
				bool tmp13 = (_g < lineLength);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1242)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1242)
				if ((tmp14)){
					HX_STACK_LINE(1242)
					break;
				}
				HX_STACK_LINE(1242)
				int tmp15 = (_g)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1242)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1244)
				::String tmp16 = line;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1244)
				int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1244)
				int tmp18 = ::haxe::Utf8_obj::charCodeAt(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1244)
				charCode = tmp18;
				HX_STACK_LINE(1246)
				bool tmp19 = (charCode == (int)32);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1246)
				if ((tmp19)){
					HX_STACK_LINE(1248)
					hx::AddEq(curX,spaceWidth);
				}
				else{
					HX_STACK_LINE(1250)
					bool tmp20 = (charCode == (int)9);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1250)
					if ((tmp20)){
						HX_STACK_LINE(1252)
						hx::AddEq(curX,tabWidth);
					}
					else{
						HX_STACK_LINE(1256)
						::flixel::graphics::frames::FlxBitmapFont tmp21 = this->font;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1256)
						int tmp22 = charCode;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1256)
						::flixel::graphics::frames::FlxFrame tmp23 = tmp21->charMap->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1256)
						charFrame = tmp23;
						HX_STACK_LINE(1257)
						bool tmp24 = (charFrame != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1257)
						if ((tmp24)){
							HX_STACK_LINE(1259)
							int tmp25 = (pos)++;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1259)
							int tmp26 = charCode;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1259)
							this->textData[tmp25] = tmp26;
							HX_STACK_LINE(1260)
							int tmp27 = (pos)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1260)
							Float tmp28 = curX;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1260)
							this->textData[tmp27] = tmp28;
							HX_STACK_LINE(1261)
							int tmp29 = (pos)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1261)
							int tmp30 = curY;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1261)
							this->textData[tmp29] = tmp30;
							HX_STACK_LINE(1262)
							int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1262)
							{
								HX_STACK_LINE(1262)
								::flixel::graphics::frames::FlxBitmapFont tmp32 = this->font;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1262)
								::flixel::graphics::frames::FlxBitmapFont _this = tmp32;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1262)
								int tmp33 = charCode;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1262)
								bool tmp34 = _this->charAdvance->exists(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1262)
								if ((tmp34)){
									HX_STACK_LINE(1262)
									int tmp35 = charCode;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1262)
									Dynamic tmp36 = _this->charAdvance->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1262)
									tmp31 = tmp36;
								}
								else{
									HX_STACK_LINE(1262)
									tmp31 = (int)0;
								}
							}
							HX_STACK_LINE(1262)
							hx::AddEq(curX,tmp31);
						}
					}
				}
				HX_STACK_LINE(1266)
				int tmp20 = this->letterSpacing;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1266)
				hx::AddEq(curX,tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapText_obj,tileLine,(void))

Void FlxBitmapText_obj::updatePixels( hx::Null< bool >  __o_useTiles){
bool useTiles = __o_useTiles.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","updatePixels",0x6ef43165,"flixel.text.FlxBitmapText.updatePixels","flixel/text/FlxBitmapText.hx",1271,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useTiles,"useTiles")
{
		HX_STACK_LINE(1272)
		bool tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1272)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1272)
		if ((tmp)){
			HX_STACK_LINE(1272)
			tmp1 = this->backgroundColor;
		}
		else{
			HX_STACK_LINE(1272)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(1272)
		int colorForFill = tmp1;		HX_STACK_VAR(colorForFill,"colorForFill");
		HX_STACK_LINE(1273)
		::openfl::_legacy::display::BitmapData bitmap = null();		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(1275)
		bool tmp2 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1275)
		if ((tmp2)){
			HX_STACK_LINE(1277)
			::openfl::_legacy::display::BitmapData tmp3 = this->get_pixels();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1277)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1277)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1277)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1277)
			if ((tmp5)){
				HX_STACK_LINE(1277)
				int tmp7 = this->frameWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1277)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1277)
				::openfl::_legacy::display::BitmapData tmp9 = this->get_pixels();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1277)
				::openfl::_legacy::display::BitmapData tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1277)
				int tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1277)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1277)
				bool tmp13 = (tmp8 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1277)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1277)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1277)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1277)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1277)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1277)
				if ((tmp18)){
					HX_STACK_LINE(1277)
					int tmp19 = this->frameHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1277)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1277)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1277)
					::openfl::_legacy::display::BitmapData tmp22 = this->get_pixels();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1277)
					::openfl::_legacy::display::BitmapData tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1277)
					::openfl::_legacy::display::BitmapData tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1277)
					int tmp25 = tmp24->get_height();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1277)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1277)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1277)
					tmp6 = (tmp21 != tmp27);
				}
				else{
					HX_STACK_LINE(1277)
					tmp6 = true;
				}
			}
			else{
				HX_STACK_LINE(1277)
				tmp6 = true;
			}
			HX_STACK_LINE(1277)
			if ((tmp6)){
				HX_STACK_LINE(1279)
				int tmp7 = this->frameWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1279)
				int tmp8 = this->frameHeight;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1279)
				int tmp9 = colorForFill;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1279)
				::openfl::_legacy::display::BitmapData tmp10 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp7,tmp8,true,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1279)
				this->set_pixels(tmp10);
			}
			else{
				HX_STACK_LINE(1283)
				::openfl::_legacy::display::BitmapData tmp7 = this->get_pixels();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1283)
				::flixel::graphics::FlxGraphic tmp8 = this->graphic;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1283)
				::openfl::_legacy::geom::Rectangle tmp9 = tmp8->bitmap->get_rect();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1283)
				int tmp10 = colorForFill;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1283)
				tmp7->fillRect(tmp9,tmp10);
			}
			HX_STACK_LINE(1286)
			::openfl::_legacy::display::BitmapData tmp7 = this->get_pixels();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1286)
			bitmap = tmp7;
		}
		else{
			HX_STACK_LINE(1290)
			bool tmp3 = useTiles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1290)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1290)
			if ((tmp4)){
				HX_STACK_LINE(1292)
				::openfl::_legacy::display::BitmapData tmp5 = this->framePixels;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1292)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1292)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1292)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1292)
				if ((tmp7)){
					HX_STACK_LINE(1292)
					int tmp9 = this->frameWidth;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1292)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1292)
					::openfl::_legacy::display::BitmapData tmp11 = this->framePixels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1292)
					::openfl::_legacy::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1292)
					int tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1292)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1292)
					bool tmp15 = (tmp10 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1292)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1292)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1292)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1292)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1292)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1292)
					if ((tmp20)){
						HX_STACK_LINE(1292)
						int tmp21 = this->frameHeight;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1292)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1292)
						int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1292)
						::openfl::_legacy::display::BitmapData tmp24 = this->framePixels;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1292)
						::openfl::_legacy::display::BitmapData tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1292)
						::openfl::_legacy::display::BitmapData tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1292)
						int tmp27 = tmp26->get_height();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1292)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1292)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1292)
						tmp8 = (tmp23 != tmp29);
					}
					else{
						HX_STACK_LINE(1292)
						tmp8 = true;
					}
				}
				else{
					HX_STACK_LINE(1292)
					tmp8 = true;
				}
				HX_STACK_LINE(1292)
				if ((tmp8)){
					HX_STACK_LINE(1294)
					::openfl::_legacy::display::BitmapData tmp9 = this->framePixels;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1294)
					::openfl::_legacy::display::BitmapData tmp10 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1294)
					this->framePixels = tmp10;
					HX_STACK_LINE(1295)
					int tmp11 = this->frameWidth;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1295)
					int tmp12 = this->frameHeight;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1295)
					int tmp13 = colorForFill;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1295)
					::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp12,true,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1295)
					this->framePixels = tmp14;
				}
				else{
					HX_STACK_LINE(1299)
					::openfl::_legacy::display::BitmapData tmp9 = this->framePixels;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1299)
					::openfl::_legacy::display::BitmapData tmp10 = this->framePixels;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1299)
					::openfl::_legacy::geom::Rectangle tmp11 = tmp10->get_rect();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1299)
					int tmp12 = colorForFill;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1299)
					tmp9->fillRect(tmp11,tmp12);
				}
				HX_STACK_LINE(1302)
				::openfl::_legacy::display::BitmapData tmp9 = this->framePixels;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1302)
				bitmap = tmp9;
			}
			else{
				HX_STACK_LINE(1306)
				int tmp5 = this->textDrawData->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1306)
				this->textDrawData->splice((int)0,tmp5);
				HX_STACK_LINE(1307)
				int tmp6 = this->borderDrawData->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1307)
				this->borderDrawData->splice((int)0,tmp6);
			}
			HX_STACK_LINE(1310)
			int tmp5 = this->frameWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1310)
			this->set_width(tmp5);
			HX_STACK_LINE(1311)
			int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1311)
			this->set_height(tmp6);
			HX_STACK_LINE(1313)
			::flixel::math::FlxPoint tmp7 = this->origin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1313)
			int tmp8 = this->frameWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1313)
			Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1313)
			tmp7->set_x(tmp9);
			HX_STACK_LINE(1314)
			::flixel::math::FlxPoint tmp10 = this->origin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1314)
			int tmp11 = this->frameHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1314)
			Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1314)
			tmp10->set_y(tmp12);
		}
		HX_STACK_LINE(1317)
		bool tmp3 = useTiles;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1317)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1317)
		if ((tmp4)){
			HX_STACK_LINE(1319)
			bitmap->lock();
		}
		HX_STACK_LINE(1322)
		bool isFront = false;		HX_STACK_VAR(isFront,"isFront");
		HX_STACK_LINE(1324)
		Float tmp5 = this->borderSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1324)
		Float tmp6 = this->borderQuality;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1324)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1324)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1324)
		int iterations = tmp8;		HX_STACK_VAR(iterations,"iterations");
		HX_STACK_LINE(1325)
		bool tmp9 = (iterations <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1325)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1325)
		if ((tmp9)){
			HX_STACK_LINE(1325)
			tmp10 = (int)1;
		}
		else{
			HX_STACK_LINE(1325)
			tmp10 = iterations;
		}
		HX_STACK_LINE(1325)
		iterations = tmp10;
		HX_STACK_LINE(1327)
		Float tmp11 = this->borderSize;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1327)
		int tmp12 = iterations;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1327)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1327)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1327)
		int delta = tmp14;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(1329)
		int iterationsX = (int)1;		HX_STACK_VAR(iterationsX,"iterationsX");
		HX_STACK_LINE(1330)
		int iterationsY = (int)1;		HX_STACK_VAR(iterationsY,"iterationsY");
		HX_STACK_LINE(1331)
		int deltaX = (int)1;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1332)
		int deltaY = (int)1;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1334)
		::flixel::text::FlxTextBorderStyle tmp15 = this->borderStyle;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1334)
		bool tmp16 = (tmp15 == ::flixel::text::FlxTextBorderStyle_obj::SHADOW);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1334)
		if ((tmp16)){
			HX_STACK_LINE(1336)
			::flixel::math::FlxPoint tmp17 = this->shadowOffset;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1336)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1336)
			Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1336)
			Float tmp20 = this->borderQuality;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1336)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1336)
			int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1336)
			iterationsX = tmp22;
			HX_STACK_LINE(1337)
			bool tmp23 = (iterationsX <= (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1337)
			int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1337)
			if ((tmp23)){
				HX_STACK_LINE(1337)
				tmp24 = (int)1;
			}
			else{
				HX_STACK_LINE(1337)
				tmp24 = iterationsX;
			}
			HX_STACK_LINE(1337)
			iterationsX = tmp24;
			HX_STACK_LINE(1339)
			::flixel::math::FlxPoint tmp25 = this->shadowOffset;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1339)
			Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1339)
			Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1339)
			Float tmp28 = this->borderQuality;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1339)
			Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1339)
			int tmp30 = ::Math_obj::round(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1339)
			iterationsY = tmp30;
			HX_STACK_LINE(1340)
			bool tmp31 = (iterationsY <= (int)0);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1340)
			int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1340)
			if ((tmp31)){
				HX_STACK_LINE(1340)
				tmp32 = (int)1;
			}
			else{
				HX_STACK_LINE(1340)
				tmp32 = iterationsY;
			}
			HX_STACK_LINE(1340)
			iterationsY = tmp32;
			HX_STACK_LINE(1342)
			::flixel::math::FlxPoint tmp33 = this->shadowOffset;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1342)
			Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1342)
			int tmp35 = iterationsX;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1342)
			Float tmp36 = (Float(tmp34) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1342)
			int tmp37 = ::Math_obj::round(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1342)
			deltaX = tmp37;
			HX_STACK_LINE(1343)
			::flixel::math::FlxPoint tmp38 = this->shadowOffset;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1343)
			Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1343)
			int tmp40 = iterationsY;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1343)
			Float tmp41 = (Float(tmp39) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1343)
			int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1343)
			deltaY = tmp42;
		}
		HX_STACK_LINE(1347)
		{
			HX_STACK_LINE(1347)
			::flixel::text::FlxTextBorderStyle tmp17 = this->borderStyle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1347)
			::flixel::text::FlxTextBorderStyle _g = tmp17;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1347)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(1350)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1350)
					while((true)){
						HX_STACK_LINE(1350)
						bool tmp18 = (_g1 < iterationsY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1350)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1350)
						if ((tmp19)){
							HX_STACK_LINE(1350)
							break;
						}
						HX_STACK_LINE(1350)
						int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1350)
						int iterY = tmp20;		HX_STACK_VAR(iterY,"iterY");
						HX_STACK_LINE(1352)
						{
							HX_STACK_LINE(1352)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1352)
							while((true)){
								HX_STACK_LINE(1352)
								bool tmp21 = (_g2 < iterationsX);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1352)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1352)
								if ((tmp22)){
									HX_STACK_LINE(1352)
									break;
								}
								HX_STACK_LINE(1352)
								int tmp23 = (_g2)++;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1352)
								int iterX = tmp23;		HX_STACK_VAR(iterX,"iterX");
								HX_STACK_LINE(1354)
								int tmp24 = deltaX;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1354)
								int tmp25 = (iterX + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1354)
								int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1354)
								int tmp27 = deltaY;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1354)
								int tmp28 = (iterY + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1354)
								int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1354)
								bool tmp30 = isFront;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1354)
								::openfl::_legacy::display::BitmapData tmp31 = bitmap;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1354)
								bool tmp32 = useTiles;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1354)
								this->drawText(tmp26,tmp29,tmp30,tmp31,tmp32);
							}
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(1360)
					int itd = (int)0;		HX_STACK_VAR(itd,"itd");
					HX_STACK_LINE(1361)
					{
						HX_STACK_LINE(1361)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1361)
						while((true)){
							HX_STACK_LINE(1361)
							bool tmp18 = (_g1 < iterations);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1361)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1361)
							if ((tmp19)){
								HX_STACK_LINE(1361)
								break;
							}
							HX_STACK_LINE(1361)
							int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1361)
							int iter = tmp20;		HX_STACK_VAR(iter,"iter");
							HX_STACK_LINE(1363)
							int tmp21 = delta;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1363)
							int tmp22 = (iter + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1363)
							int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1363)
							itd = tmp23;
							HX_STACK_LINE(1365)
							int tmp24 = itd;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1365)
							int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1365)
							int tmp26 = itd;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1365)
							int tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1365)
							bool tmp28 = isFront;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1365)
							::openfl::_legacy::display::BitmapData tmp29 = bitmap;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1365)
							bool tmp30 = useTiles;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1365)
							this->drawText(tmp25,tmp27,tmp28,tmp29,tmp30);
							HX_STACK_LINE(1367)
							int tmp31 = itd;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1367)
							int tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1367)
							bool tmp33 = isFront;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1367)
							::openfl::_legacy::display::BitmapData tmp34 = bitmap;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1367)
							bool tmp35 = useTiles;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1367)
							this->drawText((int)0,tmp32,tmp33,tmp34,tmp35);
							HX_STACK_LINE(1369)
							int tmp36 = itd;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1369)
							int tmp37 = itd;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1369)
							int tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1369)
							bool tmp39 = isFront;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1369)
							::openfl::_legacy::display::BitmapData tmp40 = bitmap;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1369)
							bool tmp41 = useTiles;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1369)
							this->drawText(tmp36,tmp38,tmp39,tmp40,tmp41);
							HX_STACK_LINE(1371)
							int tmp42 = itd;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1371)
							int tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1371)
							bool tmp44 = isFront;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1371)
							::openfl::_legacy::display::BitmapData tmp45 = bitmap;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1371)
							bool tmp46 = useTiles;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1371)
							this->drawText(tmp43,(int)0,tmp44,tmp45,tmp46);
							HX_STACK_LINE(1373)
							int tmp47 = itd;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1373)
							bool tmp48 = isFront;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1373)
							::openfl::_legacy::display::BitmapData tmp49 = bitmap;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1373)
							bool tmp50 = useTiles;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1373)
							this->drawText(tmp47,(int)0,tmp48,tmp49,tmp50);
							HX_STACK_LINE(1375)
							int tmp51 = itd;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1375)
							int tmp52 = -(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1375)
							int tmp53 = itd;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1375)
							bool tmp54 = isFront;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1375)
							::openfl::_legacy::display::BitmapData tmp55 = bitmap;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1375)
							bool tmp56 = useTiles;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1375)
							this->drawText(tmp52,tmp53,tmp54,tmp55,tmp56);
							HX_STACK_LINE(1377)
							int tmp57 = itd;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1377)
							bool tmp58 = isFront;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1377)
							::openfl::_legacy::display::BitmapData tmp59 = bitmap;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1377)
							bool tmp60 = useTiles;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1377)
							this->drawText((int)0,tmp57,tmp58,tmp59,tmp60);
							HX_STACK_LINE(1379)
							int tmp61 = itd;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1379)
							int tmp62 = itd;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1379)
							bool tmp63 = isFront;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1379)
							::openfl::_legacy::display::BitmapData tmp64 = bitmap;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1379)
							bool tmp65 = useTiles;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1379)
							this->drawText(tmp61,tmp62,tmp63,tmp64,tmp65);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1385)
					int itd = (int)0;		HX_STACK_VAR(itd,"itd");
					HX_STACK_LINE(1386)
					{
						HX_STACK_LINE(1386)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1386)
						while((true)){
							HX_STACK_LINE(1386)
							bool tmp18 = (_g1 < iterations);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1386)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1386)
							if ((tmp19)){
								HX_STACK_LINE(1386)
								break;
							}
							HX_STACK_LINE(1386)
							int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1386)
							int iter = tmp20;		HX_STACK_VAR(iter,"iter");
							HX_STACK_LINE(1388)
							int tmp21 = delta;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1388)
							int tmp22 = (iter + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1388)
							int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1388)
							itd = tmp23;
							HX_STACK_LINE(1390)
							int tmp24 = itd;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1390)
							int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1390)
							int tmp26 = itd;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1390)
							int tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1390)
							bool tmp28 = isFront;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1390)
							::openfl::_legacy::display::BitmapData tmp29 = bitmap;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1390)
							bool tmp30 = useTiles;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1390)
							this->drawText(tmp25,tmp27,tmp28,tmp29,tmp30);
							HX_STACK_LINE(1392)
							int tmp31 = itd;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1392)
							int tmp32 = itd;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1392)
							int tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1392)
							bool tmp34 = isFront;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1392)
							::openfl::_legacy::display::BitmapData tmp35 = bitmap;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1392)
							bool tmp36 = useTiles;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1392)
							this->drawText(tmp31,tmp33,tmp34,tmp35,tmp36);
							HX_STACK_LINE(1394)
							int tmp37 = itd;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1394)
							int tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1394)
							int tmp39 = itd;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1394)
							bool tmp40 = isFront;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1394)
							::openfl::_legacy::display::BitmapData tmp41 = bitmap;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1394)
							bool tmp42 = useTiles;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1394)
							this->drawText(tmp38,tmp39,tmp40,tmp41,tmp42);
							HX_STACK_LINE(1396)
							int tmp43 = itd;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1396)
							int tmp44 = itd;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1396)
							bool tmp45 = isFront;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1396)
							::openfl::_legacy::display::BitmapData tmp46 = bitmap;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1396)
							bool tmp47 = useTiles;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1396)
							this->drawText(tmp43,tmp44,tmp45,tmp46,tmp47);
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
		HX_STACK_LINE(1401)
		isFront = true;
		HX_STACK_LINE(1402)
		bool tmp17 = isFront;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1402)
		::openfl::_legacy::display::BitmapData tmp18 = bitmap;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1402)
		bool tmp19 = useTiles;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1402)
		this->drawText((int)0,(int)0,tmp17,tmp18,tmp19);
		HX_STACK_LINE(1404)
		bool tmp20 = useTiles;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1404)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1404)
		if ((tmp21)){
			HX_STACK_LINE(1406)
			bitmap->unlock(null());
		}
		HX_STACK_LINE(1409)
		bool tmp22 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1409)
		if ((tmp22)){
			HX_STACK_LINE(1411)
			this->dirty = true;
		}
		HX_STACK_LINE(1414)
		this->pendingPixelsChange = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,updatePixels,(void))

Void FlxBitmapText_obj::drawText( int posX,int posY,hx::Null< bool >  __o_isFront,::openfl::_legacy::display::BitmapData bitmap,hx::Null< bool >  __o_useTiles){
bool isFront = __o_isFront.Default(true);
bool useTiles = __o_useTiles.Default(false);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","drawText",0x5f687ea0,"flixel.text.FlxBitmapText.drawText","flixel/text/FlxBitmapText.hx",1418,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(posX,"posX")
	HX_STACK_ARG(posY,"posY")
	HX_STACK_ARG(isFront,"isFront")
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(useTiles,"useTiles")
{
		HX_STACK_LINE(1419)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1419)
		if ((tmp)){
			HX_STACK_LINE(1421)
			useTiles = false;
		}
		HX_STACK_LINE(1424)
		bool tmp1 = useTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1424)
		if ((tmp1)){
			HX_STACK_LINE(1426)
			int tmp2 = posX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1426)
			int tmp3 = posY;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1426)
			bool tmp4 = isFront;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1426)
			this->tileText(tmp2,tmp3,tmp4);
		}
		else{
			HX_STACK_LINE(1430)
			int tmp2 = posX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1430)
			int tmp3 = posY;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1430)
			bool tmp4 = isFront;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1430)
			::openfl::_legacy::display::BitmapData tmp5 = bitmap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1430)
			this->blitText(tmp2,tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapText_obj,drawText,(void))

Void FlxBitmapText_obj::blitText( int posX,int posY,hx::Null< bool >  __o_isFront,::openfl::_legacy::display::BitmapData bitmap){
bool isFront = __o_isFront.Default(true);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","blitText",0x6c29f751,"flixel.text.FlxBitmapText.blitText","flixel/text/FlxBitmapText.hx",1435,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(posX,"posX")
	HX_STACK_ARG(posY,"posY")
	HX_STACK_ARG(isFront,"isFront")
	HX_STACK_ARG(bitmap,"bitmap")
{
		HX_STACK_LINE(1436)
		::flixel::math::FlxMatrix tmp = this->_matrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1436)
		tmp->identity();
		HX_STACK_LINE(1437)
		::flixel::math::FlxMatrix tmp1 = this->_matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1437)
		int tmp2 = posX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1437)
		int tmp3 = posY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1437)
		tmp1->translate(tmp2,tmp3);
		HX_STACK_LINE(1439)
		int colorToApply = (int)-1;		HX_STACK_VAR(colorToApply,"colorToApply");
		HX_STACK_LINE(1441)
		bool tmp4 = isFront;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1441)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1441)
		if ((tmp4)){
			HX_STACK_LINE(1441)
			tmp5 = this->useTextColor;
		}
		else{
			HX_STACK_LINE(1441)
			tmp5 = false;
		}
		HX_STACK_LINE(1441)
		if ((tmp5)){
			HX_STACK_LINE(1443)
			int tmp6 = this->textColor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1443)
			colorToApply = tmp6;
		}
		else{
			HX_STACK_LINE(1445)
			bool tmp6 = isFront;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1445)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1445)
			if ((tmp7)){
				HX_STACK_LINE(1447)
				int tmp8 = this->borderColor;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1447)
				colorToApply = tmp8;
			}
		}
		HX_STACK_LINE(1450)
		::openfl::_legacy::geom::ColorTransform tmp6 = this->_colorParams;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1451)
		int tmp7 = (int(colorToApply) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1451)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1451)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1451)
		int tmp10 = (int(colorToApply) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1451)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1451)
		Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1452)
		int tmp13 = (int(colorToApply) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1452)
		Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1452)
		int tmp15 = (int(colorToApply) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1452)
		int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1452)
		Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1450)
		::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp6,tmp9,tmp12,tmp14,tmp17);
		HX_STACK_LINE(1454)
		bool tmp18 = isFront;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1454)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1454)
		if ((tmp18)){
			HX_STACK_LINE(1454)
			bool tmp20 = this->useTextColor;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1454)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1454)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1454)
			tmp19 = !(tmp22);
		}
		else{
			HX_STACK_LINE(1454)
			tmp19 = false;
		}
		HX_STACK_LINE(1454)
		if ((tmp19)){
			HX_STACK_LINE(1456)
			::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1456)
			::openfl::_legacy::display::BitmapData tmp21 = this->textBitmap;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1456)
			int tmp22 = tmp21->get_width();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1456)
			::openfl::_legacy::display::BitmapData tmp23 = this->textBitmap;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1456)
			int tmp24 = tmp23->get_height();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1456)
			tmp20->setTo((int)0,(int)0,tmp22,tmp24);
			HX_STACK_LINE(1457)
			::openfl::_legacy::display::BitmapData tmp25 = this->textBitmap;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1457)
			::openfl::_legacy::geom::Rectangle tmp26 = this->_flashRect;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1457)
			::openfl::_legacy::geom::Point tmp27 = this->_flashPointZero;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1457)
			bitmap->copyPixels(tmp25,tmp26,tmp27,null(),null(),true);
		}
		else{
			HX_STACK_LINE(1461)
			::openfl::_legacy::display::BitmapData tmp20 = this->textBitmap;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1461)
			::flixel::math::FlxMatrix tmp21 = this->_matrix;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1461)
			::openfl::_legacy::geom::ColorTransform tmp22 = this->_colorParams;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1461)
			bitmap->draw(tmp20,tmp21,tmp22,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapText_obj,blitText,(void))

Void FlxBitmapText_obj::tileText( int posX,int posY,hx::Null< bool >  __o_isFront){
bool isFront = __o_isFront.Default(true);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","tileText",0x8504faca,"flixel.text.FlxBitmapText.tileText","flixel/text/FlxBitmapText.hx",1466,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(posX,"posX")
	HX_STACK_ARG(posY,"posY")
	HX_STACK_ARG(isFront,"isFront")
{
		HX_STACK_LINE(1467)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1467)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1467)
		if ((tmp1)){
			HX_STACK_LINE(1467)
			return null();
		}
		HX_STACK_LINE(1469)
		bool tmp2 = isFront;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1469)
		Array< Float > data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1469)
		if ((tmp2)){
			HX_STACK_LINE(1469)
			data = this->textDrawData;
		}
		else{
			HX_STACK_LINE(1469)
			data = this->borderDrawData;
		}
		HX_STACK_LINE(1471)
		int pos = data->length;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(1472)
		int textPos;		HX_STACK_VAR(textPos,"textPos");
		HX_STACK_LINE(1473)
		int tmp3 = this->textData->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1473)
		Float tmp4 = (Float(tmp3) / Float((int)3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1473)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1473)
		int textLen = tmp5;		HX_STACK_VAR(textLen,"textLen");
		HX_STACK_LINE(1475)
		{
			HX_STACK_LINE(1475)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1475)
			while((true)){
				HX_STACK_LINE(1475)
				bool tmp6 = (_g < textLen);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1475)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1475)
				if ((tmp7)){
					HX_STACK_LINE(1475)
					break;
				}
				HX_STACK_LINE(1475)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1475)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1477)
				int tmp9 = ((int)3 * i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1477)
				textPos = tmp9;
				HX_STACK_LINE(1478)
				int tmp10 = (pos)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1478)
				Float tmp11 = this->textData->__get(textPos);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1478)
				data[tmp10] = tmp11;
				HX_STACK_LINE(1479)
				int tmp12 = (pos)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1479)
				int tmp13 = (textPos + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1479)
				Float tmp14 = this->textData->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1479)
				int tmp15 = posX;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1479)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1479)
				data[tmp12] = tmp16;
				HX_STACK_LINE(1480)
				int tmp17 = (pos)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1480)
				int tmp18 = (textPos + (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1480)
				Float tmp19 = this->textData->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1480)
				int tmp20 = posY;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1480)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1480)
				data[tmp17] = tmp21;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapText_obj,tileText,(void))

Void FlxBitmapText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("flixel.text.FlxBitmapText","setBorderStyle",0x3e33f932,"flixel.text.FlxBitmapText.setBorderStyle","flixel/text/FlxBitmapText.hx",1493,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(1494)
		::flixel::text::FlxTextBorderStyle tmp = Style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1494)
		this->set_borderStyle(tmp);
		HX_STACK_LINE(1495)
		int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1495)
		this->set_borderColor(tmp1);
		HX_STACK_LINE(1496)
		Float tmp2 = Size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1496)
		this->set_borderSize(tmp2);
		HX_STACK_LINE(1497)
		Float tmp3 = Quality;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1497)
		this->set_borderQuality(tmp3);
		HX_STACK_LINE(1498)
		::flixel::text::FlxTextBorderStyle tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1498)
		bool tmp5 = (tmp4 == ::flixel::text::FlxTextBorderStyle_obj::SHADOW);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1498)
		if ((tmp5)){
			HX_STACK_LINE(1500)
			::flixel::math::FlxPoint tmp6 = this->shadowOffset;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1500)
			Float tmp7 = this->borderSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1500)
			Float tmp8 = this->borderSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1500)
			tmp6->set(tmp7,tmp8);
		}
		HX_STACK_LINE(1502)
		this->pendingTextBitmapChange = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapText_obj,setBorderStyle,(void))

int FlxBitmapText_obj::get_fieldWidth( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","get_fieldWidth",0x93ba0444,"flixel.text.FlxBitmapText.get_fieldWidth","flixel/text/FlxBitmapText.hx",1506,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1507)
	bool tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1507)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1507)
	if ((tmp)){
		HX_STACK_LINE(1507)
		tmp1 = this->get_textWidth();
	}
	else{
		HX_STACK_LINE(1507)
		tmp1 = this->_fieldWidth;
	}
	HX_STACK_LINE(1507)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,get_fieldWidth,return )

int FlxBitmapText_obj::set_fieldWidth( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_fieldWidth",0xb3d9ecb8,"flixel.text.FlxBitmapText.set_fieldWidth","flixel/text/FlxBitmapText.hx",1514,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1515)
	bool tmp = (value > (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1515)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1515)
	if ((tmp)){
		HX_STACK_LINE(1515)
		tmp1 = value;
	}
	else{
		HX_STACK_LINE(1515)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(1515)
	value = tmp1;
	HX_STACK_LINE(1517)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1517)
	int tmp3 = this->_fieldWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1517)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1517)
	if ((tmp4)){
		HX_STACK_LINE(1519)
		bool tmp5 = (value <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1519)
		if ((tmp5)){
			HX_STACK_LINE(1521)
			this->set_autoSize(true);
			HX_STACK_LINE(1522)
			this->set_wordWrap(false);
		}
		HX_STACK_LINE(1525)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1528)
	int tmp5 = this->_fieldWidth = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1528)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_fieldWidth,return )

::String FlxBitmapText_obj::set_alignment( ::String value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_alignment",0x43e8e297,"flixel.text.FlxBitmapText.set_alignment","flixel/text/FlxBitmapText.hx",1532,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1533)
	::String tmp = this->alignment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1533)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1533)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1533)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1533)
	if ((tmp2)){
		HX_STACK_LINE(1533)
		::String tmp4 = this->alignment;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1533)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1533)
		tmp3 = (tmp5 != HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"));
	}
	else{
		HX_STACK_LINE(1533)
		tmp3 = false;
	}
	HX_STACK_LINE(1533)
	if ((tmp3)){
		HX_STACK_LINE(1535)
		this->alignment = value;
		HX_STACK_LINE(1536)
		this->pendingTextBitmapChange = true;
	}
	HX_STACK_LINE(1539)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1539)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_alignment,return )

bool FlxBitmapText_obj::set_multiLine( bool value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_multiLine",0xe295fec1,"flixel.text.FlxBitmapText.set_multiLine","flixel/text/FlxBitmapText.hx",1543,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1544)
	bool tmp = this->multiLine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1544)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1544)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1544)
	if ((tmp2)){
		HX_STACK_LINE(1546)
		this->multiLine = value;
		HX_STACK_LINE(1547)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1550)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1550)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_multiLine,return )

::flixel::graphics::frames::FlxBitmapFont FlxBitmapText_obj::set_font( ::flixel::graphics::frames::FlxBitmapFont value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_font",0x6fdd7a9b,"flixel.text.FlxBitmapText.set_font","flixel/text/FlxBitmapText.hx",1554,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1555)
	::flixel::graphics::frames::FlxBitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1555)
	::flixel::graphics::frames::FlxBitmapFont tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1555)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1555)
	if ((tmp2)){
		HX_STACK_LINE(1557)
		this->font = value;
		HX_STACK_LINE(1558)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1561)
	::flixel::graphics::frames::FlxBitmapFont tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1561)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_font,return )

int FlxBitmapText_obj::set_lineSpacing( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_lineSpacing",0x2a403ea3,"flixel.text.FlxBitmapText.set_lineSpacing","flixel/text/FlxBitmapText.hx",1565,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1566)
	int tmp = this->lineSpacing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1566)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1566)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1566)
	if ((tmp2)){
		HX_STACK_LINE(1568)
		bool tmp3 = (value >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1568)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1568)
		if ((tmp3)){
			HX_STACK_LINE(1568)
			tmp4 = value;
		}
		else{
			HX_STACK_LINE(1568)
			int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1568)
			tmp4 = -(tmp5);
		}
		HX_STACK_LINE(1568)
		this->lineSpacing = tmp4;
		HX_STACK_LINE(1569)
		this->pendingTextBitmapChange = true;
	}
	HX_STACK_LINE(1572)
	int tmp3 = this->lineSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1572)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_lineSpacing,return )

int FlxBitmapText_obj::set_letterSpacing( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_letterSpacing",0x3dbaa0f1,"flixel.text.FlxBitmapText.set_letterSpacing","flixel/text/FlxBitmapText.hx",1576,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1577)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1577)
	int tmp1 = this->letterSpacing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1577)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1577)
	if ((tmp2)){
		HX_STACK_LINE(1579)
		this->letterSpacing = value;
		HX_STACK_LINE(1580)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1583)
	int tmp3 = this->letterSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1583)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_letterSpacing,return )

bool FlxBitmapText_obj::set_autoUpperCase( bool value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_autoUpperCase",0xfc20c177,"flixel.text.FlxBitmapText.set_autoUpperCase","flixel/text/FlxBitmapText.hx",1587,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1588)
	bool tmp = this->autoUpperCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1588)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1588)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1588)
	if ((tmp2)){
		HX_STACK_LINE(1590)
		this->autoUpperCase = value;
		HX_STACK_LINE(1591)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1594)
	bool tmp3 = this->autoUpperCase;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1594)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_autoUpperCase,return )

bool FlxBitmapText_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_wordWrap",0xad748780,"flixel.text.FlxBitmapText.set_wordWrap","flixel/text/FlxBitmapText.hx",1598,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1599)
	bool tmp = this->wordWrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1599)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1599)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1599)
	if ((tmp2)){
		HX_STACK_LINE(1601)
		this->wordWrap = value;
		HX_STACK_LINE(1602)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1605)
	bool tmp3 = this->wordWrap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1605)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_wordWrap,return )

bool FlxBitmapText_obj::set_wrapByWord( bool value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_wrapByWord",0x94749a77,"flixel.text.FlxBitmapText.set_wrapByWord","flixel/text/FlxBitmapText.hx",1609,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1610)
	bool tmp = this->wrapByWord;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1610)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1610)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1610)
	if ((tmp2)){
		HX_STACK_LINE(1612)
		this->wrapByWord = value;
		HX_STACK_LINE(1613)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1616)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1616)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_wrapByWord,return )

bool FlxBitmapText_obj::set_autoSize( bool value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_autoSize",0xdc13029c,"flixel.text.FlxBitmapText.set_autoSize","flixel/text/FlxBitmapText.hx",1620,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1621)
	bool tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1621)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1621)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1621)
	if ((tmp2)){
		HX_STACK_LINE(1623)
		this->autoSize = value;
		HX_STACK_LINE(1624)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1627)
	bool tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1627)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_autoSize,return )

int FlxBitmapText_obj::set_padding( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_padding",0x5d514485,"flixel.text.FlxBitmapText.set_padding","flixel/text/FlxBitmapText.hx",1631,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1632)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1632)
	int tmp1 = this->padding;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1632)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1632)
	if ((tmp2)){
		HX_STACK_LINE(1634)
		this->padding = value;
		HX_STACK_LINE(1635)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1638)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1638)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_padding,return )

int FlxBitmapText_obj::set_numSpacesInTab( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_numSpacesInTab",0x862ece69,"flixel.text.FlxBitmapText.set_numSpacesInTab","flixel/text/FlxBitmapText.hx",1642,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1643)
	int tmp = this->numSpacesInTab;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1643)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1643)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1643)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1643)
	if ((tmp2)){
		HX_STACK_LINE(1643)
		tmp3 = (value > (int)0);
	}
	else{
		HX_STACK_LINE(1643)
		tmp3 = false;
	}
	HX_STACK_LINE(1643)
	if ((tmp3)){
		HX_STACK_LINE(1645)
		this->numSpacesInTab = value;
		HX_STACK_LINE(1646)
		this->pendingTextChange = true;
	}
	HX_STACK_LINE(1649)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1649)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_numSpacesInTab,return )

bool FlxBitmapText_obj::set_background( bool value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_background",0x421251ba,"flixel.text.FlxBitmapText.set_background","flixel/text/FlxBitmapText.hx",1653,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1654)
	bool tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1654)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1654)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1654)
	if ((tmp2)){
		HX_STACK_LINE(1656)
		this->background = value;
		HX_STACK_LINE(1657)
		bool tmp3 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1657)
		if ((tmp3)){
			HX_STACK_LINE(1659)
			this->pendingPixelsChange = true;
		}
	}
	HX_STACK_LINE(1663)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1663)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_background,return )

int FlxBitmapText_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_backgroundColor",0x20d30d49,"flixel.text.FlxBitmapText.set_backgroundColor","flixel/text/FlxBitmapText.hx",1667,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1668)
	int tmp = this->backgroundColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1668)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1668)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1668)
	if ((tmp2)){
		HX_STACK_LINE(1670)
		this->backgroundColor = value;
		HX_STACK_LINE(1671)
		bool tmp3 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1671)
		if ((tmp3)){
			HX_STACK_LINE(1673)
			this->pendingPixelsChange = true;
		}
	}
	HX_STACK_LINE(1677)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1677)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_backgroundColor,return )

::flixel::text::FlxTextBorderStyle FlxBitmapText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_borderStyle",0x6ac7c559,"flixel.text.FlxBitmapText.set_borderStyle","flixel/text/FlxBitmapText.hx",1681,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(1682)
	::flixel::text::FlxTextBorderStyle tmp = style;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1682)
	::flixel::text::FlxTextBorderStyle tmp1 = this->borderStyle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1682)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1682)
	if ((tmp2)){
		HX_STACK_LINE(1684)
		this->borderStyle = style;
		HX_STACK_LINE(1685)
		this->pendingTextBitmapChange = true;
	}
	HX_STACK_LINE(1688)
	::flixel::text::FlxTextBorderStyle tmp3 = this->borderStyle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1688)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_borderStyle,return )

int FlxBitmapText_obj::set_borderColor( int value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_borderColor",0x3106918b,"flixel.text.FlxBitmapText.set_borderColor","flixel/text/FlxBitmapText.hx",1692,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1693)
	int tmp = this->borderColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1693)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1693)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1693)
	if ((tmp2)){
		HX_STACK_LINE(1695)
		this->borderColor = value;
		HX_STACK_LINE(1696)
		bool tmp3 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1696)
		if ((tmp3)){
			HX_STACK_LINE(1698)
			this->pendingPixelsChange = true;
		}
	}
	HX_STACK_LINE(1702)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1702)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_borderColor,return )

Float FlxBitmapText_obj::set_borderSize( Float value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_borderSize",0x22e2bd99,"flixel.text.FlxBitmapText.set_borderSize","flixel/text/FlxBitmapText.hx",1706,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1707)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1707)
	Float tmp1 = this->borderSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1707)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1707)
	if ((tmp2)){
		HX_STACK_LINE(1709)
		this->borderSize = value;
		HX_STACK_LINE(1711)
		::flixel::text::FlxTextBorderStyle tmp3 = this->borderStyle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1711)
		bool tmp4 = (tmp3 != ::flixel::text::FlxTextBorderStyle_obj::NONE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1711)
		if ((tmp4)){
			HX_STACK_LINE(1713)
			this->pendingTextBitmapChange = true;
		}
	}
	HX_STACK_LINE(1717)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1717)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_borderSize,return )

Float FlxBitmapText_obj::set_borderQuality( Float value){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","set_borderQuality",0xc1dc7ee7,"flixel.text.FlxBitmapText.set_borderQuality","flixel/text/FlxBitmapText.hx",1721,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1722)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1722)
	Float tmp1 = ::Math_obj::max((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1722)
	Float tmp2 = ::Math_obj::min((int)1,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1722)
	value = tmp2;
	HX_STACK_LINE(1724)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1724)
	Float tmp4 = this->borderQuality;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1724)
	bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1724)
	if ((tmp5)){
		HX_STACK_LINE(1726)
		this->borderQuality = value;
		HX_STACK_LINE(1728)
		::flixel::text::FlxTextBorderStyle tmp6 = this->borderStyle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1728)
		bool tmp7 = (tmp6 != ::flixel::text::FlxTextBorderStyle_obj::NONE);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1728)
		if ((tmp7)){
			HX_STACK_LINE(1730)
			this->pendingTextBitmapChange = true;
		}
	}
	HX_STACK_LINE(1734)
	Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1734)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapText_obj,set_borderQuality,return )

int FlxBitmapText_obj::get_numLines( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","get_numLines",0xc9b24131,"flixel.text.FlxBitmapText.get_numLines","flixel/text/FlxBitmapText.hx",1738,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1739)
	int tmp = this->_lines->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1739)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,get_numLines,return )

int FlxBitmapText_obj::get_textWidth( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","get_textWidth",0x77f563c1,"flixel.text.FlxBitmapText.get_textWidth","flixel/text/FlxBitmapText.hx",1748,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1749)
	int max = (int)0;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(1750)
	int tmp = this->_lines->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1750)
	int numLines = tmp;		HX_STACK_VAR(numLines,"numLines");
	HX_STACK_LINE(1751)
	int lineWidth;		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(1752)
	this->_linesWidth = Array_obj< int >::__new();
	HX_STACK_LINE(1754)
	{
		HX_STACK_LINE(1754)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1754)
		while((true)){
			HX_STACK_LINE(1754)
			bool tmp1 = (_g < numLines);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1754)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1754)
			if ((tmp2)){
				HX_STACK_LINE(1754)
				break;
			}
			HX_STACK_LINE(1754)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1754)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1756)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1756)
			int tmp5 = this->getLineWidth(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1756)
			lineWidth = tmp5;
			HX_STACK_LINE(1757)
			int tmp6 = lineWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1757)
			this->_linesWidth[i] = tmp6;
			HX_STACK_LINE(1758)
			bool tmp7 = (max > lineWidth);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1758)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1758)
			if ((tmp7)){
				HX_STACK_LINE(1758)
				tmp8 = max;
			}
			else{
				HX_STACK_LINE(1758)
				tmp8 = lineWidth;
			}
			HX_STACK_LINE(1758)
			max = tmp8;
		}
	}
	HX_STACK_LINE(1761)
	int tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1761)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,get_textWidth,return )

int FlxBitmapText_obj::get_textHeight( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","get_textHeight",0x35115dcc,"flixel.text.FlxBitmapText.get_textHeight","flixel/text/FlxBitmapText.hx",1765,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1766)
	int tmp = this->get_lineHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1766)
	int tmp1 = this->lineSpacing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1766)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1766)
	int tmp3 = this->_lines->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1766)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1766)
	int tmp5 = this->lineSpacing;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1766)
	int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1766)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,get_textHeight,return )

int FlxBitmapText_obj::get_lineHeight( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","get_lineHeight",0xd2c8d853,"flixel.text.FlxBitmapText.get_lineHeight","flixel/text/FlxBitmapText.hx",1770,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1771)
	::flixel::graphics::frames::FlxBitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1771)
	int tmp1 = tmp->lineHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1771)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapText_obj,get_lineHeight,return )

Float FlxBitmapText_obj::get_width( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","get_width",0x546ddfae,"flixel.text.FlxBitmapText.get_width","flixel/text/FlxBitmapText.hx",1775,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1776)
	{
		HX_STACK_LINE(1776)
		bool useTiles = true;		HX_STACK_VAR(useTiles,"useTiles");
		HX_STACK_LINE(1776)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1776)
		if ((tmp)){
			HX_STACK_LINE(1776)
			useTiles = false;
		}
		HX_STACK_LINE(1776)
		bool tmp1 = this->pendingTextChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1776)
		if ((tmp1)){
			HX_STACK_LINE(1776)
			this->updateText();
			HX_STACK_LINE(1776)
			this->pendingTextBitmapChange = true;
		}
		HX_STACK_LINE(1776)
		bool tmp2 = this->pendingTextBitmapChange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1776)
		if ((tmp2)){
			HX_STACK_LINE(1776)
			bool tmp3 = useTiles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1776)
			this->updateTextBitmap(tmp3);
			HX_STACK_LINE(1776)
			this->pendingPixelsChange = true;
		}
		HX_STACK_LINE(1776)
		bool tmp3 = this->pendingPixelsChange;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1776)
		if ((tmp3)){
			HX_STACK_LINE(1776)
			bool tmp4 = useTiles;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1776)
			this->updatePixels(tmp4);
		}
	}
	HX_STACK_LINE(1777)
	Float tmp = this->super::get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1777)
	return tmp;
}


Float FlxBitmapText_obj::get_height( ){
	HX_STACK_FRAME("flixel.text.FlxBitmapText","get_height",0x4205513f,"flixel.text.FlxBitmapText.get_height","flixel/text/FlxBitmapText.hx",1781,0x5518a9ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1782)
	{
		HX_STACK_LINE(1782)
		bool useTiles = true;		HX_STACK_VAR(useTiles,"useTiles");
		HX_STACK_LINE(1782)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1782)
		if ((tmp)){
			HX_STACK_LINE(1782)
			useTiles = false;
		}
		HX_STACK_LINE(1782)
		bool tmp1 = this->pendingTextChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1782)
		if ((tmp1)){
			HX_STACK_LINE(1782)
			this->updateText();
			HX_STACK_LINE(1782)
			this->pendingTextBitmapChange = true;
		}
		HX_STACK_LINE(1782)
		bool tmp2 = this->pendingTextBitmapChange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1782)
		if ((tmp2)){
			HX_STACK_LINE(1782)
			bool tmp3 = useTiles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1782)
			this->updateTextBitmap(tmp3);
			HX_STACK_LINE(1782)
			this->pendingPixelsChange = true;
		}
		HX_STACK_LINE(1782)
		bool tmp3 = this->pendingPixelsChange;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1782)
		if ((tmp3)){
			HX_STACK_LINE(1782)
			bool tmp4 = useTiles;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1782)
			this->updatePixels(tmp4);
		}
	}
	HX_STACK_LINE(1783)
	Float tmp = this->super::get_height();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1783)
	return tmp;
}



FlxBitmapText_obj::FlxBitmapText_obj()
{
}

void FlxBitmapText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapText);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_colorParams,"_colorParams");
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	HX_MARK_MEMBER_NAME(_linesWidth,"_linesWidth");
	HX_MARK_MEMBER_NAME(alignment,"alignment");
	HX_MARK_MEMBER_NAME(lineSpacing,"lineSpacing");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(autoUpperCase,"autoUpperCase");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(wrapByWord,"wrapByWord");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(lineHeight,"lineHeight");
	HX_MARK_MEMBER_NAME(numSpacesInTab,"numSpacesInTab");
	HX_MARK_MEMBER_NAME(textColor,"textColor");
	HX_MARK_MEMBER_NAME(useTextColor,"useTextColor");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(multiLine,"multiLine");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(_fieldWidth,"_fieldWidth");
	HX_MARK_MEMBER_NAME(pendingTextChange,"pendingTextChange");
	HX_MARK_MEMBER_NAME(pendingTextBitmapChange,"pendingTextBitmapChange");
	HX_MARK_MEMBER_NAME(pendingPixelsChange,"pendingPixelsChange");
	HX_MARK_MEMBER_NAME(textData,"textData");
	HX_MARK_MEMBER_NAME(textDrawData,"textDrawData");
	HX_MARK_MEMBER_NAME(borderDrawData,"borderDrawData");
	HX_MARK_MEMBER_NAME(textBitmap,"textBitmap");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBitmapText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_colorParams,"_colorParams");
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	HX_VISIT_MEMBER_NAME(_linesWidth,"_linesWidth");
	HX_VISIT_MEMBER_NAME(alignment,"alignment");
	HX_VISIT_MEMBER_NAME(lineSpacing,"lineSpacing");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(autoUpperCase,"autoUpperCase");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(wrapByWord,"wrapByWord");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(lineHeight,"lineHeight");
	HX_VISIT_MEMBER_NAME(numSpacesInTab,"numSpacesInTab");
	HX_VISIT_MEMBER_NAME(textColor,"textColor");
	HX_VISIT_MEMBER_NAME(useTextColor,"useTextColor");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(multiLine,"multiLine");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(_fieldWidth,"_fieldWidth");
	HX_VISIT_MEMBER_NAME(pendingTextChange,"pendingTextChange");
	HX_VISIT_MEMBER_NAME(pendingTextBitmapChange,"pendingTextBitmapChange");
	HX_VISIT_MEMBER_NAME(pendingPixelsChange,"pendingPixelsChange");
	HX_VISIT_MEMBER_NAME(textData,"textData");
	HX_VISIT_MEMBER_NAME(textDrawData,"textDrawData");
	HX_VISIT_MEMBER_NAME(borderDrawData,"borderDrawData");
	HX_VISIT_MEMBER_NAME(textBitmap,"textBitmap");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBitmapText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp == hx::paccAlways ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"textData") ) { return textData; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"cutLines") ) { return cutLines_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"blitLine") ) { return blitLine_dyn(); }
		if (HX_FIELD_EQ(inName,"tileLine") ) { return tileLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawText") ) { return drawText_dyn(); }
		if (HX_FIELD_EQ(inName,"blitText") ) { return blitText_dyn(); }
		if (HX_FIELD_EQ(inName,"tileText") ) { return tileText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return alignment; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp == hx::paccAlways ? get_textWidth() : textWidth; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return textColor; }
		if (HX_FIELD_EQ(inName,"multiLine") ) { return multiLine; }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrapByWord") ) { return wrapByWord; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp == hx::paccAlways ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"lineHeight") ) { return inCallProp == hx::paccAlways ? get_lineHeight() : lineHeight; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return get_fieldWidth(); }
		if (HX_FIELD_EQ(inName,"textBitmap") ) { return textBitmap; }
		if (HX_FIELD_EQ(inName,"updateText") ) { return updateText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linesWidth") ) { return _linesWidth; }
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { return lineSpacing; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"_fieldWidth") ) { return _fieldWidth; }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_colorParams") ) { return _colorParams; }
		if (HX_FIELD_EQ(inName,"useTextColor") ) { return useTextColor; }
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"textDrawData") ) { return textDrawData; }
		if (HX_FIELD_EQ(inName,"getLineWidth") ) { return getLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePixels") ) { return updatePixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return letterSpacing; }
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { return autoUpperCase; }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiLine") ) { return set_multiLine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numSpacesInTab") ) { return numSpacesInTab; }
		if (HX_FIELD_EQ(inName,"borderDrawData") ) { return borderDrawData; }
		if (HX_FIELD_EQ(inName,"getStringWidth") ) { return getStringWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapLineByWord") ) { return wrapLineByWord_dyn(); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return get_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return set_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapByWord") ) { return set_wrapByWord_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineHeight") ) { return get_lineHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"computeTextSize") ) { return computeTextSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineSpacing") ) { return set_lineSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_useTextColor") ) { return set_useTextColor_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTextBitmap") ) { return updateTextBitmap_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pendingTextChange") ) { return pendingTextChange; }
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return set_letterSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoUpperCase") ) { return set_autoUpperCase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"splitLineIntoWords") ) { return splitLineIntoWords_dyn(); }
		if (HX_FIELD_EQ(inName,"set_numSpacesInTab") ) { return set_numSpacesInTab_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pendingPixelsChange") ) { return pendingPixelsChange; }
		if (HX_FIELD_EQ(inName,"checkPendingChanges") ) { return checkPendingChanges_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapLineByCharacter") ) { return wrapLineByCharacter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"pendingTextBitmapChange") ) { return pendingTextBitmapChange; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue);font=inValue.Cast< ::flixel::graphics::frames::FlxBitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue);padding=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue);autoSize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textData") ) { textData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return set_alignment(inValue);alignment=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue);textColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiLine") ) { if (inCallProp == hx::paccAlways) return set_multiLine(inValue);multiLine=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrapByWord") ) { if (inCallProp == hx::paccAlways) return set_wrapByWord(inValue);wrapByWord=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeight") ) { lineHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == hx::paccAlways) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue);background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return set_fieldWidth(inValue); }
		if (HX_FIELD_EQ(inName,"textBitmap") ) { textBitmap=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linesWidth") ) { _linesWidth=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { if (inCallProp == hx::paccAlways) return set_lineSpacing(inValue);lineSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == hx::paccAlways) return set_borderStyle(inValue);borderStyle=inValue.Cast< ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fieldWidth") ) { _fieldWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_colorParams") ) { _colorParams=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useTextColor") ) { if (inCallProp == hx::paccAlways) return set_useTextColor(inValue);useTextColor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textDrawData") ) { textDrawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == hx::paccAlways) return set_letterSpacing(inValue);letterSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { if (inCallProp == hx::paccAlways) return set_autoUpperCase(inValue);autoUpperCase=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == hx::paccAlways) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numSpacesInTab") ) { if (inCallProp == hx::paccAlways) return set_numSpacesInTab(inValue);numSpacesInTab=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderDrawData") ) { borderDrawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pendingTextChange") ) { pendingTextChange=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pendingPixelsChange") ) { pendingPixelsChange=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"pendingTextBitmapChange") ) { pendingTextBitmapChange=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("_colorParams","\x0a","\x3b","\xad","\x0d"));
	outFields->push(HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"));
	outFields->push(HX_HCSTRING("_linesWidth","\xa6","\xf8","\x37","\xcb"));
	outFields->push(HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea"));
	outFields->push(HX_HCSTRING("lineSpacing","\xef","\xe9","\x0e","\xd0"));
	outFields->push(HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"));
	outFields->push(HX_HCSTRING("autoUpperCase","\xc3","\xd7","\x69","\xb3"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("wrapByWord","\xab","\xdc","\x7f","\x78"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"));
	outFields->push(HX_HCSTRING("numSpacesInTab","\x9d","\x3a","\xd9","\x2e"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("useTextColor","\x2f","\x74","\xe5","\x52"));
	outFields->push(HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));
	outFields->push(HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"));
	outFields->push(HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("multiLine","\x0d","\xff","\xea","\x88"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("fieldWidth","\xec","\x2e","\xe5","\x97"));
	outFields->push(HX_HCSTRING("_fieldWidth","\x0b","\xfc","\x6e","\x6a"));
	outFields->push(HX_HCSTRING("pendingTextChange","\x34","\x21","\x45","\x8b"));
	outFields->push(HX_HCSTRING("pendingTextBitmapChange","\x83","\xed","\xa8","\x93"));
	outFields->push(HX_HCSTRING("pendingPixelsChange","\x74","\x9f","\x81","\xdb"));
	outFields->push(HX_HCSTRING("textData","\x77","\xa9","\x5e","\x45"));
	outFields->push(HX_HCSTRING("textDrawData","\x1b","\x7e","\x48","\x8b"));
	outFields->push(HX_HCSTRING("borderDrawData","\x5a","\xd5","\x51","\x60"));
	outFields->push(HX_HCSTRING("textBitmap","\x7c","\x90","\xfc","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxBitmapFont*/ ,(int)offsetof(FlxBitmapText_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsString,(int)offsetof(FlxBitmapText_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(FlxBitmapText_obj,_colorParams),HX_HCSTRING("_colorParams","\x0a","\x3b","\xad","\x0d")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxBitmapText_obj,_lines),HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBitmapText_obj,_linesWidth),HX_HCSTRING("_linesWidth","\xa6","\xf8","\x37","\xcb")},
	{hx::fsString,(int)offsetof(FlxBitmapText_obj,alignment),HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,lineSpacing),HX_HCSTRING("lineSpacing","\xef","\xe9","\x0e","\xd0")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,letterSpacing),HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,autoUpperCase),HX_HCSTRING("autoUpperCase","\xc3","\xd7","\x69","\xb3")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,wrapByWord),HX_HCSTRING("wrapByWord","\xab","\xdc","\x7f","\x78")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,lineHeight),HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,numSpacesInTab),HX_HCSTRING("numSpacesInTab","\x9d","\x3a","\xd9","\x2e")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,textColor),HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,useTextColor),HX_HCSTRING("useTextColor","\x2f","\x74","\xe5","\x52")},
	{hx::fsObject /*::flixel::text::FlxTextBorderStyle*/ ,(int)offsetof(FlxBitmapText_obj,borderStyle),HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsFloat,(int)offsetof(FlxBitmapText_obj,borderSize),HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")},
	{hx::fsFloat,(int)offsetof(FlxBitmapText_obj,borderQuality),HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxBitmapText_obj,shadowOffset),HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,multiLine),HX_HCSTRING("multiLine","\x0d","\xff","\xea","\x88")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsInt,(int)offsetof(FlxBitmapText_obj,_fieldWidth),HX_HCSTRING("_fieldWidth","\x0b","\xfc","\x6e","\x6a")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,pendingTextChange),HX_HCSTRING("pendingTextChange","\x34","\x21","\x45","\x8b")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,pendingTextBitmapChange),HX_HCSTRING("pendingTextBitmapChange","\x83","\xed","\xa8","\x93")},
	{hx::fsBool,(int)offsetof(FlxBitmapText_obj,pendingPixelsChange),HX_HCSTRING("pendingPixelsChange","\x74","\x9f","\x81","\xdb")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBitmapText_obj,textData),HX_HCSTRING("textData","\x77","\xa9","\x5e","\x45")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBitmapText_obj,textDrawData),HX_HCSTRING("textDrawData","\x1b","\x7e","\x48","\x8b")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBitmapText_obj,borderDrawData),HX_HCSTRING("borderDrawData","\x5a","\xd5","\x51","\x60")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBitmapText_obj,textBitmap),HX_HCSTRING("textBitmap","\x7c","\x90","\xfc","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("_colorParams","\x0a","\x3b","\xad","\x0d"),
	HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"),
	HX_HCSTRING("_linesWidth","\xa6","\xf8","\x37","\xcb"),
	HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea"),
	HX_HCSTRING("lineSpacing","\xef","\xe9","\x0e","\xd0"),
	HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"),
	HX_HCSTRING("autoUpperCase","\xc3","\xd7","\x69","\xb3"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("wrapByWord","\xab","\xdc","\x7f","\x78"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"),
	HX_HCSTRING("numSpacesInTab","\x9d","\x3a","\xd9","\x2e"),
	HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"),
	HX_HCSTRING("useTextColor","\x2f","\x74","\xe5","\x52"),
	HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"),
	HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"),
	HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("multiLine","\x0d","\xff","\xea","\x88"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("_fieldWidth","\x0b","\xfc","\x6e","\x6a"),
	HX_HCSTRING("pendingTextChange","\x34","\x21","\x45","\x8b"),
	HX_HCSTRING("pendingTextBitmapChange","\x83","\xed","\xa8","\x93"),
	HX_HCSTRING("pendingPixelsChange","\x74","\x9f","\x81","\xdb"),
	HX_HCSTRING("textData","\x77","\xa9","\x5e","\x45"),
	HX_HCSTRING("textDrawData","\x1b","\x7e","\x48","\x8b"),
	HX_HCSTRING("borderDrawData","\x5a","\xd5","\x51","\x60"),
	HX_HCSTRING("textBitmap","\x7c","\x90","\xfc","\x27"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawFrame","\x89","\xad","\x8e","\xce"),
	HX_HCSTRING("checkPendingChanges","\x54","\x04","\x94","\x75"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("set_useTextColor","\x2c","\x4e","\xc6","\xad"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("updateText","\x56","\xb7","\xae","\x05"),
	HX_HCSTRING("computeTextSize","\xa5","\xc6","\xcf","\xe6"),
	HX_HCSTRING("getLineWidth","\xfc","\x55","\xb4","\x20"),
	HX_HCSTRING("getStringWidth","\x7f","\xba","\x03","\x5d"),
	HX_HCSTRING("cutLines","\x1d","\x91","\x66","\x89"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("splitLineIntoWords","\xdb","\x44","\xa9","\x26"),
	HX_HCSTRING("wrapLineByWord","\xbf","\xd4","\xc5","\xb8"),
	HX_HCSTRING("wrapLineByCharacter","\x94","\x30","\x3f","\x4a"),
	HX_HCSTRING("updateTextBitmap","\xe5","\x5f","\xe8","\x71"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("blitLine","\xc9","\x3a","\xde","\x68"),
	HX_HCSTRING("tileLine","\x42","\x3e","\xb9","\x81"),
	HX_HCSTRING("updatePixels","\x16","\x96","\x6d","\x8c"),
	HX_HCSTRING("drawText","\xd1","\x76","\x63","\x61"),
	HX_HCSTRING("blitText","\x82","\xef","\x24","\x6e"),
	HX_HCSTRING("tileText","\xfb","\xf2","\xff","\x86"),
	HX_HCSTRING("setBorderStyle","\x23","\xac","\x54","\xb8"),
	HX_HCSTRING("get_fieldWidth","\x35","\xb7","\xda","\x0d"),
	HX_HCSTRING("set_fieldWidth","\xa9","\x9f","\xfa","\x2d"),
	HX_HCSTRING("set_alignment","\xc6","\x98","\xa7","\xf0"),
	HX_HCSTRING("set_multiLine","\xf0","\xb4","\x54","\x8f"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("set_lineSpacing","\x92","\x1e","\xbc","\x8c"),
	HX_HCSTRING("set_letterSpacing","\xa0","\x9a","\xe1","\x1e"),
	HX_HCSTRING("set_autoUpperCase","\x26","\xbb","\x47","\xdd"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("set_wrapByWord","\x68","\x4d","\x95","\x0e"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	HX_HCSTRING("set_numSpacesInTab","\xda","\x4d","\x22","\xa7"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("set_borderStyle","\x48","\xa5","\x43","\xcd"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("set_borderSize","\x8a","\x70","\x03","\x9d"),
	HX_HCSTRING("set_borderQuality","\x96","\x78","\x03","\xa3"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_lineHeight","\x44","\x8b","\xe9","\x4c"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapText_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBitmapText_obj::__mClass;

void FlxBitmapText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxBitmapText","\x7f","\x8e","\x6b","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapText_obj >;
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
} // end namespace text
