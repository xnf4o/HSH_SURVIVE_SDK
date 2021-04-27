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

// Function LootDropPreviewItem.LootDropPreviewItem_C.SpawnLootdropEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::SpawnLootdropEffect(int Rarity, const struct FVector& Scale)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.SpawnLootdropEffect");

	ALootDropPreviewItem_C_SpawnLootdropEffect_Params params;
	params.Rarity = Rarity;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootDropSkinPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           PreviewSkeletalMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*           previewAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   previewItemName                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::SetupLootDropSkinPreview(class USkeletalMesh* PreviewSkeletalMesh, class UAnimSequence* previewAnimation, const struct FText& previewItemName, int Index, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootDropSkinPreview");

	ALootDropPreviewItem_C_SetupLootDropSkinPreview_Params params;
	params.PreviewSkeletalMesh = PreviewSkeletalMesh;
	params.previewAnimation = previewAnimation;
	params.previewItemName = previewItemName;
	params.Index = Index;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.ReceiveTick");

	ALootDropPreviewItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootDropPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             PreviewMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   previewItemName                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   previewItemAmount              (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::SetupLootDropPreview(class UStaticMesh* PreviewMesh, const struct FText& previewItemName, const struct FText& previewItemAmount, int Index, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootDropPreview");

	ALootDropPreviewItem_C_SetupLootDropPreview_Params params;
	params.PreviewMesh = PreviewMesh;
	params.previewItemName = previewItemName;
	params.previewItemAmount = previewItemAmount;
	params.Index = Index;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALootDropPreviewItem_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.ReceiveBeginPlay");

	ALootDropPreviewItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootGrantCurrency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::SetupLootGrantCurrency(int Currency)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootGrantCurrency");

	ALootDropPreviewItem_C_SetupLootGrantCurrency_Params params;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature");

	ALootDropPreviewItem_C_BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature");

	ALootDropPreviewItem_C_BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.SetTextVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootDropPreviewItem_C::SetTextVisibility(bool Visibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.SetTextVisibility");

	ALootDropPreviewItem_C_SetTextVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewItem.LootDropPreviewItem_C.ExecuteUbergraph_LootDropPreviewItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewItem_C::ExecuteUbergraph_LootDropPreviewItem(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewItem.LootDropPreviewItem_C.ExecuteUbergraph_LootDropPreviewItem");

	ALootDropPreviewItem_C_ExecuteUbergraph_LootDropPreviewItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
