#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRecordOff
#include <flixel/system/debug/_VCR/GraphicRecordOff.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eaedc260a7efbeef_47_new,"flixel.system.debug._VCR.GraphicRecordOff","new",0xb4303408,"flixel.system.debug._VCR.GraphicRecordOff.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_93b8e2037df56584_20_boot,"flixel.system.debug._VCR.GraphicRecordOff","boot",0xee16538a,"flixel.system.debug._VCR.GraphicRecordOff.boot","flixel/system/debug/VCR.hx",20,0x4ecb3ec2)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _VCR{

void GraphicRecordOff_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_eaedc260a7efbeef_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::_VCR::GraphicRecordOff_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicRecordOff_obj::__CreateEmpty() { return new GraphicRecordOff_obj; }

void *GraphicRecordOff_obj::_hx_vtable = 0;

Dynamic GraphicRecordOff_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicRecordOff_obj > _hx_result = new GraphicRecordOff_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicRecordOff_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x12fe2664;
	}
}

::String GraphicRecordOff_obj::resourceName;


::hx::ObjectPtr< GraphicRecordOff_obj > GraphicRecordOff_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicRecordOff_obj > __this = new GraphicRecordOff_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicRecordOff_obj > GraphicRecordOff_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicRecordOff_obj *__this = (GraphicRecordOff_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicRecordOff_obj), true, "flixel.system.debug._VCR.GraphicRecordOff"));
	*(void **)__this = GraphicRecordOff_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicRecordOff_obj::GraphicRecordOff_obj()
{
}

bool GraphicRecordOff_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicRecordOff_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicRecordOff_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicRecordOff_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicRecordOff_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicRecordOff_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicRecordOff_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicRecordOff_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicRecordOff_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicRecordOff_obj::__mClass;

static ::String GraphicRecordOff_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicRecordOff_obj::__register()
{
	GraphicRecordOff_obj _hx_dummy;
	GraphicRecordOff_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._VCR.GraphicRecordOff",16,d0,7b,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicRecordOff_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicRecordOff_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicRecordOff_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicRecordOff_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicRecordOff_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicRecordOff_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicRecordOff_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicRecordOff_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicRecordOff_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_93b8e2037df56584_20_boot)
HXDLIN(  20)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug__VCR_GraphicRecordOff",30,1f,ba,3c);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _VCR
