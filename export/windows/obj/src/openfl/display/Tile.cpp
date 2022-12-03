#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_286_new,"openfl.display.Tile","new",0xe2a1098a,"openfl.display.Tile.new","openfl/display/Tile.hx",286,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_311_clone,"openfl.display.Tile","clone",0x43506b07,"openfl.display.Tile.clone","openfl/display/Tile.hx",311,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_347_getBounds,"openfl.display.Tile","getBounds",0x16778455,"openfl.display.Tile.getBounds","openfl/display/Tile.hx",347,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_421___getBounds,"openfl.display.Tile","__getBounds",0xe3e9cbb5,"openfl.display.Tile.__getBounds","openfl/display/Tile.hx",421,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_435_hitTestTile,"openfl.display.Tile","hitTestTile",0xcb74d13d,"openfl.display.Tile.hitTestTile","openfl/display/Tile.hx",435,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_456_invalidate,"openfl.display.Tile","invalidate",0xd62cb991,"openfl.display.Tile.invalidate","openfl/display/Tile.hx",456,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_460___findTileRect,"openfl.display.Tile","__findTileRect",0x538f4701,"openfl.display.Tile.__findTileRect","openfl/display/Tile.hx",460,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_497___findTileset,"openfl.display.Tile","__findTileset",0xdce29485,"openfl.display.Tile.__findTileset","openfl/display/Tile.hx",497,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_512___getWorldTransform,"openfl.display.Tile","__getWorldTransform",0x5e0ca1fa,"openfl.display.Tile.__getWorldTransform","openfl/display/Tile.hx",512,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_526___setRenderDirty,"openfl.display.Tile","__setRenderDirty",0xfb121810,"openfl.display.Tile.__setRenderDirty","openfl/display/Tile.hx",526,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_541_get_alpha,"openfl.display.Tile","get_alpha",0x9943785f,"openfl.display.Tile.get_alpha","openfl/display/Tile.hx",541,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_545_set_alpha,"openfl.display.Tile","set_alpha",0x7c94646b,"openfl.display.Tile.set_alpha","openfl/display/Tile.hx",545,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_557_get_blendMode,"openfl.display.Tile","get_blendMode",0x1c87c9d5,"openfl.display.Tile.get_blendMode","openfl/display/Tile.hx",557,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_561_set_blendMode,"openfl.display.Tile","set_blendMode",0x618dabe1,"openfl.display.Tile.set_blendMode","openfl/display/Tile.hx",561,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_573_get_colorTransform,"openfl.display.Tile","get_colorTransform",0x6c3b5e68,"openfl.display.Tile.get_colorTransform","openfl/display/Tile.hx",573,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_577_set_colorTransform,"openfl.display.Tile","set_colorTransform",0x48ea90dc,"openfl.display.Tile.set_colorTransform","openfl/display/Tile.hx",577,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_588_get_height,"openfl.display.Tile","get_height",0x41d617c6,"openfl.display.Tile.get_height","openfl/display/Tile.hx",588,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_602_set_height,"openfl.display.Tile","set_height",0x4553b63a,"openfl.display.Tile.set_height","openfl/display/Tile.hx",602,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_618_get_id,"openfl.display.Tile","get_id",0x37ef503a,"openfl.display.Tile.get_id","openfl/display/Tile.hx",618,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_622_set_id,"openfl.display.Tile","set_id",0x0437a4ae,"openfl.display.Tile.set_id","openfl/display/Tile.hx",622,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_634_get_matrix,"openfl.display.Tile","get_matrix",0xfb524620,"openfl.display.Tile.get_matrix","openfl/display/Tile.hx",634,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_638_set_matrix,"openfl.display.Tile","set_matrix",0xfecfe494,"openfl.display.Tile.set_matrix","openfl/display/Tile.hx",638,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_653_get_originX,"openfl.display.Tile","get_originX",0xaf3962f3,"openfl.display.Tile.get_originX","openfl/display/Tile.hx",653,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_657_set_originX,"openfl.display.Tile","set_originX",0xb9a669ff,"openfl.display.Tile.set_originX","openfl/display/Tile.hx",657,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_669_get_originY,"openfl.display.Tile","get_originY",0xaf3962f4,"openfl.display.Tile.get_originY","openfl/display/Tile.hx",669,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_673_set_originY,"openfl.display.Tile","set_originY",0xb9a66a00,"openfl.display.Tile.set_originY","openfl/display/Tile.hx",673,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_685_get_rect,"openfl.display.Tile","get_rect",0x94835743,"openfl.display.Tile.get_rect","openfl/display/Tile.hx",685,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_689_set_rect,"openfl.display.Tile","set_rect",0x42e0b0b7,"openfl.display.Tile.set_rect","openfl/display/Tile.hx",689,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_700_get_rotation,"openfl.display.Tile","get_rotation",0xca9b42dd,"openfl.display.Tile.get_rotation","openfl/display/Tile.hx",700,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_723_set_rotation,"openfl.display.Tile","set_rotation",0xdf946651,"openfl.display.Tile.set_rotation","openfl/display/Tile.hx",723,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_746_get_scaleX,"openfl.display.Tile","get_scaleX",0x7baffa6d,"openfl.display.Tile.get_scaleX","openfl/display/Tile.hx",746,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_763_set_scaleX,"openfl.display.Tile","set_scaleX",0x7f2d98e1,"openfl.display.Tile.set_scaleX","openfl/display/Tile.hx",763,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_790_get_scaleY,"openfl.display.Tile","get_scaleY",0x7baffa6e,"openfl.display.Tile.get_scaleY","openfl/display/Tile.hx",790,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_807_set_scaleY,"openfl.display.Tile","set_scaleY",0x7f2d98e2,"openfl.display.Tile.set_scaleY","openfl/display/Tile.hx",807,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_835_get_shader,"openfl.display.Tile","get_shader",0x5caacf04,"openfl.display.Tile.get_shader","openfl/display/Tile.hx",835,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_839_set_shader,"openfl.display.Tile","set_shader",0x60286d78,"openfl.display.Tile.set_shader","openfl/display/Tile.hx",839,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_851_get_tileset,"openfl.display.Tile","get_tileset",0x9ed75475,"openfl.display.Tile.get_tileset","openfl/display/Tile.hx",851,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_855_set_tileset,"openfl.display.Tile","set_tileset",0xa9445b81,"openfl.display.Tile.set_tileset","openfl/display/Tile.hx",855,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_867_get_visible,"openfl.display.Tile","get_visible",0xfc684bb3,"openfl.display.Tile.get_visible","openfl/display/Tile.hx",867,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_871_set_visible,"openfl.display.Tile","set_visible",0x06d552bf,"openfl.display.Tile.set_visible","openfl/display/Tile.hx",871,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_882_get_width,"openfl.display.Tile","get_width",0x420f8707,"openfl.display.Tile.get_width","openfl/display/Tile.hx",882,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_897_set_width,"openfl.display.Tile","set_width",0x25607313,"openfl.display.Tile.set_width","openfl/display/Tile.hx",897,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_913_get_x,"openfl.display.Tile","get_x",0x8c4dfcf9,"openfl.display.Tile.get_x","openfl/display/Tile.hx",913,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_917_set_x,"openfl.display.Tile","set_x",0x751cf305,"openfl.display.Tile.set_x","openfl/display/Tile.hx",917,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_929_get_y,"openfl.display.Tile","get_y",0x8c4dfcfa,"openfl.display.Tile.get_y","openfl/display/Tile.hx",929,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_933_set_y,"openfl.display.Tile","set_y",0x751cf306,"openfl.display.Tile.set_y","openfl/display/Tile.hx",933,0xb47c9064)
HX_LOCAL_STACK_FRAME(_hx_pos_6c0e6bae55b32aaf_31_boot,"openfl.display.Tile","boot",0x62604fc8,"openfl.display.Tile.boot","openfl/display/Tile.hx",31,0xb47c9064)
namespace openfl{
namespace display{

void Tile_obj::__construct(::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_originX,::hx::Null< Float >  __o_originY){
            		int id = __o_id.Default(0);
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float scaleX = __o_scaleX.Default(1);
            		Float scaleY = __o_scaleY.Default(1);
            		Float rotation = __o_rotation.Default(0);
            		Float originX = __o_originX.Default(0);
            		Float originY = __o_originY.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_286_new)
HXLINE( 287)		this->_hx___id = id;
HXLINE( 289)		this->_hx___matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 290)		if ((x != 0)) {
HXLINE( 290)			this->set_x(x);
            		}
HXLINE( 291)		if ((y != 0)) {
HXLINE( 291)			this->set_y(y);
            		}
HXLINE( 292)		if ((scaleX != 1)) {
HXLINE( 292)			this->set_scaleX(scaleX);
            		}
HXLINE( 293)		if ((scaleY != 1)) {
HXLINE( 293)			this->set_scaleY(scaleY);
            		}
HXLINE( 294)		if ((rotation != 0)) {
HXLINE( 294)			this->set_rotation(rotation);
            		}
HXLINE( 296)		this->_hx___dirty = true;
HXLINE( 297)		this->__length = 0;
HXLINE( 298)		this->_hx___originX = originX;
HXLINE( 299)		this->_hx___originY = originY;
HXLINE( 300)		this->_hx___alpha = ( (Float)(1) );
HXLINE( 301)		this->_hx___blendMode = null();
HXLINE( 302)		this->_hx___visible = true;
            	}

