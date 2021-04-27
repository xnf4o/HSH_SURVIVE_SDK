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

// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.NewTryGetLootDropTarget
struct ULootBoxPreviewManagerComponent_C_NewTryGetLootDropTarget_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALootDropTarget_C*                           Output_Get;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.TryGetLootDropTarget
struct ULootBoxPreviewManagerComponent_C_TryGetLootDropTarget_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALootDropTarget_C*>                   Output_Get;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.DestroyLootDropActor
struct ULootBoxPreviewManagerComponent_C_DestroyLootDropActor_Params
{
};

// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.SpawnLootDrop
struct ULootBoxPreviewManagerComponent_C_SpawnLootDrop_Params
{
	struct FString                                     Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Currency;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.SpawnLootDropNew
struct ULootBoxPreviewManagerComponent_C_SpawnLootDropNew_Params
{
	struct FS_LootDrop                                 LootDropData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxPreviewManagerComponent.LootBoxPreviewManagerComponent_C.ExecuteUbergraph_LootBoxPreviewManagerComponent
struct ULootBoxPreviewManagerComponent_C_ExecuteUbergraph_LootBoxPreviewManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
