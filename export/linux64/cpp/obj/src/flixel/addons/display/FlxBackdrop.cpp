#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
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
namespace addons{
namespace display{

Void FlxBackdrop_obj::__construct(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY,hx::Null< int >  __o_SpaceX,hx::Null< int >  __o_SpaceY)
{
HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","new",0xbcdf9a65,"flixel.addons.display.FlxBackdrop.new","flixel/addons/display/FlxBackdrop.hx",21,0x7f3b228c)
HX_STACK_THIS(this)
HX_STACK_ARG(Graphic,"Graphic")
HX_STACK_ARG(__o_ScrollX,"ScrollX")
HX_STACK_ARG(__o_ScrollY,"ScrollY")
HX_STACK_ARG(__o_RepeatX,"RepeatX")
HX_STACK_ARG(__o_RepeatY,"RepeatY")
HX_STACK_ARG(__o_SpaceX,"SpaceX")
HX_STACK_ARG(__o_SpaceY,"SpaceY")
Float ScrollX = __o_ScrollX.Default(1);
Float ScrollY = __o_ScrollY.Default(1);
bool RepeatX = __o_RepeatX.Default(true);
bool RepeatY = __o_RepeatY.Default(true);
int SpaceX = __o_SpaceX.Default(0);
int SpaceY = __o_SpaceY.Default(0);
{
	HX_STACK_LINE(45)
	this->useScaleHack = true;
	HX_STACK_LINE(38)
	this->_numTiles = (int)0;
	HX_STACK_LINE(30)
	this->_spaceY = (int)0;
	HX_STACK_LINE(29)
	this->_spaceX = (int)0;
	HX_STACK_LINE(27)
	this->_repeatY = false;
	HX_STACK_LINE(26)
	this->_repeatX = false;
	HX_STACK_LINE(25)
	this->_scrollH = (int)0;
	HX_STACK_LINE(24)
	this->_scrollW = (int)0;
	HX_STACK_LINE(60)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(62)
	Dynamic tmp = this->scaleCallback_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::flixel::math::FlxCallbackPoint tmp1 = ::flixel::math::FlxCallbackPoint_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	this->scale = tmp1;
	HX_STACK_LINE(63)
	::flixel::math::FlxPoint tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	tmp2->set((int)1,(int)1);
	HX_STACK_LINE(65)
	this->_repeatX = RepeatX;
	HX_STACK_LINE(66)
	this->_repeatY = RepeatY;
	HX_STACK_LINE(68)
	this->_spaceX = SpaceX;
	HX_STACK_LINE(69)
	this->_spaceY = SpaceY;
	HX_STACK_LINE(71)
	::openfl::_legacy::geom::Point tmp3 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	this->_ppoint = tmp3;
	HX_STACK_LINE(73)
	::flixel::math::FlxPoint tmp4 = this->scrollFactor;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	Float tmp5 = ScrollX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	tmp4->set_x(tmp5);
	HX_STACK_LINE(74)
	::flixel::math::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(74)
	Float tmp7 = ScrollY;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(74)
	tmp6->set_y(tmp7);
	HX_STACK_LINE(76)
	bool tmp8 = (Graphic != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(76)
	if ((tmp8)){
		HX_STACK_LINE(77)
		Dynamic tmp9 = Graphic;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		this->loadGraphic(tmp9,null(),null(),null(),null(),null());
	}
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::flixel::_system::frontEnds::SignalFrontEnd tmp9 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		Dynamic tmp10 = this->onGameResize_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		tmp9->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp10);
	}
}
;
	return null();
}

//FlxBackdrop_obj::~FlxBackdrop_obj() { }

Dynamic FlxBackdrop_obj::__CreateEmpty() { return  new FlxBackdrop_obj; }
hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__new(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY,hx::Null< int >  __o_SpaceX,hx::Null< int >  __o_SpaceY)
{  hx::ObjectPtr< FlxBackdrop_obj > _result_ = new FlxBackdrop_obj();
	_result_->__construct(Graphic,__o_ScrollX,__o_ScrollY,__o_RepeatX,__o_RepeatY,__o_SpaceX,__o_SpaceY);
	return _result_;}

Dynamic FlxBackdrop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBackdrop_obj > _result_ = new FlxBackdrop_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void FlxBackdrop_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","destroy",0x54bfdd7f,"flixel.addons.display.FlxBackdrop.destroy","flixel/addons/display/FlxBackdrop.hx",83,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->_tileInfo = null();
		HX_STACK_LINE(85)
		this->_ppoint = null();
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		this->scale = tmp1;
		HX_STACK_LINE(87)
		this->setTileFrame(null());
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::flixel::_system::frontEnds::SignalFrontEnd tmp2 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			Dynamic tmp3 = this->onGameResize_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			tmp2->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
		HX_STACK_LINE(91)
		this->super::destroy();
	}
