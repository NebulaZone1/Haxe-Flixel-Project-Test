#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRecordOn
#include <flixel/system/debug/_VCR/GraphicRecordOn.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4b4deae5f77ec34b_47_new,"flixel.system.debug._VCR.GraphicRecordOn","new",0x07d5634a,"flixel.system.debug._VCR.GraphicRecordOn.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_bdbfb1a080e1d734_23_boot,"flixel.system.debug._VCR.GraphicRecordOn","boot",0xcafa7e08,"flixel.system.debug._VCR.GraphicRecordOn.boot","flixel/system/debug/VCR.hx",23,0x4ecb3ec2)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _VCR{

void GraphicRecordOn_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_4b4deae5f77ec34b_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::_VCR::GraphicRecordOn_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicRecordOn_obj::__CreateEmpty() { return new GraphicRecordOn_obj; }

void *GraphicRecordOn_obj::_hx_vtable = 0;

Dynamic GraphicRecordOn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicRecordOn_obj > _hx_result = new GraphicRecordOn_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicRecordOn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x2e0123ca;
	}
}

::String GraphicRecordOn_obj::resourceName;


::hx::ObjectPtr< GraphicRecordOn_obj > GraphicRecordOn_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicRecordOn_obj > __this = new GraphicRecordOn_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicRecordOn_obj > GraphicRecordOn_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicRecordOn_obj *__this = (GraphicRecordOn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicRecordOn_obj), true, "flixel.system.debug._VCR.GraphicRecordOn"));
	*(void **)__this = GraphicRecordOn_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicRecordOn_obj::GraphicRecordOn_obj()
{
}

bool GraphicRecordOn_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicRecordOn_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicRecordOn_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicRecordOn_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicRecordOn_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicRecordOn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicRecordOn_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicRecordOn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicRecordOn_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicRecordOn_obj::__mClass;

static ::String GraphicRecordOn_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicRecordOn_obj::__register()
{
	GraphicRecordOn_obj _hx_dummy;
	GraphicRecordOn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug._VCR.GraphicRecordOn",58,b6,c3,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicRecordOn_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicRecordOn_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicRecordOn_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicRecordOn_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicRecordOn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicRecordOn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicRecordOn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicRecordOn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicRecordOn_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bdbfb1a080e1d734_23_boot)
HXDLIN(  23)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug__VCR_GraphicRecordOn",7e,48,e5,2b);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _VCR
