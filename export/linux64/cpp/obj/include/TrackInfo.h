#ifndef INCLUDED_TrackInfo
#define INCLUDED_TrackInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TrackInfo)


class HXCPP_CLASS_ATTRIBUTES  TrackInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TrackInfo_obj OBJ_;
		TrackInfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="TrackInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TrackInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TrackInfo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TrackInfo","\x79","\x74","\x18","\xd3"); }

		static void __boot();
		static cpp::ArrayBase tracks;
};


#endif /* INCLUDED_TrackInfo */ 
