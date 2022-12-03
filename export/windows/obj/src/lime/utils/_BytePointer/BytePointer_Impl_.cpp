#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_13__new,"lime.utils._BytePointer.BytePointer_Impl_","_new",0xc3bc293c,"lime.utils._BytePointer.BytePointer_Impl_._new","lime/utils/BytePointer.hx",13,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_19_set,"lime.utils._BytePointer.BytePointer_Impl_","set",0x582efc27,"lime.utils._BytePointer.BytePointer_Impl_.set","lime/utils/BytePointer.hx",19,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_48___arrayGet,"lime.utils._BytePointer.BytePointer_Impl_","__arrayGet",0x95acedb8,"lime.utils._BytePointer.BytePointer_Impl_.__arrayGet","lime/utils/BytePointer.hx",48,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_52___arraySet,"lime.utils._BytePointer.BytePointer_Impl_","__arraySet",0x95b608c4,"lime.utils._BytePointer.BytePointer_Impl_.__arraySet","lime/utils/BytePointer.hx",52,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_58_fromArrayBufferView,"lime.utils._BytePointer.BytePointer_Impl_","fromArrayBufferView",0xf5b7eab9,"lime.utils._BytePointer.BytePointer_Impl_.fromArrayBufferView","lime/utils/BytePointer.hx",58,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_69_fromArrayBuffer,"lime.utils._BytePointer.BytePointer_Impl_","fromArrayBuffer",0x96e06234,"lime.utils._BytePointer.BytePointer_Impl_.fromArrayBuffer","lime/utils/BytePointer.hx",69,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_81_fromBytes,"lime.utils._BytePointer.BytePointer_Impl_","fromBytes",0x6c6704e6,"lime.utils._BytePointer.BytePointer_Impl_.fromBytes","lime/utils/BytePointer.hx",81,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_86_fromBytesData,"lime.utils._BytePointer.BytePointer_Impl_","fromBytesData",0x619ef230,"lime.utils._BytePointer.BytePointer_Impl_.fromBytesData","lime/utils/BytePointer.hx",86,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_93_fromFile,"lime.utils._BytePointer.BytePointer_Impl_","fromFile",0xee6b3a61,"lime.utils._BytePointer.BytePointer_Impl_.fromFile","lime/utils/BytePointer.hx",93,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_98_fromLimeBytes,"lime.utils._BytePointer.BytePointer_Impl_","fromLimeBytes",0xd543eb11,"lime.utils._BytePointer.BytePointer_Impl_.fromLimeBytes","lime/utils/BytePointer.hx",98,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_106_toUInt8Array,"lime.utils._BytePointer.BytePointer_Impl_","toUInt8Array",0x7bcbbd71,"lime.utils._BytePointer.BytePointer_Impl_.toUInt8Array","lime/utils/BytePointer.hx",106,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_111_toUInt8ClampedArray,"lime.utils._BytePointer.BytePointer_Impl_","toUInt8ClampedArray",0x97605a47,"lime.utils._BytePointer.BytePointer_Impl_.toUInt8ClampedArray","lime/utils/BytePointer.hx",111,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_122_toInt8Array,"lime.utils._BytePointer.BytePointer_Impl_","toInt8Array",0x19ac5cfa,"lime.utils._BytePointer.BytePointer_Impl_.toInt8Array","lime/utils/BytePointer.hx",122,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_133_toUInt16Array,"lime.utils._BytePointer.BytePointer_Impl_","toUInt16Array",0x16e13344,"lime.utils._BytePointer.BytePointer_Impl_.toUInt16Array","lime/utils/BytePointer.hx",133,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_144_toInt16Array,"lime.utils._BytePointer.BytePointer_Impl_","toInt16Array",0x9d8c2b9b,"lime.utils._BytePointer.BytePointer_Impl_.toInt16Array","lime/utils/BytePointer.hx",144,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_155_toUInt32Array,"lime.utils._BytePointer.BytePointer_Impl_","toUInt32Array",0xd09eaf4a,"lime.utils._BytePointer.BytePointer_Impl_.toUInt32Array","lime/utils/BytePointer.hx",155,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_166_toInt32Array,"lime.utils._BytePointer.BytePointer_Impl_","toInt32Array",0x5749a7a1,"lime.utils._BytePointer.BytePointer_Impl_.toInt32Array","lime/utils/BytePointer.hx",166,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_177_toFloat32Array,"lime.utils._BytePointer.BytePointer_Impl_","toFloat32Array",0x10400814,"lime.utils._BytePointer.BytePointer_Impl_.toFloat32Array","lime/utils/BytePointer.hx",177,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_188_toFloat64Array,"lime.utils._BytePointer.BytePointer_Impl_","toFloat64Array",0x59b72515,"lime.utils._BytePointer.BytePointer_Impl_.toFloat64Array","lime/utils/BytePointer.hx",188,0x50fae541)
namespace lime{
namespace utils{
namespace _BytePointer{

void BytePointer_Impl__obj::__construct() { }

Dynamic BytePointer_Impl__obj::__CreateEmpty() { return new BytePointer_Impl__obj; }

void *BytePointer_Impl__obj::_hx_vtable = 0;

Dynamic BytePointer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BytePointer_Impl__obj > _hx_result = new BytePointer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BytePointer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x606deae3;
}

