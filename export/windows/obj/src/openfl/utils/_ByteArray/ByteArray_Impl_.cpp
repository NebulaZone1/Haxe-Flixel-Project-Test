#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_170__new,"openfl.utils._ByteArray.ByteArray_Impl_","_new",0x0c79e17f,"openfl.utils._ByteArray.ByteArray_Impl_._new","openfl/utils/ByteArray.hx",170,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_188_clear,"openfl.utils._ByteArray.ByteArray_Impl_","clear",0x2a733faf,"openfl.utils._ByteArray.ByteArray_Impl_.clear","openfl/utils/ByteArray.hx",188,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_250_compress,"openfl.utils._ByteArray.ByteArray_Impl_","compress",0x0a757ac0,"openfl.utils._ByteArray.ByteArray_Impl_.compress","openfl/utils/ByteArray.hx",250,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_278_deflate,"openfl.utils._ByteArray.ByteArray_Impl_","deflate",0x153b260d,"openfl.utils._ByteArray.ByteArray_Impl_.deflate","openfl/utils/ByteArray.hx",278,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_289_fromArrayBuffer,"openfl.utils._ByteArray.ByteArray_Impl_","fromArrayBuffer",0x09275ad1,"openfl.utils._ByteArray.ByteArray_Impl_.fromArrayBuffer","openfl/utils/ByteArray.hx",289,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_311_fromBytes,"openfl.utils._ByteArray.ByteArray_Impl_","fromBytes",0xcad779c3,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytes","openfl/utils/ByteArray.hx",311,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_339_fromBytesData,"openfl.utils._ByteArray.ByteArray_Impl_","fromBytesData",0x72e7998d,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytesData","openfl/utils/ByteArray.hx",339,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_367_fromFile,"openfl.utils._ByteArray.ByteArray_Impl_","fromFile",0x283dd024,"openfl.utils._ByteArray.ByteArray_Impl_.fromFile","openfl/utils/ByteArray.hx",367,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_382_fromLimeBytes,"openfl.utils._ByteArray.ByteArray_Impl_","fromLimeBytes",0xe68c926e,"openfl.utils._ByteArray.ByteArray_Impl_.fromLimeBytes","openfl/utils/ByteArray.hx",382,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_393_get,"openfl.utils._ByteArray.ByteArray_Impl_","get",0x47412238,"openfl.utils._ByteArray.ByteArray_Impl_.get","openfl/utils/ByteArray.hx",393,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_421_inflate,"openfl.utils._ByteArray.ByteArray_Impl_","inflate",0x7e5cb729,"openfl.utils._ByteArray.ByteArray_Impl_.inflate","openfl/utils/ByteArray.hx",421,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_436_loadFromBytes,"openfl.utils._ByteArray.ByteArray_Impl_","loadFromBytes",0x8c2c83bd,"openfl.utils._ByteArray.ByteArray_Impl_.loadFromBytes","openfl/utils/ByteArray.hx",436,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_435_loadFromBytes,"openfl.utils._ByteArray.ByteArray_Impl_","loadFromBytes",0x8c2c83bd,"openfl.utils._ByteArray.ByteArray_Impl_.loadFromBytes","openfl/utils/ByteArray.hx",435,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_458_loadFromFile,"openfl.utils._ByteArray.ByteArray_Impl_","loadFromFile",0x2a41a36a,"openfl.utils._ByteArray.ByteArray_Impl_.loadFromFile","openfl/utils/ByteArray.hx",458,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_457_loadFromFile,"openfl.utils._ByteArray.ByteArray_Impl_","loadFromFile",0x2a41a36a,"openfl.utils._ByteArray.ByteArray_Impl_.loadFromFile","openfl/utils/ByteArray.hx",457,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_478_readBoolean,"openfl.utils._ByteArray.ByteArray_Impl_","readBoolean",0xa9aa9194,"openfl.utils._ByteArray.ByteArray_Impl_.readBoolean","openfl/utils/ByteArray.hx",478,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_491_readByte,"openfl.utils._ByteArray.ByteArray_Impl_","readByte",0xefd12c9c,"openfl.utils._ByteArray.ByteArray_Impl_.readByte","openfl/utils/ByteArray.hx",491,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_512_readBytes,"openfl.utils._ByteArray.ByteArray_Impl_","readBytes",0xe735dc57,"openfl.utils._ByteArray.ByteArray_Impl_.readBytes","openfl/utils/ByteArray.hx",512,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_524_readDouble,"openfl.utils._ByteArray.ByteArray_Impl_","readDouble",0x7346c5a5,"openfl.utils._ByteArray.ByteArray_Impl_.readDouble","openfl/utils/ByteArray.hx",524,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_536_readFloat,"openfl.utils._ByteArray.ByteArray_Impl_","readFloat",0x2c349988,"openfl.utils._ByteArray.ByteArray_Impl_.readFloat","openfl/utils/ByteArray.hx",536,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_549_readInt,"openfl.utils._ByteArray.ByteArray_Impl_","readInt",0x750acddb,"openfl.utils._ByteArray.ByteArray_Impl_.readInt","openfl/utils/ByteArray.hx",549,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_579_readMultiByte,"openfl.utils._ByteArray.ByteArray_Impl_","readMultiByte",0xad6f400d,"openfl.utils._ByteArray.ByteArray_Impl_.readMultiByte","openfl/utils/ByteArray.hx",579,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_590_readObject,"openfl.utils._ByteArray.ByteArray_Impl_","readObject",0x55bb1953,"openfl.utils._ByteArray.ByteArray_Impl_.readObject","openfl/utils/ByteArray.hx",590,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_603_readShort,"openfl.utils._ByteArray.ByteArray_Impl_","readShort",0xa5c55868,"openfl.utils._ByteArray.ByteArray_Impl_.readShort","openfl/utils/ByteArray.hx",603,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_615_readUTF,"openfl.utils._ByteArray.ByteArray_Impl_","readUTF",0x7513d213,"openfl.utils._ByteArray.ByteArray_Impl_.readUTF","openfl/utils/ByteArray.hx",615,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_628_readUTFBytes,"openfl.utils._ByteArray.ByteArray_Impl_","readUTFBytes",0x21604158,"openfl.utils._ByteArray.ByteArray_Impl_.readUTFBytes","openfl/utils/ByteArray.hx",628,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_641_readUnsignedByte,"openfl.utils._ByteArray.ByteArray_Impl_","readUnsignedByte",0x98b98c31,"openfl.utils._ByteArray.ByteArray_Impl_.readUnsignedByte","openfl/utils/ByteArray.hx",641,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_654_readUnsignedInt,"openfl.utils._ByteArray.ByteArray_Impl_","readUnsignedInt",0x21ff37e6,"openfl.utils._ByteArray.ByteArray_Impl_.readUnsignedInt","openfl/utils/ByteArray.hx",654,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_667_readUnsignedShort,"openfl.utils._ByteArray.ByteArray_Impl_","readUnsignedShort",0xc8309b33,"openfl.utils._ByteArray.ByteArray_Impl_.readUnsignedShort","openfl/utils/ByteArray.hx",667,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_671_set,"openfl.utils._ByteArray.ByteArray_Impl_","set",0x474a3d44,"openfl.utils._ByteArray.ByteArray_Impl_.set","openfl/utils/ByteArray.hx",671,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_698_toArrayBuffer,"openfl.utils._ByteArray.ByteArray_Impl_","toArrayBuffer",0x56ee15e0,"openfl.utils._ByteArray.ByteArray_Impl_.toArrayBuffer","openfl/utils/ByteArray.hx",698,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_705_toBytePointer,"openfl.utils._ByteArray.ByteArray_Impl_","toBytePointer",0x1626f8fc,"openfl.utils._ByteArray.ByteArray_Impl_.toBytePointer","openfl/utils/ByteArray.hx",705,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_716_toDataPointer,"openfl.utils._ByteArray.ByteArray_Impl_","toDataPointer",0x2c1eca1a,"openfl.utils._ByteArray.ByteArray_Impl_.toDataPointer","openfl/utils/ByteArray.hx",716,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_731_toBytes,"openfl.utils._ByteArray.ByteArray_Impl_","toBytes",0xfc5d6f92,"openfl.utils._ByteArray.ByteArray_Impl_.toBytes","openfl/utils/ByteArray.hx",731,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_743_toBytesData,"openfl.utils._ByteArray.ByteArray_Impl_","toBytesData",0xa6fe22dc,"openfl.utils._ByteArray.ByteArray_Impl_.toBytesData","openfl/utils/ByteArray.hx",743,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_756_toLimeBytes,"openfl.utils._ByteArray.ByteArray_Impl_","toLimeBytes",0x1aa31bbd,"openfl.utils._ByteArray.ByteArray_Impl_.toLimeBytes","openfl/utils/ByteArray.hx",756,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_772_toString,"openfl.utils._ByteArray.ByteArray_Impl_","toString",0xbf2503ca,"openfl.utils._ByteArray.ByteArray_Impl_.toString","openfl/utils/ByteArray.hx",772,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_808_uncompress,"openfl.utils._ByteArray.ByteArray_Impl_","uncompress",0x5082e599,"openfl.utils._ByteArray.ByteArray_Impl_.uncompress","openfl/utils/ByteArray.hx",808,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_823_writeBoolean,"openfl.utils._ByteArray.ByteArray_Impl_","writeBoolean",0x127ea9a7,"openfl.utils._ByteArray.ByteArray_Impl_.writeBoolean","openfl/utils/ByteArray.hx",823,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_837_writeByte,"openfl.utils._ByteArray.ByteArray_Impl_","writeByte",0xa28d9aa9,"openfl.utils._ByteArray.ByteArray_Impl_.writeByte","openfl/utils/ByteArray.hx",837,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_861_writeBytes,"openfl.utils._ByteArray.ByteArray_Impl_","writeBytes",0x9959b9aa,"openfl.utils._ByteArray.ByteArray_Impl_.writeBytes","openfl/utils/ByteArray.hx",861,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_872_writeDouble,"openfl.utils._ByteArray.ByteArray_Impl_","writeDouble",0xa08490f2,"openfl.utils._ByteArray.ByteArray_Impl_.writeDouble","openfl/utils/ByteArray.hx",872,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_883_writeFloat,"openfl.utils._ByteArray.ByteArray_Impl_","writeFloat",0xde5876db,"openfl.utils._ByteArray.ByteArray_Impl_.writeFloat","openfl/utils/ByteArray.hx",883,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_893_writeInt,"openfl.utils._ByteArray.ByteArray_Impl_","writeInt",0xaaa6a06e,"openfl.utils._ByteArray.ByteArray_Impl_.writeInt","openfl/utils/ByteArray.hx",893,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_910_writeMultiByte,"openfl.utils._ByteArray.ByteArray_Impl_","writeMultiByte",0x0587c2e0,"openfl.utils._ByteArray.ByteArray_Impl_.writeMultiByte","openfl/utils/ByteArray.hx",910,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_920_writeObject,"openfl.utils._ByteArray.ByteArray_Impl_","writeObject",0x82f8e4a0,"openfl.utils._ByteArray.ByteArray_Impl_.writeObject","openfl/utils/ByteArray.hx",920,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_932_writeShort,"openfl.utils._ByteArray.ByteArray_Impl_","writeShort",0x57e935bb,"openfl.utils._ByteArray.ByteArray_Impl_.writeShort","openfl/utils/ByteArray.hx",932,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_945_writeUTF,"openfl.utils._ByteArray.ByteArray_Impl_","writeUTF",0xaaafa4a6,"openfl.utils._ByteArray.ByteArray_Impl_.writeUTF","openfl/utils/ByteArray.hx",945,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_957_writeUTFBytes,"openfl.utils._ByteArray.ByteArray_Impl_","writeUTFBytes",0x722139e5,"openfl.utils._ByteArray.ByteArray_Impl_.writeUTFBytes","openfl/utils/ByteArray.hx",957,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_967_writeUnsignedInt,"openfl.utils._ByteArray.ByteArray_Impl_","writeUnsignedInt",0x135c5579,"openfl.utils._ByteArray.ByteArray_Impl_.writeUnsignedInt","openfl/utils/ByteArray.hx",967,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_973_get_bytesAvailable,"openfl.utils._ByteArray.ByteArray_Impl_","get_bytesAvailable",0xe6dbb145,"openfl.utils._ByteArray.ByteArray_Impl_.get_bytesAvailable","openfl/utils/ByteArray.hx",973,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_978_get_defaultEndian,"openfl.utils._ByteArray.ByteArray_Impl_","get_defaultEndian",0x4c96f0b5,"openfl.utils._ByteArray.ByteArray_Impl_.get_defaultEndian","openfl/utils/ByteArray.hx",978,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_983_set_defaultEndian,"openfl.utils._ByteArray.ByteArray_Impl_","set_defaultEndian",0x7004c8c1,"openfl.utils._ByteArray.ByteArray_Impl_.set_defaultEndian","openfl/utils/ByteArray.hx",983,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_988_get_defaultObjectEncoding,"openfl.utils._ByteArray.ByteArray_Impl_","get_defaultObjectEncoding",0xa2c020cc,"openfl.utils._ByteArray.ByteArray_Impl_.get_defaultObjectEncoding","openfl/utils/ByteArray.hx",988,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_993_set_defaultObjectEncoding,"openfl.utils._ByteArray.ByteArray_Impl_","set_defaultObjectEncoding",0x0f16e4d8,"openfl.utils._ByteArray.ByteArray_Impl_.set_defaultObjectEncoding","openfl/utils/ByteArray.hx",993,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_998_get_endian,"openfl.utils._ByteArray.ByteArray_Impl_","get_endian",0x320fbf02,"openfl.utils._ByteArray.ByteArray_Impl_.get_endian","openfl/utils/ByteArray.hx",998,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_1003_set_endian,"openfl.utils._ByteArray.ByteArray_Impl_","set_endian",0x358d5d76,"openfl.utils._ByteArray.ByteArray_Impl_.set_endian","openfl/utils/ByteArray.hx",1003,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_1013_get_length,"openfl.utils._ByteArray.ByteArray_Impl_","get_length",0xd68ebb4d,"openfl.utils._ByteArray.ByteArray_Impl_.get_length","openfl/utils/ByteArray.hx",1013,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_1018_set_length,"openfl.utils._ByteArray.ByteArray_Impl_","set_length",0xda0c59c1,"openfl.utils._ByteArray.ByteArray_Impl_.set_length","openfl/utils/ByteArray.hx",1018,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_1039_get_objectEncoding,"openfl.utils._ByteArray.ByteArray_Impl_","get_objectEncoding",0x75538419,"openfl.utils._ByteArray.ByteArray_Impl_.get_objectEncoding","openfl/utils/ByteArray.hx",1039,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_1044_set_objectEncoding,"openfl.utils._ByteArray.ByteArray_Impl_","set_objectEncoding",0x5202b68d,"openfl.utils._ByteArray.ByteArray_Impl_.set_objectEncoding","openfl/utils/ByteArray.hx",1044,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_1049_get_position,"openfl.utils._ByteArray.ByteArray_Impl_","get_position",0x4f656ed0,"openfl.utils._ByteArray.ByteArray_Impl_.get_position","openfl/utils/ByteArray.hx",1049,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_1054_set_position,"openfl.utils._ByteArray.ByteArray_Impl_","set_position",0x645e9244,"openfl.utils._ByteArray.ByteArray_Impl_.set_position","openfl/utils/ByteArray.hx",1054,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_67382ab39e6adff2_103_boot,"openfl.utils._ByteArray.ByteArray_Impl_","boot",0x0e765050,"openfl.utils._ByteArray.ByteArray_Impl_.boot","openfl/utils/ByteArray.hx",103,0xaa5cee4a)
namespace openfl{
namespace utils{
namespace _ByteArray{

void ByteArray_Impl__obj::__construct() { }

Dynamic ByteArray_Impl__obj::__CreateEmpty() { return new ByteArray_Impl__obj; }

void *ByteArray_Impl__obj::_hx_vtable = 0;

Dynamic ByteArray_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ByteArray_Impl__obj > _hx_result = new ByteArray_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ByteArray_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x63baca82;
}

