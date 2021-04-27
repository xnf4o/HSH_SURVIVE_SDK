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

// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Coins_Visibility_1
struct UWDG_ActivityItem_C_Get_Text_Coins_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_EventName_Text_1
struct UWDG_ActivityItem_C_Get_EventName_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Coins_Text_1
struct UWDG_ActivityItem_C_Get_Text_Coins_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Score_Text_1
struct UWDG_ActivityItem_C_Get_Text_Score_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WDG_ActivityItem.WDG_ActivityItem_C.IntValueToSymbol
struct UWDG_ActivityItem_C_IntValueToSymbol_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Symbol;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WDG_ActivityItem.WDG_ActivityItem_C.SetDetails
struct UWDG_ActivityItem_C_SetDetails_Params
{
	struct FString                                     EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Coin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WDG_ActivityItem.WDG_ActivityItem_C.Construct
struct UWDG_ActivityItem_C_Construct_Params
{
};

// Function WDG_ActivityItem.WDG_ActivityItem_C.ExecuteUbergraph_WDG_ActivityItem
struct UWDG_ActivityItem_C_ExecuteUbergraph_WDG_ActivityItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
