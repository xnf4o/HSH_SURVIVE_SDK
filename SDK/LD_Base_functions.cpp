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

// Function LD_Base.LD_Base_C.SetUpLootDropItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LootDrop             LootDropData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ItemRarity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_Base_C::SetUpLootDropItem(const struct FS_LootDrop& LootDropData, const struct FText& ItemName, const struct FText& ItemType, int ItemRarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.SetUpLootDropItem");

	ALD_Base_C_SetUpLootDropItem_Params params;
	params.LootDropData = LootDropData;
	params.ItemName = ItemName;
	params.ItemType = ItemType;
	params.ItemRarity = ItemRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.SetItemNameAndRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_Base_C::SetItemNameAndRarity(const struct FText& ItemName, const struct FText& ItemType, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.SetItemNameAndRarity");

	ALD_Base_C_SetItemNameAndRarity_Params params;
	params.ItemName = ItemName;
	params.ItemType = ItemType;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.SpawnTrailLootDropEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_Base_C::SpawnTrailLootDropEffect(int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.SpawnTrailLootDropEffect");

	ALD_Base_C_SpawnTrailLootDropEffect_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.OnResponse_B11F1C96410BA95FD81F82A75353BCA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALD_Base_C::OnResponse_B11F1C96410BA95FD81F82A75353BCA7(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.OnResponse_B11F1C96410BA95FD81F82A75353BCA7");

	ALD_Base_C_OnResponse_B11F1C96410BA95FD81F82A75353BCA7_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALD_Base_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.ReceiveBeginPlay");

	ALD_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.FocusOnLootDrop
// (BlueprintCallable, BlueprintEvent)
void ALD_Base_C::FocusOnLootDrop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.FocusOnLootDrop");

	ALD_Base_C_FocusOnLootDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.HideAllLootdrop
// (BlueprintCallable, BlueprintEvent)
void ALD_Base_C::HideAllLootdrop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.HideAllLootdrop");

	ALD_Base_C_HideAllLootdrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.ShowAllLootdrop
// (BlueprintCallable, BlueprintEvent)
void ALD_Base_C::ShowAllLootdrop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.ShowAllLootdrop");

	ALD_Base_C_ShowAllLootdrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.OnEquip
// (BlueprintCallable, BlueprintEvent)
void ALD_Base_C::OnEquip()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.OnEquip");

	ALD_Base_C_OnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.ExecuteUbergraph_LD_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_Base_C::ExecuteUbergraph_LD_Base(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.ExecuteUbergraph_LD_Base");

	ALD_Base_C_ExecuteUbergraph_LD_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Base.LD_Base_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALD_Base_C::OnClick__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Base.LD_Base_C.OnClick__DelegateSignature");

	ALD_Base_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
