#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f614a07866ea6e55_55_new,"openfl.events.UncaughtErrorEvents","new",0xf17d0a07,"openfl.events.UncaughtErrorEvents.new","openfl/events/UncaughtErrorEvents.hx",55,0x17415d69)
HX_LOCAL_STACK_FRAME(_hx_pos_f614a07866ea6e55_61_addEventListener,"openfl.events.UncaughtErrorEvents","addEventListener",0x513c95c6,"openfl.events.UncaughtErrorEvents.addEventListener","openfl/events/UncaughtErrorEvents.hx",61,0x17415d69)
HX_LOCAL_STACK_FRAME(_hx_pos_f614a07866ea6e55_72_removeEventListener,"openfl.events.UncaughtErrorEvents","removeEventListener",0x9f6ebf71,"openfl.events.UncaughtErrorEvents.removeEventListener","openfl/events/UncaughtErrorEvents.hx",72,0x17415d69)
namespace openfl{
namespace events{

void UncaughtErrorEvents_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f614a07866ea6e55_55_new)
HXDLIN(  55)		super::__construct(null());
            	}

Dynamic UncaughtErrorEvents_obj::__CreateEmpty() { return new UncaughtErrorEvents_obj; }

void *UncaughtErrorEvents_obj::_hx_vtable = 0;

Dynamic UncaughtErrorEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UncaughtErrorEvents_obj > _hx_result = new UncaughtErrorEvents_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UncaughtErrorEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x2f77f7df;
	}
}

void UncaughtErrorEvents_obj::addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_f614a07866ea6e55_61_addEventListener)
HXDLIN(  61)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
            	}


void UncaughtErrorEvents_obj::removeEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture){
            		bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_f614a07866ea6e55_72_removeEventListener)
HXLINE(  73)		this->super::removeEventListener(type,listener,useCapture);
HXLINE(  75)		if (!(this->_hx___eventMap->exists(HX_("uncaughtError",f3,98,8b,8b)))) {
HXLINE(  77)			this->_hx___enabled = false;
            		}
            	}



::hx::ObjectPtr< UncaughtErrorEvents_obj > UncaughtErrorEvents_obj::__new() {
	::hx::ObjectPtr< UncaughtErrorEvents_obj > __this = new UncaughtErrorEvents_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< UncaughtErrorEvents_obj > UncaughtErrorEvents_obj::__alloc(::hx::Ctx *_hx_ctx) {
	UncaughtErrorEvents_obj *__this = (UncaughtErrorEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UncaughtErrorEvents_obj), true, "openfl.events.UncaughtErrorEvents"));
	*(void **)__this = UncaughtErrorEvents_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

UncaughtErrorEvents_obj::UncaughtErrorEvents_obj()
{
}

::hx::Val UncaughtErrorEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return ::hx::Val( _hx___enabled ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val UncaughtErrorEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { _hx___enabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UncaughtErrorEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__enabled",61,55,7f,ff));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UncaughtErrorEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(UncaughtErrorEvents_obj,_hx___enabled),HX_("__enabled",61,55,7f,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *UncaughtErrorEvents_obj_sStaticStorageInfo = 0;
#endif

static ::String UncaughtErrorEvents_obj_sMemberFields[] = {
	HX_("__enabled",61,55,7f,ff),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	::String(null()) };

::hx::Class UncaughtErrorEvents_obj::__mClass;

void UncaughtErrorEvents_obj::__register()
{
	UncaughtErrorEvents_obj _hx_dummy;
	UncaughtErrorEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.UncaughtErrorEvents",95,fa,87,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UncaughtErrorEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UncaughtErrorEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UncaughtErrorEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UncaughtErrorEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