Dynamic Tile_obj::__CreateEmpty() { return new Tile_obj; }

void *Tile_obj::_hx_vtable = 0;

Dynamic Tile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tile_obj > _hx_result = new Tile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool Tile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c045ac0;
}

 ::openfl::display::Tile Tile_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_311_clone)
HXLINE( 312)		 ::openfl::display::Tile tile =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,this->_hx___id,null(),null(),null(),null(),null(),null(),null());
HXLINE( 313)		tile->_hx___alpha = this->_hx___alpha;
HXLINE( 314)		tile->_hx___blendMode = this->_hx___blendMode;
HXLINE( 315)		tile->_hx___originX = this->_hx___originX;
HXLINE( 316)		tile->_hx___originY = this->_hx___originY;
HXLINE( 318)		if (::hx::IsNotNull( this->_hx___rect )) {
HXLINE( 318)			tile->_hx___rect = this->_hx___rect->clone();
            		}
HXLINE( 320)		tile->set_matrix(this->_hx___matrix->clone());
HXLINE( 321)		tile->_hx___shader = this->_hx___shader;
HXLINE( 322)		tile->set_tileset(this->_hx___tileset);
HXLINE( 324)		if (::hx::IsNotNull( this->_hx___colorTransform )) {
HXLINE( 331)			tile->_hx___colorTransform = this->_hx___colorTransform->_hx___clone();
            		}
