#include <hxcpp.h>

#ifndef INCLUDED_TrackInfo
#include <TrackInfo.h>
#endif

Void TrackInfo_obj::__construct()
{
	return null();
}

//TrackInfo_obj::~TrackInfo_obj() { }

Dynamic TrackInfo_obj::__CreateEmpty() { return  new TrackInfo_obj; }
hx::ObjectPtr< TrackInfo_obj > TrackInfo_obj::__new()
{  hx::ObjectPtr< TrackInfo_obj > _result_ = new TrackInfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic TrackInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TrackInfo_obj > _result_ = new TrackInfo_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase TrackInfo_obj::tracks;


TrackInfo_obj::TrackInfo_obj()
{
}

bool TrackInfo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tracks") ) { outValue = tracks; return true;  }
	}
	return false;
}

bool TrackInfo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tracks") ) { tracks=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &TrackInfo_obj::tracks,HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TrackInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TrackInfo_obj::tracks,"tracks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TrackInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TrackInfo_obj::tracks,"tracks");
};

#endif

hx::Class TrackInfo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tracks","\x88","\x2b","\x7d","\x45"),
	::String(null()) };

void TrackInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TrackInfo","\x79","\x74","\x18","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TrackInfo_obj::__GetStatic;
	__mClass->mSetStaticField = &TrackInfo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TrackInfo_obj >;
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

void TrackInfo_obj::__boot()
{
struct _Function_0_1{
	inline static cpp::ArrayBase Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",6,0x28c61fe5)
		{
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",7,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(7)
			Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
			struct _Function_1_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",11,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(11)
			Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
			struct _Function_1_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",15,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(15)
			Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
			struct _Function_1_4{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",19,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)257,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(19)
			Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
			struct _Function_1_5{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",23,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)257,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(23)
			Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_1_6{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",27,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)257,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)257,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(27)
			Dynamic tmp5 = _Function_1_6::Block();		HX_STACK_VAR(tmp5,"tmp5");
			struct _Function_1_7{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",31,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)256,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(31)
			Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
			struct _Function_1_8{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",35,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)1,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(35)
			Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
			struct _Function_1_9{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",39,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)256,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(39)
			Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
			struct _Function_1_10{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",43,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(43)
			Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_1_11{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",47,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)256,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(47)
			Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_1_12{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",51,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)1,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)256,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(51)
			Dynamic tmp11 = _Function_1_12::Block();		HX_STACK_VAR(tmp11,"tmp11");
			struct _Function_1_13{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",55,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(55)
			Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
			struct _Function_1_14{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",59,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(59)
			Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_1_15{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TrackInfo.hx",63,0x28c61fe5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("top","\x95","\x66","\x58","\x00") , (int)16,false);
						__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , (int)16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(63)
			Dynamic tmp14 = _Function_1_15::Block();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(6)
			return cpp::ArrayBase_obj::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14);
		}
		return null();
	}
};
	tracks= _Function_0_1::Block();
}

