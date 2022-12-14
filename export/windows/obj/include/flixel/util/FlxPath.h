#ifndef INCLUDED_flixel_util_FlxPath
#define INCLUDED_flixel_util_FlxPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxPath_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPath_obj OBJ_;
		FlxPath_obj();

	public:
		enum { _hx_ClassId = 0x03238bb9 };

		void __construct(::Array< ::Dynamic> Nodes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.FlxPath"); }
		static ::hx::ObjectPtr< FlxPath_obj > __new(::Array< ::Dynamic> Nodes);
		static ::hx::ObjectPtr< FlxPath_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> Nodes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxPath",17,1f,aa,da); }

		static void __boot();
		static int FORWARD;
		static int BACKWARD;
		static int LOOP_FORWARD;
		static int LOOP_BACKWARD;
		static int YOYO;
		static int HORIZONTAL_ONLY;
		static int VERTICAL_ONLY;
		static  ::flixel::math::FlxPoint _point;
		::Array< ::Dynamic> _nodes;
		Float speed;
		Float angle;
		bool autoCenter;
		bool active;
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		int debugColor;
		bool ignoreDrawDebug;
		int nodeIndex;
		bool finished;
		int _mode;
		int _inc;
		bool _autoRotate;
		 ::Dynamic _wasObjectImmovable;
		bool _firstUpdate;
		 ::flixel::FlxObject object;
		 ::flixel::util::FlxPath reset();
		::Dynamic reset_dyn();

		 ::flixel::util::FlxPath setProperties(::hx::Null< Float >  Speed,::hx::Null< int >  Mode,::hx::Null< bool >  AutoRotate);
		::Dynamic setProperties_dyn();

		 ::flixel::util::FlxPath start(::Array< ::Dynamic> Nodes,::hx::Null< Float >  Speed,::hx::Null< int >  Mode,::hx::Null< bool >  AutoRotate,::hx::Null< bool >  NodesAsReference);
		::Dynamic start_dyn();

		 ::flixel::util::FlxPath restart();
		::Dynamic restart_dyn();

		 ::flixel::util::FlxPath setNode(int NodeIndex);
		::Dynamic setNode_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void calculateVelocity( ::flixel::math::FlxPoint node,bool horizontalOnly,bool verticalOnly);
		::Dynamic calculateVelocity_dyn();

		 ::flixel::math::FlxPoint advancePath(::hx::Null< bool >  Snap);
		::Dynamic advancePath_dyn();

		 ::flixel::util::FlxPath cancel();
		::Dynamic cancel_dyn();

		void onEnd();
		::Dynamic onEnd_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		 ::flixel::util::FlxPath add(Float X,Float Y);
		::Dynamic add_dyn();

		 ::flixel::util::FlxPath addAt(Float X,Float Y,int Index);
		::Dynamic addAt_dyn();

		 ::flixel::util::FlxPath addPoint( ::flixel::math::FlxPoint Node,::hx::Null< bool >  AsReference);
		::Dynamic addPoint_dyn();

		 ::flixel::util::FlxPath addPointAt( ::flixel::math::FlxPoint Node,int Index,::hx::Null< bool >  AsReference);
		::Dynamic addPointAt_dyn();

		 ::flixel::math::FlxPoint remove( ::flixel::math::FlxPoint Node);
		::Dynamic remove_dyn();

		 ::flixel::math::FlxPoint removeAt(int Index);
		::Dynamic removeAt_dyn();

		 ::flixel::math::FlxPoint head();
		::Dynamic head_dyn();

		 ::flixel::math::FlxPoint tail();
		::Dynamic tail_dyn();

		void drawDebug( ::flixel::FlxCamera Camera);
		::Dynamic drawDebug_dyn();

		::Array< ::Dynamic> get_nodes();
		::Dynamic get_nodes_dyn();

		::Array< ::Dynamic> set_nodes(::Array< ::Dynamic> Nodes);
		::Dynamic set_nodes_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPath */ 