 ::lime::utils::BytePointerData BytePointer_Impl__obj::_new( ::haxe::io::Bytes bytes,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_13__new)
HXDLIN(  13)		 ::lime::utils::BytePointerData this1 =  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,offset);
HXDLIN(  13)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytePointer_Impl__obj,_new,return )

void BytePointer_Impl__obj::set( ::lime::utils::BytePointerData this1, ::haxe::io::Bytes bytes, ::lime::utils::ArrayBufferView bufferView, ::haxe::io::Bytes buffer, ::Dynamic offset){
            	HX_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_19_set)
HXLINE(  20)		if (::hx::IsNotNull( buffer )) {
HXLINE(  25)			bytes = buffer;
            		}
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if (::hx::IsNull( bytes )) {
HXLINE(  29)			_hx_tmp = ::hx::IsNull( bufferView );
            		}
            		else {
HXLINE(  29)			_hx_tmp = true;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  31)			this1->bytes = bytes;
HXLINE(  32)			int _hx_tmp;
HXDLIN(  32)			if (::hx::IsNotNull( offset )) {
HXLINE(  32)				_hx_tmp = ( (int)(offset) );
            			}
            			else {
HXLINE(  32)				_hx_tmp = 0;
            			}
HXDLIN(  32)			this1->offset = _hx_tmp;
            		}
            		else {
HXLINE(  39)			this1->bytes = bufferView->buffer;
HXLINE(  42)			int _hx_tmp;
HXDLIN(  42)			if (::hx::IsNotNull( offset )) {
HXLINE(  42)				_hx_tmp = (bufferView->byteOffset + offset);
            			}
            			else {
HXLINE(  42)				_hx_tmp = bufferView->byteOffset;
            			}
HXDLIN(  42)			this1->offset = _hx_tmp;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BytePointer_Impl__obj,set,(void))

int BytePointer_Impl__obj::_hx___arrayGet( ::lime::utils::BytePointerData this1,int index){
            	HX_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_48___arrayGet)
HXDLIN(  48)		if (::hx::IsNotNull( this1->bytes )) {
HXDLIN(  48)			return ( (int)(this1->bytes->b->__get((index + this1->offset))) );
            		}
            		else {
HXDLIN(  48)			return 0;
            		}
HXDLIN(  48)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytePointer_Impl__obj,_hx___arrayGet,return )

int BytePointer_Impl__obj::_hx___arraySet( ::lime::utils::BytePointerData this1,int index,int value){
            	HX_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_52___arraySet)
HXLINE(  53)		if (::hx::IsNull( this1->bytes )) {
HXLINE(  53)			this1->bytes->b[(index + this1->offset)] = ( (unsigned char)(value) );
            		}
HXLINE(  54)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BytePointer_Impl__obj,_hx___arraySet,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_58_fromArrayBufferView)
HXLINE(  59)		if (::hx::IsNull( arrayBufferView )) {
HXLINE(  59)			return null();
            		}
HXLINE(  64)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,arrayBufferView->buffer,arrayBufferView->byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromArrayBufferView,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_69_fromArrayBuffer)
HXLINE(  70)		if (::hx::IsNull( buffer )) {
HXLINE(  70)			return null();
            		}
HXLINE(  75)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,buffer,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromArrayBuffer,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_81_fromBytes)
HXDLIN(  81)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromBytes,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromBytesData(::Array< unsigned char > bytesData){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_86_fromBytesData)
HXDLIN(  86)		if (::hx::IsNull( bytesData )) {
HXDLIN(  86)			return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,null(),0);
            		}
            		else {
HXLINE(  88)			return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,::haxe::io::Bytes_obj::ofData(bytesData),0);
            		}
HXLINE(  86)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromBytesData,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_93_fromFile)
HXDLIN(  93)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path),0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromFile,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_98_fromLimeBytes)
HXDLIN(  98)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromLimeBytes,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt8Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_106_toUInt8Array)
HXDLIN( 106)		 ::Dynamic elements = null();
HXDLIN( 106)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 106)		::cpp::VirtualArray array = null();
HXDLIN( 106)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 106)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 106)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(8) )));
HXDLIN( 106)		 ::Dynamic len = null();
HXDLIN( 106)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 106)			byteoffset = 0;
            		}
