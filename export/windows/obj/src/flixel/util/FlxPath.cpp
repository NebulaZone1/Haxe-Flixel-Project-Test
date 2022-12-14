#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_44_new,"flixel.util.FlxPath","new",0x6e30af6f,"flixel.util.FlxPath.new","flixel/util/FlxPath.hx",44,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_181_reset,"flixel.util.FlxPath","reset",0x2ce64a9e,"flixel.util.FlxPath.reset","flixel/util/FlxPath.hx",181,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_200_setProperties,"flixel.util.FlxPath","setProperties",0x27d92204,"flixel.util.FlxPath.setProperties","flixel/util/FlxPath.hx",200,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_219_start,"flixel.util.FlxPath","start",0xca297531,"flixel.util.FlxPath.start","flixel/util/FlxPath.hx",219,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_246_restart,"flixel.util.FlxPath","restart",0xf4e0da5e,"flixel.util.FlxPath.restart","flixel/util/FlxPath.hx",246,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_276_setNode,"flixel.util.FlxPath","setNode",0x98c95d53,"flixel.util.FlxPath.setNode","flixel/util/FlxPath.hx",276,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_293_update,"flixel.util.FlxPath","update",0x9b283a5a,"flixel.util.FlxPath.update","flixel/util/FlxPath.hx",293,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_378_calculateVelocity,"flixel.util.FlxPath","calculateVelocity",0x682aa4f2,"flixel.util.FlxPath.calculateVelocity","flixel/util/FlxPath.hx",378,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_416_advancePath,"flixel.util.FlxPath","advancePath",0xf96b8956,"flixel.util.FlxPath.advancePath","flixel/util/FlxPath.hx",416,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_523_cancel,"flixel.util.FlxPath","cancel",0xcc56a1cb,"flixel.util.FlxPath.cancel","flixel/util/FlxPath.hx",523,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_537_onEnd,"flixel.util.FlxPath","onEnd",0x788298cb,"flixel.util.FlxPath.onEnd","flixel/util/FlxPath.hx",537,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_549_destroy,"flixel.util.FlxPath","destroy",0xaec13f89,"flixel.util.FlxPath.destroy","flixel/util/FlxPath.hx",549,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_565_add,"flixel.util.FlxPath","add",0x6e26d130,"flixel.util.FlxPath.add","flixel/util/FlxPath.hx",565,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_580_addAt,"flixel.util.FlxPath","addAt",0x6261b643,"flixel.util.FlxPath.addAt","flixel/util/FlxPath.hx",580,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_598_addPoint,"flixel.util.FlxPath","addPoint",0xa9620500,"flixel.util.FlxPath.addPoint","flixel/util/FlxPath.hx",598,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_622_addPointAt,"flixel.util.FlxPath","addPointAt",0x49ad7e13,"flixel.util.FlxPath.addPointAt","flixel/util/FlxPath.hx",622,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_644_remove,"flixel.util.FlxPath","remove",0x18ab5095,"flixel.util.FlxPath.remove","flixel/util/FlxPath.hx",644,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_660_removeAt,"flixel.util.FlxPath","removeAt",0x169098e8,"flixel.util.FlxPath.removeAt","flixel/util/FlxPath.hx",660,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_678_head,"flixel.util.FlxPath","head",0xf8717731,"flixel.util.FlxPath.head","flixel/util/FlxPath.hx",678,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_692_tail,"flixel.util.FlxPath","tail",0x005d04a1,"flixel.util.FlxPath.tail","flixel/util/FlxPath.hx",692,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_711_drawDebug,"flixel.util.FlxPath","drawDebug",0x7c3a9bfe,"flixel.util.FlxPath.drawDebug","flixel/util/FlxPath.hx",711,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_810_get_nodes,"flixel.util.FlxPath","get_nodes",0xc07828d7,"flixel.util.FlxPath.get_nodes","flixel/util/FlxPath.hx",810,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_814_set_nodes,"flixel.util.FlxPath","set_nodes",0xa3c914e3,"flixel.util.FlxPath.set_nodes","flixel/util/FlxPath.hx",814,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_49_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",49,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_54_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",54,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_59_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",59,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_64_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",64,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_69_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",69,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_74_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",74,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_79_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",79,0x22aae741)
HX_LOCAL_STACK_FRAME(_hx_pos_bbe6117fedb3c10f_84_boot,"flixel.util.FlxPath","boot",0xf481d243,"flixel.util.FlxPath.boot","flixel/util/FlxPath.hx",84,0x22aae741)
namespace flixel{
namespace util{

void FlxPath_obj::__construct(::Array< ::Dynamic> Nodes){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_44_new)
HXLINE( 159)		this->_firstUpdate = false;
HXLINE( 157)		this->_wasObjectImmovable = null();
HXLINE( 155)		this->_autoRotate = false;
HXLINE( 150)		this->_inc = 1;
HXLINE( 140)		this->finished = false;
HXLINE( 138)		this->nodeIndex = 0;
HXLINE( 132)		this->ignoreDrawDebug = false;
HXLINE( 126)		this->debugColor = 16777215;
HXLINE( 118)		this->active = false;
HXLINE( 113)		this->autoCenter = true;
HXLINE( 108)		this->angle = ((Float)0);
HXLINE( 103)		this->speed = ((Float)0);
HXLINE( 169)		if (::hx::IsNotNull( Nodes )) {
HXLINE( 170)			this->_nodes = Nodes->copy();
            		}
            		else {
HXLINE( 172)			this->_nodes = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}

Dynamic FlxPath_obj::__CreateEmpty() { return new FlxPath_obj; }

void *FlxPath_obj::_hx_vtable = 0;

Dynamic FlxPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPath_obj > _hx_result = new FlxPath_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03238bb9;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxPath__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::util::FlxPath_obj::destroy,
};

void *FlxPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxPath__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::util::FlxPath FlxPath_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_181_reset)
HXLINE( 183)		this->debugColor = 16777215;
HXLINE( 184)		this->ignoreDrawDebug = false;
HXLINE( 186)		this->autoCenter = true;
HXLINE( 187)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

 ::flixel::util::FlxPath FlxPath_obj::setProperties(::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Mode,::hx::Null< bool >  __o_AutoRotate){
            		Float Speed = __o_Speed.Default(100);
            		int Mode = __o_Mode.Default(0);
            		bool AutoRotate = __o_AutoRotate.Default(false);
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_200_setProperties)
HXLINE( 201)		this->speed = ::Math_obj::abs(Speed);
HXLINE( 202)		this->_mode = Mode;
HXLINE( 203)		this->_autoRotate = AutoRotate;
HXLINE( 204)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,setProperties,return )

 ::flixel::util::FlxPath FlxPath_obj::start(::Array< ::Dynamic> Nodes,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Mode,::hx::Null< bool >  __o_AutoRotate,::hx::Null< bool >  __o_NodesAsReference){
            		Float Speed = __o_Speed.Default(100);
            		int Mode = __o_Mode.Default(0);
            		bool AutoRotate = __o_AutoRotate.Default(false);
            		bool NodesAsReference = __o_NodesAsReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_219_start)
