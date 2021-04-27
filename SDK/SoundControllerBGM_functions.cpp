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

// Function SoundControllerBGM.SoundControllerBGM_C.MulticastPlaySound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASoundControllerBGM_C::MulticastPlaySound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBGM.SoundControllerBGM_C.MulticastPlaySound");

	ASoundControllerBGM_C_MulticastPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBGM.SoundControllerBGM_C.ExecuteUbergraph_SoundControllerBGM
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASoundControllerBGM_C::ExecuteUbergraph_SoundControllerBGM(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBGM.SoundControllerBGM_C.ExecuteUbergraph_SoundControllerBGM");

	ASoundControllerBGM_C_ExecuteUbergraph_SoundControllerBGM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
