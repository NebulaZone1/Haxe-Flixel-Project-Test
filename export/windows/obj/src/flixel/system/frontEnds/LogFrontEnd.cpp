#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_Log
#include <flixel/system/debug/log/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_12_new,"flixel.system.frontEnds.LogFrontEnd","new",0xf2533c4e,"flixel.system.frontEnds.LogFrontEnd.new","flixel/system/frontEnds/LogFrontEnd.hx",12,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_24_add,"flixel.system.frontEnds.LogFrontEnd","add",0xf2495e0f,"flixel.system.frontEnds.LogFrontEnd.add","flixel/system/frontEnds/LogFrontEnd.hx",24,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_31_warn,"flixel.system.frontEnds.LogFrontEnd","warn",0x1c716698,"flixel.system.frontEnds.LogFrontEnd.warn","flixel/system/frontEnds/LogFrontEnd.hx",31,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_38_error,"flixel.system.frontEnds.LogFrontEnd","error",0x74ce8f36,"flixel.system.frontEnds.LogFrontEnd.error","flixel/system/frontEnds/LogFrontEnd.hx",38,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_45_notice,"flixel.system.frontEnds.LogFrontEnd","notice",0xa03f14ea,"flixel.system.frontEnds.LogFrontEnd.notice","flixel/system/frontEnds/LogFrontEnd.hx",45,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_57_advanced,"flixel.system.frontEnds.LogFrontEnd","advanced",0x05a7fef4,"flixel.system.frontEnds.LogFrontEnd.advanced","flixel/system/frontEnds/LogFrontEnd.hx",57,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_107_clear,"flixel.system.frontEnds.LogFrontEnd","clear",0x4a0034fb,"flixel.system.frontEnds.LogFrontEnd.clear","flixel/system/frontEnds/LogFrontEnd.hx",107,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_118_set_redirectTraces,"flixel.system.frontEnds.LogFrontEnd","set_redirectTraces",0xf7f71199,"flixel.system.frontEnds.LogFrontEnd.set_redirectTraces","flixel/system/frontEnds/LogFrontEnd.hx",118,0x686ab8c3)
HX_LOCAL_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_130_processTraceData,"flixel.system.frontEnds.LogFrontEnd","processTraceData",0x5a916632,"flixel.system.frontEnds.LogFrontEnd.processTraceData","flixel/system/frontEnds/LogFrontEnd.hx",130,0x686ab8c3)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void LogFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_12_new)
HXLINE(  17)		this->redirectTraces = false;
HXLINE( 114)		this->_standardTraceFunction = ::haxe::Log_obj::trace;
            	}

Dynamic LogFrontEnd_obj::__CreateEmpty() { return new LogFrontEnd_obj; }

void *LogFrontEnd_obj::_hx_vtable = 0;

Dynamic LogFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogFrontEnd_obj > _hx_result = new LogFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LogFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b9d64e0;
}

void LogFrontEnd_obj::add( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_24_add)
HXDLIN(  24)		this->advanced(Data,::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,add,(void))

void LogFrontEnd_obj::warn( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_31_warn)
HXDLIN(  31)		this->advanced(Data,::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,warn,(void))

void LogFrontEnd_obj::error( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_38_error)
HXDLIN(  38)		this->advanced(Data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,error,(void))

void LogFrontEnd_obj::notice( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_45_notice)
HXDLIN(  45)		this->advanced(Data,::flixel::_hx_system::debug::log::LogStyle_obj::NOTICE,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,notice,(void))

void LogFrontEnd_obj::advanced( ::Dynamic Data, ::flixel::_hx_system::debug::log::LogStyle Style,::hx::Null< bool >  __o_FireOnce){
            		bool FireOnce = __o_FireOnce.Default(false);
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_57_advanced)
HXLINE(  59)		if (::hx::IsNull( ::flixel::FlxG_obj::game->debugger )) {
HXLINE(  61)			this->_standardTraceFunction(Data,::hx::SourceInfo(HX_("flixel/system/frontEnds/LogFrontEnd.hx",c3,b8,6a,68),61,HX_("flixel.system.frontEnds.LogFrontEnd",5c,bd,97,07),HX_("advanced",a2,69,7b,3b)));
HXLINE(  62)			return;
            		}
HXLINE(  65)		if (::hx::IsNull( Style )) {
HXLINE(  67)			Style = ::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL;
            		}
HXLINE(  70)		if (!(::Std_obj::isOfType(Data,::hx::ArrayBase::__mClass))) {
HXLINE(  72)			Data = ::cpp::VirtualArray_obj::__new(1)->init(0,Data);
            		}
