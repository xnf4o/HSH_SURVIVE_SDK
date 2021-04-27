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

// Function ILootDropPreview.ILootDropPreview_C.SetupLootGrantCurrency
struct UILootDropPreview_C_SetupLootGrantCurrency_Params
{
	int                                                Currency;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ILootDropPreview.ILootDropPreview_C.SetupLootDropSkinPreview
struct UILootDropPreview_C_SetupLootDropSkinPreview_Params
{
	class USkeletalMesh*                               PreviewSkeletalMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               previewAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       previewItemName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ILootDropPreview.ILootDropPreview_C.SetupLootDropPreview
struct UILootDropPreview_C_SetupLootDropPreview_Params
{
	class UStaticMesh*                                 PreviewMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       previewItemName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       previewItemAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
