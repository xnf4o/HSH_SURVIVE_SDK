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

// Function SaveGameManager.SaveGameManager_C.GetOptionGraphics
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOptionGraphicsSaveGame_C* OptionGraphics                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USaveGameManager_C::GetOptionGraphics(class UOptionGraphicsSaveGame_C** OptionGraphics)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.GetOptionGraphics");

	USaveGameManager_C_GetOptionGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptionGraphics != nullptr)
		*OptionGraphics = params.OptionGraphics;

}


// Function SaveGameManager.SaveGameManager_C.LoadGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ExtraName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UClass*                  SaveGameClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CreateNew                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
class USaveGame* USaveGameManager_C::LoadGame(const struct FString& SlotName, const struct FString& ExtraName, class UClass* SaveGameClass, bool* CreateNew)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadGame");

	USaveGameManager_C_LoadGame_Params params;
	params.SlotName = SlotName;
	params.ExtraName = ExtraName;
	params.SaveGameClass = SaveGameClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreateNew != nullptr)
		*CreateNew = params.CreateNew;


	return params.ReturnValue;
}


// Function SaveGameManager.SaveGameManager_C.SaveGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ExtraName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*               SaveGameObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SaveSuccess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CreateNew                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USaveGameManager_C::SaveGame(const struct FString& SlotName, const struct FString& ExtraName, class USaveGame* SaveGameObject, bool* SaveSuccess, bool* CreateNew)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveGame");

	USaveGameManager_C_SaveGame_Params params;
	params.SlotName = SlotName;
	params.ExtraName = ExtraName;
	params.SaveGameObject = SaveGameObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveSuccess != nullptr)
		*SaveSuccess = params.SaveSuccess;
	if (CreateNew != nullptr)
		*CreateNew = params.CreateNew;

}


// Function SaveGameManager.SaveGameManager_C.GetOptionDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOptionDisplaySaveGame_C* OptionDisplay                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USaveGameManager_C::GetOptionDisplay(class UOptionDisplaySaveGame_C** OptionDisplay)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.GetOptionDisplay");

	USaveGameManager_C_GetOptionDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptionDisplay != nullptr)
		*OptionDisplay = params.OptionDisplay;

}


// Function SaveGameManager.SaveGameManager_C.DefaultOptionDisplay
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::DefaultOptionDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.DefaultOptionDisplay");

	USaveGameManager_C_DefaultOptionDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.SaveOptionAudio
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::SaveOptionAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveOptionAudio");

	USaveGameManager_C_SaveOptionAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.LoadOptionAudio
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::LoadOptionAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadOptionAudio");

	USaveGameManager_C_LoadOptionAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.DefaultOptionAudio
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::DefaultOptionAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.DefaultOptionAudio");

	USaveGameManager_C_DefaultOptionAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.SaveOptionGraphics
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::SaveOptionGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveOptionGraphics");

	USaveGameManager_C_SaveOptionGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.LoadOptionGraphics
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::LoadOptionGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadOptionGraphics");

	USaveGameManager_C_LoadOptionGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.DefaultOptionGraphics
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::DefaultOptionGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.DefaultOptionGraphics");

	USaveGameManager_C_DefaultOptionGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.LoadOptionDisplay
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::LoadOptionDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadOptionDisplay");

	USaveGameManager_C_LoadOptionDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.SaveOptionControl
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::SaveOptionControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveOptionControl");

	USaveGameManager_C_SaveOptionControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.LoadOptionControl
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::LoadOptionControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadOptionControl");

	USaveGameManager_C_LoadOptionControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.DefaultOptionControl
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::DefaultOptionControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.DefaultOptionControl");

	USaveGameManager_C_DefaultOptionControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.SaveOptionDisplay
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::SaveOptionDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveOptionDisplay");

	USaveGameManager_C_SaveOptionDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.SaveTutorial
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::SaveTutorial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveTutorial");

	USaveGameManager_C_SaveTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.LoadTutorial
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::LoadTutorial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadTutorial");

	USaveGameManager_C_LoadTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.DefualtTutorial
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::DefualtTutorial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.DefualtTutorial");

	USaveGameManager_C_DefualtTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.SaveOptionSystem
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::SaveOptionSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveOptionSystem");

	USaveGameManager_C_SaveOptionSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.LoadOptionSystem
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::LoadOptionSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadOptionSystem");

	USaveGameManager_C_LoadOptionSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.DefaultOptionSystem
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::DefaultOptionSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.DefaultOptionSystem");

	USaveGameManager_C_DefaultOptionSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void USaveGameManager_C::Initialize(const struct FString& SlotName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.Initialize");

	USaveGameManager_C_Initialize_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.SaveAnnouncement
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::SaveAnnouncement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.SaveAnnouncement");

	USaveGameManager_C_SaveAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.LoadAnnouncement
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::LoadAnnouncement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.LoadAnnouncement");

	USaveGameManager_C_LoadAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.DefaultAnnouncement
// (BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::DefaultAnnouncement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.DefaultAnnouncement");

	USaveGameManager_C_DefaultAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.ExecuteUbergraph_SaveGameManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USaveGameManager_C::ExecuteUbergraph_SaveGameManager(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.ExecuteUbergraph_SaveGameManager");

	USaveGameManager_C_ExecuteUbergraph_SaveGameManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SaveGameManager.SaveGameManager_C.OnInitialize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void USaveGameManager_C::OnInitialize__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SaveGameManager.SaveGameManager_C.OnInitialize__DelegateSignature");

	USaveGameManager_C_OnInitialize__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
