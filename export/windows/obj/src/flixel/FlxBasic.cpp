#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a86a375242b5e1cf_10_new,"flixel.FlxBasic","new",0x9d630540,"flixel.FlxBasic.new","flixel/FlxBasic.hx",10,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_86_destroy,"flixel.FlxBasic","destroy",0xc50151da,"flixel.FlxBasic.destroy","flixel/FlxBasic.hx",86,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_98_kill,"flixel.FlxBasic","kill",0x1748eebe,"flixel.FlxBasic.kill","flixel/FlxBasic.hx",98,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_108_revive,"flixel.FlxBasic","revive",0xb3f01175,"flixel.FlxBasic.revive","flixel/FlxBasic.hx",108,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_120_update,"flixel.FlxBasic","update",0x307e9d29,"flixel.FlxBasic.update","flixel/FlxBasic.hx",120,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_131_draw,"flixel.FlxBasic","draw",0x12af3b24,"flixel.FlxBasic.draw","flixel/FlxBasic.hx",131,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_137_toString,"flixel.FlxBasic","toString",0x03b3efcc,"flixel.FlxBasic.toString","flixel/FlxBasic.hx",137,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_148_set_visible,"flixel.FlxBasic","set_visible",0x942af475,"flixel.FlxBasic.set_visible","flixel/FlxBasic.hx",148,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_154_set_active,"flixel.FlxBasic","set_active",0x086e7723,"flixel.FlxBasic.set_active","flixel/FlxBasic.hx",154,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_160_set_exists,"flixel.FlxBasic","set_exists",0xb2085339,"flixel.FlxBasic.set_exists","flixel/FlxBasic.hx",160,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_166_set_alive,"flixel.FlxBasic","set_alive",0x59c1c910,"flixel.FlxBasic.set_alive","flixel/FlxBasic.hx",166,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_172_get_camera,"flixel.FlxBasic","get_camera",0xa636dd8e,"flixel.FlxBasic.get_camera","flixel/FlxBasic.hx",172,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_177_set_camera,"flixel.FlxBasic","set_camera",0xa9b47c02,"flixel.FlxBasic.set_camera","flixel/FlxBasic.hx",177,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_188_get_cameras,"flixel.FlxBasic","get_cameras",0xc9caff25,"flixel.FlxBasic.get_cameras","flixel/FlxBasic.hx",188,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_194_set_cameras,"flixel.FlxBasic","set_cameras",0xd4380631,"flixel.FlxBasic.set_cameras","flixel/FlxBasic.hx",194,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_17_boot,"flixel.FlxBasic","boot",0x115a9352,"flixel.FlxBasic.boot","flixel/FlxBasic.hx",17,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_20_boot,"flixel.FlxBasic","boot",0x115a9352,"flixel.FlxBasic.boot","flixel/FlxBasic.hx",20,0xd8d6cfcf)
HX_LOCAL_STACK_FRAME(_hx_pos_a86a375242b5e1cf_29_boot,"flixel.FlxBasic","boot",0x115a9352,"flixel.FlxBasic.boot","flixel/FlxBasic.hx",29,0xd8d6cfcf)
namespace flixel{

void FlxBasic_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_10_new)
HXLINE(  68)		this->flixelType = 0;
HXLINE(  50)		this->exists = true;
HXLINE(  45)		this->alive = true;
HXLINE(  39)		this->visible = true;
HXLINE(  34)		this->active = true;
HXLINE(  26)		this->ID = ::flixel::FlxBasic_obj::idEnumerator++;
            	}

Dynamic FlxBasic_obj::__CreateEmpty() { return new FlxBasic_obj; }

void *FlxBasic_obj::_hx_vtable = 0;

Dynamic FlxBasic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBasic_obj > _hx_result = new FlxBasic_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBasic_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ccf8994;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_FlxBasic__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::FlxBasic_obj::destroy,
};

void *FlxBasic_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_FlxBasic__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxBasic_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_86_destroy)
HXLINE(  87)		this->set_exists(false);
HXLINE(  88)		this->_cameras = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,destroy,(void))

void FlxBasic_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_98_kill)
HXLINE(  99)		this->set_alive(false);
HXLINE( 100)		this->set_exists(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,kill,(void))

void FlxBasic_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_108_revive)
HXLINE( 109)		this->set_alive(true);
HXLINE( 110)		this->set_exists(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,revive,(void))

void FlxBasic_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_120_update)
HXDLIN( 120)		::flixel::FlxBasic_obj::activeCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,update,(void))

void FlxBasic_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_131_draw)
HXDLIN( 131)		::flixel::FlxBasic_obj::visibleCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,draw,(void))