HXDLIN( 106)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 106)		if (::hx::IsNotNull( elements )) {
HXDLIN( 106)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXDLIN( 106)			if (::hx::IsNotNull( array )) {
HXDLIN( 106)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 106)				_this->byteOffset = 0;
HXDLIN( 106)				_this->length = array->get_length();
HXDLIN( 106)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 106)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 106)				_this->buffer = this2;
HXDLIN( 106)				_this->copyFromArray(array,null());
HXDLIN( 106)				this1 = _this;
            			}
            			else {
HXDLIN( 106)				if (::hx::IsNotNull( vector )) {
HXDLIN( 106)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 106)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 106)					_this->byteOffset = 0;
HXDLIN( 106)					_this->length = array->get_length();
HXDLIN( 106)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 106)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 106)					_this->buffer = this2;
HXDLIN( 106)					_this->copyFromArray(array,null());
HXDLIN( 106)					this1 = _this;
            				}
            				else {
HXDLIN( 106)					if (::hx::IsNotNull( view )) {
HXDLIN( 106)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 106)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 106)						int srcLength = view->length;
HXDLIN( 106)						int srcByteOffset = view->byteOffset;
HXDLIN( 106)						int srcElementSize = view->bytesPerElement;
HXDLIN( 106)						int elementSize = _this->bytesPerElement;
HXDLIN( 106)						if ((view->type == _this->type)) {
HXDLIN( 106)							int srcLength = srcData->length;
HXDLIN( 106)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 106)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 106)							_this->buffer = this1;
HXDLIN( 106)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 106)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 106)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 106)						_this->byteOffset = 0;
HXDLIN( 106)						_this->length = srcLength;
HXDLIN( 106)						this1 = _this;
            					}
            					else {
HXDLIN( 106)						if (::hx::IsNotNull( buffer )) {
HXDLIN( 106)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 106)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 106)							if ((in_byteOffset < 0)) {
HXDLIN( 106)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 106)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 106)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 106)							int bufferByteLength = buffer->length;
HXDLIN( 106)							int elementSize = _this->bytesPerElement;
HXDLIN( 106)							int newByteLength = bufferByteLength;
HXDLIN( 106)							if (::hx::IsNull( len )) {
HXDLIN( 106)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 106)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 106)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 106)								if ((newByteLength < 0)) {
HXDLIN( 106)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 106)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 106)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 106)								if ((newRange > bufferByteLength)) {
HXDLIN( 106)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 106)							_this->buffer = buffer;
HXDLIN( 106)							_this->byteOffset = in_byteOffset;
HXDLIN( 106)							_this->byteLength = newByteLength;
HXDLIN( 106)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 106)							this1 = _this;
            						}
            						else {
HXDLIN( 106)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 106)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt8Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt8ClampedArray( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_111_toUInt8ClampedArray)
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 112)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 112)			return null();
            		}
HXLINE( 117)		 ::Dynamic elements = null();
HXDLIN( 117)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 117)		::cpp::VirtualArray array = null();
HXDLIN( 117)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 117)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 117)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(8) )));
HXDLIN( 117)		 ::Dynamic len = null();
HXDLIN( 117)		if (::hx::IsNull( byteoffset )) {
HXLINE( 117)			byteoffset = 0;
            		}
HXDLIN( 117)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 117)		if (::hx::IsNotNull( elements )) {
HXLINE( 117)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            		}
            		else {
HXLINE( 117)			if (::hx::IsNotNull( array )) {
HXLINE( 117)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 117)				_this->byteOffset = 0;
HXDLIN( 117)				_this->length = array->get_length();
HXDLIN( 117)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 117)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 117)				_this->buffer = this2;
HXDLIN( 117)				_this->copyFromArray(array,null());
HXDLIN( 117)				this1 = _this;
            			}
            			else {
HXLINE( 117)				if (::hx::IsNotNull( vector )) {
HXLINE( 117)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 117)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 117)					_this->byteOffset = 0;
HXDLIN( 117)					_this->length = array->get_length();
HXDLIN( 117)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 117)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 117)					_this->buffer = this2;
HXDLIN( 117)					_this->copyFromArray(array,null());
HXDLIN( 117)					this1 = _this;
            				}
            				else {
HXLINE( 117)					if (::hx::IsNotNull( view )) {
HXLINE( 117)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 117)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 117)						int srcLength = view->length;
HXDLIN( 117)						int srcByteOffset = view->byteOffset;
HXDLIN( 117)						int srcElementSize = view->bytesPerElement;
HXDLIN( 117)						int elementSize = _this->bytesPerElement;
HXDLIN( 117)						if ((view->type == _this->type)) {
HXLINE( 117)							int srcLength = srcData->length;
HXDLIN( 117)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 117)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 117)							_this->buffer = this1;
HXDLIN( 117)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 117)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 117)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 117)						_this->byteOffset = 0;
HXDLIN( 117)						_this->length = srcLength;
HXDLIN( 117)						this1 = _this;
            					}
            					else {
HXLINE( 117)						if (::hx::IsNotNull( buffer )) {
HXLINE( 117)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 117)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 117)							if ((in_byteOffset < 0)) {
HXLINE( 117)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 117)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 117)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 117)							int bufferByteLength = buffer->length;
HXDLIN( 117)							int elementSize = _this->bytesPerElement;
HXDLIN( 117)							int newByteLength = bufferByteLength;
HXDLIN( 117)							if (::hx::IsNull( len )) {
HXLINE( 117)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 117)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 117)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 117)								if ((newByteLength < 0)) {
HXLINE( 117)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 117)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 117)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 117)								if ((newRange > bufferByteLength)) {
HXLINE( 117)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 117)							_this->buffer = buffer;
HXDLIN( 117)							_this->byteOffset = in_byteOffset;
HXDLIN( 117)							_this->byteLength = newByteLength;
HXDLIN( 117)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 117)							this1 = _this;
            						}
            						else {
HXLINE( 117)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 117)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt8ClampedArray,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt8Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_122_toInt8Array)
HXLINE( 123)		bool _hx_tmp;
HXDLIN( 123)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 123)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 123)			_hx_tmp = true;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXLINE( 123)			return null();
            		}