HXLINE( 220)		if (::hx::IsNotNull( Nodes )) {
HXLINE( 222)			if (NodesAsReference) {
HXLINE( 224)				this->_nodes = Nodes;
            			}
            			else {
HXLINE( 228)				this->_nodes = Nodes->copy();
            			}
            		}
HXLINE( 231)		this->setProperties(Speed,Mode,AutoRotate);
HXLINE( 232)		if ((this->_nodes->length > 0)) {
HXLINE( 234)			this->restart();
            		}
HXLINE( 236)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxPath_obj,start,return )

 ::flixel::util::FlxPath FlxPath_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_246_restart)
HXLINE( 247)		this->finished = false;
HXLINE( 248)		this->_firstUpdate = true;
HXLINE( 249)		this->active = (this->_nodes->length > 0);
HXLINE( 250)		if (!(this->active)) {
HXLINE( 252)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 256)		bool _hx_tmp;
HXDLIN( 256)		if ((this->_mode != 1)) {
HXLINE( 256)			_hx_tmp = (this->_mode == 256);
            		}
            		else {
HXLINE( 256)			_hx_tmp = true;
            		}
HXDLIN( 256)		if (_hx_tmp) {
HXLINE( 258)			this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 259)			this->_inc = -1;
            		}
            		else {
HXLINE( 263)			this->nodeIndex = 0;
HXLINE( 264)			this->_inc = 1;
            		}
HXLINE( 267)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

 ::flixel::util::FlxPath FlxPath_obj::setNode(int NodeIndex){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_276_setNode)
HXLINE( 277)		if ((NodeIndex < 0)) {
HXLINE( 278)			NodeIndex = 0;
            		}
            		else {
HXLINE( 279)			if ((NodeIndex > (this->_nodes->length - 1))) {
HXLINE( 280)				NodeIndex = (this->_nodes->length - 1);
            			}
            		}
HXLINE( 282)		this->nodeIndex = NodeIndex;
HXLINE( 283)		this->advancePath(null());
HXLINE( 284)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,return )

void FlxPath_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_293_update)
HXLINE( 294)		if (::hx::IsNull( this->object )) {
HXLINE( 295)			return;
            		}
HXLINE( 297)		if (this->_firstUpdate) {
HXLINE( 299)			this->_wasObjectImmovable = this->object->immovable;
HXLINE( 300)			this->object->set_immovable(true);
HXLINE( 301)			this->_firstUpdate = false;
            		}
HXLINE( 305)		::flixel::util::FlxPath_obj::_point->set_x(this->object->x);
HXLINE( 306)		::flixel::util::FlxPath_obj::_point->set_y(this->object->y);
HXLINE( 307)		if (this->autoCenter) {
HXLINE( 309)			 ::flixel::math::FlxPoint _this = ::flixel::util::FlxPath_obj::_point;
HXDLIN( 309)			Float X = (this->object->get_width() * ((Float)0.5));
HXDLIN( 309)			Float Y = (this->object->get_height() * ((Float)0.5));
HXDLIN( 309)			_this->set_x((_this->x + X));
HXDLIN( 309)			_this->set_y((_this->y + Y));
            		}
