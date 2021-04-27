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

// Function TutorialSaveGame.TutorialSaveGame_C.ResetToDefualt
// (Public, BlueprintCallable, BlueprintEvent)
void UTutorialSaveGame_C::ResetToDefualt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialSaveGame.TutorialSaveGame_C.ResetToDefualt");

	UTutorialSaveGame_C_ResetToDefualt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialSaveGame.TutorialSaveGame_C.ExecuteUbergraph_TutorialSaveGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialSaveGame_C::ExecuteUbergraph_TutorialSaveGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TutorialSaveGame.TutorialSaveGame_C.ExecuteUbergraph_TutorialSaveGame");

	UTutorialSaveGame_C_ExecuteUbergraph_TutorialSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
