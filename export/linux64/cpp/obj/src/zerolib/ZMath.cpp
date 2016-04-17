#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_zerolib_ZMath
#include <zerolib/ZMath.h>
#endif
namespace zerolib{

Void ZMath_obj::__construct()
{
	return null();
}

//ZMath_obj::~ZMath_obj() { }

Dynamic ZMath_obj::__CreateEmpty() { return  new ZMath_obj; }
hx::ObjectPtr< ZMath_obj > ZMath_obj::__new()
{  hx::ObjectPtr< ZMath_obj > _result_ = new ZMath_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZMath_obj > _result_ = new ZMath_obj();
	_result_->__construct();
	return _result_;}

Float ZMath_obj::radToDeg( Float radian){
	HX_STACK_FRAME("zerolib.ZMath","radToDeg",0x0a0857d3,"zerolib.ZMath.radToDeg","zerolib/ZMath.hx",20,0x085b272e)
	HX_STACK_ARG(radian,"radian")
	HX_STACK_LINE(29)
	Float tmp = radian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Float tmp2 = (Float((int)180) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZMath_obj,radToDeg,return )

Float ZMath_obj::degToRad( Float degree){
	HX_STACK_FRAME("zerolib.ZMath","degToRad",0xc2b8a651,"zerolib.ZMath.degToRad","zerolib/ZMath.hx",38,0x085b272e)
	HX_STACK_ARG(degree,"degree")
	HX_STACK_LINE(43)
	Float tmp = degree;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZMath_obj,degToRad,return )

Float ZMath_obj::toRelativeAngle( Float angle){
	HX_STACK_FRAME("zerolib.ZMath","toRelativeAngle",0xad521baf,"zerolib.ZMath.toRelativeAngle","zerolib/ZMath.hx",53,0x085b272e)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(59)
	Float tmp = hx::Mod(angle,(int)360);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Float tmp1 = (tmp + (int)360);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	Float tmp2 = hx::Mod(tmp1,(int)360);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZMath_obj,toRelativeAngle,return )

Float ZMath_obj::vectorVelocity( Float VX,Float VY){
	HX_STACK_FRAME("zerolib.ZMath","vectorVelocity",0xe160849d,"zerolib.ZMath.vectorVelocity","zerolib/ZMath.hx",69,0x085b272e)
	HX_STACK_ARG(VX,"VX")
	HX_STACK_ARG(VY,"VY")
	HX_STACK_LINE(75)
	Float tmp = VX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	Float tmp1 = ::Math_obj::pow(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	Float tmp2 = VY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	Float tmp3 = ::Math_obj::pow(tmp2,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,vectorVelocity,return )

Float ZMath_obj::distance( ::flixel::math::FlxPoint p1,::flixel::math::FlxPoint p2){
	HX_STACK_FRAME("zerolib.ZMath","distance",0x98fdaa12,"zerolib.ZMath.distance","zerolib/ZMath.hx",87,0x085b272e)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(93)
	Float tmp = (p2->x - p1->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	Float tmp1 = ::Math_obj::pow(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	Float tmp2 = (p2->y - p1->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	Float tmp3 = ::Math_obj::pow(tmp2,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,distance,return )

Float ZMath_obj::angleFromVelocity( Float vX,Float vY){
	HX_STACK_FRAME("zerolib.ZMath","angleFromVelocity",0xcc9c039d,"zerolib.ZMath.angleFromVelocity","zerolib/ZMath.hx",103,0x085b272e)
	HX_STACK_ARG(vX,"vX")
	HX_STACK_ARG(vY,"vY")
	HX_STACK_LINE(109)
	Float tmp = vY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	Float tmp1 = vX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	Float tmp2 = ::Math_obj::atan2(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	Float tmp3 = ::zerolib::ZMath_obj::radToDeg(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	Float tmp4 = ::zerolib::ZMath_obj::toRelativeAngle(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,angleFromVelocity,return )

Float ZMath_obj::angleBetween( ::flixel::math::FlxPoint p1,::flixel::math::FlxPoint p2){
	HX_STACK_FRAME("zerolib.ZMath","angleBetween",0x792a2f92,"zerolib.ZMath.angleBetween","zerolib/ZMath.hx",121,0x085b272e)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_LINE(127)
	Float tmp = (p2->y - p1->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Float tmp1 = (p2->x - p1->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	Float tmp2 = ::Math_obj::atan2(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	Float tmp3 = ::zerolib::ZMath_obj::radToDeg(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,angleBetween,return )

::flixel::math::FlxPoint ZMath_obj::velocityFromAngle( Float angle,Float speed){
	HX_STACK_FRAME("zerolib.ZMath","velocityFromAngle",0x60f205af,"zerolib.ZMath.velocityFromAngle","zerolib/ZMath.hx",137,0x085b272e)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(speed,"speed")
	HX_STACK_LINE(138)
	Float tmp = angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	Float tmp1 = ::zerolib::ZMath_obj::degToRad(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	Float a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(139)
	::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		Float tmp5 = speed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		Float X = tmp6;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(139)
		Float tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(139)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(139)
		Float tmp9 = speed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(139)
		Float Y = tmp10;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(139)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(139)
		::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(139)
		Float tmp13 = X;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(139)
		Float tmp14 = Y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(139)
		::flixel::math::FlxPoint tmp15 = tmp12->set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(139)
		::flixel::math::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(139)
		point->_inPool = false;
		HX_STACK_LINE(139)
		tmp2 = point;
	}
	HX_STACK_LINE(139)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,velocityFromAngle,return )

Float ZMath_obj::randomRange( Dynamic __o_MIN,Dynamic __o_MAX){
Dynamic MIN = __o_MIN.Default(-1);
Dynamic MAX = __o_MAX.Default(1);
	HX_STACK_FRAME("zerolib.ZMath","randomRange",0x38f699fd,"zerolib.ZMath.randomRange","zerolib/ZMath.hx",149,0x085b272e)
	HX_STACK_ARG(MIN,"MIN")
	HX_STACK_ARG(MAX,"MAX")
{
		HX_STACK_LINE(150)
		Dynamic tmp = MIN;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		Float tmp2 = (MAX - MIN);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,randomRange,return )

int ZMath_obj::randomRangeInt( Dynamic __o_MIN,Dynamic __o_MAX){
Dynamic MIN = __o_MIN.Default(-1);
Dynamic MAX = __o_MAX.Default(1);
	HX_STACK_FRAME("zerolib.ZMath","randomRangeInt",0x0de1c6f2,"zerolib.ZMath.randomRangeInt","zerolib/ZMath.hx",160,0x085b272e)
	HX_STACK_ARG(MIN,"MIN")
	HX_STACK_ARG(MAX,"MAX")
{
		HX_STACK_LINE(161)
		Dynamic tmp = MIN;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		Float tmp2 = (MAX - MIN);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,randomRangeInt,return )

::flixel::math::FlxPoint ZMath_obj::placeOnCircle( ::flixel::math::FlxPoint CENTER,Float ANGLE,Float RADIUS){
	HX_STACK_FRAME("zerolib.ZMath","placeOnCircle",0x1601a079,"zerolib.ZMath.placeOnCircle","zerolib/ZMath.hx",173,0x085b272e)
	HX_STACK_ARG(CENTER,"CENTER")
	HX_STACK_ARG(ANGLE,"ANGLE")
	HX_STACK_ARG(RADIUS,"RADIUS")
	HX_STACK_LINE(174)
	Float tmp = ANGLE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	Float tmp1 = ::zerolib::ZMath_obj::degToRad(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	Float a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(175)
	::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		Float tmp3 = CENTER->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		Float tmp4 = RADIUS;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		Float X = tmp8;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(175)
		Float tmp9 = CENTER->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		Float tmp10 = RADIUS;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(175)
		Float tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(175)
		Float Y = tmp14;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(175)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp15 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(175)
		::flixel::math::FlxPoint tmp16 = tmp15->get();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(175)
		Float tmp17 = X;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(175)
		Float tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(175)
		::flixel::math::FlxPoint tmp19 = tmp16->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(175)
		::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(175)
		point->_inPool = false;
		HX_STACK_LINE(175)
		tmp2 = point;
	}
	HX_STACK_LINE(175)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZMath_obj,placeOnCircle,return )

::flixel::math::FlxPoint ZMath_obj::placeOnOval( ::flixel::math::FlxPoint CENTER,Float ANGLE,Float RADIUS,hx::Null< Float >  __o_YSCALE){
Float YSCALE = __o_YSCALE.Default(1);
	HX_STACK_FRAME("zerolib.ZMath","placeOnOval",0xffc51ffb,"zerolib.ZMath.placeOnOval","zerolib/ZMath.hx",187,0x085b272e)
	HX_STACK_ARG(CENTER,"CENTER")
	HX_STACK_ARG(ANGLE,"ANGLE")
	HX_STACK_ARG(RADIUS,"RADIUS")
	HX_STACK_ARG(YSCALE,"YSCALE")
{
		HX_STACK_LINE(188)
		Float tmp = ANGLE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		Float tmp1 = ::zerolib::ZMath_obj::degToRad(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(189)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			Float tmp3 = CENTER->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			Float tmp4 = RADIUS;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(189)
			Float X = tmp8;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(189)
			Float tmp9 = CENTER->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(189)
			Float tmp10 = RADIUS;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(189)
			Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(189)
			Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(189)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(189)
			Float tmp14 = YSCALE;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(189)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(189)
			Float tmp16 = (tmp9 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(189)
			Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(189)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp17 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(189)
			::flixel::math::FlxPoint tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(189)
			Float tmp19 = X;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(189)
			Float tmp20 = Y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(189)
			::flixel::math::FlxPoint tmp21 = tmp18->set(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(189)
			::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(189)
			point->_inPool = false;
			HX_STACK_LINE(189)
			tmp2 = point;
		}
		HX_STACK_LINE(189)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZMath_obj,placeOnOval,return )

::flixel::math::FlxPoint ZMath_obj::getMidPoint( ::flixel::math::FlxPoint p1,::flixel::math::FlxPoint p2,hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(50);
	HX_STACK_FRAME("zerolib.ZMath","getMidPoint",0xce6b19a1,"zerolib.ZMath.getMidPoint","zerolib/ZMath.hx",202,0x085b272e)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(percent,"percent")
{
		HX_STACK_LINE(203)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(203)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			Float tmp3 = p1->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			Float tmp4 = (p2->x - p1->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			Float tmp5 = (Float((int)100) / Float(percent));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			Float tmp8 = p1->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			Float tmp9 = (p2->y - p1->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			Float tmp10 = (Float((int)100) / Float(percent));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(203)
			Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(203)
			::flixel::math::FlxPoint tmp13 = tmp2->set(tmp7,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(203)
			::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(203)
			point->_inPool = false;
			HX_STACK_LINE(203)
			tmp = point;
		}
		HX_STACK_LINE(203)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZMath_obj,getMidPoint,return )

Float ZMath_obj::roundToDec( Float n,int places){
	HX_STACK_FRAME("zerolib.ZMath","roundToDec",0x4465cff6,"zerolib.ZMath.roundToDec","zerolib/ZMath.hx",213,0x085b272e)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(places,"places")
	HX_STACK_LINE(214)
	Float tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	int tmp1 = places;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	int tmp5 = places;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(214)
	Float tmp6 = ::Math_obj::pow((int)10,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(214)
	Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(214)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,roundToDec,return )

Float ZMath_obj::norm( Float n,Float min,Float max){
	HX_STACK_FRAME("zerolib.ZMath","norm",0xb5e83a99,"zerolib.ZMath.norm","zerolib/ZMath.hx",225,0x085b272e)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(226)
	Float tmp = (n - min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	Float tmp1 = (max - min);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZMath_obj,norm,return )

Float ZMath_obj::lerp( Float norm,Float min,Float max){
	HX_STACK_FRAME("zerolib.ZMath","lerp",0xb48e36d4,"zerolib.ZMath.lerp","zerolib/ZMath.hx",237,0x085b272e)
	HX_STACK_ARG(norm,"norm")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(238)
	Float tmp = (max - min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	Float tmp1 = norm;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	Float tmp3 = min;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(238)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZMath_obj,lerp,return )

Float ZMath_obj::map( Float n,Float min1,Float max1,Float min2,Float max2){
	HX_STACK_FRAME("zerolib.ZMath","map",0x872060df,"zerolib.ZMath.map","zerolib/ZMath.hx",251,0x085b272e)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(min1,"min1")
	HX_STACK_ARG(max1,"max1")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(252)
	Float tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	Float tmp1 = min1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	Float tmp2 = max1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(252)
	Float tmp3 = ::zerolib::ZMath_obj::norm(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	Float tmp4 = min2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(252)
	Float tmp5 = max2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(252)
	Float tmp6 = ::zerolib::ZMath_obj::lerp(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(252)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ZMath_obj,map,return )

::flixel::math::FlxPoint ZMath_obj::mapPoint( Float x,Float y,Float min1,Float max1,Float min2,Float max2){
	HX_STACK_FRAME("zerolib.ZMath","mapPoint",0x6ad63af1,"zerolib.ZMath.mapPoint","zerolib/ZMath.hx",266,0x085b272e)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(min1,"min1")
	HX_STACK_ARG(max1,"max1")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(267)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	{
		HX_STACK_LINE(267)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		Float tmp2 = min1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		Float tmp3 = max1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		Float tmp4 = ::zerolib::ZMath_obj::norm(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		Float tmp5 = min2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(267)
		Float tmp6 = max2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(267)
		Float tmp7 = ::zerolib::ZMath_obj::lerp(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(267)
		Float X = tmp7;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(267)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(267)
		Float tmp9 = min1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(267)
		Float tmp10 = max1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(267)
		Float tmp11 = ::zerolib::ZMath_obj::norm(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(267)
		Float tmp12 = min2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(267)
		Float tmp13 = max2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(267)
		Float tmp14 = ::zerolib::ZMath_obj::lerp(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(267)
		Float Y = tmp14;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(267)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp15 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(267)
		::flixel::math::FlxPoint tmp16 = tmp15->get();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(267)
		Float tmp17 = X;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(267)
		Float tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(267)
		::flixel::math::FlxPoint tmp19 = tmp16->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(267)
		::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(267)
		point->_inPool = false;
		HX_STACK_LINE(267)
		tmp = point;
	}
	HX_STACK_LINE(267)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZMath_obj,mapPoint,return )

Float ZMath_obj::clamp( Float n,Float min,Float max){
	HX_STACK_FRAME("zerolib.ZMath","clamp",0x1dda1ffe,"zerolib.ZMath.clamp","zerolib/ZMath.hx",278,0x085b272e)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(279)
	Float tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	Float tmp1 = min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	Float tmp3 = max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(279)
	Float tmp4 = ::Math_obj::min(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZMath_obj,clamp,return )

int ZMath_obj::snapToGrid( Float n,int gridSize){
	HX_STACK_FRAME("zerolib.ZMath","snapToGrid",0x18c727e8,"zerolib.ZMath.snapToGrid","zerolib/ZMath.hx",289,0x085b272e)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(gridSize,"gridSize")
	HX_STACK_LINE(290)
	Float tmp = (Float(n) / Float(gridSize));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	int tmp2 = gridSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(290)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(290)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZMath_obj,snapToGrid,return )

bool ZMath_obj::chanceRoll( hx::Null< Float >  __o__percentage){
Float _percentage = __o__percentage.Default(50);
	HX_STACK_FRAME("zerolib.ZMath","chanceRoll",0x13e7f7ae,"zerolib.ZMath.chanceRoll","zerolib/ZMath.hx",299,0x085b272e)
	HX_STACK_ARG(_percentage,"_percentage")
{
		HX_STACK_LINE(300)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		Float tmp1 = (Float(_percentage) / Float((int)100));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZMath_obj,chanceRoll,return )


ZMath_obj::ZMath_obj()
{
}

bool ZMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"norm") ) { outValue = norm_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"radToDeg") ) { outValue = radToDeg_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"degToRad") ) { outValue = degToRad_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mapPoint") ) { outValue = mapPoint_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"roundToDec") ) { outValue = roundToDec_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snapToGrid") ) { outValue = snapToGrid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"chanceRoll") ) { outValue = chanceRoll_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomRange") ) { outValue = randomRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"placeOnOval") ) { outValue = placeOnOval_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMidPoint") ) { outValue = getMidPoint_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"placeOnCircle") ) { outValue = placeOnCircle_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vectorVelocity") ) { outValue = vectorVelocity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"randomRangeInt") ) { outValue = randomRangeInt_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toRelativeAngle") ) { outValue = toRelativeAngle_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleFromVelocity") ) { outValue = angleFromVelocity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { outValue = velocityFromAngle_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZMath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZMath_obj::__mClass,"__mClass");
};

#endif

hx::Class ZMath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("radToDeg","\xf6","\x40","\x04","\xdd"),
	HX_HCSTRING("degToRad","\x74","\x8f","\xb4","\x95"),
	HX_HCSTRING("toRelativeAngle","\xec","\xec","\x7a","\xbb"),
	HX_HCSTRING("vectorVelocity","\x00","\x6a","\x20","\x5b"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("angleFromVelocity","\x1a","\x5e","\x89","\x53"),
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("velocityFromAngle","\x2c","\x60","\xdf","\xe7"),
	HX_HCSTRING("randomRange","\xba","\xc8","\xb4","\x4e"),
	HX_HCSTRING("randomRangeInt","\x55","\xac","\xa1","\x87"),
	HX_HCSTRING("placeOnCircle","\x76","\xb8","\xb6","\xba"),
	HX_HCSTRING("placeOnOval","\xb8","\x4e","\x83","\x15"),
	HX_HCSTRING("getMidPoint","\x5e","\x48","\x29","\xe4"),
	HX_HCSTRING("roundToDec","\xd9","\x87","\x08","\xbd"),
	HX_HCSTRING("norm","\x3c","\x16","\x0a","\x49"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("mapPoint","\x14","\x24","\xd2","\x3d"),
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	HX_HCSTRING("snapToGrid","\xcb","\xdf","\x69","\x91"),
	HX_HCSTRING("chanceRoll","\x91","\xaf","\x8a","\x8c"),
	::String(null()) };

void ZMath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zerolib.ZMath","\x31","\x99","\x02","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZMath_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZMath_obj >;
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
