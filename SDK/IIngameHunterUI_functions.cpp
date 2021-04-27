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

// Function IIngameHunterUI.IIngameHunterUI_C.ActiveCrossHair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIIngameHunterUI_C::ActiveCrossHair(bool bIsActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IIngameHunterUI.IIngameHunterUI_C.ActiveCrossHair");

	UIIngameHunterUI_C_ActiveCrossHair_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