HXLINE( 128)		 ::Dynamic elements = null();
HXDLIN( 128)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 128)		::cpp::VirtualArray array = null();
HXDLIN( 128)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 128)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 128)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(8) )));
HXDLIN( 128)		 ::Dynamic len = null();
HXDLIN( 128)		if (::hx::IsNull( byteoffset )) {
HXLINE( 128)			byteoffset = 0;
            		}
HXDLIN( 128)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 128)		if (::hx::IsNotNull( elements )) {
HXLINE( 128)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            		}
            		else {
HXLINE( 128)			if (::hx::IsNotNull( array )) {
HXLINE( 128)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)				_this->byteOffset = 0;
HXDLIN( 128)				_this->length = array->get_length();
HXDLIN( 128)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)				_this->buffer = this2;
HXDLIN( 128)				_this->copyFromArray(array,null());
HXDLIN( 128)				this1 = _this;
            			}
            			else {
HXLINE( 128)				if (::hx::IsNotNull( vector )) {
HXLINE( 128)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 128)					_this->byteOffset = 0;
HXDLIN( 128)					_this->length = array->get_length();
HXDLIN( 128)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 128)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 128)					_this->buffer = this2;
HXDLIN( 128)					_this->copyFromArray(array,null());
HXDLIN( 128)					this1 = _this;
            				}
            				else {
HXLINE( 128)					if (::hx::IsNotNull( view )) {
HXLINE( 128)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 128)						int srcLength = view->length;
HXDLIN( 128)						int srcByteOffset = view->byteOffset;
HXDLIN( 128)						int srcElementSize = view->bytesPerElement;
HXDLIN( 128)						int elementSize = _this->bytesPerElement;
HXDLIN( 128)						if ((view->type == _this->type)) {
HXLINE( 128)							int srcLength = srcData->length;
HXDLIN( 128)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 128)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 128)							_this->buffer = this1;
HXDLIN( 128)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 128)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 128)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 128)						_this->byteOffset = 0;
HXDLIN( 128)						_this->length = srcLength;
HXDLIN( 128)						this1 = _this;
            					}
            					else {
HXLINE( 128)						if (::hx::IsNotNull( buffer )) {
HXLINE( 128)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 128)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 128)							if ((in_byteOffset < 0)) {
HXLINE( 128)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 128)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 128)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 128)							int bufferByteLength = buffer->length;
HXDLIN( 128)							int elementSize = _this->bytesPerElement;
HXDLIN( 128)							int newByteLength = bufferByteLength;
HXDLIN( 128)							if (::hx::IsNull( len )) {
HXLINE( 128)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 128)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 128)								if ((newByteLength < 0)) {
HXLINE( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 128)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 128)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 128)								if ((newRange > bufferByteLength)) {
HXLINE( 128)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 128)							_this->buffer = buffer;
HXDLIN( 128)							_this->byteOffset = in_byteOffset;
HXDLIN( 128)							_this->byteLength = newByteLength;
HXDLIN( 128)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 128)							this1 = _this;
            						}
            						else {
HXLINE( 128)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 128)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt8Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt16Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_133_toUInt16Array)
HXLINE( 134)		bool _hx_tmp;
HXDLIN( 134)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 134)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 134)			_hx_tmp = true;
            		}
HXDLIN( 134)		if (_hx_tmp) {
HXLINE( 134)			return null();
            		}
HXLINE( 139)		 ::Dynamic elements = null();
HXDLIN( 139)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 139)		::cpp::VirtualArray array = null();
HXDLIN( 139)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 139)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 139)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(16) )));
HXDLIN( 139)		 ::Dynamic len = null();
HXDLIN( 139)		if (::hx::IsNull( byteoffset )) {
HXLINE( 139)			byteoffset = 0;
            		}
