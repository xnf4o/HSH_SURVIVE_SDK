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

// Function OptionControlSaveGame.OptionControlSaveGame_C.ResetToDefualt
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionControlSaveGame_C::ResetToDefualt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionControlSaveGame.OptionControlSaveGame_C.ResetToDefualt");

	UOptionControlSaveGame_C_ResetToDefualt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionControlSaveGame.OptionControlSaveGame_C.ExecuteUbergraph_OptionControlSaveGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionControlSaveGame_C::ExecuteUbergraph_OptionControlSaveGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionControlSaveGame.OptionControlSaveGame_C.ExecuteUbergraph_OptionControlSaveGame");

	UOptionControlSaveGame_C_ExecuteUbergraph_OptionControlSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
