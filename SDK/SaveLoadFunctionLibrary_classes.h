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

// BlueprintGeneratedClass SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USaveLoadFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C");
		return ptr;
	}



	void STATIC_SaveAnnouncementNotShow(bool bIsNotShowAgain, class UObject* __WorldContext);
	void STATIC_GetAnnouncementData(class UObject* __WorldContext, struct FS_AnnouncementSaveGame* CurrentValue);
	void STATIC_SaveAnnouncementVersion(const struct FString& AnnouncementVersion, class UObject* __WorldContext);
	void STATIC_IsHunterShouldShowTutorial(class UObject* __WorldContext, bool* bIsShowHunterDontShow);
	void STATIC_IsSurvivorShouldShowTutorial(class UObject* __WorldContext, bool* bIsShowSurvivorDontShow);
	void STATIC_SaveHunterFirstTime(class UObject* __WorldContext);
	void STATIC_SaveSurvivorFirstTime(class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