 ::lime::utils::BytePointerData ByteArray_Impl__obj::_hx___bytePointer;

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::_new(::hx::Null< int >  __o_length){
            		int length = __o_length.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_67382ab39e6adff2_170__new)
HXDLIN( 170)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,length);
HXDLIN( 170)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,_new,return )

void ByteArray_Impl__obj::clear( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_188_clear)
HXDLIN( 188)		this1->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,clear,(void))

void ByteArray_Impl__obj::compress( ::openfl::utils::ByteArrayData this1, ::Dynamic algorithm){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_250_compress)
HXDLIN( 250)		this1->compress(algorithm);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,compress,(void))

void ByteArray_Impl__obj::deflate( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_278_deflate)
HXDLIN( 278)		this1->deflate();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,deflate,(void))

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_289_fromArrayBuffer)
HXLINE( 290)		if (::hx::IsNull( buffer )) {
HXLINE( 290)			return null();
            		}
HXLINE( 299)		return ::openfl::utils::ByteArrayData_obj::fromBytes(buffer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromArrayBuffer,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_311_fromBytes)
HXLINE( 312)		if (::hx::IsNull( bytes )) {
HXLINE( 312)			return null();
            		}
HXLINE( 317)		if (::Std_obj::isOfType(bytes,::hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE( 319)			return ( ( ::openfl::utils::ByteArrayData)(bytes) );
            		}
            		else {
HXLINE( 326)			return ::openfl::utils::ByteArrayData_obj::fromBytes(bytes);
            		}
HXLINE( 317)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytes,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytesData(::Array< unsigned char > bytesData){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_339_fromBytesData)
HXLINE( 340)		if (::hx::IsNull( bytesData )) {
HXLINE( 340)			return null();
            		}
HXLINE( 347)		return ::openfl::utils::ByteArrayData_obj::fromBytes(::haxe::io::Bytes_obj::ofData(bytesData));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytesData,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_367_fromFile)
HXDLIN( 367)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromFile,return )

 ::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_382_fromLimeBytes)