::String FlxBasic_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_137_toString)
HXLINE( 138)		 ::Dynamic value = this->active;
HXDLIN( 138)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 138)		_this->label = HX_("active",c6,41,46,16);
HXDLIN( 138)		_this->value = value;
HXLINE( 139)		 ::Dynamic value1 = this->visible;
HXDLIN( 139)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 139)		_this1->label = HX_("visible",72,78,24,a3);
HXDLIN( 139)		_this1->value = value1;
HXLINE( 140)		 ::Dynamic value2 = this->alive;
HXDLIN( 140)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 140)		_this2->label = HX_("alive",cd,63,91,21);
HXDLIN( 140)		_this2->value = value2;
HXLINE( 141)		 ::Dynamic value3 = this->exists;
HXDLIN( 141)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 141)		_this3->label = HX_("exists",dc,1d,e0,bf);
HXDLIN( 141)		_this3->value = value3;
HXLINE( 137)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,toString,return )

bool FlxBasic_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_148_set_visible)
HXDLIN( 148)		return (this->visible = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_visible,return )

bool FlxBasic_obj::set_active(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_154_set_active)
HXDLIN( 154)		return (this->active = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_active,return )

bool FlxBasic_obj::set_exists(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_160_set_exists)
HXDLIN( 160)		return (this->exists = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_exists,return )

bool FlxBasic_obj::set_alive(bool Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_166_set_alive)
HXDLIN( 166)		return (this->alive = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_alive,return )

 ::flixel::FlxCamera FlxBasic_obj::get_camera(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_172_get_camera)
HXDLIN( 172)		bool _hx_tmp;
HXDLIN( 172)		if (::hx::IsNotNull( this->_cameras )) {
HXDLIN( 172)			_hx_tmp = (this->_cameras->length == 0);
            		}
            		else {
HXDLIN( 172)			_hx_tmp = true;
            		}
HXDLIN( 172)		if (_hx_tmp) {
HXDLIN( 172)			return ::flixel::FlxCamera_obj::_defaultCameras->__get(0).StaticCast<  ::flixel::FlxCamera >();
            		}
            		else {
HXDLIN( 172)			return this->_cameras->__get(0).StaticCast<  ::flixel::FlxCamera >();
            		}
HXDLIN( 172)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_camera,return )

 ::flixel::FlxCamera FlxBasic_obj::set_camera( ::flixel::FlxCamera Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_177_set_camera)
HXLINE( 178)		if (::hx::IsNull( this->_cameras )) {
HXLINE( 179)			this->_cameras = ::Array_obj< ::Dynamic>::__new(1)->init(0,Value);
            		}
            		else {
HXLINE( 181)			this->_cameras[0] = Value;
            		}
HXLINE( 182)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_camera,return )

::Array< ::Dynamic> FlxBasic_obj::get_cameras(){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_188_get_cameras)
HXDLIN( 188)		if (::hx::IsNull( this->_cameras )) {
HXDLIN( 188)			return ::flixel::FlxCamera_obj::_defaultCameras;
            		}
            		else {
HXDLIN( 188)			return this->_cameras;
            		}
HXDLIN( 188)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasic_obj,get_cameras,return )

::Array< ::Dynamic> FlxBasic_obj::set_cameras(::Array< ::Dynamic> Value){
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_194_set_cameras)
HXDLIN( 194)		return (this->_cameras = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasic_obj,set_cameras,return )

int FlxBasic_obj::activeCount;

int FlxBasic_obj::visibleCount;

int FlxBasic_obj::idEnumerator;


::hx::ObjectPtr< FlxBasic_obj > FlxBasic_obj::__new() {
	::hx::ObjectPtr< FlxBasic_obj > __this = new FlxBasic_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxBasic_obj > FlxBasic_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxBasic_obj *__this = (FlxBasic_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBasic_obj), true, "flixel.FlxBasic"));
	*(void **)__this = FlxBasic_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBasic_obj::FlxBasic_obj()
{
}

void FlxBasic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBasic);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(alive,"alive");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(flixelType,"flixelType");
	HX_MARK_MEMBER_NAME(_cameras,"_cameras");
	HX_MARK_END_CLASS();
}

void FlxBasic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(alive,"alive");
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(flixelType,"flixelType");
	HX_VISIT_MEMBER_NAME(_cameras,"_cameras");
}

