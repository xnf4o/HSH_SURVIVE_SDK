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

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.SpawnItem
struct URandomSpawnItemsComponent_C_SpawnItem_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpawnItemActor_C*                           SpawnActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.FilterType
struct URandomSpawnItemsComponent_C_FilterType_Params
{
	TArray<class ASpawnItemActor_C*>                   Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ASpawnItemActor_C*>                   ReturnDefualt;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<class ASpawnItemActor_C*>                   ReturnFixed;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.InitializeSpawnItemsNew
struct URandomSpawnItemsComponent_C_InitializeSpawnItemsNew_Params
{
};

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.RandomSpawnItems
struct URandomSpawnItemsComponent_C_RandomSpawnItems_Params
{
	TArray<class ASpawnItemActor_C*>                   spawnitems;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ASpawnItemActor_C*>                   ReturnItems;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.Initialize
struct URandomSpawnItemsComponent_C_Initialize_Params
{
	class ULimitItemsBaseComponent_C*                  LimitItemBase;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.InitializeSpawnItemsLatent
struct URandomSpawnItemsComponent_C_InitializeSpawnItemsLatent_Params
{
};

// Function RandomSpawnItemsComponent.RandomSpawnItemsComponent_C.ExecuteUbergraph_RandomSpawnItemsComponent
struct URandomSpawnItemsComponent_C_ExecuteUbergraph_RandomSpawnItemsComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
