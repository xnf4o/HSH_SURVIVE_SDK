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

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_6B96793E4578C2C68AFC6BA562F20912
struct ULootBoxManagerComponent_C_OnResponse_6B96793E4578C2C68AFC6BA562F20912_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_227CDFC24CDE00312CDD8F8C9460FA1D
struct ULootBoxManagerComponent_C_OnResponse_227CDFC24CDE00312CDD8F8C9460FA1D_Params
{
	struct FGSBuyVirtualGoodResponse                   BuyVirtualGoodResponse;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnResponse_959AF35B4441BE736CB9D3816BFE23B6
struct ULootBoxManagerComponent_C_OnResponse_959AF35B4441BE736CB9D3816BFE23B6_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.GrantCurrency
struct ULootBoxManagerComponent_C_GrantCurrency_Params
{
	int                                                Value;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_GameCurrency_E_GameCurrency>         CurrencyType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.BuyLootbox
struct ULootBoxManagerComponent_C_BuyLootbox_Params
{
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.ClearLootDropPreview
struct ULootBoxManagerComponent_C_ClearLootDropPreview_Params
{
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBox
struct ULootBoxManagerComponent_C_OpenLootBox_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBoxWithName
struct ULootBoxManagerComponent_C_OpenLootBoxWithName_Params
{
	struct FString                                     lootBoxType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OpenLootBoxAmountWithName
struct ULootBoxManagerComponent_C_OpenLootBoxAmountWithName_Params
{
	struct FString                                     lootBoxType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.ExecuteUbergraph_LootBoxManagerComponent
struct ULootBoxManagerComponent_C_ExecuteUbergraph_LootBoxManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnOpenLootBoxFailed__DelegateSignature
struct ULootBoxManagerComponent_C_OnOpenLootBoxFailed__DelegateSignature_Params
{
};

// Function LootBoxManagerComponent.LootBoxManagerComponent_C.OnReceiveLootBox__DelegateSignature
struct ULootBoxManagerComponent_C_OnReceiveLootBox__DelegateSignature_Params
{
	class UGameSparksScriptData*                       LootDropData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
