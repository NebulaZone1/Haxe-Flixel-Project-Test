#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d161672f440721c_21_new,"flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",21,0x9ba4fb18)
static const int _hx_array_data_7ea9c627_1[] = {
	(int)48,(int)96,
};
static const int _hx_array_data_7ea9c627_2[] = {
	(int)189,(int)109,
};
static const int _hx_array_data_7ea9c627_3[] = {
	(int)187,(int)107,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_94_playMusic,"flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",94,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_128_load,"flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",128,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_152_load,"flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",152,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_168_loadHelper,"flixel.system.frontEnds.SoundFrontEnd","loadHelper",0x945a9f1b,"flixel.system.frontEnds.SoundFrontEnd.loadHelper","flixel/system/frontEnds/SoundFrontEnd.hx",168,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_188_cache,"flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",188,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_202_cacheAll,"flixel.system.frontEnds.SoundFrontEnd","cacheAll",0x49c00726,"flixel.system.frontEnds.SoundFrontEnd.cacheAll","flixel/system/frontEnds/SoundFrontEnd.hx",202,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_222_play,"flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",222,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_248_stream,"flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",248,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_255_pause,"flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",255,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_274_resume,"flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",274,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_295_destroy,"flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",295,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_312_destroySound,"flixel.system.frontEnds.SoundFrontEnd","destroySound",0x7dfd401c,"flixel.system.frontEnds.SoundFrontEnd.destroySound","flixel/system/frontEnds/SoundFrontEnd.hx",312,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_322_toggleMuted,"flixel.system.frontEnds.SoundFrontEnd","toggleMuted",0xe215de70,"flixel.system.frontEnds.SoundFrontEnd.toggleMuted","flixel/system/frontEnds/SoundFrontEnd.hx",322,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_337_changeVolume,"flixel.system.frontEnds.SoundFrontEnd","changeVolume",0x51b19e11,"flixel.system.frontEnds.SoundFrontEnd.changeVolume","flixel/system/frontEnds/SoundFrontEnd.hx",337,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_349_showSoundTray,"flixel.system.frontEnds.SoundFrontEnd","showSoundTray",0x0761fd21,"flixel.system.frontEnds.SoundFrontEnd.showSoundTray","flixel/system/frontEnds/SoundFrontEnd.hx",349,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_366_update,"flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",366,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_385_onFocusLost,"flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",385,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_402_onFocus,"flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",402,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_421_loadSavedPrefs,"flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",421,0x9ba4fb18)
HX_LOCAL_STACK_FRAME(_hx_pos_2d161672f440721c_434_set_volume,"flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",434,0x9ba4fb18)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void SoundFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2d161672f440721c_21_new)
HXLINE(  83)		this->volume = ((Float)1);
HXLINE(  78)		this->list =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  73)		this->defaultSoundGroup =  ::flixel::_hx_system::FlxSoundGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  68)		this->defaultMusicGroup =  ::flixel::_hx_system::FlxSoundGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  63)		this->soundTrayEnabled = true;
HXLINE(  56)		this->muteKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_1,2);
HXLINE(  50)		this->volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_2,2);
HXLINE(  44)		this->volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_7ea9c627_3,2);
HXLINE(  31)		this->muted = false;
HXLINE( 358)		this->loadSavedPrefs();
            	}

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return new SoundFrontEnd_obj; }

void *SoundFrontEnd_obj::_hx_vtable = 0;

Dynamic SoundFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundFrontEnd_obj > _hx_result = new SoundFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SoundFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3aad4c0f;
}

void SoundFrontEnd_obj::playMusic( ::Dynamic Music,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_2d161672f440721c_94_playMusic)
HXLINE(  95)		if (::hx::IsNull( this->music )) {
HXLINE(  97)			this->music =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE(  99)			if (this->music->active) {
HXLINE( 101)				 ::flixel::_hx_system::FlxSound _this = this->music;
HXDLIN( 101)				_this->cleanup(_this->autoDestroy,true);
            			}
            		}