return null();
}


::flixel::FlxSprite FlxBackdrop_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","loadGraphic",0x9fc1f027,"flixel.addons.display.FlxBackdrop.loadGraphic","flixel/addons/display/FlxBackdrop.hx",95,0x7f3b228c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(96)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		Dynamic tmp1 = Graphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		::flixel::graphics::FlxGraphic tileGraphic = tmp2;		HX_STACK_VAR(tileGraphic,"tileGraphic");
		HX_STACK_LINE(97)
		::flixel::graphics::frames::FlxImageFrame tmp3 = tileGraphic->get_imageFrame();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		::flixel::graphics::frames::FlxFrame tmp4 = tmp3->get_frame();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		this->setTileFrame(tmp4);
		HX_STACK_LINE(99)
		::flixel::graphics::frames::FlxFrame tmp5 = this->_tileFrame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		Float tmp6 = tmp5->sourceSize->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		int tmp7 = this->_spaceX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		int w = tmp9;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(100)
		::flixel::graphics::frames::FlxFrame tmp10 = this->_tileFrame;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		Float tmp11 = tmp10->sourceSize->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		int tmp12 = this->_spaceY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		int h = tmp14;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(102)
		this->_scrollW = w;
		HX_STACK_LINE(103)
		this->_scrollH = h;
		HX_STACK_LINE(105)
		this->regenGraphic();
		HX_STACK_LINE(107)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::addons::display::FlxBackdrop FlxBackdrop_obj::loadFrame( ::flixel::graphics::frames::FlxFrame Frame){
	HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","loadFrame",0x18255fec,"flixel.addons.display.FlxBackdrop.loadFrame","flixel/addons/display/FlxBackdrop.hx",111,0x7f3b228c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(112)
	::flixel::graphics::frames::FlxFrame tmp = Frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	this->setTileFrame(tmp);
	HX_STACK_LINE(114)
	::flixel::graphics::frames::FlxFrame tmp1 = this->_tileFrame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	Float tmp2 = tmp1->sourceSize->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	int tmp3 = this->_spaceX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	int w = tmp5;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(115)
	::flixel::graphics::frames::FlxFrame tmp6 = this->_tileFrame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	Float tmp7 = tmp6->sourceSize->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	int tmp8 = this->_spaceY;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(115)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(115)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(115)
	int h = tmp10;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(117)
	this->_scrollW = w;
	HX_STACK_LINE(118)
	this->_scrollH = h;
	HX_STACK_LINE(120)
	this->regenGraphic();
	HX_STACK_LINE(122)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,loadFrame,return )