HXDLIN( 139)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 139)		if (::hx::IsNotNull( elements )) {
HXLINE( 139)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            		}
            		else {
HXLINE( 139)			if (::hx::IsNotNull( array )) {
HXLINE( 139)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 139)				_this->byteOffset = 0;
HXDLIN( 139)				_this->length = array->get_length();
HXDLIN( 139)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 139)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 139)				_this->buffer = this2;
HXDLIN( 139)				_this->copyFromArray(array,null());
HXDLIN( 139)				this1 = _this;
            			}
            			else {
HXLINE( 139)				if (::hx::IsNotNull( vector )) {
HXLINE( 139)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 139)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 139)					_this->byteOffset = 0;
HXDLIN( 139)					_this->length = array->get_length();
HXDLIN( 139)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 139)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 139)					_this->buffer = this2;
HXDLIN( 139)					_this->copyFromArray(array,null());
HXDLIN( 139)					this1 = _this;
            				}
            				else {
HXLINE( 139)					if (::hx::IsNotNull( view )) {
HXLINE( 139)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 139)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 139)						int srcLength = view->length;
HXDLIN( 139)						int srcByteOffset = view->byteOffset;
HXDLIN( 139)						int srcElementSize = view->bytesPerElement;
HXDLIN( 139)						int elementSize = _this->bytesPerElement;
HXDLIN( 139)						if ((view->type == _this->type)) {
HXLINE( 139)							int srcLength = srcData->length;
HXDLIN( 139)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 139)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 139)							_this->buffer = this1;
HXDLIN( 139)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 139)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 139)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 139)						_this->byteOffset = 0;
HXDLIN( 139)						_this->length = srcLength;
HXDLIN( 139)						this1 = _this;
            					}
            					else {
HXLINE( 139)						if (::hx::IsNotNull( buffer )) {
HXLINE( 139)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 139)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 139)							if ((in_byteOffset < 0)) {
HXLINE( 139)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 139)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 139)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 139)							int bufferByteLength = buffer->length;
HXDLIN( 139)							int elementSize = _this->bytesPerElement;
HXDLIN( 139)							int newByteLength = bufferByteLength;
HXDLIN( 139)							if (::hx::IsNull( len )) {
HXLINE( 139)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 139)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 139)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 139)								if ((newByteLength < 0)) {
HXLINE( 139)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 139)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 139)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 139)								if ((newRange > bufferByteLength)) {
HXLINE( 139)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 139)							_this->buffer = buffer;
HXDLIN( 139)							_this->byteOffset = in_byteOffset;
HXDLIN( 139)							_this->byteLength = newByteLength;
HXDLIN( 139)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 139)							this1 = _this;
            						}
            						else {
HXLINE( 139)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 139)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt16Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt16Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_144_toInt16Array)
HXLINE( 145)		bool _hx_tmp;
HXDLIN( 145)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 145)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 145)			_hx_tmp = true;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 145)			return null();
            		}
HXLINE( 150)		 ::Dynamic elements = null();
HXDLIN( 150)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 150)		::cpp::VirtualArray array = null();
HXDLIN( 150)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 150)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 150)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(16) )));
HXDLIN( 150)		 ::Dynamic len = null();
HXDLIN( 150)		if (::hx::IsNull( byteoffset )) {
HXLINE( 150)			byteoffset = 0;
            		}
HXDLIN( 150)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 150)		if (::hx::IsNotNull( elements )) {
HXLINE( 150)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            		}
            		else {
HXLINE( 150)			if (::hx::IsNotNull( array )) {
HXLINE( 150)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 150)				_this->byteOffset = 0;
HXDLIN( 150)				_this->length = array->get_length();
HXDLIN( 150)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 150)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 150)				_this->buffer = this2;
HXDLIN( 150)				_this->copyFromArray(array,null());
HXDLIN( 150)				this1 = _this;
            			}
            			else {
HXLINE( 150)				if (::hx::IsNotNull( vector )) {
HXLINE( 150)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 150)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 150)					_this->byteOffset = 0;
HXDLIN( 150)					_this->length = array->get_length();
HXDLIN( 150)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 150)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 150)					_this->buffer = this2;
HXDLIN( 150)					_this->copyFromArray(array,null());
HXDLIN( 150)					this1 = _this;
            				}
            				else {
HXLINE( 150)					if (::hx::IsNotNull( view )) {
HXLINE( 150)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 150)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 150)						int srcLength = view->length;
HXDLIN( 150)						int srcByteOffset = view->byteOffset;
HXDLIN( 150)						int srcElementSize = view->bytesPerElement;
HXDLIN( 150)						int elementSize = _this->bytesPerElement;
HXDLIN( 150)						if ((view->type == _this->type)) {
HXLINE( 150)							int srcLength = srcData->length;
HXDLIN( 150)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 150)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 150)							_this->buffer = this1;
HXDLIN( 150)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 150)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 150)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 150)						_this->byteOffset = 0;
HXDLIN( 150)						_this->length = srcLength;
HXDLIN( 150)						this1 = _this;
            					}
            					else {
HXLINE( 150)						if (::hx::IsNotNull( buffer )) {
HXLINE( 150)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 150)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 150)							if ((in_byteOffset < 0)) {
HXLINE( 150)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 150)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 150)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 150)							int bufferByteLength = buffer->length;
HXDLIN( 150)							int elementSize = _this->bytesPerElement;
HXDLIN( 150)							int newByteLength = bufferByteLength;
HXDLIN( 150)							if (::hx::IsNull( len )) {
HXLINE( 150)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 150)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 150)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 150)								if ((newByteLength < 0)) {
HXLINE( 150)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 150)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 150)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 150)								if ((newRange > bufferByteLength)) {
HXLINE( 150)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 150)							_this->buffer = buffer;
HXDLIN( 150)							_this->byteOffset = in_byteOffset;
HXDLIN( 150)							_this->byteLength = newByteLength;
HXDLIN( 150)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 150)							this1 = _this;
            						}
            						else {
HXLINE( 150)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 150)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt16Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt32Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_155_toUInt32Array)
HXLINE( 156)		bool _hx_tmp;
HXDLIN( 156)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 156)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 156)			_hx_tmp = true;
            		}
HXDLIN( 156)		if (_hx_tmp) {
HXLINE( 156)			return null();
            		}