HXDLIN( 382)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromLimeBytes,return )

int ByteArray_Impl__obj::get( ::openfl::utils::ByteArrayData this1,int index){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_393_get)
HXDLIN( 393)		return ( (int)(this1->b->__get(index)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,get,return )

void ByteArray_Impl__obj::inflate( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_421_inflate)
HXDLIN( 421)		this1->inflate();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,inflate,(void))

 ::lime::app::Future ByteArray_Impl__obj::loadFromBytes( ::haxe::io::Bytes bytes){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::haxe::io::Bytes limeBytes){
            			HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_436_loadFromBytes)
HXLINE( 437)			 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(limeBytes);
HXLINE( 438)			return ::lime::app::Future_obj::withValue(byteArray);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_435_loadFromBytes)
HXDLIN( 435)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromBytes(bytes)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,loadFromBytes,return )

 ::lime::app::Future ByteArray_Impl__obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::haxe::io::Bytes limeBytes){
            			HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_458_loadFromFile)
HXLINE( 459)			 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(limeBytes);
HXLINE( 460)			return ::lime::app::Future_obj::withValue(byteArray);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_457_loadFromFile)
HXDLIN( 457)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,loadFromFile,return )

bool ByteArray_Impl__obj::readBoolean( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_478_readBoolean)
HXDLIN( 478)		return this1->readBoolean();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readBoolean,return )