HXLINE( 104)		this->music->loadEmbedded(Music,Looped,null(),null());
HXLINE( 105)		this->music->set_volume(Volume);
HXLINE( 106)		this->music->persist = true;
HXLINE( 107)		 ::flixel::_hx_system::FlxSoundGroup _hx_tmp;
HXDLIN( 107)		if (::hx::IsNull( Group )) {
HXLINE( 107)			_hx_tmp = this->defaultMusicGroup;
            		}
            		else {
HXLINE( 107)			_hx_tmp = Group;
            		}
HXDLIN( 107)		this->music->set_group(_hx_tmp);
HXLINE( 108)		this->music->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,playMusic,(void))

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::load( ::Dynamic EmbeddedSound,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoDestroy,::hx::Null< bool >  __o_AutoPlay,::String URL, ::Dynamic OnComplete, ::Dynamic OnLoad){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            		bool AutoPlay = __o_AutoPlay.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_128_load)
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		if (::hx::IsNull( EmbeddedSound )) {
HXLINE( 129)			_hx_tmp = ::hx::IsNull( URL );
            		}
            		else {
HXLINE( 129)			_hx_tmp = false;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 131)			::flixel::FlxG_obj::log->advanced(HX_("FlxG.sound.load() requires either\nan embedded sound or a URL to work.",3d,91,d4,18),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 132)			return null();
            		}
HXLINE( 135)		 ::flixel::_hx_system::FlxSound sound = this->list->recycle(::hx::ClassOf< ::flixel::_hx_system::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE( 137)		if (::hx::IsNotNull( EmbeddedSound )) {
HXLINE( 139)			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
HXLINE( 140)			this->loadHelper(sound,Volume,Group,AutoPlay);
HXLINE( 142)			bool _hx_tmp;
HXDLIN( 142)			if (::hx::IsNotNull( OnLoad )) {
HXLINE( 142)				_hx_tmp = ::hx::IsNotNull( sound->_sound );
            			}
            			else {
HXLINE( 142)				_hx_tmp = false;
            			}
HXDLIN( 142)			if (_hx_tmp) {
HXLINE( 143)				OnLoad();
            			}
            		}
            		else {
HXLINE( 147)			 ::Dynamic loadCallback = OnLoad;
HXLINE( 148)			if (AutoPlay) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,OnLoad, ::flixel::_hx_system::FlxSound,sound) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_2d161672f440721c_152_load)
HXLINE( 153)					sound->play(null(),null(),null());
HXLINE( 155)					if (::hx::IsNotNull( OnLoad )) {
HXLINE( 156)						OnLoad();
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 151)				loadCallback =  ::Dynamic(new _hx_Closure_0(OnLoad,sound));
            			}
HXLINE( 160)			sound->loadStream(URL,Looped,AutoDestroy,OnComplete,loadCallback);
HXLINE( 161)			this->loadHelper(sound,Volume,Group,null());
            		}
HXLINE( 164)		return sound;
            	}


HX_DEFINE_DYNAMIC_FUNC9(SoundFrontEnd_obj,load,return )

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::loadHelper( ::flixel::_hx_system::FlxSound sound,Float Volume, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoPlay){
            		bool AutoPlay = __o_AutoPlay.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_168_loadHelper)
HXLINE( 169)		sound->set_volume(Volume);
HXLINE( 171)		if (AutoPlay) {
HXLINE( 173)			sound->play(null(),null(),null());
            		}
HXLINE( 176)		 ::flixel::_hx_system::FlxSoundGroup _hx_tmp;
HXDLIN( 176)		if (::hx::IsNull( Group )) {
HXLINE( 176)			_hx_tmp = this->defaultSoundGroup;
            		}
            		else {
HXLINE( 176)			_hx_tmp = Group;
            		}
HXDLIN( 176)		sound->set_group(_hx_tmp);
HXLINE( 177)		return sound;
            	}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,loadHelper,return )

 ::openfl::media::Sound SoundFrontEnd_obj::cache(::String EmbeddedSound){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_188_cache)
HXLINE( 190)		bool _hx_tmp;
HXDLIN( 190)		if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 190)			_hx_tmp = ::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("MUSIC",85,08,49,8e));
            		}
            		else {
HXLINE( 190)			_hx_tmp = true;
            		}
