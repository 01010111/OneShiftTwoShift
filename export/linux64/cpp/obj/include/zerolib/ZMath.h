#ifndef INCLUDED_zerolib_ZMath
#define INCLUDED_zerolib_ZMath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(zerolib,ZMath)
namespace zerolib{


class HXCPP_CLASS_ATTRIBUTES  ZMath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZMath_obj OBJ_;
		ZMath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="zerolib.ZMath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZMath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZMath_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZMath","\x42","\xa3","\x3f","\x05"); }

		static Float radToDeg( Float radian);
		static Dynamic radToDeg_dyn();

		static Float degToRad( Float degree);
		static Dynamic degToRad_dyn();

		static Float toRelativeAngle( Float angle);
		static Dynamic toRelativeAngle_dyn();

		static Float vectorVelocity( Float VX,Float VY);
		static Dynamic vectorVelocity_dyn();

		static Float distance( ::flixel::math::FlxPoint p1,::flixel::math::FlxPoint p2);
		static Dynamic distance_dyn();

		static Float angleFromVelocity( Float vX,Float vY);
		static Dynamic angleFromVelocity_dyn();

		static Float angleBetween( ::flixel::math::FlxPoint p1,::flixel::math::FlxPoint p2);
		static Dynamic angleBetween_dyn();

		static ::flixel::math::FlxPoint velocityFromAngle( Float angle,Float speed);
		static Dynamic velocityFromAngle_dyn();

		static Float randomRange( Dynamic MIN,Dynamic MAX);
		static Dynamic randomRange_dyn();

		static int randomRangeInt( Dynamic MIN,Dynamic MAX);
		static Dynamic randomRangeInt_dyn();

		static ::flixel::math::FlxPoint placeOnCircle( ::flixel::math::FlxPoint CENTER,Float ANGLE,Float RADIUS);
		static Dynamic placeOnCircle_dyn();

		static ::flixel::math::FlxPoint placeOnOval( ::flixel::math::FlxPoint CENTER,Float ANGLE,Float RADIUS,hx::Null< Float >  YSCALE);
		static Dynamic placeOnOval_dyn();

		static ::flixel::math::FlxPoint getMidPoint( ::flixel::math::FlxPoint p1,::flixel::math::FlxPoint p2,hx::Null< Float >  percent);
		static Dynamic getMidPoint_dyn();

		static Float roundToDec( Float n,int places);
		static Dynamic roundToDec_dyn();

		static Float norm( Float n,Float min,Float max);
		static Dynamic norm_dyn();

		static Float lerp( Float norm,Float min,Float max);
		static Dynamic lerp_dyn();

		static Float map( Float n,Float min1,Float max1,Float min2,Float max2);
		static Dynamic map_dyn();

		static ::flixel::math::FlxPoint mapPoint( Float x,Float y,Float min1,Float max1,Float min2,Float max2);
		static Dynamic mapPoint_dyn();

		static Float clamp( Float n,Float min,Float max);
		static Dynamic clamp_dyn();

		static int snapToGrid( Float n,int gridSize);
		static Dynamic snapToGrid_dyn();

		static bool chanceRoll( hx::Null< Float >  _percentage);
		static Dynamic chanceRoll_dyn();

};

} // end namespace zerolib

#endif /* INCLUDED_zerolib_ZMath */ 