HXLINE( 311)		 ::flixel::math::FlxPoint node = this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 312)		Float deltaX = (node->x - ::flixel::util::FlxPath_obj::_point->x);
HXLINE( 313)		Float deltaY = (node->y - ::flixel::util::FlxPath_obj::_point->y);
HXLINE( 315)		bool horizontalOnly = ((this->_mode & 65536) > 0);
HXLINE( 316)		bool verticalOnly = ((this->_mode & 1048576) > 0);
HXLINE( 318)		if (horizontalOnly) {
HXLINE( 320)			Float _hx_tmp;
HXDLIN( 320)			if ((deltaX > 0)) {
HXLINE( 320)				_hx_tmp = deltaX;
            			}
            			else {
HXLINE( 320)				_hx_tmp = -(deltaX);
            			}
HXDLIN( 320)			if ((_hx_tmp < (this->speed * elapsed))) {
HXLINE( 322)				node = this->advancePath(null());
            			}
            		}
            		else {
HXLINE( 325)			if (verticalOnly) {
HXLINE( 327)				Float _hx_tmp;
HXDLIN( 327)				if ((deltaY > 0)) {
HXLINE( 327)					_hx_tmp = deltaY;
            				}
            				else {
HXLINE( 327)					_hx_tmp = -(deltaY);
            				}
HXDLIN( 327)				if ((_hx_tmp < (this->speed * elapsed))) {
HXLINE( 329)					node = this->advancePath(null());
            				}
            			}
            			else {
HXLINE( 334)				if ((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->speed * elapsed))) {
HXLINE( 336)					node = this->advancePath(null());
            				}
            			}
            		}
HXLINE( 341)		bool _hx_tmp;
HXDLIN( 341)		if (::hx::IsNotNull( this->object )) {
HXLINE( 341)			_hx_tmp = (this->speed != 0);
            		}
            		else {
HXLINE( 341)			_hx_tmp = false;
            		}