HXDLIN( 190)		if (_hx_tmp) {
HXLINE( 191)			return ::openfl::utils::Assets_obj::getSound(EmbeddedSound,true);
            		}
HXLINE( 192)		::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + EmbeddedSound) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 193)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

void SoundFrontEnd_obj::cacheAll(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_202_cacheAll)
HXDLIN( 202)		int _g = 0;
HXDLIN( 202)		::Array< ::String > _g1 = ::openfl::utils::Assets_obj::list(HX_("SOUND",af,c4,ba,fe));
HXDLIN( 202)		while((_g < _g1->length)){
HXDLIN( 202)			::String id = _g1->__get(_g);
HXDLIN( 202)			_g = (_g + 1);
HXLINE( 204)			bool _hx_tmp;
HXDLIN( 204)			if (!(::openfl::utils::Assets_obj::exists(id,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 204)				_hx_tmp = ::openfl::utils::Assets_obj::exists(id,HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 204)				_hx_tmp = true;
            			}
HXDLIN( 204)			if (_hx_tmp) {
HXLINE( 204)				::openfl::utils::Assets_obj::getSound(id,true);
            			}
            			else {
HXLINE( 204)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + id) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,cacheAll,(void))

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::play( ::Dynamic EmbeddedSound,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_222_play)
HXLINE( 223)		if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::String >())) {
HXLINE( 225)			 ::openfl::media::Sound EmbeddedSound1;
HXDLIN( 225)			bool EmbeddedSound2;
HXDLIN( 225)			if (!(::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 225)				EmbeddedSound2 = ::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 225)				EmbeddedSound2 = true;
            			}
HXDLIN( 225)			if (EmbeddedSound2) {
HXLINE( 225)				EmbeddedSound1 = ::openfl::utils::Assets_obj::getSound(( (::String)(EmbeddedSound) ),true);
            			}
            			else {
HXLINE( 225)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a Sound asset with an ID of '",6f,0e,1e,66) + EmbeddedSound) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN( 225)				EmbeddedSound1 = null();
            			}
HXDLIN( 225)			EmbeddedSound = EmbeddedSound1;
            		}
HXLINE( 227)		 ::flixel::_hx_system::FlxSound sound = this->list->recycle(::hx::ClassOf< ::flixel::_hx_system::FlxSound >(),null(),null(),null()).StaticCast<  ::flixel::_hx_system::FlxSound >()->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
HXLINE( 228)		return this->loadHelper(sound,Volume,Group,true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,play,return )

 ::flixel::_hx_system::FlxSound SoundFrontEnd_obj::stream(::String URL,::hx::Null< Float >  __o_Volume,::hx::Null< bool >  __o_Looped, ::flixel::_hx_system::FlxSoundGroup Group,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete, ::Dynamic OnLoad){
            		Float Volume = __o_Volume.Default(1);
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_248_stream)
HXDLIN( 248)		return this->load(null(),Volume,Looped,Group,AutoDestroy,true,URL,OnComplete,OnLoad);
            	}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,stream,return )

void SoundFrontEnd_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_255_pause)
HXLINE( 256)		bool _hx_tmp;
HXDLIN( 256)		bool _hx_tmp1;
HXDLIN( 256)		if (::hx::IsNotNull( this->music )) {
HXLINE( 256)			_hx_tmp1 = this->music->exists;
            		}
            		else {
HXLINE( 256)			_hx_tmp1 = false;
            		}
HXDLIN( 256)		if (_hx_tmp1) {
HXLINE( 256)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 256)			_hx_tmp = false;
            		}
HXDLIN( 256)		if (_hx_tmp) {
HXLINE( 258)			this->music->pause();
            		}
HXLINE( 261)		{
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 261)			while((_g < _g1->length)){
HXLINE( 261)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 261)				_g = (_g + 1);
HXLINE( 263)				bool _hx_tmp;
HXDLIN( 263)				bool _hx_tmp1;
HXDLIN( 263)				if (::hx::IsNotNull( sound )) {
HXLINE( 263)					_hx_tmp1 = sound->exists;
            				}
            				else {
HXLINE( 263)					_hx_tmp1 = false;
            				}
