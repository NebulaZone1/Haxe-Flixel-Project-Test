#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#define INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,ConsoleFrontEnd)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES ConsoleFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ConsoleFrontEnd_obj OBJ_;
		ConsoleFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x536f13b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.ConsoleFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.frontEnds.ConsoleFrontEnd"); }
		static ::hx::ObjectPtr< ConsoleFrontEnd_obj > __new();
		static ::hx::ObjectPtr< ConsoleFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConsoleFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConsoleFrontEnd",09,11,bc,4e); }

		bool autoPause;
		bool stepAfterCommand;
		void registerFunction(::String FunctionAlias, ::Dynamic Function);
		::Dynamic registerFunction_dyn();

		void registerObject(::String ObjectAlias, ::Dynamic AnyObject);
		::Dynamic registerObject_dyn();

		void registerClass(::hx::Class cl);
		::Dynamic registerClass_dyn();

		void registerEnum(::hx::Class e);
		::Dynamic registerEnum_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd */ 