int ByteArray_Impl__obj::readByte( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_491_readByte)
HXDLIN( 491)		return this1->readByte();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readByte,return )

void ByteArray_Impl__obj::readBytes( ::openfl::utils::ByteArrayData this1, ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_512_readBytes)
HXDLIN( 512)		this1->readBytes(bytes,offset,length);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ByteArray_Impl__obj,readBytes,(void))

Float ByteArray_Impl__obj::readDouble( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_524_readDouble)
HXDLIN( 524)		return this1->readDouble();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readDouble,return )

Float ByteArray_Impl__obj::readFloat( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_536_readFloat)
HXDLIN( 536)		return this1->readFloat();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readFloat,return )

int ByteArray_Impl__obj::readInt( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_549_readInt)
HXDLIN( 549)		return this1->readInt();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readInt,return )

::String ByteArray_Impl__obj::readMultiByte( ::openfl::utils::ByteArrayData this1,int length,::String charSet){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_579_readMultiByte)
HXDLIN( 579)		return this1->readMultiByte(length,charSet);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ByteArray_Impl__obj,readMultiByte,return )

 ::Dynamic ByteArray_Impl__obj::readObject( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_590_readObject)
HXDLIN( 590)		return this1->readObject();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readObject,return )

int ByteArray_Impl__obj::readShort( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_603_readShort)
HXDLIN( 603)		return this1->readShort();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readShort,return )