HXLINE( 335)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,clone,return )

 ::openfl::geom::Rectangle Tile_obj::getBounds( ::openfl::display::Tile targetCoordinateSpace){
            	HX_GC_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_347_getBounds)
HXLINE( 348)		 ::openfl::geom::Rectangle result =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 350)		this->_hx___findTileRect(result);
HXLINE( 353)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 355)		bool _hx_tmp;
HXDLIN( 355)		if (::hx::IsNotNull( targetCoordinateSpace )) {
HXLINE( 355)			_hx_tmp = ::hx::IsInstanceNotEq( targetCoordinateSpace,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 355)			_hx_tmp = false;
            		}
HXDLIN( 355)		if (_hx_tmp) {
HXLINE( 357)			matrix->copyFrom(this->_hx___getWorldTransform());
HXLINE( 358)			 ::openfl::geom::Matrix targetMatrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 360)			targetMatrix->copyFrom(targetCoordinateSpace->_hx___getWorldTransform());
HXLINE( 361)			targetMatrix->invert();
HXLINE( 363)			matrix->concat(targetMatrix);
HXLINE( 366)			::openfl::geom::Matrix_obj::_hx___pool->release(targetMatrix);
            		}
            		else {
HXLINE( 371)			matrix->identity();
            		}
HXLINE( 374)		this->_hx___getBounds(result,matrix);
HXLINE( 377)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE( 380)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getBounds,return )

void Tile_obj::_hx___getBounds( ::openfl::geom::Rectangle result, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_421___getBounds)
HXDLIN( 421)		result->_hx___transform(result,matrix);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,_hx___getBounds,(void))

bool Tile_obj::hitTestTile( ::openfl::display::Tile obj){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_435_hitTestTile)
HXLINE( 436)		bool _hx_tmp;
HXDLIN( 436)		bool _hx_tmp1;
HXDLIN( 436)		if (::hx::IsNotNull( obj )) {
HXLINE( 436)			_hx_tmp1 = ::hx::IsNotNull( obj->parent );
            		}
            		else {
HXLINE( 436)			_hx_tmp1 = false;
            		}
HXDLIN( 436)		if (_hx_tmp1) {
HXLINE( 436)			_hx_tmp = ::hx::IsNotNull( this->parent );
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 438)			 ::openfl::geom::Rectangle currentBounds = this->getBounds(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 439)			 ::openfl::geom::Rectangle targetBounds = obj->getBounds(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 440)			return currentBounds->intersects(targetBounds);
            		}
HXLINE( 443)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,hitTestTile,return )

void Tile_obj::invalidate(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_456_invalidate)
HXDLIN( 456)		this->_hx___setRenderDirty();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,invalidate,(void))

void Tile_obj::_hx___findTileRect( ::openfl::geom::Rectangle result){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_460___findTileRect)
HXLINE( 461)		if (::hx::IsNull( this->get_tileset() )) {
HXLINE( 463)			if (::hx::IsNotNull( this->parent )) {
HXLINE( 465)				 ::openfl::display::Tileset parentTileset = this->parent->_hx___findTileset();
HXLINE( 466)				if (::hx::IsNull( parentTileset )) {
HXLINE( 468)					result->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            				}
            				else {
HXLINE( 473)					 ::openfl::geom::Rectangle _g = parentTileset->getRect(this->get_id());
HXLINE( 475)					if (::hx::IsNull( _g )) {
HXLINE( 476)						result->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            					}
            					else {
HXLINE( 477)						 ::openfl::geom::Rectangle not_null = _g;
HXLINE( 478)						result->copyFrom(not_null);
            					}
            				}
            			}
            			else {
HXLINE( 484)				result->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 489)			 ::openfl::display::Tileset _hx_tmp = this->get_tileset();
HXDLIN( 489)			result->copyFrom(_hx_tmp->getRect(this->get_id()));
            		}
HXLINE( 492)		result->x = ( (Float)(0) );
HXLINE( 493)		result->y = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,_hx___findTileRect,(void))

 ::openfl::display::Tileset Tile_obj::_hx___findTileset(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_497___findTileset)
HXLINE( 500)		if (::hx::IsNotNull( this->get_tileset() )) {
HXLINE( 500)			return this->get_tileset();
            		}
HXLINE( 501)		if (::Std_obj::isOfType(this->parent,::hx::ClassOf< ::openfl::display::Tilemap >())) {
HXLINE( 501)			return this->parent->get_tileset();
            		}
HXLINE( 502)		if (::hx::IsNull( this->parent )) {
HXLINE( 502)			return null();
            		}
HXLINE( 503)		return this->parent->_hx___findTileset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,_hx___findTileset,return )

 ::openfl::geom::Matrix Tile_obj::_hx___getWorldTransform(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_512___getWorldTransform)
