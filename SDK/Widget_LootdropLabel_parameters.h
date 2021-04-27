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

// Function Widget_LootdropLabel.Widget_LootdropLabel_C.SetItemRarity
struct UWidget_LootdropLabel_C_SetItemRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_LootdropLabel.Widget_LootdropLabel_C.SetItem
struct UWidget_LootdropLabel_C_SetItem_Params
{
	struct FText                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ItemType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_LootdropLabel.Widget_LootdropLabel_C.Construct
struct UWidget_LootdropLabel_C_Construct_Params
{
};

// Function Widget_LootdropLabel.Widget_LootdropLabel_C.ExecuteUbergraph_Widget_LootdropLabel
struct UWidget_LootdropLabel_C_ExecuteUbergraph_Widget_LootdropLabel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
