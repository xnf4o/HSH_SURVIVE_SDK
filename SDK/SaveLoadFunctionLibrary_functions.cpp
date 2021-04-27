// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveAnnouncementNotShow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsNotShowAgain                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USaveLoadFunctionLibrary_C::STATIC_SaveAnnouncementNotShow(bool bIsNotShowAgain, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveAnnouncementNotShow");

	USaveLoadFunctionLibrary_C_SaveAnnouncementNotShow_Params params;
	params.bIsNotShowAgain = bIsNotShowAgain;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.GetAnnouncementData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AnnouncementSaveGame CurrentValue                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USaveLoadFunctionLibrary_C::STATIC_GetAnnouncementData(class UObject* __WorldContext, struct FS_AnnouncementSaveGame* CurrentValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.GetAnnouncementData");

	USaveLoadFunctionLibrary_C_GetAnnouncementData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;

}


// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveAnnouncementVersion
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AnnouncementVersion            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USaveLoadFunctionLibrary_C::STATIC_SaveAnnouncementVersion(const struct FString& AnnouncementVersion, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveAnnouncementVersion");

	USaveLoadFunctionLibrary_C_SaveAnnouncementVersion_Params params;
	params.AnnouncementVersion = AnnouncementVersion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.IsHunterShouldShowTutorial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsShowHunterDontShow          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USaveLoadFunctionLibrary_C::STATIC_IsHunterShouldShowTutorial(class UObject* __WorldContext, bool* bIsShowHunterDontShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.IsHunterShouldShowTutorial");

	USaveLoadFunctionLibrary_C_IsHunterShouldShowTutorial_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsShowHunterDontShow != nullptr)
		*bIsShowHunterDontShow = params.bIsShowHunterDontShow;

}


// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.IsSurvivorShouldShowTutorial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsShowSurvivorDontShow        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USaveLoadFunctionLibrary_C::STATIC_IsSurvivorShouldShowTutorial(class UObject* __WorldContext, bool* bIsShowSurvivorDontShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.IsSurvivorShouldShowTutorial");

	USaveLoadFunctionLibrary_C_IsSurvivorShouldShowTutorial_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsShowSurvivorDontShow != nullptr)
		*bIsShowSurvivorDontShow = params.bIsShowSurvivorDontShow;

}


// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveHunterFirstTime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USaveLoadFunctionLibrary_C::STATIC_SaveHunterFirstTime(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveHunterFirstTime");

	USaveLoadFunctionLibrary_C_SaveHunterFirstTime_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveSurvivorFirstTime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USaveLoadFunctionLibrary_C::STATIC_SaveSurvivorFirstTime(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveLoadFunctionLibrary.SaveLoadFunctionLibrary_C.SaveSurvivorFirstTime");

	USaveLoadFunctionLibrary_C_SaveSurvivorFirstTime_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
