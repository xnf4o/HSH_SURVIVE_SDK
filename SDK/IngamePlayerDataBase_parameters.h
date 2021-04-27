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

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.GetPlayerInfo
struct UIngamePlayerDataBase_C_GetPlayerInfo_Params
{
	class APawn*                                       Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.SendBooleanSuddenDeathMode
struct UIngamePlayerDataBase_C_SendBooleanSuddenDeathMode_Params
{
	bool                                               IsSuddenDeath;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.SendInteractSlateBrush
struct UIngamePlayerDataBase_C_SendInteractSlateBrush_Params
{
	struct FSlateBrush                                 SlateBrush_Normal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 SlateBrush_Hover;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 SlateBrush_Interact;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SlateText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NotShowButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.Tick
struct UIngamePlayerDataBase_C_Tick_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.ExecuteUbergraph_IngamePlayerDataBase
struct UIngamePlayerDataBase_C_ExecuteUbergraph_IngamePlayerDataBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.OnGameplayEffectApply__DelegateSignature
struct UIngamePlayerDataBase_C_OnGameplayEffectApply__DelegateSignature_Params
{
	struct FGameplayTagContainer                       GameplayTags;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.OnSendInteractSlateBrush__DelegateSignature
struct UIngamePlayerDataBase_C_OnSendInteractSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 SlateBrush_Normal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 SlateBrush_Hover;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 SlateBrush_Interact;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SlateText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NotShowButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