HXDLIN( 341)		if (_hx_tmp) {
HXLINE( 344)			::flixel::util::FlxPath_obj::_point->set_x(this->object->x);
HXLINE( 345)			::flixel::util::FlxPath_obj::_point->set_y(this->object->y);
HXLINE( 347)			if (this->autoCenter) {
HXLINE( 349)				 ::flixel::math::FlxPoint _this = ::flixel::util::FlxPath_obj::_point;
HXDLIN( 349)				Float X = (this->object->get_width() * ((Float)0.5));
HXDLIN( 349)				Float Y = (this->object->get_height() * ((Float)0.5));
HXDLIN( 349)				_this->set_x((_this->x + X));
HXDLIN( 349)				_this->set_y((_this->y + Y));
            			}
HXLINE( 352)			 ::flixel::math::FlxPoint _this = ::flixel::util::FlxPath_obj::_point;
HXDLIN( 352)			bool result;
HXDLIN( 352)			if ((::Math_obj::abs((_this->x - node->x)) <= ((Float)0.0000001))) {
HXLINE( 352)				result = (::Math_obj::abs((_this->y - node->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 352)				result = false;
            			}
HXDLIN( 352)			if (node->_weak) {
HXLINE( 352)				node->put();
            			}
HXDLIN( 352)			if (!(result)) {
HXLINE( 354)				this->calculateVelocity(node,horizontalOnly,verticalOnly);
            			}
            			else {
HXLINE( 358)				this->object->velocity->set(null(),null());
            			}
HXLINE( 362)			if (this->_autoRotate) {
HXLINE( 364)				this->object->angularVelocity = ( (Float)(0) );
HXLINE( 365)				this->object->angularAcceleration = ( (Float)(0) );
HXLINE( 366)				this->object->set_angle(this->angle);
            			}
HXLINE( 369)			if (this->finished) {
HXLINE( 371)				this->cancel();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,update,(void))

void FlxPath_obj::calculateVelocity( ::flixel::math::FlxPoint node,bool horizontalOnly,bool verticalOnly){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_378_calculateVelocity)
HXDLIN( 378)		bool _hx_tmp;
HXDLIN( 378)		if (!(horizontalOnly)) {
HXDLIN( 378)			_hx_tmp = (::flixel::util::FlxPath_obj::_point->y == node->y);
            		}
            		else {
HXDLIN( 378)			_hx_tmp = true;
            		}
HXDLIN( 378)		if (_hx_tmp) {
HXLINE( 380)			Float _hx_tmp;
HXDLIN( 380)			if ((::flixel::util::FlxPath_obj::_point->x < node->x)) {
HXLINE( 380)				_hx_tmp = this->speed;
            			}
            			else {
HXLINE( 380)				_hx_tmp = -(this->speed);
            			}
HXDLIN( 380)			this->object->velocity->set_x(_hx_tmp);
HXLINE( 381)			Float _hx_tmp1;
HXDLIN( 381)			if ((this->object->velocity->x < 0)) {
HXLINE( 381)				_hx_tmp1 = ( (Float)(-90) );
            			}
            			else {
HXLINE( 381)				_hx_tmp1 = ( (Float)(90) );
            			}
HXDLIN( 381)			this->angle = _hx_tmp1;
HXLINE( 383)			if (!(horizontalOnly)) {
HXLINE( 385)				this->object->velocity->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 388)			bool _hx_tmp;
HXDLIN( 388)			if (!(verticalOnly)) {
HXLINE( 388)				_hx_tmp = (::flixel::util::FlxPath_obj::_point->x == node->x);
            			}
            			else {
HXLINE( 388)				_hx_tmp = true;
            			}
HXDLIN( 388)			if (_hx_tmp) {
HXLINE( 390)				Float _hx_tmp;
HXDLIN( 390)				if ((::flixel::util::FlxPath_obj::_point->y < node->y)) {
HXLINE( 390)					_hx_tmp = this->speed;
            				}
            				else {
HXLINE( 390)					_hx_tmp = -(this->speed);
            				}
HXDLIN( 390)				this->object->velocity->set_y(_hx_tmp);
HXLINE( 391)				Float _hx_tmp1;
HXDLIN( 391)				if ((this->object->velocity->y < 0)) {
HXLINE( 391)					_hx_tmp1 = ( (Float)(0) );
            				}
            				else {
HXLINE( 391)					_hx_tmp1 = ( (Float)(180) );
            				}
HXDLIN( 391)				this->angle = _hx_tmp1;
HXLINE( 393)				if (!(verticalOnly)) {
HXLINE( 395)					this->object->velocity->set_x(( (Float)(0) ));
            				}
            			}
            			else {
HXLINE( 400)				Float _hx_tmp;
HXDLIN( 400)				if ((::flixel::util::FlxPath_obj::_point->x < node->x)) {
HXLINE( 400)					_hx_tmp = this->speed;
            				}
            				else {
HXLINE( 400)					_hx_tmp = -(this->speed);
            				}
HXDLIN( 400)				this->object->velocity->set_x(_hx_tmp);
HXLINE( 401)				Float _hx_tmp1;
HXDLIN( 401)				if ((::flixel::util::FlxPath_obj::_point->y < node->y)) {
HXLINE( 401)					_hx_tmp1 = this->speed;
            				}
            				else {
HXLINE( 401)					_hx_tmp1 = -(this->speed);
            				}
HXDLIN( 401)				this->object->velocity->set_y(_hx_tmp1);
HXLINE( 403)				this->angle = ::flixel::util::FlxPath_obj::_point->angleBetween(node);
HXLINE( 405)				this->object->velocity->set(0,-(this->speed));
HXLINE( 406)				 ::flixel::math::FlxPoint _hx_tmp2 = this->object->velocity;
HXDLIN( 406)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 406)				point->_inPool = false;
HXDLIN( 406)				 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 406)				point1->_weak = true;
HXDLIN( 406)				_hx_tmp2->rotate(point1,this->angle);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,calculateVelocity,(void))

 ::flixel::math::FlxPoint FlxPath_obj::advancePath(::hx::Null< bool >  __o_Snap){
            		bool Snap = __o_Snap.Default(true);
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_416_advancePath)
HXLINE( 417)		if (Snap) {
HXLINE( 419)			 ::flixel::math::FlxPoint oldNode = this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 420)			if (::hx::IsNotNull( oldNode )) {
HXLINE( 422)				if (((this->_mode & 1048576) == 0)) {
HXLINE( 424)					this->object->set_x(oldNode->x);
HXLINE( 425)					if (this->autoCenter) {
HXLINE( 426)						 ::flixel::FlxObject fh = this->object;
HXDLIN( 426)						Float fh1 = fh->x;
HXDLIN( 426)						fh->set_x((fh1 - (this->object->get_width() * ((Float)0.5))));
            					}
            				}
HXLINE( 428)				if (((this->_mode & 65536) == 0)) {
HXLINE( 430)					this->object->set_y(oldNode->y);
HXLINE( 431)					if (this->autoCenter) {
HXLINE( 432)						 ::flixel::FlxObject fh = this->object;
HXDLIN( 432)						Float fh1 = fh->y;
HXDLIN( 432)						fh->set_y((fh1 - (this->object->get_height() * ((Float)0.5))));
            					}
            				}
            			}
            		}
HXLINE( 437)		bool callComplete = false;
HXLINE( 438)		 ::flixel::util::FlxPath _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 438)		_hx_tmp->nodeIndex = (_hx_tmp->nodeIndex + this->_inc);
HXLINE( 440)		if (((this->_mode & 1) > 0)) {
HXLINE( 442)			if ((this->nodeIndex < 0)) {
HXLINE( 444)				this->nodeIndex = 0;
HXLINE( 445)				callComplete = true;
HXLINE( 446)				this->onEnd();
            			}
            		}
            		else {
HXLINE( 449)			if (((this->_mode & 16) > 0)) {
HXLINE( 451)				if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 453)					callComplete = true;
HXLINE( 454)					this->nodeIndex = 0;
            				}
            			}
            			else {
HXLINE( 457)				if (((this->_mode & 256) > 0)) {
HXLINE( 459)					if ((this->nodeIndex < 0)) {
HXLINE( 461)						this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 462)						callComplete = true;
HXLINE( 463)						if ((this->nodeIndex < 0)) {
HXLINE( 465)							this->nodeIndex = 0;
            						}
            					}
            				}
            				else {
HXLINE( 469)					if (((this->_mode & 4096) > 0)) {
HXLINE( 471)						if ((this->_inc > 0)) {
HXLINE( 473)							if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 475)								this->nodeIndex = (this->_nodes->length - 2);
HXLINE( 476)								callComplete = true;
HXLINE( 477)								if ((this->nodeIndex < 0)) {
HXLINE( 479)									this->nodeIndex = 0;
            								}
HXLINE( 481)								this->_inc = -(this->_inc);
            							}
            						}
            						else {
HXLINE( 484)							if ((this->nodeIndex < 0)) {
HXLINE( 486)								this->nodeIndex = 1;
HXLINE( 487)								callComplete = true;
HXLINE( 488)								if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 490)									this->nodeIndex = (this->_nodes->length - 1);
            								}
