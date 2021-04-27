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

// Function OptionAudioSaveGame.OptionAudioSaveGame_C.ResetToDefualt
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionAudioSaveGame_C::ResetToDefualt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionAudioSaveGame.OptionAudioSaveGame_C.ResetToDefualt");

	UOptionAudioSaveGame_C_ResetToDefualt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionAudioSaveGame.OptionAudioSaveGame_C.ExecuteUbergraph_OptionAudioSaveGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionAudioSaveGame_C::ExecuteUbergraph_OptionAudioSaveGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionAudioSaveGame.OptionAudioSaveGame_C.ExecuteUbergraph_OptionAudioSaveGame");

	UOptionAudioSaveGame_C_ExecuteUbergraph_OptionAudioSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
