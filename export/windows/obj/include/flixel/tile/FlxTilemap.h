#ifndef INCLUDED_flixel_tile_FlxTilemap
#define INCLUDED_flixel_tile_FlxTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTilemap_obj : public  ::flixel::tile::FlxBaseTilemap_obj
{
	public:
		typedef  ::flixel::tile::FlxBaseTilemap_obj super;
		typedef FlxTilemap_obj OBJ_;
		FlxTilemap_obj();

	public:
		enum { _hx_ClassId = 0x1dc5d3c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxTilemap"); }
		static ::hx::ObjectPtr< FlxTilemap_obj > __new();
		static ::hx::ObjectPtr< FlxTilemap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTilemap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTilemap",fc,a9,ba,74); }

		bool useScaleHack;
		 ::flixel::math::FlxPoint scale;
		bool antialiasing;
		 ::flixel::math::FlxPoint offset;
		 ::flixel::graphics::frames::FlxFramesCollection frames;
		 ::flixel::graphics::FlxGraphic graphic;
		int color;
		Float alpha;
		 ::openfl::geom::ColorTransform colorTransform;
		 ::Dynamic blend;
		 ::flixel::graphics::tile::FlxGraphicsShader shader;
		 ::openfl::geom::Point _flashPoint;
		 ::openfl::geom::Rectangle _flashRect;
		::Array< ::Dynamic> _buffers;
		int _tileWidth;
		int _tileHeight;
		Float _scaledTileWidth;
		Float _scaledTileHeight;
		 ::openfl::display::BitmapData _debugTileNotSolid;
		 ::openfl::display::BitmapData _debugTilePartial;
		 ::openfl::display::BitmapData _debugTileSolid;
		 ::openfl::geom::Rectangle _debugRect;
		 ::openfl::geom::Point _helperPoint;
		 ::flixel::math::FlxMatrix _matrix;
		bool _checkBufferChanges;
		void destroy();

		 ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection value);
		::Dynamic set_frames_dyn();

		void onGameResized(int _,int _1);
		::Dynamic onGameResized_dyn();

		void onCameraChanged( ::flixel::FlxCamera _);
		::Dynamic onCameraChanged_dyn();

		void cacheGraphics(int TileWidth,int TileHeight, ::Dynamic TileGraphic);

		void initTileObjects();

		void updateDebugTileBoundingBoxSolid();
		::Dynamic updateDebugTileBoundingBoxSolid_dyn();

		void updateDebugTileBoundingBoxNotSolid();
		::Dynamic updateDebugTileBoundingBoxNotSolid_dyn();

		void updateDebugTileBoundingBoxPartial();
		::Dynamic updateDebugTileBoundingBoxPartial_dyn();

		 ::openfl::display::BitmapData updateDebugTile( ::openfl::display::BitmapData tileBitmap,int color);
		::Dynamic updateDebugTile_dyn();

		void computeDimensions();

		void updateMap();

		void drawDebugOnCamera( ::flixel::FlxCamera Camera);

		bool isOnScreen( ::flixel::FlxCamera Camera);

		void draw();

		void refreshBuffers();
		::Dynamic refreshBuffers_dyn();

		void setDirty(::hx::Null< bool >  Dirty);

		bool overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  FlipCallbackParams, ::flixel::math::FlxPoint Position);

		int getTileIndexByCoords( ::flixel::math::FlxPoint Coord);

		 ::flixel::math::FlxPoint getTileCoordsByIndex(int Index,::hx::Null< bool >  Midpoint);

		::Array< ::Dynamic> getTileCoords(int Index,::hx::Null< bool >  Midpoint);
		::Dynamic getTileCoords_dyn();

		void follow( ::flixel::FlxCamera Camera,::hx::Null< int >  Border,::hx::Null< bool >  UpdateWorld);
		::Dynamic follow_dyn();

		bool ray( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End, ::flixel::math::FlxPoint Result,::hx::Null< Float >  Resolution);

		 ::flixel::FlxSprite tileToSprite(int X,int Y,::hx::Null< int >  NewTile, ::Dynamic SpriteFactory);
		::Dynamic tileToSprite_dyn();

		void updateBuffers();
		::Dynamic updateBuffers_dyn();

		void drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer, ::flixel::FlxCamera Camera);
		::Dynamic drawTilemap_dyn();

		 ::openfl::display::BitmapData makeDebugTile(int color);
		::Dynamic makeDebugTile_dyn();

		void drawDebugTile( ::openfl::display::BitmapData debugTile,int color);
		::Dynamic drawDebugTile_dyn();

		void onDrawDebugChanged();
		::Dynamic onDrawDebugChanged_dyn();

		void updateTile(int Index);

		 ::flixel::tile::FlxTilemapBuffer createBuffer( ::flixel::FlxCamera camera);
		::Dynamic createBuffer_dyn();

		bool set_antialiasing(bool value);
		::Dynamic set_antialiasing_dyn();

		 ::flixel::graphics::FlxGraphic set_graphic( ::flixel::graphics::FlxGraphic Value);
		::Dynamic set_graphic_dyn();

		bool set_pixelPerfectRender(bool Value);

		Float set_alpha(Float Alpha);
		::Dynamic set_alpha_dyn();

		int set_color(int Color);
		::Dynamic set_color_dyn();

		void updateColorTransform();
		::Dynamic updateColorTransform_dyn();

		 ::Dynamic set_blend( ::Dynamic Value);
		::Dynamic set_blend_dyn();

		void setScaleXYCallback( ::flixel::math::FlxPoint Scale);
		::Dynamic setScaleXYCallback_dyn();

		void setScaleXCallback( ::flixel::math::FlxPoint Scale);
		::Dynamic setScaleXCallback_dyn();

		void setScaleYCallback( ::flixel::math::FlxPoint Scale);
		::Dynamic setScaleYCallback_dyn();

		 ::flixel::FlxSprite defaultTileToSprite( ::Dynamic TileProperties);
		::Dynamic defaultTileToSprite_dyn();

		int set_allowCollisions(int _tmp_Value);

		int set_debugBoundingBoxColorSolid(int color);

		int set_debugBoundingBoxColorNotSolid(int color);

		int set_debugBoundingBoxColorPartial(int color);

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTilemap */ 