HXLINE( 492)								if ((this->nodeIndex < 0)) {
HXLINE( 494)									this->nodeIndex = 0;
            								}
HXLINE( 496)								this->_inc = -(this->_inc);
            							}
            						}
            					}
            					else {
HXLINE( 501)						if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 503)							this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 504)							callComplete = true;
HXLINE( 505)							this->onEnd();
            						}
            					}
            				}
            			}
            		}
HXLINE( 509)		bool _hx_tmp1;
HXDLIN( 509)		if (callComplete) {
HXLINE( 509)			_hx_tmp1 = ::hx::IsNotNull( this->onComplete );
            		}
            		else {
HXLINE( 509)			_hx_tmp1 = false;
            		}
HXDLIN( 509)		if (_hx_tmp1) {
HXLINE( 511)			this->onComplete(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 514)		return this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxPoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

 ::flixel::util::FlxPath FlxPath_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_523_cancel)
HXLINE( 524)		this->onEnd();
HXLINE( 526)		if (::hx::IsNotNull( this->object )) {
HXLINE( 528)			this->object->velocity->set(0,0);
            		}
HXLINE( 530)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,return )

void FlxPath_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_537_onEnd)
HXLINE( 538)		this->finished = true;
HXLINE( 539)		this->active = false;
HXLINE( 540)		if (::hx::IsNotNull( this->_wasObjectImmovable )) {
HXLINE( 541)			this->object->set_immovable(( (bool)(this->_wasObjectImmovable) ));
            		}
HXLINE( 542)		this->_wasObjectImmovable = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,onEnd,(void))

void FlxPath_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_549_destroy)
HXLINE( 550)		::flixel::util::FlxDestroyUtil_obj::putArray(this->_nodes);
HXLINE( 551)		this->_nodes = null();
HXLINE( 552)		this->object = null();
HXLINE( 553)		this->onComplete = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

 ::flixel::util::FlxPath FlxPath_obj::add(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_565_add)
HXLINE( 566)		::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 566)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 566)		point->_inPool = false;
HXDLIN( 566)		_hx_tmp->push(point);
HXLINE( 567)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

 ::flixel::util::FlxPath FlxPath_obj::addAt(Float X,Float Y,int Index){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_580_addAt)
HXLINE( 581)		if ((Index < 0)) {
HXLINE( 582)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 583)		::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 583)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 583)		point->_inPool = false;
HXDLIN( 583)		_hx_tmp->insert(Index,point);
HXLINE( 584)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

 ::flixel::util::FlxPath FlxPath_obj::addPoint( ::flixel::math::FlxPoint Node,::hx::Null< bool >  __o_AsReference){
            		bool AsReference = __o_AsReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_598_addPoint)
HXLINE( 599)		if (AsReference) {
HXLINE( 601)			this->_nodes->push(Node);
            		}
            		else {
HXLINE( 605)			::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 605)			Float X = Node->x;
HXDLIN( 605)			Float Y = Node->y;
HXDLIN( 605)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 605)			point->_inPool = false;
HXDLIN( 605)			_hx_tmp->push(point);
            		}
HXLINE( 607)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

 ::flixel::util::FlxPath FlxPath_obj::addPointAt( ::flixel::math::FlxPoint Node,int Index,::hx::Null< bool >  __o_AsReference){
            		bool AsReference = __o_AsReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_622_addPointAt)
HXLINE( 623)		if ((Index < 0)) {
HXLINE( 624)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 625)		if (AsReference) {
HXLINE( 627)			this->_nodes->insert(Index,Node);
            		}
            		else {
HXLINE( 631)			::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 631)			Float X = Node->x;
HXDLIN( 631)			Float Y = Node->y;
HXDLIN( 631)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 631)			point->_inPool = false;
HXDLIN( 631)			_hx_tmp->insert(Index,point);
            		}