HXLINE( 513)		 ::openfl::geom::Matrix retval = this->get_matrix()->clone();
HXLINE( 515)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 517)			retval->concat(this->parent->_hx___getWorldTransform());
            		}
HXLINE( 520)		return retval;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,_hx___getWorldTransform,return )

void Tile_obj::_hx___setRenderDirty(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_526___setRenderDirty)
HXDLIN( 526)		if (!(this->_hx___dirty)) {
HXLINE( 528)			this->_hx___dirty = true;
HXLINE( 530)			if (::hx::IsNotNull( this->parent )) {
HXLINE( 532)				this->parent->_hx___setRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,_hx___setRenderDirty,(void))

Float Tile_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_541_get_alpha)
HXDLIN( 541)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_alpha,return )

Float Tile_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_545_set_alpha)
HXLINE( 546)		if ((value != this->_hx___alpha)) {
HXLINE( 548)			this->_hx___alpha = value;
HXLINE( 549)			this->_hx___setRenderDirty();
            		}
HXLINE( 552)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_alpha,return )

 ::Dynamic Tile_obj::get_blendMode(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_557_get_blendMode)
HXDLIN( 557)		return this->_hx___blendMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_blendMode,return )

 ::Dynamic Tile_obj::set_blendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_561_set_blendMode)
HXLINE( 562)		if (::hx::IsNotEq( value,this->_hx___blendMode )) {
HXLINE( 564)			this->_hx___blendMode = value;
HXLINE( 565)			this->_hx___setRenderDirty();
            		}
HXLINE( 568)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_blendMode,return )

 ::openfl::geom::ColorTransform Tile_obj::get_colorTransform(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_573_get_colorTransform)
HXDLIN( 573)		return this->_hx___colorTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_colorTransform,return )

 ::openfl::geom::ColorTransform Tile_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_577_set_colorTransform)
HXLINE( 578)		if (::hx::IsInstanceNotEq( value,this->_hx___colorTransform )) {
HXLINE( 580)			this->_hx___colorTransform = value;
HXLINE( 581)			this->_hx___setRenderDirty();
            		}
HXLINE( 584)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_colorTransform,return )

Float Tile_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_588_get_height)
HXLINE( 589)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 591)		this->_hx___findTileRect(result);
HXLINE( 593)		this->_hx___getBounds(result,this->get_matrix());
HXLINE( 594)		Float h = result->height;
HXLINE( 596)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 598)		return h;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_height,return )

Float Tile_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_602_set_height)
HXLINE( 603)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 605)		this->_hx___findTileRect(result);
HXLINE( 606)		if ((result->height != 0)) {
HXLINE( 608)			this->set_scaleY((value / result->height));
            		}
HXLINE( 611)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 613)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_height,return )

int Tile_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_618_get_id)
HXDLIN( 618)		return this->_hx___id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_id,return )

int Tile_obj::set_id(int value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_622_set_id)
HXLINE( 623)		if ((value != this->_hx___id)) {
HXLINE( 625)			this->_hx___id = value;
HXLINE( 626)			this->_hx___setRenderDirty();
            		}
HXLINE( 629)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_id,return )

 ::openfl::geom::Matrix Tile_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_634_get_matrix)
HXDLIN( 634)		return this->_hx___matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_matrix,return )

 ::openfl::geom::Matrix Tile_obj::set_matrix( ::openfl::geom::Matrix value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_638_set_matrix)
HXLINE( 639)		if (::hx::IsInstanceNotEq( value,this->_hx___matrix )) {
HXLINE( 641)			this->_hx___rotation = null();
HXLINE( 642)			this->_hx___scaleX = null();
HXLINE( 643)			this->_hx___scaleY = null();
HXLINE( 644)			this->_hx___matrix = value;
HXLINE( 645)			this->_hx___setRenderDirty();
            		}
HXLINE( 648)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_matrix,return )

Float Tile_obj::get_originX(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_653_get_originX)
HXDLIN( 653)		return this->_hx___originX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_originX,return )

Float Tile_obj::set_originX(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_657_set_originX)
HXLINE( 658)		if ((value != this->_hx___originX)) {
HXLINE( 660)			this->_hx___originX = value;
HXLINE( 661)			this->_hx___setRenderDirty();
            		}
HXLINE( 664)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_originX,return )

Float Tile_obj::get_originY(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_669_get_originY)
HXDLIN( 669)		return this->_hx___originY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_originY,return )

Float Tile_obj::set_originY(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_673_set_originY)
HXLINE( 674)		if ((value != this->_hx___originY)) {
HXLINE( 676)			this->_hx___originY = value;
HXLINE( 677)			this->_hx___setRenderDirty();
            		}
HXLINE( 680)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_originY,return )

 ::openfl::geom::Rectangle Tile_obj::get_rect(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_685_get_rect)
HXDLIN( 685)		return this->_hx___rect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_rect,return )

 ::openfl::geom::Rectangle Tile_obj::set_rect( ::openfl::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_689_set_rect)
HXLINE( 690)		if (::hx::IsInstanceNotEq( value,this->_hx___rect )) {
HXLINE( 692)			this->_hx___rect = value;
HXLINE( 693)			this->_hx___setRenderDirty();
            		}
HXLINE( 696)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_rect,return )

