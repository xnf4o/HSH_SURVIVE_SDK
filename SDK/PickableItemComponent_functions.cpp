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

// Function PickableItemComponent.PickableItemComponent_C.LoadPickableItemPrimaryAssets
// (BlueprintCallable, BlueprintEvent)
void UPickableItemComponent_C::LoadPickableItemPrimaryAssets()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PickableItemComponent.PickableItemComponent_C.LoadPickableItemPrimaryAssets");

	UPickableItemComponent_C_LoadPickableItemPrimaryAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PickableItemComponent.PickableItemComponent_C.ExecuteUbergraph_PickableItemComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPickableItemComponent_C::ExecuteUbergraph_PickableItemComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PickableItemComponent.PickableItemComponent_C.ExecuteUbergraph_PickableItemComponent");

	UPickableItemComponent_C_ExecuteUbergraph_PickableItemComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