HXDLIN( 263)				if (_hx_tmp1) {
HXLINE( 263)					_hx_tmp = sound->active;
            				}
            				else {
HXLINE( 263)					_hx_tmp = false;
            				}
HXDLIN( 263)				if (_hx_tmp) {
HXLINE( 265)					sound->pause();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

void SoundFrontEnd_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_274_resume)
HXLINE( 275)		bool _hx_tmp;
HXDLIN( 275)		if (::hx::IsNotNull( this->music )) {
HXLINE( 275)			_hx_tmp = this->music->exists;
            		}
            		else {
HXLINE( 275)			_hx_tmp = false;
            		}
HXDLIN( 275)		if (_hx_tmp) {
HXLINE( 277)			this->music->resume();
            		}
HXLINE( 280)		{
HXLINE( 280)			int _g = 0;
HXDLIN( 280)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 280)			while((_g < _g1->length)){
HXLINE( 280)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 280)				_g = (_g + 1);
HXLINE( 282)				bool _hx_tmp;
HXDLIN( 282)				if (::hx::IsNotNull( sound )) {
HXLINE( 282)					_hx_tmp = sound->exists;
            				}
            				else {
HXLINE( 282)					_hx_tmp = false;
            				}
HXDLIN( 282)				if (_hx_tmp) {
HXLINE( 284)					sound->resume();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

void SoundFrontEnd_obj::destroy(::hx::Null< bool >  __o_ForceDestroy){
            		bool ForceDestroy = __o_ForceDestroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_295_destroy)
HXLINE( 296)		bool _hx_tmp;
HXDLIN( 296)		if (::hx::IsNotNull( this->music )) {
HXLINE( 296)			if (!(ForceDestroy)) {
HXLINE( 296)				_hx_tmp = !(this->music->persist);
            			}
            			else {
HXLINE( 296)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 296)			_hx_tmp = false;
            		}
HXDLIN( 296)		if (_hx_tmp) {
HXLINE( 298)			this->destroySound(this->music);
HXLINE( 299)			this->music = null();
            		}
HXLINE( 302)		{
HXLINE( 302)			int _g = 0;
HXDLIN( 302)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 302)			while((_g < _g1->length)){
HXLINE( 302)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 302)				_g = (_g + 1);
HXLINE( 304)				bool _hx_tmp;
HXDLIN( 304)				if (::hx::IsNotNull( sound )) {
HXLINE( 304)					if (!(ForceDestroy)) {
HXLINE( 304)						_hx_tmp = !(sound->persist);
            					}
            					else {
HXLINE( 304)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 304)					_hx_tmp = false;
            				}
HXDLIN( 304)				if (_hx_tmp) {
HXLINE( 306)					this->destroySound(sound);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

void SoundFrontEnd_obj::destroySound( ::flixel::_hx_system::FlxSound sound){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_312_destroySound)
HXLINE( 313)		this->defaultMusicGroup->remove(sound);
HXLINE( 314)		this->defaultSoundGroup->remove(sound);
HXLINE( 315)		sound->destroy();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroySound,(void))

void SoundFrontEnd_obj::toggleMuted(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_322_toggleMuted)
HXLINE( 323)		this->muted = !(this->muted);
HXLINE( 325)		if (::hx::IsNotNull( this->volumeHandler )) {
HXLINE( 327)			Float _hx_tmp;
HXDLIN( 327)			if (this->muted) {
HXLINE( 327)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 327)				_hx_tmp = this->volume;
            			}
HXDLIN( 327)			this->volumeHandler(_hx_tmp);
            		}
HXLINE( 330)		this->showSoundTray();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,toggleMuted,(void))

void SoundFrontEnd_obj::changeVolume(Float Amount){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_337_changeVolume)
HXLINE( 338)		this->muted = false;
HXLINE( 339)		this->set_volume((this->volume + Amount));
HXLINE( 340)		this->showSoundTray();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,changeVolume,(void))

