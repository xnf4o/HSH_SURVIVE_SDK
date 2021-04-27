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

// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SetupLootDropSkinPreview
struct ALootDropSkinPreviewItem_C_SetupLootDropSkinPreview_Params
{
	class USkeletalMesh*                               PreviewSkeletalMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               previewAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       previewItemName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ReceiveTick
struct ALootDropSkinPreviewItem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SetupLootGrantCurrency
struct ALootDropSkinPreviewItem_C_SetupLootGrantCurrency_Params
{
	int                                                Currency;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ReceiveBeginPlay
struct ALootDropSkinPreviewItem_C_ReceiveBeginPlay_Params
{
};

// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.SpawnLootdropEffect
struct ALootDropSkinPreviewItem_C_SpawnLootdropEffect_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootDropSkinPreviewItem.LootDropSkinPreviewItem_C.ExecuteUbergraph_LootDropSkinPreviewItem
struct ALootDropSkinPreviewItem_C_ExecuteUbergraph_LootDropSkinPreviewItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