HXLINE(  75)		if (::flixel::FlxG_obj::game->debugger->log->add(( (::cpp::VirtualArray)(Data) ),Style,FireOnce)) {
HXLINE(  78)			if (::hx::IsNotNull( Style->errorSound )) {
HXLINE(  80)				::String extension = HX_("",00,00,00,00);
HXDLIN(  80)				extension = HX_(".ogg",e1,64,bc,1e);
HXDLIN(  80)				 ::openfl::media::Sound sound = ::openfl::utils::Assets_obj::getSound((Style->errorSound + extension),null());
HXLINE(  81)				if (::hx::IsNotNull( sound )) {
HXLINE(  83)					::flixel::FlxG_obj::sound->load(sound,null(),null(),null(),null(),null(),null(),null(),null())->play(null(),null(),null());
            				}
            			}
HXLINE(  88)			if (Style->openConsole) {
HXLINE(  90)				::flixel::FlxG_obj::debugger->set_visible(true);
            			}
HXLINE(  93)			if (::hx::IsNotNull( Style->callbackFunction )) {
HXLINE(  95)				Style->callbackFunction();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(LogFrontEnd_obj,advanced,(void))

void LogFrontEnd_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_107_clear)
HXDLIN( 107)		::flixel::FlxG_obj::game->debugger->log->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LogFrontEnd_obj,clear,(void))

bool LogFrontEnd_obj::set_redirectTraces(bool Redirect){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_118_set_redirectTraces)
HXLINE( 119)		 ::Dynamic _hx_tmp;
HXDLIN( 119)		if (Redirect) {
HXLINE( 119)			_hx_tmp = this->processTraceData_dyn();
            		}
            		else {
HXLINE( 119)			_hx_tmp = this->_standardTraceFunction;
            		}
HXDLIN( 119)		::haxe::Log_obj::trace = _hx_tmp;
HXLINE( 120)		return (this->redirectTraces = Redirect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,set_redirectTraces,return )

void LogFrontEnd_obj::processTraceData( ::Dynamic Data, ::Dynamic Info){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_130_processTraceData)
HXLINE( 131)		::cpp::VirtualArray paramArray = ::cpp::VirtualArray_obj::__new(1)->init(0,Data);
HXLINE( 133)		if (::hx::IsNotNull( Info->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic) )) {
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::cpp::VirtualArray _g1 = ( (::cpp::VirtualArray)(Info->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic)) );
HXDLIN( 135)			while((_g < _g1->get_length())){
HXLINE( 135)				 ::Dynamic i = _g1->__get(_g);
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 137)				paramArray->push(i);
            			}
            		}
HXLINE( 141)		this->advanced(paramArray,::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(LogFrontEnd_obj,processTraceData,(void))


::hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__new() {
	::hx::ObjectPtr< LogFrontEnd_obj > __this = new LogFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LogFrontEnd_obj *__this = (LogFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogFrontEnd_obj), true, "flixel.system.frontEnds.LogFrontEnd"));
	*(void **)__this = LogFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LogFrontEnd_obj::LogFrontEnd_obj()
{
}

void LogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogFrontEnd);
	HX_MARK_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_MARK_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
	HX_MARK_END_CLASS();
}

void LogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_VISIT_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
}

::hx::Val LogFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return ::hx::Val( warn_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { return ::hx::Val( notice_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advanced") ) { return ::hx::Val( advanced_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return ::hx::Val( redirectTraces ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processTraceData") ) { return ::hx::Val( processTraceData_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_redirectTraces") ) { return ::hx::Val( set_redirectTraces_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { return ::hx::Val( _standardTraceFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LogFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_redirectTraces(inValue.Cast< bool >()) );redirectTraces=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { _standardTraceFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("redirectTraces",8a,ce,d6,0a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LogFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(LogFrontEnd_obj,redirectTraces),HX_("redirectTraces",8a,ce,d6,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LogFrontEnd_obj,_standardTraceFunction),HX_("_standardTraceFunction",81,b2,89,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LogFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String LogFrontEnd_obj_sMemberFields[] = {
	HX_("redirectTraces",8a,ce,d6,0a),
	HX_("_standardTraceFunction",81,b2,89,66),
	HX_("add",21,f2,49,00),
	HX_("warn",46,62,f2,4e),
	HX_("error",c8,cb,29,73),
	HX_("notice",18,d8,b8,31),
	HX_("advanced",a2,69,7b,3b),
	HX_("clear",8d,71,5b,48),
	HX_("set_redirectTraces",c7,e1,1f,83),
	HX_("processTraceData",e0,2e,f4,70),
	::String(null()) };

::hx::Class LogFrontEnd_obj::__mClass;

void LogFrontEnd_obj::__register()
{
	LogFrontEnd_obj _hx_dummy;
	LogFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.LogFrontEnd",5c,bd,97,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LogFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LogFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
