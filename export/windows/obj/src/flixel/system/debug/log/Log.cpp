#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
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
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_23_new,"flixel.system.debug.log.Log","new",0x3aeefde4,"flixel.system.debug.log.Log.new","flixel/system/debug/log/Log.hx",23,0x223ade2e)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_43_destroy,"flixel.system.debug.log.Log","destroy",0x51a06c7e,"flixel.system.debug.log.Log.destroy","flixel/system/debug/log/Log.hx",43,0x223ade2e)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_61_add,"flixel.system.debug.log.Log","add",0x3ae51fa5,"flixel.system.debug.log.Log.add","flixel/system/debug/log/Log.hx",61,0x223ade2e)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_135_clear,"flixel.system.debug.log.Log","clear",0xc2400811,"flixel.system.debug.log.Log.clear","flixel/system/debug/log/Log.hx",135,0x223ade2e)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_147_updateSize,"flixel.system.debug.log.Log","updateSize",0x7fdfd666,"flixel.system.debug.log.Log.updateSize","flixel/system/debug/log/Log.hx",147,0x223ade2e)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_13_boot,"flixel.system.debug.log.Log","boot",0x4e482a2e,"flixel.system.debug.log.Log.boot","flixel/system/debug/log/Log.hx",13,0x223ade2e)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa3e0ab86ae8b4a_14_boot,"flixel.system.debug.log.Log","boot",0x4e482a2e,"flixel.system.debug.log.Log.boot","flixel/system/debug/log/Log.hx",14,0x223ade2e)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{

void Log_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_23_new)
HXLINE(  24)		super::__construct(HX_("Log",64,0c,3a,00), ::flixel::_hx_system::debug::GraphicLog_obj::__alloc( HX_CTX ,0,0,null(),null()),null(),null(),null(),null(),null(),null());
HXLINE(  26)		this->_text =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  27)		this->_text->set_x(( (Float)(2) ));
HXLINE(  28)		this->_text->set_y(( (Float)(15) ));
HXLINE(  29)		this->_text->set_multiline(true);
HXLINE(  30)		this->_text->set_wordWrap(true);
HXLINE(  31)		this->_text->set_selectable(true);
HXLINE(  32)		this->_text->set_embedFonts(true);
HXLINE(  33)		 ::openfl::text::TextField _hx_tmp = this->_text;
HXDLIN(  33)		_hx_tmp->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER,12,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  34)		this->addChild(this->_text);
HXLINE(  36)		this->_lines = ::Array_obj< ::String >::__new();
            	}

Dynamic Log_obj::__CreateEmpty() { return new Log_obj; }

void *Log_obj::_hx_vtable = 0;

Dynamic Log_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Log_obj > _hx_result = new Log_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Log_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20862dc0) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x20862dc0;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x39123ef8 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Log_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_43_destroy)
HXLINE(  44)		if (::hx::IsNotNull( this->_text )) {
HXLINE(  46)			this->removeChild(this->_text);
HXLINE(  47)			this->_text = null();
            		}
HXLINE(  50)		this->_lines = null();
HXLINE(  51)		this->super::destroy();
            	}


bool Log_obj::add(::cpp::VirtualArray Data, ::flixel::_hx_system::debug::log::LogStyle Style,::hx::Null< bool >  __o_FireOnce){
            		bool FireOnce = __o_FireOnce.Default(false);
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_61_add)
HXLINE(  62)		if (::hx::IsNull( Data )) {
HXLINE(  64)			return false;
            		}
HXLINE(  67)		::Array< ::String > texts = ::Array_obj< ::String >::__new();
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			int _g1 = Data->get_length();
HXDLIN(  70)			while((_g < _g1)){
HXLINE(  70)				_g = (_g + 1);
HXDLIN(  70)				int i = (_g - 1);
HXLINE(  72)				texts[i] = ::Std_obj::string(Data->__get(i));
HXLINE(  75)				texts[i] = ::StringTools_obj::htmlEscape(texts->__get(i),null());
            			}
            		}
HXLINE(  78)		::String Style1 = Style->prefix;
HXDLIN(  78)		::String text = (Style1 + texts->join(HX_(" ",20,00,00,00)));
HXLINE(  82)		text = ::flixel::util::FlxStringUtil_obj::htmlFormat(text,Style->size,Style->color,Style->bold,Style->italic,Style->underlined);
HXLINE(  86)		if (FireOnce) {
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			::Array< ::String > _g1 = this->_lines;
HXDLIN(  88)			while((_g < _g1->length)){
HXLINE(  88)				::String line = _g1->__get(_g);
HXDLIN(  88)				_g = (_g + 1);
HXLINE(  90)				if ((text == line)) {
HXLINE(  92)					return false;
            				}
            			}
            		}
