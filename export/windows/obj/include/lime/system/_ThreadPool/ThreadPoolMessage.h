#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessage
#define INCLUDED_lime_system__ThreadPool_ThreadPoolMessage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_hx_system,_ThreadPool,ThreadPoolMessage)
HX_DECLARE_CLASS3(lime,_hx_system,_ThreadPool,ThreadPoolMessageType)

namespace lime{
namespace _hx_system{
namespace _ThreadPool{


class HXCPP_CLASS_ATTRIBUTES ThreadPoolMessage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ThreadPoolMessage_obj OBJ_;
		ThreadPoolMessage_obj();

	public:
		enum { _hx_ClassId = 0x59e70720 };

		void __construct( ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType type, ::Dynamic state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system._ThreadPool.ThreadPoolMessage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system._ThreadPool.ThreadPoolMessage"); }
		static ::hx::ObjectPtr< ThreadPoolMessage_obj > __new( ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType type, ::Dynamic state);
		static ::hx::ObjectPtr< ThreadPoolMessage_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType type, ::Dynamic state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ThreadPoolMessage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ThreadPoolMessage",81,8d,d9,cb); }

		 ::Dynamic state;
		 ::lime::_hx_system::_ThreadPool::ThreadPoolMessageType type;
};

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool

#endif /* INCLUDED_lime_system__ThreadPool_ThreadPoolMessage */ 
