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

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetImageBrush
struct UWidget_TooltipCharacterInfo_C_SetImageBrush_Params
{
	class UHSHItem*                                    HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetColor
struct UWidget_TooltipCharacterInfo_C_SetColor_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetText
struct UWidget_TooltipCharacterInfo_C_SetText_Params
{
	struct FText                                       TooltipTxt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TooltipTxt_Description;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.HideTooltip
struct UWidget_TooltipCharacterInfo_C_HideTooltip_Params
{
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ShowTooltip
struct UWidget_TooltipCharacterInfo_C_ShowTooltip_Params
{
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetPosition
struct UWidget_TooltipCharacterInfo_C_SetPosition_Params
{
	struct FVector2D                                   Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ShowWidget
struct UWidget_TooltipCharacterInfo_C_ShowWidget_Params
{
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.DestroyWidget
struct UWidget_TooltipCharacterInfo_C_DestroyWidget_Params
{
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.OnFinish
struct UWidget_TooltipCharacterInfo_C_OnFinish_Params
{
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.Construct
struct UWidget_TooltipCharacterInfo_C_Construct_Params
{
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.RefreshData
struct UWidget_TooltipCharacterInfo_C_RefreshData_Params
{
	class UHSHCharacterItem*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ExecuteUbergraph_Widget_TooltipCharacterInfo
struct UWidget_TooltipCharacterInfo_C_ExecuteUbergraph_Widget_TooltipCharacterInfo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
