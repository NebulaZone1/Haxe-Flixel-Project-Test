#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#define INCLUDED_flixel_system_frontEnds_BitmapFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,BitmapFrontEnd)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES BitmapFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitmapFrontEnd_obj OBJ_;
		BitmapFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x3df39a77 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.BitmapFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.BitmapFrontEnd"); }
		static ::hx::ObjectPtr< BitmapFrontEnd_obj > __new();
		static ::hx::ObjectPtr< BitmapFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapFrontEnd",e1,19,d6,c8); }

		 ::haxe::ds::StringMap _cache;
		 ::flixel::graphics::frames::FlxFrame _whitePixel;
		int _lastUniqueKeyIndex;
		void onAssetsReload( ::Dynamic _);
		::Dynamic onAssetsReload_dyn();

		void onContext();
		::Dynamic onContext_dyn();

		void dumpCache();
		::Dynamic dumpCache_dyn();

		void undumpCache();
		::Dynamic undumpCache_dyn();

		bool checkCache(::String Key);
		::Dynamic checkCache_dyn();

		 ::flixel::graphics::FlxGraphic create(int Width,int Height,int Color,::hx::Null< bool >  Unique,::String Key);
		::Dynamic create_dyn();

		 ::flixel::graphics::FlxGraphic add( ::Dynamic Graphic,::hx::Null< bool >  Unique,::String Key);
		::Dynamic add_dyn();

		 ::flixel::graphics::FlxGraphic addGraphic( ::flixel::graphics::FlxGraphic graphic);
		::Dynamic addGraphic_dyn();

		 ::flixel::graphics::FlxGraphic get(::String key);
		::Dynamic get_dyn();

		::String findKeyForBitmap( ::openfl::display::BitmapData bmd);
		::Dynamic findKeyForBitmap_dyn();

		::String getKeyForClass(::hx::Class source);
		::Dynamic getKeyForClass_dyn();

		::String generateKey(::String systemKey,::String userKey,::hx::Null< bool >  unique);
		::Dynamic generateKey_dyn();

		::String getUniqueKey(::String baseKey);
		::Dynamic getUniqueKey_dyn();

		::String getKeyWithSpacesAndBorders(::String baseKey, ::flixel::math::FlxPoint frameSize, ::flixel::math::FlxPoint frameSpacing, ::flixel::math::FlxPoint frameBorder, ::flixel::math::FlxRect region);
		::Dynamic getKeyWithSpacesAndBorders_dyn();

		void remove( ::flixel::graphics::FlxGraphic graphic);
		::Dynamic remove_dyn();

		void removeByKey(::String key);
		::Dynamic removeByKey_dyn();

		void removeIfNoUse( ::flixel::graphics::FlxGraphic graphic);
		::Dynamic removeIfNoUse_dyn();

		void clearCache();
		::Dynamic clearCache_dyn();

		void removeKey(::String key);
		::Dynamic removeKey_dyn();

		void reset();
		::Dynamic reset_dyn();

		void clearUnused();
		::Dynamic clearUnused_dyn();

		int get_maxTextureSize();
		::Dynamic get_maxTextureSize_dyn();

		 ::flixel::graphics::frames::FlxFrame get_whitePixel();
		::Dynamic get_whitePixel_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_BitmapFrontEnd */ 