::hx::Val FlxBasic_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ::hx::Val( ID ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { return ::hx::Val( alive ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists ); }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camera() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( visible ); }
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameras() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { return ::hx::Val( _cameras ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alive") ) { return ::hx::Val( set_alive_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { return ::hx::Val( flixelType ); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return ::hx::Val( set_active_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return ::hx::Val( set_exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return ::hx::Val( get_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return ::hx::Val( set_camera_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return ::hx::Val( get_cameras_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return ::hx::Val( set_cameras_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBasic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activeCount") ) { outValue = ( activeCount ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"visibleCount") ) { outValue = ( visibleCount ); return true; }
		if (HX_FIELD_EQ(inName,"idEnumerator") ) { outValue = ( idEnumerator ); return true; }
	}
	return false;
}

::hx::Val FlxBasic_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alive") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alive(inValue.Cast< bool >()) );alive=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_active(inValue.Cast< bool >()) );active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_exists(inValue.Cast< bool >()) );exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_camera(inValue.Cast<  ::flixel::FlxCamera >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) );visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameras(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { _cameras=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelType") ) { flixelType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBasic_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activeCount") ) { activeCount=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"visibleCount") ) { visibleCount=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"idEnumerator") ) { idEnumerator=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxBasic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ID",db,3f,00,00));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("alive",cd,63,91,21));
	outFields->push(HX_("exists",dc,1d,e0,bf));
	outFields->push(HX_("camera",a5,46,8c,b7));
	outFields->push(HX_("cameras",2e,8a,31,e3));
	outFields->push(HX_("flixelType",36,bf,78,58));
	outFields->push(HX_("_cameras",af,e3,e9,1c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBasic_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxBasic_obj,ID),HX_("ID",db,3f,00,00)},
	{::hx::fsBool,(int)offsetof(FlxBasic_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsBool,(int)offsetof(FlxBasic_obj,visible),HX_("visible",72,78,24,a3)},
	{::hx::fsBool,(int)offsetof(FlxBasic_obj,alive),HX_("alive",cd,63,91,21)},
	{::hx::fsBool,(int)offsetof(FlxBasic_obj,exists),HX_("exists",dc,1d,e0,bf)},
	{::hx::fsInt,(int)offsetof(FlxBasic_obj,flixelType),HX_("flixelType",36,bf,78,58)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxBasic_obj,_cameras),HX_("_cameras",af,e3,e9,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxBasic_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxBasic_obj::activeCount,HX_("activeCount",29,45,a8,a6)},
	{::hx::fsInt,(void *) &FlxBasic_obj::visibleCount,HX_("visibleCount",fd,5e,e8,bf)},
	{::hx::fsInt,(void *) &FlxBasic_obj::idEnumerator,HX_("idEnumerator",3f,ad,14,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxBasic_obj_sMemberFields[] = {
	HX_("ID",db,3f,00,00),
	HX_("active",c6,41,46,16),
	HX_("visible",72,78,24,a3),
	HX_("alive",cd,63,91,21),
	HX_("exists",dc,1d,e0,bf),
	HX_("flixelType",36,bf,78,58),
	HX_("_cameras",af,e3,e9,1c),
	HX_("destroy",fa,2c,86,24),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("toString",ac,d0,6e,38),
	HX_("set_visible",95,df,8b,33),
	HX_("set_active",03,50,4b,0a),
	HX_("set_exists",19,2c,e5,b3),
	HX_("set_alive",30,ac,8b,48),
	HX_("get_camera",6e,b6,13,a8),
	HX_("set_camera",e2,54,91,ab),
	HX_("get_cameras",45,ea,2b,69),
	HX_("set_cameras",51,f1,98,73),
	::String(null()) };

static void FlxBasic_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBasic_obj::activeCount,"activeCount");
	HX_MARK_MEMBER_NAME(FlxBasic_obj::visibleCount,"visibleCount");
	HX_MARK_MEMBER_NAME(FlxBasic_obj::idEnumerator,"idEnumerator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBasic_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::activeCount,"activeCount");
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::visibleCount,"visibleCount");
	HX_VISIT_MEMBER_NAME(FlxBasic_obj::idEnumerator,"idEnumerator");
};

#endif

::hx::Class FlxBasic_obj::__mClass;

static ::String FlxBasic_obj_sStaticFields[] = {
	HX_("activeCount",29,45,a8,a6),
	HX_("visibleCount",fd,5e,e8,bf),
	HX_("idEnumerator",3f,ad,14,e5),
	::String(null())
};

void FlxBasic_obj::__register()
{
	FlxBasic_obj _hx_dummy;
	FlxBasic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxBasic",4e,a5,2f,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBasic_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBasic_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBasic_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBasic_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBasic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBasic_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBasic_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBasic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBasic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBasic_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_17_boot)
HXDLIN(  17)		activeCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_20_boot)
HXDLIN(  20)		visibleCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a86a375242b5e1cf_29_boot)
HXDLIN(  29)		idEnumerator = 0;
            	}
}

} // end namespace flixel
