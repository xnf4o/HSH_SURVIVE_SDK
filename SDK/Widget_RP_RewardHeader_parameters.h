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

// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.SetHeaderBackground
struct UWidget_RP_RewardHeader_C_SetHeaderBackground_Params
{
	bool                                               bIsPremium;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.Initialize
struct UWidget_RP_RewardHeader_C_Initialize_Params
{
	bool                                               bIsPremium;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.UpdateFreeValue
struct UWidget_RP_RewardHeader_C_UpdateFreeValue_Params
{
	TArray<struct FString>                             Name;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsClaimed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.UpdatePremiumValue
struct UWidget_RP_RewardHeader_C_UpdatePremiumValue_Params
{
	TArray<struct FString>                             Name;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsClaimed;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.ExecuteUbergraph_Widget_RP_RewardHeader
struct UWidget_RP_RewardHeader_C_ExecuteUbergraph_Widget_RP_RewardHeader_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
