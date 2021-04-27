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

// Function Widget_TooltipNew.Widget_TooltipNew_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipNew_C::SetColor(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.SetColor");

	UWidget_TooltipNew_C_SetColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TooltipTxt                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   TooltipTxt_Description         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_TooltipNew_C::SetText(const struct FText& TooltipTxt, const struct FText& TooltipTxt_Description)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.SetText");

	UWidget_TooltipNew_C_SetText_Params params;
	params.TooltipTxt = TooltipTxt;
	params.TooltipTxt_Description = TooltipTxt_Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.HideTooltip
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TooltipNew_C::HideTooltip()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.HideTooltip");

	UWidget_TooltipNew_C_HideTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TooltipNew_C::ShowTooltip()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.ShowTooltip");

	UWidget_TooltipNew_C_ShowTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipNew_C::SetPosition(const struct FVector2D& Position)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.SetPosition");

	UWidget_TooltipNew_C_SetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextDescription_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_TooltipNew_C::Get_TextDescription_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextDescription_Text_1");

	UWidget_TooltipNew_C_Get_TextDescription_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextHead_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_TooltipNew_C::Get_TextHead_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextHead_Text_1");

	UWidget_TooltipNew_C_Get_TextHead_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextDescription_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_TooltipNew_C::Get_TextDescription_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.Get_TextDescription_Visibility_1");

	UWidget_TooltipNew_C_Get_TextDescription_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TooltipNew.Widget_TooltipNew_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_TooltipNew_C::GetVisibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.GetVisibility_1");

	UWidget_TooltipNew_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TooltipNew.Widget_TooltipNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_TooltipNew_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.Construct");

	UWidget_TooltipNew_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.ShowWidget
// (BlueprintCallable, BlueprintEvent)
void UWidget_TooltipNew_C::ShowWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.ShowWidget");

	UWidget_TooltipNew_C_ShowWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.DestroyWidget
// (BlueprintCallable, BlueprintEvent)
void UWidget_TooltipNew_C::DestroyWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.DestroyWidget");

	UWidget_TooltipNew_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.OnFinish
// (BlueprintCallable, BlueprintEvent)
void UWidget_TooltipNew_C::OnFinish()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.OnFinish");

	UWidget_TooltipNew_C_OnFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipNew.Widget_TooltipNew_C.ExecuteUbergraph_Widget_TooltipNew
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipNew_C::ExecuteUbergraph_Widget_TooltipNew(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipNew.Widget_TooltipNew_C.ExecuteUbergraph_Widget_TooltipNew");

	UWidget_TooltipNew_C_ExecuteUbergraph_Widget_TooltipNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
