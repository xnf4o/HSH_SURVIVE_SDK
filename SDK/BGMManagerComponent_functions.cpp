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

// Function BGMManagerComponent.BGMManagerComponent_C.TryGetSoundController
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASoundControllerBase_C*  SoundController                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBGMManagerComponent_C::TryGetSoundController(class UClass* Class, class ASoundControllerBase_C** SoundController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMManagerComponent.BGMManagerComponent_C.TryGetSoundController");

	UBGMManagerComponent_C_TryGetSoundController_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SoundController != nullptr)
		*SoundController = params.SoundController;

}


// Function BGMManagerComponent.BGMManagerComponent_C.Initialize
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UBGMManagerComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMManagerComponent.BGMManagerComponent_C.Initialize");

	UBGMManagerComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGMManagerComponent.BGMManagerComponent_C.ExecuteUbergraph_BGMManagerComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBGMManagerComponent_C::ExecuteUbergraph_BGMManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMManagerComponent.BGMManagerComponent_C.ExecuteUbergraph_BGMManagerComponent");

	UBGMManagerComponent_C_ExecuteUbergraph_BGMManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
