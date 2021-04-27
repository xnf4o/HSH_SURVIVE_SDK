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

// Function OptionGraphicsSaveGame.OptionGraphicsSaveGame_C.ResetToDefualt
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionGraphicsSaveGame_C::ResetToDefualt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionGraphicsSaveGame.OptionGraphicsSaveGame_C.ResetToDefualt");

	UOptionGraphicsSaveGame_C_ResetToDefualt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionGraphicsSaveGame.OptionGraphicsSaveGame_C.ExecuteUbergraph_OptionGraphicsSaveGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionGraphicsSaveGame_C::ExecuteUbergraph_OptionGraphicsSaveGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionGraphicsSaveGame.OptionGraphicsSaveGame_C.ExecuteUbergraph_OptionGraphicsSaveGame");

	UOptionGraphicsSaveGame_C_ExecuteUbergraph_OptionGraphicsSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
