#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#define INCLUDED_flixel_util_helpers_FlxPointRangeBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxPointRangeBounds)

namespace flixel{
namespace util{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES FlxPointRangeBounds_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPointRangeBounds_obj OBJ_;
		FlxPointRangeBounds_obj();

	public:
		enum { _hx_ClassId = 0x3b25e00d };

		void __construct(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.helpers.FlxPointRangeBounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.helpers.FlxPointRangeBounds"); }
		static ::hx::ObjectPtr< FlxPointRangeBounds_obj > __new(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY);
		static ::hx::ObjectPtr< FlxPointRangeBounds_obj > __alloc(::hx::Ctx *_hx_ctx,Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPointRangeBounds_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxPointRangeBounds",14,4e,df,c7); }

		 ::flixel::util::helpers::FlxBounds start;
		 ::flixel::util::helpers::FlxBounds end;
		bool active;
		 ::flixel::util::helpers::FlxPointRangeBounds set(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY);
		::Dynamic set_dyn();

		bool equals( ::flixel::util::helpers::FlxPointRangeBounds OtherFlxPointRangeBounds);
		::Dynamic equals_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace helpers

#endif /* INCLUDED_flixel_util_helpers_FlxPointRangeBounds */ 