Void FlxBackdrop_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","draw",0x8035265f,"flixel.addons.display.FlxBackdrop.draw","flixel/addons/display/FlxBackdrop.hx",127,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		while((true)){
			HX_STACK_LINE(127)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(127)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			if ((tmp1)){
				HX_STACK_LINE(127)
				break;
			}
			HX_STACK_LINE(127)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(127)
			++(_g);
			HX_STACK_LINE(129)
			bool tmp3 = camera->visible;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(129)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(129)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(129)
			if ((tmp6)){
				HX_STACK_LINE(129)
				bool tmp8 = camera->exists;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(129)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(129)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(129)
				tmp7 = true;
			}
			HX_STACK_LINE(129)
			if ((tmp7)){
				HX_STACK_LINE(131)
				continue;
			}
			HX_STACK_LINE(134)
			int tmp8 = this->_scrollW;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			::flixel::math::FlxPoint tmp9 = this->scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			Float tmp12 = (tmp8 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			Float ssw = tmp12;		HX_STACK_VAR(ssw,"ssw");
			HX_STACK_LINE(135)
			int tmp13 = this->_scrollH;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(135)
			::flixel::math::FlxPoint tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(135)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(135)
			Float tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			Float ssh = tmp17;		HX_STACK_VAR(ssh,"ssh");
			HX_STACK_LINE(138)
			bool tmp18 = this->_repeatX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(138)
			if ((tmp18)){
				HX_STACK_LINE(140)
				Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(140)
				Float tmp20 = camera->scroll->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(140)
				::flixel::math::FlxPoint tmp21 = this->scrollFactor;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(140)
				Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(140)
				Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(140)
				Float tmp24 = (tmp19 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(140)
				Float tmp25 = ssw;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(140)
				Float tmp26 = hx::Mod(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(140)
				::openfl::_legacy::geom::Point tmp27 = this->_ppoint;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(140)
				tmp27->x = tmp26;
				HX_STACK_LINE(141)
				::openfl::_legacy::geom::Point tmp28 = this->_ppoint;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(141)
				Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(141)
				bool tmp30 = (tmp29 > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(141)
				if ((tmp30)){
					HX_STACK_LINE(142)
					::openfl::_legacy::geom::Point tmp31 = this->_ppoint;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(142)
					hx::SubEq(tmp31->x,ssw);
				}
			}
			else{
				HX_STACK_LINE(146)
				Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(146)
				Float tmp20 = camera->scroll->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(146)
				::flixel::math::FlxPoint tmp21 = this->scrollFactor;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(146)
				Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(146)
				Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(146)
				Float tmp24 = (tmp19 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(146)
				::openfl::_legacy::geom::Point tmp25 = this->_ppoint;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(146)
				tmp25->x = tmp24;
			}
			HX_STACK_LINE(150)
			bool tmp19 = this->_repeatY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(150)
			if ((tmp19)){
				HX_STACK_LINE(152)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(152)
				Float tmp21 = camera->scroll->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(152)
				::flixel::math::FlxPoint tmp22 = this->scrollFactor;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(152)
				Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(152)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(152)
				Float tmp25 = (tmp20 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(152)
				Float tmp26 = ssh;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(152)
				Float tmp27 = hx::Mod(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(152)
				::openfl::_legacy::geom::Point tmp28 = this->_ppoint;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(152)
				tmp28->y = tmp27;
				HX_STACK_LINE(153)
				::openfl::_legacy::geom::Point tmp29 = this->_ppoint;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(153)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(153)
				bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(153)
				if ((tmp31)){
					HX_STACK_LINE(154)
					::openfl::_legacy::geom::Point tmp32 = this->_ppoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(154)
					hx::SubEq(tmp32->y,ssh);
				}
			}
			else{
				HX_STACK_LINE(158)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(158)
				Float tmp21 = camera->scroll->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(158)
				::flixel::math::FlxPoint tmp22 = this->scrollFactor;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(158)
				Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(158)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(158)
				Float tmp25 = (tmp20 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(158)
				::openfl::_legacy::geom::Point tmp26 = this->_ppoint;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(158)
				tmp26->y = tmp25;
			}
			HX_STACK_LINE(162)
			bool tmp20 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(162)
			if ((tmp20)){
				HX_STACK_LINE(164)
				::flixel::graphics::FlxGraphic tmp21 = this->graphic;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(164)
				bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(164)
				if ((tmp22)){
					HX_STACK_LINE(165)
					return null();
				}
				HX_STACK_LINE(167)
				::openfl::_legacy::geom::Rectangle tmp23 = this->_flashRect2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(167)
				::flixel::graphics::FlxGraphic tmp24 = this->graphic;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(167)
				int tmp25 = tmp24->width;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(167)
				::flixel::graphics::FlxGraphic tmp26 = this->graphic;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(167)
				int tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(167)
				tmp23->setTo((int)0,(int)0,tmp25,tmp27);
				HX_STACK_LINE(168)
				::flixel::graphics::frames::FlxFrame tmp28 = this->frame;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(168)
				::openfl::_legacy::display::BitmapData tmp29 = this->framePixels;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(168)
				::openfl::_legacy::geom::Rectangle tmp30 = this->_flashRect2;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(168)
				::openfl::_legacy::geom::Point tmp31 = this->_ppoint;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(168)
				camera->copyPixels(tmp28,tmp29,tmp30,tmp31,null(),null(),null());
			}
			else{
				HX_STACK_LINE(172)
				::flixel::graphics::frames::FlxFrame tmp21 = this->_tileFrame;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(172)
				bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(172)
				if ((tmp22)){
					HX_STACK_LINE(173)
					return null();
				}
				HX_STACK_LINE(175)
				::flixel::graphics::frames::FlxFrame tmp23 = this->_tileFrame;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(175)
				::flixel::graphics::FlxGraphic tmp24 = tmp23->parent;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(175)
				::flixel::graphics::tile::FlxDrawTilesItem tmp25 = camera->startQuadBatch(tmp24,false,null(),null(),null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(175)
				::flixel::graphics::tile::FlxDrawTilesItem drawItem = tmp25;		HX_STACK_VAR(drawItem,"drawItem");
				HX_STACK_LINE(177)
				::flixel::graphics::frames::FlxFrame tmp26 = this->_tileFrame;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(177)
				::flixel::math::FlxMatrix tmp27 = this->_matrix;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(177)
				tmp26->prepareMatrix(tmp27,null(),null(),null());
				HX_STACK_LINE(179)
				::flixel::math::FlxPoint tmp28 = this->scale;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(179)
				Float scaleX = tmp28->x;		HX_STACK_VAR(scaleX,"scaleX");
				HX_STACK_LINE(180)
				::flixel::math::FlxPoint tmp29 = this->scale;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(180)
				Float scaleY = tmp29->y;		HX_STACK_VAR(scaleY,"scaleY");
				HX_STACK_LINE(182)
				bool tmp30 = this->useScaleHack;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(182)
				if ((tmp30)){
					HX_STACK_LINE(184)
					::flixel::graphics::frames::FlxFrame tmp31 = this->_tileFrame;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(184)
					Float tmp32 = tmp31->sourceSize->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(184)
					Float tmp33 = camera->totalScaleX;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(184)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(184)
					Float tmp35 = (Float((int)1) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(184)
					hx::AddEq(scaleX,tmp35);
					HX_STACK_LINE(185)
					::flixel::graphics::frames::FlxFrame tmp36 = this->_tileFrame;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(185)
					Float tmp37 = tmp36->sourceSize->y;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(185)
					Float tmp38 = camera->totalScaleY;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(185)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(185)
					Float tmp40 = (Float((int)1) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(185)
					hx::AddEq(scaleY,tmp40);
				}
				HX_STACK_LINE(188)
				::flixel::math::FlxMatrix tmp31 = this->_matrix;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(188)
				Float tmp32 = scaleX;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(188)
				Float tmp33 = scaleY;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(188)
				tmp31->scale(tmp32,tmp33);
				HX_STACK_LINE(190)
				::flixel::math::FlxMatrix tmp34 = this->_matrix;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(190)
				Float tx = tmp34->tx;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(191)
				::flixel::math::FlxMatrix tmp35 = this->_matrix;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(191)
				Float ty = tmp35->ty;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(193)
				{
					HX_STACK_LINE(193)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(193)
					int tmp36 = this->_numTiles;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(193)
					int _g2 = tmp36;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(193)
					while((true)){
						HX_STACK_LINE(193)
						bool tmp37 = (_g3 < _g2);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(193)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(193)
						if ((tmp38)){
							HX_STACK_LINE(193)
							break;
						}
						HX_STACK_LINE(193)
						int tmp39 = (_g3)++;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(193)
						int j = tmp39;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(195)
						int tmp40 = (j * (int)2);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(195)
						Float tmp41 = this->_tileInfo->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(195)
						Float currTileX = tmp41;		HX_STACK_VAR(currTileX,"currTileX");
						HX_STACK_LINE(196)
						int tmp42 = (j * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(196)
						int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(196)
						Float tmp44 = this->_tileInfo->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(196)
						Float currTileY = tmp44;		HX_STACK_VAR(currTileY,"currTileY");
						HX_STACK_LINE(198)
						Float tmp45 = tx;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(198)
						::openfl::_legacy::geom::Point tmp46 = this->_ppoint;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(198)
						Float tmp47 = tmp46->x;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(198)
						Float tmp48 = currTileX;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(198)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(198)
						Float tmp50 = (tmp45 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(198)
						::flixel::math::FlxMatrix tmp51 = this->_matrix;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(198)
						tmp51->tx = tmp50;
						HX_STACK_LINE(199)
						Float tmp52 = ty;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(199)
						::openfl::_legacy::geom::Point tmp53 = this->_ppoint;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(199)
						Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(199)
						Float tmp55 = currTileY;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(199)
						Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(199)
						Float tmp57 = (tmp52 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(199)
						::flixel::math::FlxMatrix tmp58 = this->_matrix;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(199)
						tmp58->ty = tmp57;
						HX_STACK_LINE(201)
						::flixel::graphics::frames::FlxFrame tmp59 = this->_tileFrame;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(201)
						::flixel::math::FlxMatrix tmp60 = this->_matrix;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(201)
						drawItem->addQuad(tmp59,tmp60,null());
					}
				}
			}
		}
	}
return null();
}


Void FlxBackdrop_obj::regenGraphic( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","regenGraphic",0xe958a2c6,"flixel.addons.display.FlxBackdrop.regenGraphic","flixel/addons/display/FlxBackdrop.hx",208,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		::flixel::math::FlxPoint tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		Float sx = tmp2;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(210)
		::flixel::math::FlxPoint tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		Float sy = tmp5;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(212)
		int tmp6 = this->_scrollW;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		Float tmp7 = sx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(212)
		int ssw = tmp9;		HX_STACK_VAR(ssw,"ssw");
		HX_STACK_LINE(213)
		int tmp10 = this->_scrollH;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(213)
		Float tmp11 = sy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(213)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(213)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(213)
		int ssh = tmp13;		HX_STACK_VAR(ssh,"ssh");
		HX_STACK_LINE(215)
		int w = ssw;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(216)
		int h = ssh;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(218)
		::openfl::_legacy::display::BitmapData frameBitmap = null();		HX_STACK_VAR(frameBitmap,"frameBitmap");
		HX_STACK_LINE(220)
		bool tmp14 = this->_repeatX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(220)
		if ((tmp14)){
			HX_STACK_LINE(222)
			int tmp15 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(222)
			hx::AddEq(w,tmp15);
		}
		HX_STACK_LINE(224)
		bool tmp15 = this->_repeatY;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(224)
		if ((tmp15)){
			HX_STACK_LINE(226)
			int tmp16 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(226)
			hx::AddEq(h,tmp16);
		}
		HX_STACK_LINE(229)
		bool tmp16 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(229)
		if ((tmp16)){
			HX_STACK_LINE(231)
			::flixel::graphics::FlxGraphic tmp17 = this->graphic;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(231)
			bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(231)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(231)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(231)
			if ((tmp19)){
				HX_STACK_LINE(231)
				::flixel::graphics::FlxGraphic tmp21 = this->graphic;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(231)
				::flixel::graphics::FlxGraphic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(231)
				int tmp23 = tmp22->width;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(231)
				int tmp24 = w;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(231)
				bool tmp25 = (tmp23 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(231)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(231)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(231)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(231)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(231)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(231)
				if ((tmp30)){
					HX_STACK_LINE(231)
					::flixel::graphics::FlxGraphic tmp31 = this->graphic;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(231)
					::flixel::graphics::FlxGraphic tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(231)
					::flixel::graphics::FlxGraphic tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(231)
					int tmp34 = tmp33->height;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(231)
					int tmp35 = h;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(231)
					tmp20 = (tmp34 != tmp35);
				}
				else{
					HX_STACK_LINE(231)
					tmp20 = true;
				}
			}
			else{
				HX_STACK_LINE(231)
				tmp20 = true;
			}
			HX_STACK_LINE(231)
			if ((tmp20)){
				HX_STACK_LINE(233)
				int tmp21 = w;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(233)
				int tmp22 = h;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(233)
				this->makeGraphic(tmp21,tmp22,(int)0,true,null());
			}
		}
		else{
			HX_STACK_LINE(238)
			this->_tileInfo = Array_obj< Float >::__new();
			HX_STACK_LINE(239)
			this->_numTiles = (int)0;
			HX_STACK_LINE(241)
			int tmp17 = this->frameWidth = w;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(241)
			this->set_width(tmp17);
			HX_STACK_LINE(242)
			int tmp18 = this->frameHeight = h;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(242)
			this->set_height(tmp18);
		}
		HX_STACK_LINE(245)
		::openfl::_legacy::geom::Point tmp17 = this->_ppoint;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(245)
		Float tmp18 = tmp17->y = (int)0;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(245)
		::openfl::_legacy::geom::Point tmp19 = this->_ppoint;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(245)
		tmp19->x = tmp18;
		HX_STACK_LINE(247)
		bool tmp20 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(247)
		if ((tmp20)){
			HX_STACK_LINE(249)
			::openfl::_legacy::display::BitmapData tmp21 = this->get_pixels();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(249)
			tmp21->lock();
			HX_STACK_LINE(250)
			::openfl::_legacy::geom::Rectangle tmp22 = this->_flashRect2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(250)
			::flixel::graphics::FlxGraphic tmp23 = this->graphic;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(250)
			int tmp24 = tmp23->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(250)
			::flixel::graphics::FlxGraphic tmp25 = this->graphic;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(250)
			int tmp26 = tmp25->height;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(250)
			tmp22->setTo((int)0,(int)0,tmp24,tmp26);
			HX_STACK_LINE(251)
			::openfl::_legacy::display::BitmapData tmp27 = this->get_pixels();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(251)
			::openfl::_legacy::geom::Rectangle tmp28 = this->_flashRect2;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(251)
			tmp27->fillRect(tmp28,(int)0);
			HX_STACK_LINE(252)
			::flixel::math::FlxMatrix tmp29 = this->_matrix;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(252)
			tmp29->identity();
			HX_STACK_LINE(253)
			::flixel::math::FlxMatrix tmp30 = this->_matrix;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(253)
			Float tmp31 = sx;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(253)
			Float tmp32 = sy;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(253)
			tmp30->scale(tmp31,tmp32);
			HX_STACK_LINE(254)
			::flixel::graphics::frames::FlxFrame tmp33 = this->_tileFrame;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(254)
			::openfl::_legacy::display::BitmapData tmp34 = tmp33->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(254)
			frameBitmap = tmp34;
		}
		HX_STACK_LINE(257)
		while((true)){
			HX_STACK_LINE(257)
			::openfl::_legacy::geom::Point tmp21 = this->_ppoint;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(257)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(257)
			int tmp23 = h;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(257)
			bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(257)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(257)
			if ((tmp25)){
				HX_STACK_LINE(257)
				break;
			}
			HX_STACK_LINE(259)
			while((true)){
				HX_STACK_LINE(259)
				::openfl::_legacy::geom::Point tmp26 = this->_ppoint;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(259)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(259)
				int tmp28 = w;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(259)
				bool tmp29 = (tmp27 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(259)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(259)
				if ((tmp30)){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(261)
				bool tmp31 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(261)
				if ((tmp31)){
					HX_STACK_LINE(263)
					::openfl::_legacy::display::BitmapData tmp32 = this->get_pixels();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(263)
					::openfl::_legacy::display::BitmapData tmp33 = frameBitmap;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(263)
					::flixel::math::FlxMatrix tmp34 = this->_matrix;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(263)
					tmp32->draw(tmp33,tmp34,null(),null(),null(),null());
					HX_STACK_LINE(264)
					::flixel::math::FlxMatrix tmp35 = this->_matrix;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(264)
					hx::AddEq(tmp35->tx,ssw);
				}
				else{
					HX_STACK_LINE(268)
					::openfl::_legacy::geom::Point tmp32 = this->_ppoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(268)
					Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(268)
					this->_tileInfo->push(tmp33);
					HX_STACK_LINE(269)
					::openfl::_legacy::geom::Point tmp34 = this->_ppoint;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(269)
					Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(269)
					this->_tileInfo->push(tmp35);
					HX_STACK_LINE(270)
					(this->_numTiles)++;
				}
				HX_STACK_LINE(272)
				::openfl::_legacy::geom::Point tmp32 = this->_ppoint;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(272)
				hx::AddEq(tmp32->x,ssw);
			}
			HX_STACK_LINE(274)
			bool tmp26 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(274)
			if ((tmp26)){
				HX_STACK_LINE(276)
				::flixel::math::FlxMatrix tmp27 = this->_matrix;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(276)
				tmp27->tx = (int)0;
				HX_STACK_LINE(277)
				::flixel::math::FlxMatrix tmp28 = this->_matrix;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(277)
				hx::AddEq(tmp28->ty,ssh);
			}
			HX_STACK_LINE(279)
			::openfl::_legacy::geom::Point tmp27 = this->_ppoint;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(279)
			tmp27->x = (int)0;
			HX_STACK_LINE(280)
			::openfl::_legacy::geom::Point tmp28 = this->_ppoint;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(280)
			hx::AddEq(tmp28->y,ssh);
		}
		HX_STACK_LINE(283)
		bool tmp21 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(283)
		if ((tmp21)){
			HX_STACK_LINE(285)
			frameBitmap->dispose();
			HX_STACK_LINE(286)
			::openfl::_legacy::display::BitmapData tmp22 = this->get_pixels();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(286)
			tmp22->unlock(null());
			HX_STACK_LINE(287)
			this->dirty = true;
			HX_STACK_LINE(288)
			this->calcFrame(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBackdrop_obj,regenGraphic,(void))

Void FlxBackdrop_obj::onGameResize( int _,int _1){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","onGameResize",0x815432e0,"flixel.addons.display.FlxBackdrop.onGameResize","flixel/addons/display/FlxBackdrop.hx",293,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(294)
		::flixel::graphics::frames::FlxFrame tmp = this->_tileFrame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		if ((tmp1)){
			HX_STACK_LINE(295)
			this->regenGraphic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBackdrop_obj,onGameResize,(void))

Void FlxBackdrop_obj::scaleCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","scaleCallback",0x456c20b4,"flixel.addons.display.FlxBackdrop.scaleCallback","flixel/addons/display/FlxBackdrop.hx",299,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(300)
		::flixel::graphics::frames::FlxFrame tmp = this->_tileFrame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp1)){
			HX_STACK_LINE(301)
			this->regenGraphic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,scaleCallback,(void))

::flixel::graphics::frames::FlxFrame FlxBackdrop_obj::setTileFrame( ::flixel::graphics::frames::FlxFrame Frame){
	HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","setTileFrame",0x144de378,"flixel.addons.display.FlxBackdrop.setTileFrame","flixel/addons/display/FlxBackdrop.hx",305,0x7f3b228c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(306)
	::flixel::graphics::frames::FlxFrame tmp = Frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::flixel::graphics::frames::FlxFrame tmp1 = this->_tileFrame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	if ((tmp2)){
		HX_STACK_LINE(308)
		::flixel::graphics::frames::FlxFrame tmp3 = this->_tileFrame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		if ((tmp4)){
			HX_STACK_LINE(310)
			::flixel::graphics::frames::FlxFrame tmp5 = this->_tileFrame;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(310)
			::flixel::graphics::FlxGraphic _g = tmp5->parent;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(310)
			int tmp6 = _g->get_useCount();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(310)
			int _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(310)
			int tmp7 = (_g1 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(310)
			_g->set_useCount(tmp7);
			HX_STACK_LINE(310)
			_g1;
		}
		HX_STACK_LINE(313)
		bool tmp5 = (Frame != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		if ((tmp5)){
			HX_STACK_LINE(315)
			::flixel::graphics::FlxGraphic _g = Frame->parent;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(315)
			int tmp6 = _g->get_useCount();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(315)
			int _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(315)
			int tmp7 = (_g1 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(315)
			_g->set_useCount(tmp7);
			HX_STACK_LINE(315)
			_g1;
		}
	}
	HX_STACK_LINE(319)
	::flixel::graphics::frames::FlxFrame tmp3 = this->_tileFrame = Frame;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(319)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,setTileFrame,return )


FlxBackdrop_obj::FlxBackdrop_obj()
{
}

void FlxBackdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBackdrop);
	HX_MARK_MEMBER_NAME(_ppoint,"_ppoint");
	HX_MARK_MEMBER_NAME(_scrollW,"_scrollW");
	HX_MARK_MEMBER_NAME(_scrollH,"_scrollH");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_spaceX,"_spaceX");
	HX_MARK_MEMBER_NAME(_spaceY,"_spaceY");
	HX_MARK_MEMBER_NAME(_tileFrame,"_tileFrame");
	HX_MARK_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_MARK_MEMBER_NAME(_numTiles,"_numTiles");
	HX_MARK_MEMBER_NAME(useScaleHack,"useScaleHack");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBackdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ppoint,"_ppoint");
	HX_VISIT_MEMBER_NAME(_scrollW,"_scrollW");
	HX_VISIT_MEMBER_NAME(_scrollH,"_scrollH");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_spaceX,"_spaceX");
	HX_VISIT_MEMBER_NAME(_spaceY,"_spaceY");
	HX_VISIT_MEMBER_NAME(_tileFrame,"_tileFrame");
	HX_VISIT_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_VISIT_MEMBER_NAME(_numTiles,"_numTiles");
	HX_VISIT_MEMBER_NAME(useScaleHack,"useScaleHack");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBackdrop_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { return _ppoint; }
		if (HX_FIELD_EQ(inName,"_spaceX") ) { return _spaceX; }
		if (HX_FIELD_EQ(inName,"_spaceY") ) { return _spaceY; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { return _scrollW; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { return _scrollH; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return _repeatX; }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return _repeatY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { return _tileInfo; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { return _numTiles; }
		if (HX_FIELD_EQ(inName,"loadFrame") ) { return loadFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileFrame") ) { return _tileFrame; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { return useScaleHack; }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return regenGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return onGameResize_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileFrame") ) { return setTileFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scaleCallback") ) { return scaleCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBackdrop_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { _ppoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spaceX") ) { _spaceX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spaceY") ) { _spaceY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { _scrollW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { _scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { _tileInfo=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { _numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileFrame") ) { _tileFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { useScaleHack=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_ppoint","\x7f","\x2f","\xff","\xfc"));
	outFields->push(HX_HCSTRING("_scrollW","\x2b","\x8d","\x90","\x6a"));
	outFields->push(HX_HCSTRING("_scrollH","\x1c","\x8d","\x90","\x6a"));
	outFields->push(HX_HCSTRING("_repeatX","\x1e","\x32","\x40","\xe0"));
	outFields->push(HX_HCSTRING("_repeatY","\x1f","\x32","\x40","\xe0"));
	outFields->push(HX_HCSTRING("_spaceX","\x71","\xb2","\xcb","\x26"));
	outFields->push(HX_HCSTRING("_spaceY","\x72","\xb2","\xcb","\x26"));
	outFields->push(HX_HCSTRING("_tileFrame","\xe0","\x51","\x81","\xed"));
	outFields->push(HX_HCSTRING("_tileInfo","\x1b","\x56","\x57","\xc7"));
	outFields->push(HX_HCSTRING("_numTiles","\xbe","\x08","\xdb","\x14"));
	outFields->push(HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBackdrop_obj,_ppoint),HX_HCSTRING("_ppoint","\x7f","\x2f","\xff","\xfc")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollW),HX_HCSTRING("_scrollW","\x2b","\x8d","\x90","\x6a")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollH),HX_HCSTRING("_scrollH","\x1c","\x8d","\x90","\x6a")},
	{hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatX),HX_HCSTRING("_repeatX","\x1e","\x32","\x40","\xe0")},
	{hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatY),HX_HCSTRING("_repeatY","\x1f","\x32","\x40","\xe0")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_spaceX),HX_HCSTRING("_spaceX","\x71","\xb2","\xcb","\x26")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_spaceY),HX_HCSTRING("_spaceY","\x72","\xb2","\xcb","\x26")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxBackdrop_obj,_tileFrame),HX_HCSTRING("_tileFrame","\xe0","\x51","\x81","\xed")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBackdrop_obj,_tileInfo),HX_HCSTRING("_tileInfo","\x1b","\x56","\x57","\xc7")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_numTiles),HX_HCSTRING("_numTiles","\xbe","\x08","\xdb","\x14")},
	{hx::fsBool,(int)offsetof(FlxBackdrop_obj,useScaleHack),HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_ppoint","\x7f","\x2f","\xff","\xfc"),
	HX_HCSTRING("_scrollW","\x2b","\x8d","\x90","\x6a"),
	HX_HCSTRING("_scrollH","\x1c","\x8d","\x90","\x6a"),
	HX_HCSTRING("_repeatX","\x1e","\x32","\x40","\xe0"),
	HX_HCSTRING("_repeatY","\x1f","\x32","\x40","\xe0"),
	HX_HCSTRING("_spaceX","\x71","\xb2","\xcb","\x26"),
	HX_HCSTRING("_spaceY","\x72","\xb2","\xcb","\x26"),
	HX_HCSTRING("_tileFrame","\xe0","\x51","\x81","\xed"),
	HX_HCSTRING("_tileInfo","\x1b","\x56","\x57","\xc7"),
	HX_HCSTRING("_numTiles","\xbe","\x08","\xdb","\x14"),
	HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"),
	HX_HCSTRING("loadFrame","\x27","\xc4","\xba","\x21"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("regenGraphic","\x6b","\x55","\x39","\x8b"),
	HX_HCSTRING("onGameResize","\x85","\xe5","\x34","\x23"),
	HX_HCSTRING("scaleCallback","\x6f","\xbe","\x27","\x48"),
	HX_HCSTRING("setTileFrame","\x1d","\x96","\x2e","\xb6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBackdrop_obj::__mClass;

void FlxBackdrop_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.display.FlxBackdrop","\xf3","\x83","\x47","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBackdrop_obj >;
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
} // end namespace addons
} // end namespace display