HXLINE( 161)		 ::Dynamic elements = null();
HXDLIN( 161)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 161)		::cpp::VirtualArray array = null();
HXDLIN( 161)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 161)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 161)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(32) )));
HXDLIN( 161)		 ::Dynamic len = null();
HXDLIN( 161)		if (::hx::IsNull( byteoffset )) {
HXLINE( 161)			byteoffset = 0;
            		}
HXDLIN( 161)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 161)		if (::hx::IsNotNull( elements )) {
HXLINE( 161)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            		}
            		else {
HXLINE( 161)			if (::hx::IsNotNull( array )) {
HXLINE( 161)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 161)				_this->byteOffset = 0;
HXDLIN( 161)				_this->length = array->get_length();
HXDLIN( 161)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 161)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 161)				_this->buffer = this2;
HXDLIN( 161)				_this->copyFromArray(array,null());
HXDLIN( 161)				this1 = _this;
            			}
            			else {
HXLINE( 161)				if (::hx::IsNotNull( vector )) {
HXLINE( 161)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 161)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 161)					_this->byteOffset = 0;
HXDLIN( 161)					_this->length = array->get_length();
HXDLIN( 161)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 161)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 161)					_this->buffer = this2;
HXDLIN( 161)					_this->copyFromArray(array,null());
HXDLIN( 161)					this1 = _this;
            				}
            				else {
HXLINE( 161)					if (::hx::IsNotNull( view )) {
HXLINE( 161)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 161)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 161)						int srcLength = view->length;
HXDLIN( 161)						int srcByteOffset = view->byteOffset;
HXDLIN( 161)						int srcElementSize = view->bytesPerElement;
HXDLIN( 161)						int elementSize = _this->bytesPerElement;
HXDLIN( 161)						if ((view->type == _this->type)) {
HXLINE( 161)							int srcLength = srcData->length;
HXDLIN( 161)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 161)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 161)							_this->buffer = this1;
HXDLIN( 161)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 161)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 161)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 161)						_this->byteOffset = 0;
HXDLIN( 161)						_this->length = srcLength;
HXDLIN( 161)						this1 = _this;
            					}
            					else {
HXLINE( 161)						if (::hx::IsNotNull( buffer )) {
HXLINE( 161)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 161)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 161)							if ((in_byteOffset < 0)) {
HXLINE( 161)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 161)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 161)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 161)							int bufferByteLength = buffer->length;
HXDLIN( 161)							int elementSize = _this->bytesPerElement;
HXDLIN( 161)							int newByteLength = bufferByteLength;
HXDLIN( 161)							if (::hx::IsNull( len )) {
HXLINE( 161)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 161)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 161)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 161)								if ((newByteLength < 0)) {
HXLINE( 161)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 161)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 161)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 161)								if ((newRange > bufferByteLength)) {
HXLINE( 161)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 161)							_this->buffer = buffer;
HXDLIN( 161)							_this->byteOffset = in_byteOffset;
HXDLIN( 161)							_this->byteLength = newByteLength;
HXDLIN( 161)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 161)							this1 = _this;
            						}
            						else {
HXLINE( 161)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 161)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt32Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt32Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_166_toInt32Array)
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 167)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 167)			_hx_tmp = true;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 167)			return null();
            		}
HXLINE( 172)		 ::Dynamic elements = null();
HXDLIN( 172)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 172)		::cpp::VirtualArray array = null();
HXDLIN( 172)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 172)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 172)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(32) )));
HXDLIN( 172)		 ::Dynamic len = null();
HXDLIN( 172)		if (::hx::IsNull( byteoffset )) {
HXLINE( 172)			byteoffset = 0;
            		}
HXDLIN( 172)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 172)		if (::hx::IsNotNull( elements )) {
HXLINE( 172)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            		}
            		else {
HXLINE( 172)			if (::hx::IsNotNull( array )) {
HXLINE( 172)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 172)				_this->byteOffset = 0;
HXDLIN( 172)				_this->length = array->get_length();
HXDLIN( 172)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 172)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 172)				_this->buffer = this2;
HXDLIN( 172)				_this->copyFromArray(array,null());
HXDLIN( 172)				this1 = _this;
            			}
            			else {
HXLINE( 172)				if (::hx::IsNotNull( vector )) {
HXLINE( 172)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 172)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 172)					_this->byteOffset = 0;
HXDLIN( 172)					_this->length = array->get_length();
HXDLIN( 172)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 172)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 172)					_this->buffer = this2;
HXDLIN( 172)					_this->copyFromArray(array,null());
HXDLIN( 172)					this1 = _this;
            				}
            				else {
HXLINE( 172)					if (::hx::IsNotNull( view )) {
HXLINE( 172)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 172)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 172)						int srcLength = view->length;
HXDLIN( 172)						int srcByteOffset = view->byteOffset;
HXDLIN( 172)						int srcElementSize = view->bytesPerElement;
HXDLIN( 172)						int elementSize = _this->bytesPerElement;
HXDLIN( 172)						if ((view->type == _this->type)) {
HXLINE( 172)							int srcLength = srcData->length;
HXDLIN( 172)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 172)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 172)							_this->buffer = this1;
HXDLIN( 172)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 172)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 172)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 172)						_this->byteOffset = 0;
HXDLIN( 172)						_this->length = srcLength;
HXDLIN( 172)						this1 = _this;
            					}
            					else {
HXLINE( 172)						if (::hx::IsNotNull( buffer )) {
HXLINE( 172)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 172)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 172)							if ((in_byteOffset < 0)) {
HXLINE( 172)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 172)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 172)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 172)							int bufferByteLength = buffer->length;
HXDLIN( 172)							int elementSize = _this->bytesPerElement;
HXDLIN( 172)							int newByteLength = bufferByteLength;
HXDLIN( 172)							if (::hx::IsNull( len )) {
HXLINE( 172)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 172)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 172)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 172)								if ((newByteLength < 0)) {
HXLINE( 172)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 172)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 172)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 172)								if ((newRange > bufferByteLength)) {
HXLINE( 172)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 172)							_this->buffer = buffer;
HXDLIN( 172)							_this->byteOffset = in_byteOffset;
HXDLIN( 172)							_this->byteLength = newByteLength;
HXDLIN( 172)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 172)							this1 = _this;
            						}
            						else {
HXLINE( 172)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 172)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt32Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toFloat32Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_177_toFloat32Array)
HXLINE( 178)		bool _hx_tmp;
HXDLIN( 178)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 178)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 178)			_hx_tmp = true;
            		}
