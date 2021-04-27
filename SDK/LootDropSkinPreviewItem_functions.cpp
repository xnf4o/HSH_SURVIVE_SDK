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

// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SetupLootDropSkinPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           PreviewSkeletalMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*           previewAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   previewItemName                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropSkinPreviewItem_C::SetupLootDropSkinPreview(class USkeletalMesh* PreviewSkeletalMesh, class UAnimSequence* previewAnimation, const struct FText& previewItemName, int Index, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SetupLootDropSkinPreview");

	ALootDropSkinPreviewItem_C_SetupLootDropSkinPreview_Params params;
	params.PreviewSkeletalMesh = PreviewSkeletalMesh;
	params.previewAnimation = previewAnimation;
	params.previewItemName = previewItemName;
	params.Index = Index;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropSkinPreviewItem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ReceiveTick");

	ALootDropSkinPreviewItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SetupLootGrantCurrency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropSkinPreviewItem_C::SetupLootGrantCurrency(int Currency)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SetupLootGrantCurrency");

	ALootDropSkinPreviewItem_C_SetupLootGrantCurrency_Params params;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALootDropSkinPreviewItem_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ReceiveBeginPlay");

	ALootDropSkinPreviewItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SpawnLootdropEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropSkinPreviewItem_C::SpawnLootdropEffect(int Rarity, const struct FVector& Scale)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SpawnLootdropEffect");

	ALootDropSkinPreviewItem_C_SpawnLootdropEffect_Params params;
	params.Rarity = Rarity;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ExecuteUbergraph_LootDropSkinPreviewItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropSkinPreviewItem_C::ExecuteUbergraph_LootDropSkinPreviewItem(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ExecuteUbergraph_LootDropSkinPreviewItem");

	ALootDropSkinPreviewItem_C_ExecuteUbergraph_LootDropSkinPreviewItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
