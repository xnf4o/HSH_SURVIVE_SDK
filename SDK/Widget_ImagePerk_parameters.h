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

// Function Widget_ImagePerk.Widget_ImagePerk_C.SetItemCooldown
struct UWidget_ImagePerk_C_SetItemCooldown_Params
{
	float                                              TimeRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.BeginApply
struct UWidget_ImagePerk_C_BeginApply_Params
{
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.SetSkillReady
struct UWidget_ImagePerk_C_SetSkillReady_Params
{
	bool                                               bIsReady;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.GetText_1
struct UWidget_ImagePerk_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.SetSkillImage
struct UWidget_ImagePerk_C_SetSkillImage_Params
{
	struct FSlateBrush                                 Skill_Brush;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.SetSkillCharge
struct UWidget_ImagePerk_C_SetSkillCharge_Params
{
	struct FText                                       Charge;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.Get_Image_ColorAndOpacity_Active
struct UWidget_ImagePerk_C_Get_Image_ColorAndOpacity_Active_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.Get_ProgressBar_Cooldown_Percent
struct UWidget_ImagePerk_C_Get_ProgressBar_Cooldown_Percent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.SetSkillCooldown
struct UWidget_ImagePerk_C_SetSkillCooldown_Params
{
	float                                              TimeRemaining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.SetSkillBlock
struct UWidget_ImagePerk_C_SetSkillBlock_Params
{
	bool                                               bIsBlock;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.Get_Image_Block_Visibility
struct UWidget_ImagePerk_C_Get_Image_Block_Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.OnOptionValueChanged
struct UWidget_ImagePerk_C_OnOptionValueChanged_Params
{
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.PreConstruct
struct UWidget_ImagePerk_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.Destruct
struct UWidget_ImagePerk_C_Destruct_Params
{
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.Construct
struct UWidget_ImagePerk_C_Construct_Params
{
};

// Function Widget_ImagePerk.Widget_ImagePerk_C.ExecuteUbergraph_Widget_ImagePerk
struct UWidget_ImagePerk_C_ExecuteUbergraph_Widget_ImagePerk_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
