#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_ExtraField
#include <haxe/zip/ExtraField.h>
#endif
namespace haxe{
namespace zip{

::haxe::zip::ExtraField ExtraField_obj::FInfoZipUnicodePath(::String name,int crc)
{
	return ::hx::CreateEnum< ExtraField_obj >(HX_("FInfoZipUnicodePath",f5,d6,45,19),1,2)->_hx_init(0,name)->_hx_init(1,crc);
}

::haxe::zip::ExtraField ExtraField_obj::FUnknown(int tag, ::haxe::io::Bytes bytes)
{
	return ::hx::CreateEnum< ExtraField_obj >(HX_("FUnknown",e4,7f,97,52),0,2)->_hx_init(0,tag)->_hx_init(1,bytes);
}

::haxe::zip::ExtraField ExtraField_obj::FUtf8;

bool ExtraField_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FInfoZipUnicodePath",f5,d6,45,19)) { outValue = ExtraField_obj::FInfoZipUnicodePath_dyn(); return true; }
	if (inName==HX_("FUnknown",e4,7f,97,52)) { outValue = ExtraField_obj::FUnknown_dyn(); return true; }
	if (inName==HX_("FUtf8",97,1c,94,86)) { outValue = ExtraField_obj::FUtf8; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ExtraField_obj)

int ExtraField_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FInfoZipUnicodePath",f5,d6,45,19)) return 1;
	if (inName==HX_("FUnknown",e4,7f,97,52)) return 0;
	if (inName==HX_("FUtf8",97,1c,94,86)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExtraField_obj,FInfoZipUnicodePath,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExtraField_obj,FUnknown,return)

int ExtraField_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FInfoZipUnicodePath",f5,d6,45,19)) return 2;
	if (inName==HX_("FUnknown",e4,7f,97,52)) return 2;
	if (inName==HX_("FUtf8",97,1c,94,86)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ExtraField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FInfoZipUnicodePath",f5,d6,45,19)) return FInfoZipUnicodePath_dyn();
	if (inName==HX_("FUnknown",e4,7f,97,52)) return FUnknown_dyn();
	if (inName==HX_("FUtf8",97,1c,94,86)) return FUtf8;
	return super::__Field(inName,inCallProp);
}

static ::String ExtraField_obj_sStaticFields[] = {
	HX_("FUnknown",e4,7f,97,52),
	HX_("FInfoZipUnicodePath",f5,d6,45,19),
	HX_("FUtf8",97,1c,94,86),
	::String(null())
};

::hx::Class ExtraField_obj::__mClass;

Dynamic __Create_ExtraField_obj() { return new ExtraField_obj; }

void ExtraField_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.zip.ExtraField",df,af,f8,91), ::hx::TCanCast< ExtraField_obj >,ExtraField_obj_sStaticFields,0,
	&__Create_ExtraField_obj, &__Create,
	&super::__SGetClass(), &CreateExtraField_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ExtraField_obj::__GetStatic;
}

void ExtraField_obj::__boot()
{
FUtf8 = ::hx::CreateConstEnum< ExtraField_obj >(HX_("FUtf8",97,1c,94,86),2);
}


} // end namespace haxe
} // end namespace zip