HXLINE( 633)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

 ::flixel::math::FlxPoint FlxPath_obj::remove( ::flixel::math::FlxPoint Node){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_644_remove)
HXLINE( 645)		int index = this->_nodes->indexOf(Node,null());
HXLINE( 646)		if ((index >= 0)) {
HXLINE( 648)			return this->_nodes->splice(index,1)->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
            		}
HXLINE( 650)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

 ::flixel::math::FlxPoint FlxPath_obj::removeAt(int Index){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_660_removeAt)
HXLINE( 661)		if ((this->_nodes->length <= 0)) {
HXLINE( 663)			return null();
            		}
HXLINE( 665)		if ((Index >= (this->_nodes->length - 1))) {
HXLINE( 667)			this->_nodes->pop().StaticCast<  ::flixel::math::FlxPoint >();
            		}
HXLINE( 669)		return this->_nodes->splice(Index,1)->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

 ::flixel::math::FlxPoint FlxPath_obj::head(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_678_head)
HXLINE( 679)		if ((this->_nodes->length > 0)) {
HXLINE( 681)			return this->_nodes->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
            		}
HXLINE( 683)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

 ::flixel::math::FlxPoint FlxPath_obj::tail(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_692_tail)
HXLINE( 693)		if ((this->_nodes->length > 0)) {
HXLINE( 695)			return this->_nodes->__get((this->_nodes->length - 1)).StaticCast<  ::flixel::math::FlxPoint >();
            		}
HXLINE( 697)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

void FlxPath_obj::drawDebug( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_711_drawDebug)
HXLINE( 712)		bool _hx_tmp;
HXDLIN( 712)		if (::hx::IsNotNull( this->_nodes )) {
HXLINE( 712)			_hx_tmp = (this->_nodes->length <= 0);
            		}
            		else {
HXLINE( 712)			_hx_tmp = true;
            		}
HXDLIN( 712)		if (_hx_tmp) {
HXLINE( 714)			return;
            		}
HXLINE( 716)		if (::hx::IsNull( Camera )) {
HXLINE( 718)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 721)		 ::openfl::display::Graphics gfx = null();
HXLINE( 724)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 726)			gfx = ::flixel::util::FlxSpriteUtil_obj::flashGfx;
HXLINE( 727)			gfx->clear();
            		}
            		else {
HXLINE( 731)			gfx = Camera->debugLayer->get_graphics();
            		}
HXLINE( 735)		 ::flixel::math::FlxPoint node;
HXLINE( 736)		 ::flixel::math::FlxPoint nextNode;
HXLINE( 737)		int i = 0;
HXLINE( 738)		int l = this->_nodes->length;
HXLINE( 739)		while((i < l)){
HXLINE( 742)			node = this->_nodes->__get(i).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 745)			::flixel::util::FlxPath_obj::_point->set_x((node->x - (Camera->scroll->x * this->object->scrollFactor->x)));
HXLINE( 746)			::flixel::util::FlxPath_obj::_point->set_y((node->y - (Camera->scroll->y * this->object->scrollFactor->y)));
HXLINE( 748)			::flixel::util::FlxPath_obj::_point = Camera->transformPoint(::flixel::util::FlxPath_obj::_point);
HXLINE( 751)			int nodeSize = 2;
HXLINE( 752)			bool _hx_tmp;
HXDLIN( 752)			if ((i != 0)) {
HXLINE( 752)				_hx_tmp = (i == (l - 1));
            			}
            			else {
HXLINE( 752)				_hx_tmp = true;
            			}
HXDLIN( 752)			if (_hx_tmp) {
HXLINE( 754)				nodeSize = (nodeSize * 2);
            			}
HXLINE( 756)			int nodeColor = this->debugColor;
HXLINE( 757)			if ((l > 1)) {
HXLINE( 759)				if ((i == 0)) {
HXLINE( 761)					nodeColor = -16744448;
            				}
            				else {
HXLINE( 763)					if ((i == (l - 1))) {
HXLINE( 765)						nodeColor = -65536;
            					}
            				}
            			}
HXLINE( 770)			gfx->beginFill(nodeColor,((Float)0.5));
HXLINE( 771)			gfx->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 772)			gfx->drawRect((::flixel::util::FlxPath_obj::_point->x - (( (Float)(nodeSize) ) * ((Float)0.5))),(::flixel::util::FlxPath_obj::_point->y - (( (Float)(nodeSize) ) * ((Float)0.5))),( (Float)(nodeSize) ),( (Float)(nodeSize) ));
HXLINE( 773)			gfx->endFill();
HXLINE( 776)			Float lineAlpha = ((Float)0.3);
HXLINE( 777)			if ((i < (l - 1))) {
HXLINE( 779)				nextNode = this->_nodes->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >();
            			}
            			else {
HXLINE( 783)				nextNode = this->_nodes->__get(i).StaticCast<  ::flixel::math::FlxPoint >();
            			}
