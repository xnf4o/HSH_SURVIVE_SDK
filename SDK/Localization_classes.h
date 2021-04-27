#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Localization.LocalizationSettings
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class ULocalizationSettings : public UObject
{
public:
	class ULocalizationTargetSet*                      EngineTargetSet;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FLocalizationTargetSettings>         EngineTargetsSettings;                                     // 0x0038(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class ULocalizationTargetSet*                      GameTargetSet;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FLocalizationTargetSettings>         GameTargetsSettings;                                       // 0x0050(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Localization.LocalizationSettings");
		return ptr;
	}



};

// Class Localization.LocalizationTargetSet
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class ULocalizationTargetSet : public UObject
{
public:
	TArray<class ULocalizationTarget*>                 TargetObjects;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Localization.LocalizationTargetSet");
		return ptr;
	}



};

// Class Localization.LocalizationTarget
// 0x0170 (FullSize[0x01A0] - InheritedSize[0x0030])
class ULocalizationTarget : public UObject
{
public:
	struct FLocalizationTargetSettings                 Settings;                                                  // 0x0030(0x0170) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Localization.LocalizationTarget");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