HXDLIN( 178)		if (_hx_tmp) {
HXLINE( 178)			return null();
            		}
HXLINE( 183)		 ::Dynamic elements = null();
HXDLIN( 183)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 183)		::cpp::VirtualArray array = null();
HXDLIN( 183)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 183)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 183)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(32) )));
HXDLIN( 183)		 ::Dynamic len = null();
HXDLIN( 183)		if (::hx::IsNull( byteoffset )) {
HXLINE( 183)			byteoffset = 0;
            		}
HXDLIN( 183)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 183)		if (::hx::IsNotNull( elements )) {
HXLINE( 183)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXLINE( 183)			if (::hx::IsNotNull( array )) {
HXLINE( 183)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 183)				_this->byteOffset = 0;
HXDLIN( 183)				_this->length = array->get_length();
HXDLIN( 183)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)				_this->buffer = this2;
HXDLIN( 183)				_this->copyFromArray(array,null());
HXDLIN( 183)				this1 = _this;
            			}
            			else {
HXLINE( 183)				if (::hx::IsNotNull( vector )) {
HXLINE( 183)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 183)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 183)					_this->byteOffset = 0;
HXDLIN( 183)					_this->length = array->get_length();
HXDLIN( 183)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 183)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 183)					_this->buffer = this2;
HXDLIN( 183)					_this->copyFromArray(array,null());
HXDLIN( 183)					this1 = _this;
            				}
            				else {
HXLINE( 183)					if (::hx::IsNotNull( view )) {
HXLINE( 183)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 183)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 183)						int srcLength = view->length;
HXDLIN( 183)						int srcByteOffset = view->byteOffset;
HXDLIN( 183)						int srcElementSize = view->bytesPerElement;
HXDLIN( 183)						int elementSize = _this->bytesPerElement;
HXDLIN( 183)						if ((view->type == _this->type)) {
HXLINE( 183)							int srcLength = srcData->length;
HXDLIN( 183)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 183)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 183)							_this->buffer = this1;
HXDLIN( 183)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 183)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 183)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 183)						_this->byteOffset = 0;
HXDLIN( 183)						_this->length = srcLength;
HXDLIN( 183)						this1 = _this;
            					}
            					else {
HXLINE( 183)						if (::hx::IsNotNull( buffer )) {
HXLINE( 183)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 183)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 183)							if ((in_byteOffset < 0)) {
HXLINE( 183)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 183)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 183)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 183)							int bufferByteLength = buffer->length;
HXDLIN( 183)							int elementSize = _this->bytesPerElement;
HXDLIN( 183)							int newByteLength = bufferByteLength;
HXDLIN( 183)							if (::hx::IsNull( len )) {
HXLINE( 183)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 183)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 183)								if ((newByteLength < 0)) {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 183)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 183)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 183)								if ((newRange > bufferByteLength)) {
HXLINE( 183)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 183)							_this->buffer = buffer;
HXDLIN( 183)							_this->byteOffset = in_byteOffset;
HXDLIN( 183)							_this->byteLength = newByteLength;
HXDLIN( 183)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 183)							this1 = _this;
            						}
            						else {
HXLINE( 183)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 183)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toFloat32Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toFloat64Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_188_toFloat64Array)
HXLINE( 189)		bool _hx_tmp;
HXDLIN( 189)		if (::hx::IsNotNull( bytePointer )) {
HXLINE( 189)			_hx_tmp = ::hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 189)			_hx_tmp = true;
            		}
HXDLIN( 189)		if (_hx_tmp) {
HXLINE( 189)			return null();
            		}
HXLINE( 194)		 ::Dynamic elements = null();
HXDLIN( 194)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 194)		::cpp::VirtualArray array = null();
HXDLIN( 194)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 194)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 194)		 ::Dynamic byteoffset = ::Std_obj::_hx_int((( (Float)(bytePointer->offset) ) / ( (Float)(64) )));
HXDLIN( 194)		 ::Dynamic len = null();
HXDLIN( 194)		if (::hx::IsNull( byteoffset )) {
HXLINE( 194)			byteoffset = 0;
            		}