HXLINE( 787)			gfx->moveTo(::flixel::util::FlxPath_obj::_point->x,::flixel::util::FlxPath_obj::_point->y);
HXLINE( 788)			gfx->lineStyle(1,this->debugColor,lineAlpha,null(),null(),null(),null(),null());
HXLINE( 789)			::flixel::util::FlxPath_obj::_point->set_x((nextNode->x - (Camera->scroll->x * this->object->scrollFactor->x)));
HXLINE( 790)			::flixel::util::FlxPath_obj::_point->set_y((nextNode->y - (Camera->scroll->y * this->object->scrollFactor->y)));
HXLINE( 792)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 793)				 ::flixel::math::FlxPoint _this = ::flixel::util::FlxPath_obj::_point;
HXDLIN( 793)				Float Y = Camera->viewOffsetY;
HXDLIN( 793)				_this->set_x((_this->x - Camera->viewOffsetX));
HXDLIN( 793)				_this->set_y((_this->y - Y));
            			}
HXLINE( 795)			gfx->lineTo(::flixel::util::FlxPath_obj::_point->x,::flixel::util::FlxPath_obj::_point->y);
HXLINE( 797)			i = (i + 1);
            		}
HXLINE( 800)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 803)			Camera->buffer->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,drawDebug,(void))

::Array< ::Dynamic> FlxPath_obj::get_nodes(){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_810_get_nodes)
HXDLIN( 810)		return this->_nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,get_nodes,return )

::Array< ::Dynamic> FlxPath_obj::set_nodes(::Array< ::Dynamic> Nodes){
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_814_set_nodes)
HXLINE( 815)		if (::hx::IsNotNull( Nodes )) {
HXLINE( 817)			this->_nodes = Nodes;
            		}
HXLINE( 819)		return this->_nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,set_nodes,return )

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

int FlxPath_obj::HORIZONTAL_ONLY;

int FlxPath_obj::VERTICAL_ONLY;

 ::flixel::math::FlxPoint FlxPath_obj::_point;


::hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new(::Array< ::Dynamic> Nodes) {
	::hx::ObjectPtr< FlxPath_obj > __this = new FlxPath_obj();
	__this->__construct(Nodes);
	return __this;
}

::hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> Nodes) {
	FlxPath_obj *__this = (FlxPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPath_obj), true, "flixel.util.FlxPath"));
	*(void **)__this = FlxPath_obj::_hx_vtable;
	__this->__construct(Nodes);
	return __this;
}

FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(_nodes,"_nodes");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(autoCenter,"autoCenter");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(debugColor,"debugColor");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_MARK_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nodes,"_nodes");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(autoCenter,"autoCenter");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(debugColor,"debugColor");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_VISIT_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_VISIT_MEMBER_NAME(object,"object");
}

