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

// Function TrapTargetActor.TrapTargetActor_C.GetInteractSlateBrush
struct ATrapTargetActor_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TrapTargetActor.TrapTargetActor_C.SetInteractColor
struct ATrapTargetActor_C_SetInteractColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.OnClearUpdate
struct ATrapTargetActor_C_OnClearUpdate_Params
{
};

// Function TrapTargetActor.TrapTargetActor_C.GetWidth
struct ATrapTargetActor_C_GetWidth_Params
{
	float                                              Return_Height;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.GetHeight
struct ATrapTargetActor_C_GetHeight_Params
{
	float                                              Return_Height;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.DrawLine
struct ATrapTargetActor_C_DrawLine_Params
{
};

// Function TrapTargetActor.TrapTargetActor_C.UserConstructionScript
struct ATrapTargetActor_C_UserConstructionScript_Params
{
};

// Function TrapTargetActor.TrapTargetActor_C.EnableUI
struct ATrapTargetActor_C_EnableUI_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.DisableUI
struct ATrapTargetActor_C_DisableUI_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.ShowIndicator
struct ATrapTargetActor_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.HideIndicator
struct ATrapTargetActor_C_HideIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.RefreshUI
struct ATrapTargetActor_C_RefreshUI_Params
{
};

// Function TrapTargetActor.TrapTargetActor_C.ShowOutline
struct ATrapTargetActor_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.HideOutline
struct ATrapTargetActor_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapTargetActor.TrapTargetActor_C.ReceiveBeginPlay
struct ATrapTargetActor_C_ReceiveBeginPlay_Params
{
};

// Function TrapTargetActor.TrapTargetActor_C.UpdateOneStep
struct ATrapTargetActor_C_UpdateOneStep_Params
{
};

// Function TrapTargetActor.TrapTargetActor_C.ExecuteUbergraph_TrapTargetActor
struct ATrapTargetActor_C_ExecuteUbergraph_TrapTargetActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
