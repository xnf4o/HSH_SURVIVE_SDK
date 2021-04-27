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

// Function OptionDisplaySaveGame.OptionDisplaySaveGame_C.ChangeResolution
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionDisplaySaveGame_C::ChangeResolution()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionDisplaySaveGame.OptionDisplaySaveGame_C.ChangeResolution");

	UOptionDisplaySaveGame_C_ChangeResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionDisplaySaveGame.OptionDisplaySaveGame_C.ResetToDefualt
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionDisplaySaveGame_C::ResetToDefualt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionDisplaySaveGame.OptionDisplaySaveGame_C.ResetToDefualt");

	UOptionDisplaySaveGame_C_ResetToDefualt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionDisplaySaveGame.OptionDisplaySaveGame_C.ExecuteUbergraph_OptionDisplaySaveGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionDisplaySaveGame_C::ExecuteUbergraph_OptionDisplaySaveGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionDisplaySaveGame.OptionDisplaySaveGame_C.ExecuteUbergraph_OptionDisplaySaveGame");

	UOptionDisplaySaveGame_C_ExecuteUbergraph_OptionDisplaySaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
