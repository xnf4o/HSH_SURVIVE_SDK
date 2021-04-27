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

// Function LD_Base.LD_Base_C.SetUpLootDropItem
struct ALD_Base_C_SetUpLootDropItem_Params
{
	struct FS_LootDrop                                 LootDropData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ItemType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ItemRarity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LD_Base.LD_Base_C.SetItemNameAndRarity
struct ALD_Base_C_SetItemNameAndRarity_Params
{
	struct FText                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ItemType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LD_Base.LD_Base_C.SpawnTrailLootDropEffect
struct ALD_Base_C_SpawnTrailLootDropEffect_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LD_Base.LD_Base_C.OnResponse_B11F1C96410BA95FD81F82A75353BCA7
struct ALD_Base_C_OnResponse_B11F1C96410BA95FD81F82A75353BCA7_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LD_Base.LD_Base_C.ReceiveBeginPlay
struct ALD_Base_C_ReceiveBeginPlay_Params
{
};

// Function LD_Base.LD_Base_C.FocusOnLootDrop
struct ALD_Base_C_FocusOnLootDrop_Params
{
};

// Function LD_Base.LD_Base_C.HideAllLootdrop
struct ALD_Base_C_HideAllLootdrop_Params
{
};

// Function LD_Base.LD_Base_C.ShowAllLootdrop
struct ALD_Base_C_ShowAllLootdrop_Params
{
};

// Function LD_Base.LD_Base_C.OnEquip
struct ALD_Base_C_OnEquip_Params
{
};

// Function LD_Base.LD_Base_C.ExecuteUbergraph_LD_Base
struct ALD_Base_C_ExecuteUbergraph_LD_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LD_Base.LD_Base_C.OnClick__DelegateSignature
struct ALD_Base_C_OnClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
