// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Widget_ImageSkill.Widget_ImageSkill_C.RefreshButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ImageSkill_C::RefreshButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.RefreshButton");

	UWidget_ImageSkill_C_RefreshButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ImageSkill_C::GetText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.GetText_1");

	UWidget_ImageSkill_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Skill_Brush                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ImageSkill_C::SetSkillImage(const struct FSlateBrush& Skill_Brush)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillImage");

	UWidget_ImageSkill_C_SetSkillImage_Params params;
	params.Skill_Brush = Skill_Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillCharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Charge                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ImageSkill_C::SetSkillCharge(const struct FText& Charge)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillCharge");

	UWidget_ImageSkill_C_SetSkillCharge_Params params;
	params.Charge = Charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.Get_Image_ColorAndOpacity_Active
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWidget_ImageSkill_C::Get_Image_ColorAndOpacity_Active()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.Get_Image_ColorAndOpacity_Active");

	UWidget_ImageSkill_C_Get_Image_ColorAndOpacity_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageSkill.Widget_ImageSkill_C.Get_ProgressBar_Cooldown_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidget_ImageSkill_C::Get_ProgressBar_Cooldown_Percent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.Get_ProgressBar_Cooldown_Percent");

	UWidget_ImageSkill_C_Get_ProgressBar_Cooldown_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageSkill_C::SetSkillCooldown(float TimeRemaining, float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillCooldown");

	UWidget_ImageSkill_C_SetSkillCooldown_Params params;
	params.TimeRemaining = TimeRemaining;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillBlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsBlock                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ImageSkill_C::SetSkillBlock(bool bIsBlock)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.SetSkillBlock");

	UWidget_ImageSkill_C_SetSkillBlock_Params params;
	params.bIsBlock = bIsBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.Get_Image_Block_Visibility
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_ImageSkill_C::Get_Image_Block_Visibility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.Get_Image_Block_Visibility");

	UWidget_ImageSkill_C_Get_Image_Block_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageSkill.Widget_ImageSkill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ImageSkill_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.PreConstruct");

	UWidget_ImageSkill_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ImageSkill_C::Destruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.Destruct");

	UWidget_ImageSkill_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ImageSkill_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.Construct");

	UWidget_ImageSkill_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.OnOptionValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ImageSkill_C::OnOptionValueChanged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.OnOptionValueChanged");

	UWidget_ImageSkill_C_OnOptionValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageSkill.Widget_ImageSkill_C.ExecuteUbergraph_Widget_ImageSkill
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageSkill_C::ExecuteUbergraph_Widget_ImageSkill(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageSkill.Widget_ImageSkill_C.ExecuteUbergraph_Widget_ImageSkill");

	UWidget_ImageSkill_C_ExecuteUbergraph_Widget_ImageSkill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
