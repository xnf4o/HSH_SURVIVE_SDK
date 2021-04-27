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

// Function Widget_TooltipNew.Widget_TooltipNew_C.SetColor
struct UWidget_TooltipNew_C_SetColor_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.SetText
struct UWidget_TooltipNew_C_SetText_Params
{
	struct FText                                       TooltipTxt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TooltipTxt_Description;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.HideTooltip
struct UWidget_TooltipNew_C_HideTooltip_Params
{
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.ShowTooltip
struct UWidget_TooltipNew_C_ShowTooltip_Params
{
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.SetPosition
struct UWidget_TooltipNew_C_SetPosition_Params
{
	struct FVector2D                                   Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextDescription_Text_1
struct UWidget_TooltipNew_C_Get_TextDescription_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextHead_Text_1
struct UWidget_TooltipNew_C_Get_TextHead_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextDescription_Visibility_1
struct UWidget_TooltipNew_C_Get_TextDescription_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.GetVisibility_1
struct UWidget_TooltipNew_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.Construct
struct UWidget_TooltipNew_C_Construct_Params
{
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.ShowWidget
struct UWidget_TooltipNew_C_ShowWidget_Params
{
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.DestroyWidget
struct UWidget_TooltipNew_C_DestroyWidget_Params
{
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.OnFinish
struct UWidget_TooltipNew_C_OnFinish_Params
{
};

// Function Widget_TooltipNew.Widget_TooltipNew_C.ExecuteUbergraph_Widget_TooltipNew
struct UWidget_TooltipNew_C_ExecuteUbergraph_Widget_TooltipNew_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