HXDLIN( 194)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 194)		if (::hx::IsNotNull( elements )) {
HXLINE( 194)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            		}
            		else {
HXLINE( 194)			if (::hx::IsNotNull( array )) {
HXLINE( 194)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 194)				_this->byteOffset = 0;
HXDLIN( 194)				_this->length = array->get_length();
HXDLIN( 194)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 194)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 194)				_this->buffer = this2;
HXDLIN( 194)				_this->copyFromArray(array,null());
HXDLIN( 194)				this1 = _this;
            			}
            			else {
HXLINE( 194)				if (::hx::IsNotNull( vector )) {
HXLINE( 194)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 194)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 194)					_this->byteOffset = 0;
HXDLIN( 194)					_this->length = array->get_length();
HXDLIN( 194)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 194)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 194)					_this->buffer = this2;
HXDLIN( 194)					_this->copyFromArray(array,null());
HXDLIN( 194)					this1 = _this;
            				}
            				else {
HXLINE( 194)					if (::hx::IsNotNull( view )) {
HXLINE( 194)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 194)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 194)						int srcLength = view->length;
HXDLIN( 194)						int srcByteOffset = view->byteOffset;
HXDLIN( 194)						int srcElementSize = view->bytesPerElement;
HXDLIN( 194)						int elementSize = _this->bytesPerElement;
HXDLIN( 194)						if ((view->type == _this->type)) {
HXLINE( 194)							int srcLength = srcData->length;
HXDLIN( 194)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 194)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 194)							_this->buffer = this1;
HXDLIN( 194)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 194)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 194)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 194)						_this->byteOffset = 0;
HXDLIN( 194)						_this->length = srcLength;
HXDLIN( 194)						this1 = _this;
            					}
            					else {
HXLINE( 194)						if (::hx::IsNotNull( buffer )) {
HXLINE( 194)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 194)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 194)							if ((in_byteOffset < 0)) {
HXLINE( 194)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 194)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 194)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 194)							int bufferByteLength = buffer->length;
HXDLIN( 194)							int elementSize = _this->bytesPerElement;
HXDLIN( 194)							int newByteLength = bufferByteLength;
HXDLIN( 194)							if (::hx::IsNull( len )) {
HXLINE( 194)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 194)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 194)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 194)								if ((newByteLength < 0)) {
HXLINE( 194)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 194)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 194)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 194)								if ((newRange > bufferByteLength)) {
HXLINE( 194)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 194)							_this->buffer = buffer;
HXDLIN( 194)							_this->byteOffset = in_byteOffset;
HXDLIN( 194)							_this->byteLength = newByteLength;
HXDLIN( 194)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 194)							this1 = _this;
            						}
            						else {
HXLINE( 194)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 194)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toFloat64Array,return )


BytePointer_Impl__obj::BytePointer_Impl__obj()
{
}

bool BytePointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__arrayGet") ) { outValue = _hx___arrayGet_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__arraySet") ) { outValue = _hx___arraySet_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toInt8Array") ) { outValue = toInt8Array_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toUInt8Array") ) { outValue = toUInt8Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt16Array") ) { outValue = toInt16Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt32Array") ) { outValue = toInt32Array_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUInt16Array") ) { outValue = toUInt16Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUInt32Array") ) { outValue = toUInt32Array_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toFloat32Array") ) { outValue = toFloat32Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloat64Array") ) { outValue = toFloat64Array_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fromArrayBufferView") ) { outValue = fromArrayBufferView_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUInt8ClampedArray") ) { outValue = toUInt8ClampedArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BytePointer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BytePointer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class BytePointer_Impl__obj::__mClass;

static ::String BytePointer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("set",a2,9b,57,00),
	HX_("__arrayGet",9d,03,a3,92),
	HX_("__arraySet",a9,1e,ac,92),
	HX_("fromArrayBufferView",34,70,74,c8),
	HX_("fromArrayBuffer",2f,ce,77,ec),
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromBytesData",6b,d9,41,db),
	HX_("fromFile",06,9d,87,a1),
	HX_("fromLimeBytes",4c,d2,e6,4e),
	HX_("toUInt8Array",96,d6,de,32),
	HX_("toUInt8ClampedArray",c2,df,1c,6a),
	HX_("toInt8Array",75,6f,09,74),
	HX_("toUInt16Array",7f,1a,84,90),
	HX_("toInt16Array",c0,44,9f,54),
	HX_("toUInt32Array",85,96,41,4a),
	HX_("toInt32Array",c6,c0,5c,0e),
	HX_("toFloat32Array",79,74,27,05),
	HX_("toFloat64Array",7a,91,9e,4e),
	::String(null())
};

void BytePointer_Impl__obj::__register()
{
	BytePointer_Impl__obj _hx_dummy;
	BytePointer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._BytePointer.BytePointer_Impl_",73,da,65,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BytePointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BytePointer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BytePointer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytePointer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytePointer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _BytePointer