void SoundFrontEnd_obj::showSoundTray(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_349_showSoundTray)
HXDLIN( 349)		bool _hx_tmp;
HXDLIN( 349)		if (::hx::IsNotNull( ::flixel::FlxG_obj::game->soundTray )) {
HXDLIN( 349)			_hx_tmp = this->soundTrayEnabled;
            		}
            		else {
HXDLIN( 349)			_hx_tmp = false;
            		}
HXDLIN( 349)		if (_hx_tmp) {
HXLINE( 351)			::flixel::FlxG_obj::game->soundTray->show(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,showSoundTray,(void))

void SoundFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_366_update)
HXLINE( 367)		bool _hx_tmp;
HXDLIN( 367)		if (::hx::IsNotNull( this->music )) {
HXLINE( 367)			_hx_tmp = this->music->active;
            		}
            		else {
HXLINE( 367)			_hx_tmp = false;
            		}
HXDLIN( 367)		if (_hx_tmp) {
HXLINE( 368)			this->music->update(elapsed);
            		}
HXLINE( 370)		bool _hx_tmp1;
HXDLIN( 370)		if (::hx::IsNotNull( this->list )) {
HXLINE( 370)			_hx_tmp1 = this->list->active;
            		}
            		else {
HXLINE( 370)			_hx_tmp1 = false;
            		}
HXDLIN( 370)		if (_hx_tmp1) {
HXLINE( 371)			this->list->update(elapsed);
            		}
HXLINE( 374)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->muteKeys,-1)) {
HXLINE( 375)			this->toggleMuted();
            		}
            		else {
HXLINE( 376)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeUpKeys,-1)) {
HXLINE( 377)				this->changeVolume(((Float)0.1));
            			}
            			else {
HXLINE( 378)				if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->volumeDownKeys,-1)) {
HXLINE( 379)					this->changeVolume(((Float)-0.1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,update,(void))

void SoundFrontEnd_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_385_onFocusLost)
HXLINE( 386)		if (::hx::IsNotNull( this->music )) {
HXLINE( 388)			this->music->onFocusLost();
            		}
HXLINE( 391)		{
HXLINE( 391)			int _g = 0;
HXDLIN( 391)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 391)			while((_g < _g1->length)){
HXLINE( 391)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 391)				_g = (_g + 1);
HXLINE( 393)				if (::hx::IsNotNull( sound )) {
HXLINE( 395)					sound->onFocusLost();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

void SoundFrontEnd_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_402_onFocus)
HXLINE( 403)		if (::hx::IsNotNull( this->music )) {
HXLINE( 405)			this->music->onFocus();
            		}
HXLINE( 408)		{
HXLINE( 408)			int _g = 0;
HXDLIN( 408)			::Array< ::Dynamic> _g1 = this->list->members;
HXDLIN( 408)			while((_g < _g1->length)){
HXLINE( 408)				 ::flixel::_hx_system::FlxSound sound = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXDLIN( 408)				_g = (_g + 1);
HXLINE( 410)				if (::hx::IsNotNull( sound )) {
HXLINE( 412)					sound->onFocus();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

void SoundFrontEnd_obj::loadSavedPrefs(){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_421_loadSavedPrefs)
HXLINE( 422)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic) )) {
HXLINE( 424)			this->set_volume(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic)) ));
            		}
HXLINE( 427)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic) )) {
HXLINE( 429)			this->muted = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic)) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume(Float Volume){
            	HX_STACKFRAME(&_hx_pos_2d161672f440721c_434_set_volume)
HXLINE( 435)		Float lowerBound;
HXDLIN( 435)		if ((Volume < 0)) {
HXLINE( 435)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 435)			lowerBound = Volume;
            		}
HXDLIN( 435)		if ((lowerBound > 1)) {
HXLINE( 435)			Volume = ( (Float)(1) );
            		}
            		else {
HXLINE( 435)			Volume = lowerBound;
            		}
HXLINE( 437)		if (::hx::IsNotNull( this->volumeHandler )) {
HXLINE( 439)			Float param;
HXDLIN( 439)			if (this->muted) {
HXLINE( 439)				param = ( (Float)(0) );
            			}
            			else {
HXLINE( 439)				param = Volume;
            			}
HXLINE( 440)			this->volumeHandler(param);
            		}