Float Tile_obj::get_rotation(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_700_get_rotation)
HXLINE( 701)		if (::hx::IsNull( this->_hx___rotation )) {
HXLINE( 703)			bool _hx_tmp;
HXDLIN( 703)			if ((this->_hx___matrix->b == 0)) {
HXLINE( 703)				_hx_tmp = (this->_hx___matrix->c == 0);
            			}
            			else {
HXLINE( 703)				_hx_tmp = false;
            			}
HXDLIN( 703)			if (_hx_tmp) {
HXLINE( 705)				this->_hx___rotation = 0;
HXLINE( 706)				this->_hx___rotationSine = ( (Float)(0) );
HXLINE( 707)				this->_hx___rotationCosine = ( (Float)(1) );
            			}
            			else {
HXLINE( 711)				Float radians = (::Math_obj::atan2(this->_hx___matrix->d,this->_hx___matrix->c) - (::Math_obj::PI / ( (Float)(2) )));
HXLINE( 713)				this->_hx___rotation = (radians * (( (Float)(180) ) / ::Math_obj::PI));
HXLINE( 714)				this->_hx___rotationSine = ::Math_obj::sin(radians);
HXLINE( 715)				this->_hx___rotationCosine = ::Math_obj::cos(radians);
            			}
            		}
HXLINE( 719)		return ( (Float)(this->_hx___rotation) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_rotation,return )

Float Tile_obj::set_rotation(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_723_set_rotation)
HXLINE( 724)		if (::hx::IsNotEq( value,this->_hx___rotation )) {
HXLINE( 726)			this->_hx___rotation = value;
HXLINE( 727)			Float radians = (value * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 728)			this->_hx___rotationSine = ::Math_obj::sin(radians);
HXLINE( 729)			this->_hx___rotationCosine = ::Math_obj::cos(radians);
HXLINE( 731)			Float _hx___scaleX = this->get_scaleX();
HXLINE( 732)			Float _hx___scaleY = this->get_scaleY();
HXLINE( 734)			this->_hx___matrix->a = (this->_hx___rotationCosine * _hx___scaleX);
HXLINE( 735)			this->_hx___matrix->b = (this->_hx___rotationSine * _hx___scaleX);
HXLINE( 736)			this->_hx___matrix->c = (-(this->_hx___rotationSine) * _hx___scaleY);
HXLINE( 737)			this->_hx___matrix->d = (this->_hx___rotationCosine * _hx___scaleY);
HXLINE( 739)			this->_hx___setRenderDirty();
            		}
HXLINE( 742)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_rotation,return )

Float Tile_obj::get_scaleX(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_746_get_scaleX)
HXLINE( 747)		if (::hx::IsNull( this->_hx___scaleX )) {
HXLINE( 749)			if ((this->get_matrix()->b == 0)) {
HXLINE( 751)				this->_hx___scaleX = this->_hx___matrix->a;
            			}
            			else {
HXLINE( 755)				this->_hx___scaleX = ::Math_obj::sqrt(((this->_hx___matrix->a * this->_hx___matrix->a) + (this->_hx___matrix->b * this->_hx___matrix->b)));
            			}
            		}
HXLINE( 759)		return ( (Float)(this->_hx___scaleX) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_scaleX,return )

Float Tile_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_763_set_scaleX)
HXLINE( 764)		if (::hx::IsNotEq( value,this->_hx___scaleX )) {
HXLINE( 766)			this->_hx___scaleX = value;
HXLINE( 768)			if ((this->_hx___matrix->b == 0)) {
HXLINE( 770)				this->_hx___matrix->a = value;
            			}
            			else {
HXLINE( 774)				Float rotation = this->get_rotation();
HXLINE( 776)				Float a = (this->_hx___rotationCosine * value);
HXLINE( 777)				Float b = (this->_hx___rotationSine * value);
HXLINE( 779)				this->_hx___matrix->a = a;
HXLINE( 780)				this->_hx___matrix->b = b;
            			}
HXLINE( 783)			this->_hx___setRenderDirty();
            		}
HXLINE( 786)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_scaleX,return )

Float Tile_obj::get_scaleY(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_790_get_scaleY)
HXLINE( 791)		if (::hx::IsNull( this->_hx___scaleY )) {
HXLINE( 793)			if ((this->_hx___matrix->c == 0)) {
HXLINE( 795)				this->_hx___scaleY = this->get_matrix()->d;
            			}
            			else {
HXLINE( 799)				this->_hx___scaleY = ::Math_obj::sqrt(((this->_hx___matrix->c * this->_hx___matrix->c) + (this->_hx___matrix->d * this->_hx___matrix->d)));
            			}
            		}
HXLINE( 803)		return ( (Float)(this->_hx___scaleY) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_scaleY,return )

Float Tile_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_807_set_scaleY)
HXLINE( 808)		if (::hx::IsNotEq( value,this->_hx___scaleY )) {
HXLINE( 810)			this->_hx___scaleY = value;
HXLINE( 812)			if ((this->_hx___matrix->c == 0)) {
HXLINE( 814)				this->_hx___matrix->d = value;
            			}
            			else {
HXLINE( 818)				Float rotation = this->get_rotation();
HXLINE( 820)				Float c = (-(this->_hx___rotationSine) * value);
HXLINE( 821)				Float d = (this->_hx___rotationCosine * value);
HXLINE( 823)				this->_hx___matrix->c = c;
HXLINE( 824)				this->_hx___matrix->d = d;
            			}
HXLINE( 827)			this->_hx___setRenderDirty();
            		}
