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

// Function ItemChest_Objective2.ItemChest_Objective2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AItemChest_Objective2_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective2.ItemChest_Objective2_C.ReceiveBeginPlay");

	AItemChest_Objective2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective2.ItemChest_Objective2_C.MulticastOpenChest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AItemChest_Objective2_C::MulticastOpenChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective2.ItemChest_Objective2_C.MulticastOpenChest");

	AItemChest_Objective2_C_MulticastOpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective2.ItemChest_Objective2_C.OpenChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_Objective2_C::OpenChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective2.ItemChest_Objective2_C.OpenChest");

	AItemChest_Objective2_C_OpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective2.ItemChest_Objective2_C.MulticastCloseChest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AItemChest_Objective2_C::MulticastCloseChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective2.ItemChest_Objective2_C.MulticastCloseChest");

	AItemChest_Objective2_C_MulticastCloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective2.ItemChest_Objective2_C.CloseChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_Objective2_C::CloseChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective2.ItemChest_Objective2_C.CloseChest");

	AItemChest_Objective2_C_CloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective2.ItemChest_Objective2_C.ExecuteUbergraph_ItemChest_Objective2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_Objective2_C::ExecuteUbergraph_ItemChest_Objective2(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective2.ItemChest_Objective2_C.ExecuteUbergraph_ItemChest_Objective2");

	AItemChest_Objective2_C_ExecuteUbergraph_ItemChest_Objective2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
