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

// Function Widget_ImageItem.Widget_ImageItem_C.RefreshButtonImage
struct UWidget_ImageItem_C_RefreshButtonImage_Params
{
};

// Function Widget_ImageItem.Widget_ImageItem_C.SetItemName
struct UWidget_ImageItem_C_SetItemName_Params
{
	struct FText                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ImageItem.Widget_ImageItem_C.SetBorderWithType
struct UWidget_ImageItem_C_SetBorderWithType_Params
{
	class UHSHPickableItem*                            PickableItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.Get_Text_Cooldown_Text_1
struct UWidget_ImageItem_C_Get_Text_Cooldown_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_ImageItem.Widget_ImageItem_C.SetItemDurabilityAnimation
struct UWidget_ImageItem_C_SetItemDurabilityAnimation_Params
{
	struct FS_Pickable                                 SPickable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.PlaySlotEffect
struct UWidget_ImageItem_C_PlaySlotEffect_Params
{
};

// Function Widget_ImageItem.Widget_ImageItem_C.Get_ProgressBar_Cooldown_Visibility_1
struct UWidget_ImageItem_C_Get_ProgressBar_Cooldown_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.SetKeybindVisibility
struct UWidget_ImageItem_C_SetKeybindVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.SetItemImage
struct UWidget_ImageItem_C_SetItemImage_Params
{
	struct FSlateBrush                                 Skill_Brush;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHaveItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ImageItem.Widget_ImageItem_C.SetItemDurability
struct UWidget_ImageItem_C_SetItemDurability_Params
{
	struct FText                                       Charge;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_Pickable                                 S_Pickable;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.Get_Image_ColorAndOpacity_Active
struct UWidget_ImageItem_C_Get_Image_ColorAndOpacity_Active_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.Get_ProgressBar_Cooldown_Percent
struct UWidget_ImageItem_C_Get_ProgressBar_Cooldown_Percent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.SetItemCooldown
struct UWidget_ImageItem_C_SetItemCooldown_Params
{
	float                                              TimeRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImageItem.Widget_ImageItem_C.PreConstruct
struct UWidget_ImageItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ImageItem.Widget_ImageItem_C.Construct
struct UWidget_ImageItem_C_Construct_Params
{
};

// Function Widget_ImageItem.Widget_ImageItem_C.Destruct
struct UWidget_ImageItem_C_Destruct_Params
{
};

// Function Widget_ImageItem.Widget_ImageItem_C.OnOptionValueChanged
struct UWidget_ImageItem_C_OnOptionValueChanged_Params
{
};

// Function Widget_ImageItem.Widget_ImageItem_C.ExecuteUbergraph_Widget_ImageItem
struct UWidget_ImageItem_C_ExecuteUbergraph_Widget_ImageItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