::String ByteArray_Impl__obj::readUTF( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_615_readUTF)
HXDLIN( 615)		return this1->readUTF();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readUTF,return )

::String ByteArray_Impl__obj::readUTFBytes( ::openfl::utils::ByteArrayData this1,int length){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_628_readUTFBytes)
HXDLIN( 628)		return this1->readUTFBytes(length);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,readUTFBytes,return )

int ByteArray_Impl__obj::readUnsignedByte( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_641_readUnsignedByte)
HXDLIN( 641)		return this1->readUnsignedByte();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readUnsignedByte,return )

int ByteArray_Impl__obj::readUnsignedInt( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_654_readUnsignedInt)
HXDLIN( 654)		return this1->readUnsignedInt();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readUnsignedInt,return )

int ByteArray_Impl__obj::readUnsignedShort( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_667_readUnsignedShort)
HXDLIN( 667)		return this1->readUnsignedShort();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,readUnsignedShort,return )

int ByteArray_Impl__obj::set( ::openfl::utils::ByteArrayData this1,int index,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_671_set)
HXLINE( 676)		this1->_hx___resize((index + 1));
HXLINE( 677)		this1->b[index] = ( (unsigned char)(value) );
HXLINE( 679)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ByteArray_Impl__obj,set,return )

 ::haxe::io::Bytes ByteArray_Impl__obj::toArrayBuffer( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_698_toArrayBuffer)