HXLINE(  98)		if ((this->_lines->length <= 0)) {
HXLINE( 100)			this->_text->set_text(HX_("",00,00,00,00));
            		}
HXLINE( 103)		this->_lines->push(text);
HXLINE( 105)		if ((this->_lines->length > 200)) {
HXLINE( 107)			this->_lines->shift();
HXLINE( 108)			::String newText = HX_("",00,00,00,00);
HXLINE( 109)			{
HXLINE( 109)				int _g = 0;
HXDLIN( 109)				int _g1 = this->_lines->length;
HXDLIN( 109)				while((_g < _g1)){
HXLINE( 109)					_g = (_g + 1);
HXDLIN( 109)					int i = (_g - 1);
HXLINE( 111)					newText = (newText + (this->_lines->__get(i) + HX_("<br>",b2,8d,f3,27)));
            				}
            			}
HXLINE( 115)			this->_text->set_htmlText(newText);
            		}
            		else {
HXLINE( 124)			 ::openfl::text::TextField fh = this->_text;
HXDLIN( 124)			fh->set_htmlText((fh->get_htmlText() + (text + HX_("<br>",b2,8d,f3,27))));
            		}
HXLINE( 130)		 ::openfl::text::TextField _hx_tmp = this->_text;
HXDLIN( 130)		_hx_tmp->set_scrollV(::Std_obj::_hx_int(( (Float)(this->_text->get_maxScrollV()) )));
HXLINE( 131)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Log_obj,add,return )

void Log_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_135_clear)
HXLINE( 136)		this->_text->set_text(HX_("",00,00,00,00));
HXLINE( 137)		this->_lines->removeRange(0,this->_lines->length);
HXLINE( 139)		this->_text->set_scrollV(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))

void Log_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_147_updateSize)
HXLINE( 148)		this->super::updateSize();
HXLINE( 150)		this->_text->set_width(( (Float)((this->_width - 10)) ));
HXLINE( 151)		this->_text->set_height(( (Float)((this->_height - 15)) ));
            	}


int Log_obj::MAX_LOG_LINES;

::String Log_obj::LINE_BREAK;


::hx::ObjectPtr< Log_obj > Log_obj::__new() {
	::hx::ObjectPtr< Log_obj > __this = new Log_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Log_obj > Log_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Log_obj *__this = (Log_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Log_obj), true, "flixel.system.debug.log.Log"));
	*(void **)__this = Log_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Log_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return ::hx::Val( _text ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return ::hx::Val( _lines ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Log_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_text",8c,e8,0a,00));
	outFields->push(HX_("_lines",40,25,e9,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Log_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Log_obj,_text),HX_("_text",8c,e8,0a,00)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Log_obj,_lines),HX_("_lines",40,25,e9,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Log_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Log_obj::MAX_LOG_LINES,HX_("MAX_LOG_LINES",c9,9f,1f,12)},
	{::hx::fsString,(void *) &Log_obj::LINE_BREAK,HX_("LINE_BREAK",d4,f2,5b,12)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Log_obj_sMemberFields[] = {
	HX_("_text",8c,e8,0a,00),
	HX_("_lines",40,25,e9,70),
	HX_("destroy",fa,2c,86,24),
	HX_("add",21,f2,49,00),
	HX_("clear",8d,71,5b,48),
	HX_("updateSize",6a,8b,08,05),
	::String(null()) };

static void Log_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Log_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#endif

::hx::Class Log_obj::__mClass;

static ::String Log_obj_sStaticFields[] = {
	HX_("MAX_LOG_LINES",c9,9f,1f,12),
	HX_("LINE_BREAK",d4,f2,5b,12),
	::String(null())
};

void Log_obj::__register()
{
	Log_obj _hx_dummy;
	Log_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.log.Log",f2,7b,61,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Log_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Log_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Log_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Log_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Log_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Log_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Log_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Log_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_13_boot)
HXDLIN(  13)		MAX_LOG_LINES = 200;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9fa3e0ab86ae8b4a_14_boot)
HXDLIN(  14)		LINE_BREAK = HX_("<br>",b2,8d,f3,27);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