HXLINE( 442)		return (this->volume = Volume);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


::hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new() {
	::hx::ObjectPtr< SoundFrontEnd_obj > __this = new SoundFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SoundFrontEnd_obj *__this = (SoundFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundFrontEnd_obj), true, "flixel.system.frontEnds.SoundFrontEnd"));
	*(void **)__this = SoundFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_MARK_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_VISIT_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

::hx::Val SoundFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		if (HX_FIELD_EQ(inName,"muted") ) { return ::hx::Val( muted ); }
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"stream") ) { return ::hx::Val( stream_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return ::hx::Val( muteKeys ); }
		if (HX_FIELD_EQ(inName,"cacheAll") ) { return ::hx::Val( cacheAll_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return ::hx::Val( playMusic_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadHelper") ) { return ::hx::Val( loadHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toggleMuted") ) { return ::hx::Val( toggleMuted_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return ::hx::Val( volumeUpKeys ); }
		if (HX_FIELD_EQ(inName,"destroySound") ) { return ::hx::Val( destroySound_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeVolume") ) { return ::hx::Val( changeVolume_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return ::hx::Val( volumeHandler ); }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return ::hx::Val( showSoundTray_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return ::hx::Val( volumeDownKeys ); }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return ::hx::Val( loadSavedPrefs_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return ::hx::Val( soundTrayEnabled ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { return ::hx::Val( defaultMusicGroup ); }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { return ::hx::Val( defaultSoundGroup ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) );volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { defaultMusicGroup=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { defaultSoundGroup=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("muted",6b,8f,5b,10));
	outFields->push(HX_("volumeUpKeys",69,bb,f5,23));
	outFields->push(HX_("volumeDownKeys",70,2f,58,0b));
	outFields->push(HX_("muteKeys",6d,5d,88,16));
	outFields->push(HX_("soundTrayEnabled",9c,10,68,e0));
	outFields->push(HX_("defaultMusicGroup",7b,94,d9,a0));
	outFields->push(HX_("defaultSoundGroup",11,80,9b,d9));
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("volume",da,29,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(SoundFrontEnd_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_("muted",6b,8f,5b,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_("volumeHandler",10,fd,6f,5d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_("soundTrayEnabled",9c,10,68,e0)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSoundGroup */ ,(int)offsetof(SoundFrontEnd_obj,defaultMusicGroup),HX_("defaultMusicGroup",7b,94,d9,a0)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSoundGroup */ ,(int)offsetof(SoundFrontEnd_obj,defaultSoundGroup),HX_("defaultSoundGroup",11,80,9b,d9)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(SoundFrontEnd_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_("volume",da,29,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundFrontEnd_obj_sMemberFields[] = {
	HX_("music",a5,d0,5a,10),
	HX_("muted",6b,8f,5b,10),
	HX_("volumeHandler",10,fd,6f,5d),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("muteKeys",6d,5d,88,16),
	HX_("soundTrayEnabled",9c,10,68,e0),
	HX_("defaultMusicGroup",7b,94,d9,a0),
	HX_("defaultSoundGroup",11,80,9b,d9),
	HX_("list",5e,1c,b3,47),
	HX_("volume",da,29,53,5f),
	HX_("playMusic",11,fe,3e,31),
	HX_("load",26,9a,b7,47),
	HX_("loadHelper",34,ac,79,b9),
	HX_("cache",42,9a,14,41),
	HX_("cacheAll",ff,6b,19,9a),
	HX_("play",f4,2d,5a,4a),
	HX_("stream",80,14,2d,11),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("destroy",fa,2c,86,24),
	HX_("destroySound",75,85,cc,72),
	HX_("toggleMuted",37,47,22,38),
	HX_("changeVolume",6a,e3,80,46),
	HX_("showSoundTray",a8,65,ef,47),
	HX_("update",09,86,05,87),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onFocus",39,fe,c6,9a),
	HX_("loadSavedPrefs",ef,ed,3b,02),
	HX_("set_volume",17,38,58,53),
	::String(null()) };

::hx::Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	SoundFrontEnd_obj _hx_dummy;
	SoundFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.SoundFrontEnd",27,c6,a9,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