HXDLIN( 698)		return byteArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toArrayBuffer,return )

 ::lime::utils::BytePointerData ByteArray_Impl__obj::toBytePointer( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_705_toBytePointer)
HXLINE( 707)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer,byteArray,null(),null(),byteArray->position);
HXLINE( 709)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytePointer,return )

Float ByteArray_Impl__obj::toDataPointer( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_716_toDataPointer)
HXLINE( 718)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer,byteArray,null(),null(),byteArray->position);
HXLINE( 720)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::openfl::utils::_ByteArray::ByteArray_Impl__obj::_hx___bytePointer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toDataPointer,return )

 ::haxe::io::Bytes ByteArray_Impl__obj::toBytes( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_731_toBytes)
HXDLIN( 731)		return byteArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytes,return )

::Array< unsigned char > ByteArray_Impl__obj::toBytesData( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_743_toBytesData)
HXDLIN( 743)		return byteArray->b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytesData,return )

 ::haxe::io::Bytes ByteArray_Impl__obj::toLimeBytes( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_756_toLimeBytes)
HXDLIN( 756)		return byteArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toLimeBytes,return )

::String ByteArray_Impl__obj::toString( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_772_toString)
HXDLIN( 772)		return this1->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toString,return )

void ByteArray_Impl__obj::uncompress( ::openfl::utils::ByteArrayData this1, ::Dynamic algorithm){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_808_uncompress)
HXDLIN( 808)		this1->uncompress(algorithm);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,uncompress,(void))

void ByteArray_Impl__obj::writeBoolean( ::openfl::utils::ByteArrayData this1,bool value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_823_writeBoolean)
HXDLIN( 823)		this1->writeBoolean(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeBoolean,(void))

void ByteArray_Impl__obj::writeByte( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_837_writeByte)
HXDLIN( 837)		this1->writeByte(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeByte,(void))

void ByteArray_Impl__obj::writeBytes( ::openfl::utils::ByteArrayData this1, ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_861_writeBytes)
HXDLIN( 861)		this1->writeBytes(bytes,offset,length);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ByteArray_Impl__obj,writeBytes,(void))

void ByteArray_Impl__obj::writeDouble( ::openfl::utils::ByteArrayData this1,Float value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_872_writeDouble)
HXDLIN( 872)		this1->writeDouble(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeDouble,(void))

void ByteArray_Impl__obj::writeFloat( ::openfl::utils::ByteArrayData this1,Float value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_883_writeFloat)
HXDLIN( 883)		this1->writeFloat(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeFloat,(void))

void ByteArray_Impl__obj::writeInt( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_893_writeInt)
HXDLIN( 893)		this1->writeInt(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeInt,(void))

void ByteArray_Impl__obj::writeMultiByte( ::openfl::utils::ByteArrayData this1,::String value,::String charSet){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_910_writeMultiByte)
HXDLIN( 910)		this1->writeMultiByte(value,charSet);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ByteArray_Impl__obj,writeMultiByte,(void))

void ByteArray_Impl__obj::writeObject( ::openfl::utils::ByteArrayData this1, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_920_writeObject)
HXDLIN( 920)		this1->writeObject(object);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeObject,(void))

void ByteArray_Impl__obj::writeShort( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_932_writeShort)
HXDLIN( 932)		this1->writeShort(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeShort,(void))

void ByteArray_Impl__obj::writeUTF( ::openfl::utils::ByteArrayData this1,::String value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_945_writeUTF)
HXDLIN( 945)		this1->writeUTF(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeUTF,(void))

void ByteArray_Impl__obj::writeUTFBytes( ::openfl::utils::ByteArrayData this1,::String value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_957_writeUTFBytes)
HXDLIN( 957)		this1->writeUTFBytes(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeUTFBytes,(void))

void ByteArray_Impl__obj::writeUnsignedInt( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_967_writeUnsignedInt)
HXDLIN( 967)		this1->writeUnsignedInt(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,writeUnsignedInt,(void))

int ByteArray_Impl__obj::get_bytesAvailable( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_973_get_bytesAvailable)
HXDLIN( 973)		return (this1->length - this1->position);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_bytesAvailable,return )

 ::Dynamic ByteArray_Impl__obj::get_defaultEndian(){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_978_get_defaultEndian)