::hx::Val FlxPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { return ::hx::Val( _inc ); }
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head_dyn() ); }
		if (HX_FIELD_EQ(inName,"tail") ) { return ::hx::Val( tail_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_nodes() ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"_mode") ) { return ::hx::Val( _mode ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return ::hx::Val( addAt_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { return ::hx::Val( _nodes ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return ::hx::Val( setNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return ::hx::Val( removeAt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { return ::hx::Val( nodeIndex ); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return ::hx::Val( drawDebug_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nodes") ) { return ::hx::Val( get_nodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_nodes") ) { return ::hx::Val( set_nodes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { return ::hx::Val( autoCenter ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"debugColor") ) { return ::hx::Val( debugColor ); }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return ::hx::Val( addPointAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { return ::hx::Val( _autoRotate ); }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return ::hx::Val( advancePath_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { return ::hx::Val( _firstUpdate ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setProperties") ) { return ::hx::Val( setProperties_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ::hx::Val( ignoreDrawDebug ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calculateVelocity") ) { return ::hx::Val( calculateVelocity_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return ::hx::Val( _wasObjectImmovable ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = ( _point ); return true; }
	}
	return false;
}

::hx::Val FlxPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_nodes(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { _nodes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { nodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { autoCenter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugColor") ) { debugColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { _autoRotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { _firstUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nodes",31,b8,be,9f));
	outFields->push(HX_("_nodes",72,ff,a5,9b));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("autoCenter",a4,36,a6,71));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("debugColor",10,42,40,49));
	outFields->push(HX_("ignoreDrawDebug",3d,fc,11,6b));
	outFields->push(HX_("nodeIndex",b0,79,4a,62));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("_mode",42,ef,71,fb));
	outFields->push(HX_("_inc",df,51,1b,3f));
	outFields->push(HX_("_autoRotate",49,24,75,09));
	outFields->push(HX_("_wasObjectImmovable",41,d9,92,98));
	outFields->push(HX_("_firstUpdate",5a,64,b1,d1));
	outFields->push(HX_("object",bf,7e,3f,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxPath_obj,_nodes),HX_("_nodes",72,ff,a5,9b)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,autoCenter),HX_("autoCenter",a4,36,a6,71)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxPath_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,debugColor),HX_("debugColor",10,42,40,49)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,ignoreDrawDebug),HX_("ignoreDrawDebug",3d,fc,11,6b)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,nodeIndex),HX_("nodeIndex",b0,79,4a,62)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_("_mode",42,ef,71,fb)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_("_inc",df,51,1b,3f)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,_autoRotate),HX_("_autoRotate",49,24,75,09)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxPath_obj,_wasObjectImmovable),HX_("_wasObjectImmovable",41,d9,92,98)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,_firstUpdate),HX_("_firstUpdate",5a,64,b1,d1)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxPath_obj,object),HX_("object",bf,7e,3f,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxPath_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxPath_obj::FORWARD,HX_("FORWARD",a5,b5,9e,65)},
	{::hx::fsInt,(void *) &FlxPath_obj::BACKWARD,HX_("BACKWARD",e3,6b,9e,80)},
	{::hx::fsInt,(void *) &FlxPath_obj::LOOP_FORWARD,HX_("LOOP_FORWARD",8a,81,3a,2b)},
	{::hx::fsInt,(void *) &FlxPath_obj::LOOP_BACKWARD,HX_("LOOP_BACKWARD",5e,08,55,a3)},
	{::hx::fsInt,(void *) &FlxPath_obj::YOYO,HX_("YOYO",2c,3d,10,3b)},
	{::hx::fsInt,(void *) &FlxPath_obj::HORIZONTAL_ONLY,HX_("HORIZONTAL_ONLY",e7,3d,5f,9a)},
	{::hx::fsInt,(void *) &FlxPath_obj::VERTICAL_ONLY,HX_("VERTICAL_ONLY",15,31,92,7f)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxPath_obj::_point,HX_("_point",91,fb,76,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPath_obj_sMemberFields[] = {
	HX_("_nodes",72,ff,a5,9b),
	HX_("speed",87,97,69,81),
	HX_("angle",d3,43,e2,22),
	HX_("autoCenter",a4,36,a6,71),
	HX_("active",c6,41,46,16),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("debugColor",10,42,40,49),
	HX_("ignoreDrawDebug",3d,fc,11,6b),
	HX_("nodeIndex",b0,79,4a,62),
	HX_("finished",72,93,0e,95),
	HX_("_mode",42,ef,71,fb),
	HX_("_inc",df,51,1b,3f),
	HX_("_autoRotate",49,24,75,09),
	HX_("_wasObjectImmovable",41,d9,92,98),
	HX_("_firstUpdate",5a,64,b1,d1),
	HX_("object",bf,7e,3f,15),
	HX_("reset",cf,49,c8,e6),
	HX_("setProperties",35,3a,87,02),
	HX_("start",62,74,0b,84),
	HX_("restart",cf,c7,a5,6a),
	HX_("setNode",c4,4a,8e,0e),
	HX_("update",09,86,05,87),
	HX_("calculateVelocity",a3,29,67,06),
	HX_("advancePath",47,83,f2,a8),
	HX_("cancel",7a,ed,33,b8),
	HX_("onEnd",fc,97,64,32),
	HX_("destroy",fa,2c,86,24),
	HX_("add",21,f2,49,00),
	HX_("addAt",74,b5,43,1c),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addPointAt",42,cd,ab,b8),
	HX_("remove",44,9c,88,04),
	HX_("removeAt",57,6e,1b,ad),
	HX_("head",20,29,0b,45),
	HX_("tail",90,b6,f6,4c),
	HX_("drawDebug",af,87,2a,9f),
	HX_("get_nodes",88,14,68,e3),
	HX_("set_nodes",94,00,b9,c6),
	::String(null()) };

static void FlxPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

::hx::Class FlxPath_obj::__mClass;

static ::String FlxPath_obj_sStaticFields[] = {
	HX_("FORWARD",a5,b5,9e,65),
	HX_("BACKWARD",e3,6b,9e,80),
	HX_("LOOP_FORWARD",8a,81,3a,2b),
	HX_("LOOP_BACKWARD",5e,08,55,a3),
	HX_("YOYO",2c,3d,10,3b),
	HX_("HORIZONTAL_ONLY",e7,3d,5f,9a),
	HX_("VERTICAL_ONLY",15,31,92,7f),
	HX_("_point",91,fb,76,c2),
	::String(null())
};

void FlxPath_obj::__register()
{
	FlxPath_obj _hx_dummy;
	FlxPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxPath",fd,cb,52,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPath_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPath_obj::__SetStatic;
	__mClass->mMarkFunc = FlxPath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxPath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_49_boot)
HXDLIN(  49)		FORWARD = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_54_boot)
HXDLIN(  54)		BACKWARD = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_59_boot)
HXDLIN(  59)		LOOP_FORWARD = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_64_boot)
HXDLIN(  64)		LOOP_BACKWARD = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_69_boot)
HXDLIN(  69)		YOYO = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_74_boot)
HXDLIN(  74)		HORIZONTAL_ONLY = 65536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_79_boot)
HXDLIN(  79)		VERTICAL_ONLY = 1048576;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_84_boot)
HXDLIN(  84)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  84)			point->_inPool = false;
HXDLIN(  84)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_bbe6117fedb3c10f_84_boot)
HXDLIN(  84)		_point = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace util
