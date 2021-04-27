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

// Function PickableConditionNotFullHP.PickableConditionNotFullHP_C.CanUseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   NotifyText                     (Parm, OutParm)
void UPickableConditionNotFullHP_C::CanUseItem(class AHSHCharacterBase* hshcharacter, bool* CanUse, struct FText* NotifyText)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PickableConditionNotFullHP.PickableConditionNotFullHP_C.CanUseItem");

	UPickableConditionNotFullHP_C_CanUseItem_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
	if (NotifyText != nullptr)
		*NotifyText = params.NotifyText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