HXLINE( 830)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_scaleY,return )

 ::openfl::display::Shader Tile_obj::get_shader(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_835_get_shader)
HXDLIN( 835)		return this->_hx___shader;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_shader,return )

 ::openfl::display::Shader Tile_obj::set_shader( ::openfl::display::Shader value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_839_set_shader)
HXLINE( 840)		if (::hx::IsInstanceNotEq( value,this->_hx___shader )) {
HXLINE( 842)			this->_hx___shader = value;
HXLINE( 843)			this->_hx___setRenderDirty();
            		}
HXLINE( 846)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_shader,return )

 ::openfl::display::Tileset Tile_obj::get_tileset(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_851_get_tileset)
HXDLIN( 851)		return this->_hx___tileset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_tileset,return )

 ::openfl::display::Tileset Tile_obj::set_tileset( ::openfl::display::Tileset value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_855_set_tileset)
HXLINE( 856)		if (::hx::IsInstanceNotEq( value,this->_hx___tileset )) {
HXLINE( 858)			this->_hx___tileset = value;
HXLINE( 859)			this->_hx___setRenderDirty();
            		}
HXLINE( 862)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_tileset,return )

bool Tile_obj::get_visible(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_867_get_visible)
HXDLIN( 867)		return this->_hx___visible;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_visible,return )

bool Tile_obj::set_visible(bool value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_871_set_visible)
HXLINE( 872)		if ((value != this->_hx___visible)) {
HXLINE( 874)			this->_hx___visible = value;
HXLINE( 875)			this->_hx___setRenderDirty();
            		}
HXLINE( 878)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_visible,return )

Float Tile_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_882_get_width)
HXLINE( 884)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 886)		this->_hx___findTileRect(result);
HXLINE( 888)		this->_hx___getBounds(result,this->get_matrix());
HXLINE( 889)		Float w = result->width;
HXLINE( 891)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 893)		return w;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_width,return )

Float Tile_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_897_set_width)
HXLINE( 898)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 900)		this->_hx___findTileRect(result);
HXLINE( 901)		if ((result->width != 0)) {
HXLINE( 903)			this->set_scaleX((value / result->width));
            		}
HXLINE( 906)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 908)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_width,return )

Float Tile_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_913_get_x)
HXDLIN( 913)		return this->_hx___matrix->tx;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_x,return )

Float Tile_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_917_set_x)
HXLINE( 918)		if ((value != this->_hx___matrix->tx)) {
HXLINE( 920)			this->_hx___matrix->tx = value;
HXLINE( 921)			this->_hx___setRenderDirty();
            		}
HXLINE( 924)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_x,return )

Float Tile_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_929_get_y)
HXDLIN( 929)		return this->_hx___matrix->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_y,return )

Float Tile_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_933_set_y)
HXLINE( 934)		if ((value != this->_hx___matrix->ty)) {
HXLINE( 936)			this->_hx___matrix->ty = value;
HXLINE( 937)			this->_hx___setRenderDirty();
            		}
HXLINE( 940)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_y,return )


::hx::ObjectPtr< Tile_obj > Tile_obj::__new(::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_originX,::hx::Null< Float >  __o_originY) {
	::hx::ObjectPtr< Tile_obj > __this = new Tile_obj();
	__this->__construct(__o_id,__o_x,__o_y,__o_scaleX,__o_scaleY,__o_rotation,__o_originX,__o_originY);
	return __this;
}

