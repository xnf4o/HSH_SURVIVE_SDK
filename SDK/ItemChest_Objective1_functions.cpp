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

// Function ItemChest_Objective1.ItemChest_Objective1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AItemChest_Objective1_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective1.ItemChest_Objective1_C.ReceiveBeginPlay");

	AItemChest_Objective1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective1.ItemChest_Objective1_C.MulticastOpenChest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AItemChest_Objective1_C::MulticastOpenChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective1.ItemChest_Objective1_C.MulticastOpenChest");

	AItemChest_Objective1_C_MulticastOpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective1.ItemChest_Objective1_C.OpenChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_Objective1_C::OpenChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective1.ItemChest_Objective1_C.OpenChest");

	AItemChest_Objective1_C_OpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective1.ItemChest_Objective1_C.MulticastCloseChest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AItemChest_Objective1_C::MulticastCloseChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective1.ItemChest_Objective1_C.MulticastCloseChest");

	AItemChest_Objective1_C_MulticastCloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective1.ItemChest_Objective1_C.CloseChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_Objective1_C::CloseChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective1.ItemChest_Objective1_C.CloseChest");

	AItemChest_Objective1_C_CloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest_Objective1.ItemChest_Objective1_C.ExecuteUbergraph_ItemChest_Objective1
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_Objective1_C::ExecuteUbergraph_ItemChest_Objective1(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest_Objective1.ItemChest_Objective1_C.ExecuteUbergraph_ItemChest_Objective1");

	AItemChest_Objective1_C_ExecuteUbergraph_ItemChest_Objective1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
