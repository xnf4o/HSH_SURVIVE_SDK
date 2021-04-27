#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LootDropPreviewItem.LootDropPreviewItem_C.SpawnLootdropEffect
struct ALootDropPreviewItem_C_SpawnLootdropEffect_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootDropSkinPreview
struct ALootDropPreviewItem_C_SetupLootDropSkinPreview_Params
{
	class USkeletalMesh*                               PreviewSkeletalMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               previewAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       previewItemName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.ReceiveTick
struct ALootDropPreviewItem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootDropPreview
struct ALootDropPreviewItem_C_SetupLootDropPreview_Params
{
	class UStaticMesh*                                 PreviewMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       previewItemName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       previewItemAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.ReceiveBeginPlay
struct ALootDropPreviewItem_C_ReceiveBeginPlay_Params
{
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.SetupLootGrantCurrency
struct ALootDropPreviewItem_C_SetupLootGrantCurrency_Params
{
	int                                                Currency;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature
struct ALootDropPreviewItem_C_BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature
struct ALootDropPreviewItem_C_BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.SetTextVisibility
struct ALootDropPreviewItem_C_SetTextVisibility_Params
{
	bool                                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootDropPreviewItem.LootDropPreviewItem_C.ExecuteUbergraph_LootDropPreviewItem
struct ALootDropPreviewItem_C_ExecuteUbergraph_LootDropPreviewItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
