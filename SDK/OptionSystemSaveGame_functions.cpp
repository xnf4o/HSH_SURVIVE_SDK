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

// Function OptionSystemSaveGame.OptionSystemSaveGame_C.ResetToDefualt
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionSystemSaveGame_C::ResetToDefualt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionSystemSaveGame.OptionSystemSaveGame_C.ResetToDefualt");

	UOptionSystemSaveGame_C_ResetToDefualt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionSystemSaveGame.OptionSystemSaveGame_C.ExecuteUbergraph_OptionSystemSaveGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionSystemSaveGame_C::ExecuteUbergraph_OptionSystemSaveGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionSystemSaveGame.OptionSystemSaveGame_C.ExecuteUbergraph_OptionSystemSaveGame");

	UOptionSystemSaveGame_C_ExecuteUbergraph_OptionSystemSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
