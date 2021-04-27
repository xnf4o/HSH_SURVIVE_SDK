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

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngamePlayerDataSurvivor
struct UIngame_Survivor_PC1_C_GetIngamePlayerDataSurvivor_Params
{
	class UIngamePlayerDataSurvivor_C*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngameCharacterDataSurvivor
struct UIngame_Survivor_PC1_C_GetIngameCharacterDataSurvivor_Params
{
	class UIngamePlayerDataSurvivor_C*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngameCharacterDataHunter
struct UIngame_Survivor_PC1_C_GetIngameCharacterDataHunter_Params
{
	class AHSHCharacterHunterBase*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SetStaminaDynamic
struct UIngame_Survivor_PC1_C_SetStaminaDynamic_Params
{
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SetHPDynamic
struct UIngame_Survivor_PC1_C_SetHPDynamic_Params
{
	float                                              HP;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.InitStaminaAndHP
struct UIngame_Survivor_PC1_C_InitStaminaAndHP_Params
{
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSTA;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdateCrosshair
struct UIngame_Survivor_PC1_C_UpdateCrosshair_Params
{
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_Crosshair_Brush
struct UIngame_Survivor_PC1_C_Get_Crosshair_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
	TEnumAsByte<HSHSurvivor_EPickableType>             PickableType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetCooldownItem
struct UIngame_Survivor_PC1_C_GetCooldownItem_Params
{
	float                                              TimeRemaining;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ChangeInteractImg
struct UIngame_Survivor_PC1_C_ChangeInteractImg_Params
{
	class UObject*                                     Object;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowVisibilityIfNotHaveItem
struct UIngame_Survivor_PC1_C_ShowVisibilityIfNotHaveItem_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_TextBlock_SuddenDeath_Visibility_1
struct UIngame_Survivor_PC1_C_Get_TextBlock_SuddenDeath_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_InteractPanel_Visibility_1
struct UIngame_Survivor_PC1_C_Get_InteractPanel_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowVisibilityIfHaveItem
struct UIngame_Survivor_PC1_C_ShowVisibilityIfHaveItem_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowPingUI
struct UIngame_Survivor_PC1_C_ShowPingUI_Params
{
	struct FText                                       HeadlineText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DataText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     WorldLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.HidePingUI
struct UIngame_Survivor_PC1_C_HidePingUI_Params
{
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdatePingUI
struct UIngame_Survivor_PC1_C_UpdatePingUI_Params
{
	struct FVector                                     WorldLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowPing
struct UIngame_Survivor_PC1_C_ShowPing_Params
{
	TArray<struct FS_PingPair>                         ActivePing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ActiveCrossHair
struct UIngame_Survivor_PC1_C_ActiveCrossHair_Params
{
	bool                                               bIsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SendTutorialEvent
struct UIngame_Survivor_PC1_C_SendTutorialEvent_Params
{
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Construct
struct UIngame_Survivor_PC1_C_Construct_Params
{
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Tick
struct UIngame_Survivor_PC1_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnShowTutorial
struct UIngame_Survivor_PC1_C_OnShowTutorial_Params
{
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnHideTutorial
struct UIngame_Survivor_PC1_C_OnHideTutorial_Params
{
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SendInteract_Brush
struct UIngame_Survivor_PC1_C_SendInteract_Brush_Params
{
	struct FSlateBrush                                 SlateBrush_Normal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 SlateBrush_Hover;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 SlateBrush_Interact;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SlateText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NotShowButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnTakeDamage
struct UIngame_Survivor_PC1_C_OnTakeDamage_Params
{
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.PauseScreenAnimation
struct UIngame_Survivor_PC1_C_PauseScreenAnimation_Params
{
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnUpdateQuestDetailsNew
struct UIngame_Survivor_PC1_C_OnUpdateQuestDetailsNew_Params
{
	TArray<struct FS_QuestDetail>                      QuestStr;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdatePing
struct UIngame_Survivor_PC1_C_UpdatePing_Params
{
	TArray<struct FS_PingPair>                         ActivePing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdateSetItem
struct UIngame_Survivor_PC1_C_UpdateSetItem_Params
{
	struct FS_Pickable                                 Pickable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ExecuteUbergraph_Ingame_Survivor_PC1
struct UIngame_Survivor_PC1_C_ExecuteUbergraph_Ingame_Survivor_PC1_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