::hx::ObjectPtr< Tile_obj > Tile_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_originX,::hx::Null< Float >  __o_originY) {
	Tile_obj *__this = (Tile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tile_obj), true, "openfl.display.Tile"));
	*(void **)__this = Tile_obj::_hx_vtable;
	__this->__construct(__o_id,__o_x,__o_y,__o_scaleX,__o_scaleY,__o_rotation,__o_originX,__o_originY);
	return __this;
}

Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_MARK_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(_hx___colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___id,"__id");
	HX_MARK_MEMBER_NAME(__length,"__length");
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_MARK_MEMBER_NAME(_hx___originX,"__originX");
	HX_MARK_MEMBER_NAME(_hx___originY,"__originY");
	HX_MARK_MEMBER_NAME(_hx___rect,"__rect");
	HX_MARK_MEMBER_NAME(_hx___rotation,"__rotation");
	HX_MARK_MEMBER_NAME(_hx___rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(_hx___rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_MARK_MEMBER_NAME(_hx___scaleY,"__scaleY");
	HX_MARK_MEMBER_NAME(_hx___shader,"__shader");
	HX_MARK_MEMBER_NAME(_hx___tileset,"__tileset");
	HX_MARK_MEMBER_NAME(_hx___visible,"__visible");
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(_hx___colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___id,"__id");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_VISIT_MEMBER_NAME(_hx___originX,"__originX");
	HX_VISIT_MEMBER_NAME(_hx___originY,"__originY");
	HX_VISIT_MEMBER_NAME(_hx___rect,"__rect");
	HX_VISIT_MEMBER_NAME(_hx___rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(_hx___rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(_hx___rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_VISIT_MEMBER_NAME(_hx___scaleY,"__scaleY");
	HX_VISIT_MEMBER_NAME(_hx___shader,"__shader");
	HX_VISIT_MEMBER_NAME(_hx___tileset,"__tileset");
	HX_VISIT_MEMBER_NAME(_hx___visible,"__visible");
}

::hx::Val Tile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"rect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rect() ); }
		if (HX_FIELD_EQ(inName,"__id") ) { return ::hx::Val( _hx___id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_matrix() ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleX() ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleY() ); }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shader() ); }
		if (HX_FIELD_EQ(inName,"__rect") ) { return ::hx::Val( _hx___rect ); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return ::hx::Val( set_id_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_originX() ); }
		if (HX_FIELD_EQ(inName,"originY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_originY() ); }
		if (HX_FIELD_EQ(inName,"tileset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tileset() ); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visible() ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rotation() ); }
		if (HX_FIELD_EQ(inName,"__length") ) { return ::hx::Val( __length ); }
		if (HX_FIELD_EQ(inName,"__matrix") ) { return ::hx::Val( _hx___matrix ); }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { return ::hx::Val( _hx___scaleX ); }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { return ::hx::Val( _hx___scaleY ); }
		if (HX_FIELD_EQ(inName,"__shader") ) { return ::hx::Val( _hx___shader ); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return ::hx::Val( get_rect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rect") ) { return ::hx::Val( set_rect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blendMode() ); }
		if (HX_FIELD_EQ(inName,"__originX") ) { return ::hx::Val( _hx___originX ); }
		if (HX_FIELD_EQ(inName,"__originY") ) { return ::hx::Val( _hx___originY ); }
		if (HX_FIELD_EQ(inName,"__tileset") ) { return ::hx::Val( _hx___tileset ); }
		if (HX_FIELD_EQ(inName,"__visible") ) { return ::hx::Val( _hx___visible ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rotation") ) { return ::hx::Val( _hx___rotation ); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return ::hx::Val( invalidate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return ::hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return ::hx::Val( set_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return ::hx::Val( get_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return ::hx::Val( get_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shader") ) { return ::hx::Val( get_shader_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return ::hx::Val( set_shader_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return ::hx::Val( _hx___blendMode ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"hitTestTile") ) { return ::hx::Val( hitTestTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_originX") ) { return ::hx::Val( get_originX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_originX") ) { return ::hx::Val( set_originX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_originY") ) { return ::hx::Val( get_originY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_originY") ) { return ::hx::Val( set_originY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tileset") ) { return ::hx::Val( get_tileset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tileset") ) { return ::hx::Val( set_tileset_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return ::hx::Val( get_rotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return ::hx::Val( set_rotation_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__findTileset") ) { return ::hx::Val( _hx___findTileset_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return ::hx::Val( get_blendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return ::hx::Val( set_blendMode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorTransform() ); }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return ::hx::Val( _hx___rotationSine ); }
		if (HX_FIELD_EQ(inName,"__findTileRect") ) { return ::hx::Val( _hx___findTileRect_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return ::hx::Val( _hx___colorTransform ); }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return ::hx::Val( _hx___rotationCosine ); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return ::hx::Val( _hx___setRenderDirty_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return ::hx::Val( get_colorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return ::hx::Val( set_colorTransform_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getWorldTransform") ) { return ::hx::Val( _hx___getWorldTransform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_id(inValue.Cast< int >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rect(inValue.Cast<  ::openfl::geom::Rectangle >()) ); }
		if (HX_FIELD_EQ(inName,"__id") ) { _hx___id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_matrix(inValue.Cast<  ::openfl::geom::Matrix >()) ); }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::openfl::display::TileContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shader(inValue.Cast<  ::openfl::display::Shader >()) ); }
		if (HX_FIELD_EQ(inName,"__rect") ) { _hx___rect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_originX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"originY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_originY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"tileset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tileset(inValue.Cast<  ::openfl::display::Tileset >()) ); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rotation(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { _hx___scaleX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { _hx___scaleY=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shader") ) { _hx___shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendMode(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"__originX") ) { _hx___originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__originY") ) { _hx___originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileset") ) { _hx___tileset=inValue.Cast<  ::openfl::display::Tileset >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { _hx___visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rotation") ) { _hx___rotation=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { _hx___blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorTransform(inValue.Cast<  ::openfl::geom::ColorTransform >()) ); }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { _hx___rotationSine=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { _hx___colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { _hx___rotationCosine=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("blendMode",54,e4,37,0c));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("originX",b2,8f,f5,55));
	outFields->push(HX_("originY",b3,8f,f5,55));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("tileset",34,81,93,45));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__blendMode",34,2d,64,3a));
	outFields->push(HX_("__colorTransform",a9,62,7f,e1));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__id",fb,b6,13,3f));
	outFields->push(HX_("__length",06,00,37,47));
	outFields->push(HX_("__matrix",61,a1,f7,63));
	outFields->push(HX_("__originX",92,e0,43,d7));
	outFields->push(HX_("__originY",93,e0,43,d7));
	outFields->push(HX_("__rect",44,b0,9f,fa));
	outFields->push(HX_("__rotation",5e,b0,be,ab));
	outFields->push(HX_("__rotationCosine",f7,71,7b,14));
	outFields->push(HX_("__rotationSine",cb,f9,ad,3f));
	outFields->push(HX_("__scaleX",ae,55,55,e4));
	outFields->push(HX_("__scaleY",af,55,55,e4));
	outFields->push(HX_("__shader",45,2a,50,c5));
	outFields->push(HX_("__tileset",14,d2,e1,c6));
	outFields->push(HX_("__visible",52,c9,72,24));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Tile_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::openfl::display::TileContainer */ ,(int)offsetof(Tile_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Tile_obj,_hx___blendMode),HX_("__blendMode",34,2d,64,3a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(Tile_obj,_hx___colorTransform),HX_("__colorTransform",a9,62,7f,e1)},
	{::hx::fsBool,(int)offsetof(Tile_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsInt,(int)offsetof(Tile_obj,_hx___id),HX_("__id",fb,b6,13,3f)},
	{::hx::fsInt,(int)offsetof(Tile_obj,__length),HX_("__length",06,00,37,47)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(Tile_obj,_hx___matrix),HX_("__matrix",61,a1,f7,63)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,_hx___originX),HX_("__originX",92,e0,43,d7)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,_hx___originY),HX_("__originY",93,e0,43,d7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Tile_obj,_hx___rect),HX_("__rect",44,b0,9f,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Tile_obj,_hx___rotation),HX_("__rotation",5e,b0,be,ab)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,_hx___rotationCosine),HX_("__rotationCosine",f7,71,7b,14)},
	{::hx::fsFloat,(int)offsetof(Tile_obj,_hx___rotationSine),HX_("__rotationSine",cb,f9,ad,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Tile_obj,_hx___scaleX),HX_("__scaleX",ae,55,55,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Tile_obj,_hx___scaleY),HX_("__scaleY",af,55,55,e4)},
	{::hx::fsObject /*  ::openfl::display::Shader */ ,(int)offsetof(Tile_obj,_hx___shader),HX_("__shader",45,2a,50,c5)},
	{::hx::fsObject /*  ::openfl::display::Tileset */ ,(int)offsetof(Tile_obj,_hx___tileset),HX_("__tileset",14,d2,e1,c6)},
	{::hx::fsBool,(int)offsetof(Tile_obj,_hx___visible),HX_("__visible",52,c9,72,24)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tile_obj_sStaticStorageInfo = 0;
#endif

static ::String Tile_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("parent",2a,05,7e,ed),
	HX_("__alpha",3e,00,f5,8b),
	HX_("__blendMode",34,2d,64,3a),
	HX_("__colorTransform",a9,62,7f,e1),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__id",fb,b6,13,3f),
	HX_("__length",06,00,37,47),
	HX_("__matrix",61,a1,f7,63),
	HX_("__originX",92,e0,43,d7),
	HX_("__originY",93,e0,43,d7),
	HX_("__rect",44,b0,9f,fa),
	HX_("__rotation",5e,b0,be,ab),
	HX_("__rotationCosine",f7,71,7b,14),
	HX_("__rotationSine",cb,f9,ad,3f),
	HX_("__scaleX",ae,55,55,e4),
	HX_("__scaleY",af,55,55,e4),
	HX_("__shader",45,2a,50,c5),
	HX_("__tileset",14,d2,e1,c6),
	HX_("__visible",52,c9,72,24),
	HX_("clone",5d,13,63,48),
	HX_("getBounds",ab,0f,74,e2),
	HX_("__getBounds",8b,58,a0,10),
	HX_("hitTestTile",13,5e,2b,f8),
	HX_("invalidate",7b,19,2a,87),
	HX_("__findTileRect",eb,e3,eb,93),
	HX_("__findTileset",db,82,f6,8d),
	HX_("__getWorldTransform",d0,f4,fc,8b),
	HX_("__setRenderDirty",7a,43,7f,81),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_blendMode",2b,b8,9b,cd),
	HX_("set_blendMode",37,9a,a1,12),
	HX_("get_colorTransform",52,b8,d9,48),
	HX_("set_colorTransform",c6,ea,88,25),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("set_matrix",7e,44,cd,af),
	HX_("get_originX",c9,ef,ef,db),
	HX_("set_originX",d5,f6,5c,e6),
	HX_("get_originY",ca,ef,ef,db),
	HX_("set_originY",d6,f6,5c,e6),
	HX_("get_rect",ad,08,62,cb),
	HX_("set_rect",21,62,bf,79),
	HX_("get_rotation",47,f1,9f,bd),
	HX_("set_rotation",bb,14,99,d2),
	HX_("get_scaleX",57,5a,ad,2c),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("get_scaleY",58,5a,ad,2c),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("get_shader",ee,2e,a8,0d),
	HX_("set_shader",62,cd,25,11),
	HX_("get_tileset",4b,e1,8d,cb),
	HX_("set_tileset",57,e8,fa,d5),
	HX_("get_visible",89,d8,1e,29),
	HX_("set_visible",95,df,8b,33),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

::hx::Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	Tile_obj _hx_dummy;
	Tile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Tile",98,3c,af,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Tile_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6c0e6bae55b32aaf_31_boot)
HXDLIN(  31)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("data",2a,56,63,42), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
