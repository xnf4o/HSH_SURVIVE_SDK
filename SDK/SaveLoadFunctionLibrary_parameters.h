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
// Parameters
//---------------------------------------------------------------------------

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveAnnouncementNotShow
struct USaveLoadFunctionLibrary_C_SaveAnnouncementNotShow_Params
{
	bool                                               bIsNotShowAgain;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.GetAnnouncementData
struct USaveLoadFunctionLibrary_C_GetAnnouncementData_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_AnnouncementSaveGame                     CurrentValue;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveAnnouncementVersion
struct USaveLoadFunctionLibrary_C_SaveAnnouncementVersion_Params
{
	struct FString                                     AnnouncementVersion;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.IsHunterShouldShowTutorial
struct USaveLoadFunctionLibrary_C_IsHunterShouldShowTutorial_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShowHunterDontShow;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.IsSurvivorShouldShowTutorial
struct USaveLoadFunctionLibrary_C_IsSurvivorShouldShowTutorial_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShowSurvivorDontShow;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveHunterFirstTime
struct USaveLoadFunctionLibrary_C_SaveHunterFirstTime_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveSurvivorFirstTime
struct USaveLoadFunctionLibrary_C_SaveSurvivorFirstTime_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