HXDLIN( 978)		if (::hx::IsNull( ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian )) {
HXDLIN( 978)			if (::hx::IsPointerEq( ::lime::_hx_system::System_obj::get_endianness(),::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn() )) {
HXDLIN( 978)				::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 1;
            			}
            			else {
HXDLIN( 978)				::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 0;
            			}
            		}
HXDLIN( 978)		return ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ByteArray_Impl__obj,get_defaultEndian,return )

 ::Dynamic ByteArray_Impl__obj::set_defaultEndian( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_983_set_defaultEndian)
HXDLIN( 983)		return (::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,set_defaultEndian,return )

int ByteArray_Impl__obj::get_defaultObjectEncoding(){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_988_get_defaultObjectEncoding)
HXDLIN( 988)		return ::openfl::utils::ByteArrayData_obj::defaultObjectEncoding;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ByteArray_Impl__obj,get_defaultObjectEncoding,return )

int ByteArray_Impl__obj::set_defaultObjectEncoding(int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_993_set_defaultObjectEncoding)
HXDLIN( 993)		return (::openfl::utils::ByteArrayData_obj::defaultObjectEncoding = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,set_defaultObjectEncoding,return )

 ::Dynamic ByteArray_Impl__obj::get_endian( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_998_get_endian)
HXDLIN( 998)		return this1->_hx___endian;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_endian,return )

 ::Dynamic ByteArray_Impl__obj::set_endian( ::openfl::utils::ByteArrayData this1, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_1003_set_endian)
HXDLIN(1003)		return (this1->_hx___endian = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,set_endian,return )

int ByteArray_Impl__obj::get_length( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_1013_get_length)
HXDLIN(1013)		if (::hx::IsNull( this1 )) {
HXDLIN(1013)			return 0;
            		}
            		else {
HXDLIN(1013)			return this1->length;
            		}
HXDLIN(1013)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_length,return )

int ByteArray_Impl__obj::set_length( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_1018_set_length)
HXLINE(1025)		if ((value >= 0)) {
HXLINE(1027)			this1->_hx___resize(value);
HXLINE(1028)			if ((value < this1->position)) {
HXLINE(1028)				this1->position = value;
            			}
            		}
HXLINE(1031)		this1->length = value;
HXLINE(1034)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,set_length,return )

int ByteArray_Impl__obj::get_objectEncoding( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_1039_get_objectEncoding)
HXDLIN(1039)		return this1->objectEncoding;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_objectEncoding,return )

int ByteArray_Impl__obj::set_objectEncoding( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_1044_set_objectEncoding)
HXDLIN(1044)		return (this1->objectEncoding = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,set_objectEncoding,return )

int ByteArray_Impl__obj::get_position( ::openfl::utils::ByteArrayData this1){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_1049_get_position)
HXDLIN(1049)		return this1->position;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_position,return )

int ByteArray_Impl__obj::set_position( ::openfl::utils::ByteArrayData this1,int value){
            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_1054_set_position)
HXDLIN(1054)		return (this1->position = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,set_position,return )


ByteArray_Impl__obj::ByteArray_Impl__obj()
{
}

