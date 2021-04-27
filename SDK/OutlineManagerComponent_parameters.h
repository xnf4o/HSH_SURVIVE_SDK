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

// Function OutlineManagerComponent.OutlineManagerComponent_C.OnUpdateReplicate
struct UOutlineManagerComponent_C_OnUpdateReplicate_Params
{
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.IsPlayerHavePerkClairvoyant
struct UOutlineManagerComponent_C_IsPlayerHavePerkClairvoyant_Params
{
	bool                                               bHave;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.OnRep_AuraInfo
struct UOutlineManagerComponent_C_OnRep_AuraInfo_Params
{
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.FindCharacter
struct UOutlineManagerComponent_C_FindCharacter_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFindSuccess;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.OnRemoveAurainfo
struct UOutlineManagerComponent_C_OnRemoveAurainfo_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.UpdateAura
struct UOutlineManagerComponent_C_UpdateAura_Params
{
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.RequestShowSurvivorAura
struct UOutlineManagerComponent_C_RequestShowSurvivorAura_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCanHide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.HideSurvivorAura
struct UOutlineManagerComponent_C_HideSurvivorAura_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.RefreshSurvivorAura
struct UOutlineManagerComponent_C_RefreshSurvivorAura_Params
{
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.ShowSurvivorAura
struct UOutlineManagerComponent_C_ShowSurvivorAura_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.RequestHideSurvivorAura
struct UOutlineManagerComponent_C_RequestHideSurvivorAura_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.ShowHunterAura
struct UOutlineManagerComponent_C_ShowHunterAura_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.MulticastHunterAura
struct UOutlineManagerComponent_C_MulticastHunterAura_Params
{
	bool                                               bShow;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.RefreshHunterAura
struct UOutlineManagerComponent_C_RefreshHunterAura_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.ShowHunterAuraWithTime
struct UOutlineManagerComponent_C_ShowHunterAuraWithTime_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.Initialize
struct UOutlineManagerComponent_C_Initialize_Params
{
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.ReceiveTick
struct UOutlineManagerComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineManagerComponent.OutlineManagerComponent_C.ExecuteUbergraph_OutlineManagerComponent
struct UOutlineManagerComponent_C_ExecuteUbergraph_OutlineManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