bool ByteArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { outValue = deflate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inflate") ) { outValue = inflate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readInt") ) { outValue = readInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readUTF") ) { outValue = readUTF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readByte") ) { outValue = readByte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeInt") ) { outValue = writeInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { outValue = writeUTF_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readBytes") ) { outValue = readBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readFloat") ) { outValue = readFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readShort") ) { outValue = readShort_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeByte") ) { outValue = writeByte_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { outValue = readDouble_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readObject") ) { outValue = readObject_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uncompress") ) { outValue = uncompress_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { outValue = writeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { outValue = writeFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeShort") ) { outValue = writeShort_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_endian") ) { outValue = get_endian_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_endian") ) { outValue = set_endian_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { outValue = readBoolean_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBytesData") ) { outValue = toBytesData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLimeBytes") ) { outValue = toLimeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { outValue = writeDouble_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeObject") ) { outValue = writeObject_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { outValue = readUTFBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { outValue = writeBoolean_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_position") ) { outValue = get_position_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_position") ) { outValue = set_position_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { outValue = readMultiByte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toArrayBuffer") ) { outValue = toArrayBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBytePointer") ) { outValue = toBytePointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toDataPointer") ) { outValue = toDataPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { outValue = writeUTFBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { outValue = writeMultiByte_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { outValue = readUnsignedInt_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { outValue = readUnsignedByte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { outValue = writeUnsignedInt_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { outValue = readUnsignedShort_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_defaultEndian") ) { outValue = get_defaultEndian_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_defaultEndian") ) { outValue = set_defaultEndian_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { outValue = get_bytesAvailable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_objectEncoding") ) { outValue = get_objectEncoding_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_objectEncoding") ) { outValue = set_objectEncoding_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_defaultObjectEncoding") ) { outValue = get_defaultObjectEncoding_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_defaultObjectEncoding") ) { outValue = set_defaultObjectEncoding_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ByteArray_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ByteArray_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::BytePointerData */ ,(void *) &ByteArray_Impl__obj::_hx___bytePointer,HX_("__bytePointer",75,7b,8d,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ByteArray_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::_hx___bytePointer,"__bytePointer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ByteArray_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::_hx___bytePointer,"__bytePointer");
};

#endif

::hx::Class ByteArray_Impl__obj::__mClass;

static ::String ByteArray_Impl__obj_sStaticFields[] = {
	HX_("__bytePointer",75,7b,8d,c5),
	HX_("_new",61,15,1f,3f),
	HX_("clear",8d,71,5b,48),
	HX_("compress",a2,47,bf,83),
	HX_("deflate",6b,0b,fa,a2),
	HX_("fromArrayBuffer",2f,ce,77,ec),
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromBytesData",6b,d9,41,db),
	HX_("fromFile",06,9d,87,a1),
	HX_("fromLimeBytes",4c,d2,e6,4e),
	HX_("get",96,80,4e,00),
	HX_("inflate",87,9c,1b,0c),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("readBoolean",f2,7d,ea,d0),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("readDouble",07,0f,47,2c),
	HX_("readFloat",66,12,7e,d3),
	HX_("readInt",39,b3,c9,02),
	HX_("readMultiByte",eb,7f,c9,15),
	HX_("readObject",b5,62,bb,0e),
	HX_("readShort",46,d1,0e,4d),
	HX_("readUTF",71,b7,d2,02),
	HX_("readUTFBytes",3a,27,0f,52),
	HX_("readUnsignedByte",13,0b,ce,9b),
	HX_("readUnsignedInt",44,ab,4f,05),
	HX_("readUnsignedShort",11,22,0b,77),
	HX_("set",a2,9b,57,00),
	HX_("toArrayBuffer",be,55,48,bf),
	HX_("toBytePointer",da,38,81,7e),
	HX_("toDataPointer",f8,09,79,94),
	HX_("toBytes",f0,54,1c,8a),
	HX_("toBytesData",3a,0f,3e,ce),
	HX_("toLimeBytes",1b,08,e3,41),
	HX_("toString",ac,d0,6e,38),
	HX_("uncompress",fb,2e,83,09),
	HX_("writeBoolean",89,8f,2d,43),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("writeDouble",50,7d,c4,c7),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writeInt",50,6d,f0,23),
	HX_("writeMultiByte",42,65,25,ec),
	HX_("writeObject",fe,d0,38,aa),
	HX_("writeShort",1d,7f,e9,10),
	HX_("writeUTF",88,71,f9,23),
	HX_("writeUTFBytes",c3,79,7b,da),
	HX_("writeUnsignedInt",5b,d4,70,16),
	HX_("get_bytesAvailable",a7,2c,37,37),
	HX_("get_defaultEndian",93,77,71,fb),
	HX_("set_defaultEndian",9f,4f,df,1e),
	HX_("get_defaultObjectEncoding",aa,b5,e9,05),
	HX_("set_defaultObjectEncoding",b6,79,40,72),
	HX_("get_endian",64,08,10,eb),
	HX_("set_endian",d8,a6,8d,ee),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("get_objectEncoding",7b,ff,ae,c5),
	HX_("set_objectEncoding",ef,31,5e,a2),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	::String(null())
};

void ByteArray_Impl__obj::__register()
{
	ByteArray_Impl__obj _hx_dummy;
	ByteArray_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._ByteArray.ByteArray_Impl_",10,09,69,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ByteArray_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ByteArray_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ByteArray_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ByteArray_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ByteArray_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ByteArray_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ByteArray_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::lime::utils::BytePointerData _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_67382ab39e6adff2_103_boot)
HXDLIN( 103)			 ::haxe::io::Bytes bytes = null();
HXDLIN( 103)			 ::lime::utils::BytePointerData this1 =  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,0);
HXDLIN( 103)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_67382ab39e6adff2_103_boot)
HXDLIN( 103)		_hx___bytePointer = ( ( ::lime::utils::BytePointerData)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _ByteArray
