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

// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetImageBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHItem*                HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipCharacterInfo_C::SetImageBrush(class UHSHItem* HSHItem, class UImage* Image)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetImageBrush");

	UWidget_TooltipCharacterInfo_C_SetImageBrush_Params params;
	params.HSHItem = HSHItem;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipCharacterInfo_C::SetColor(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetColor");

	UWidget_TooltipCharacterInfo_C_SetColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TooltipTxt                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   TooltipTxt_Description         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_TooltipCharacterInfo_C::SetText(const struct FText& TooltipTxt, const struct FText& TooltipTxt_Description)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetText");

	UWidget_TooltipCharacterInfo_C_SetText_Params params;
	params.TooltipTxt = TooltipTxt;
	params.TooltipTxt_Description = TooltipTxt_Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.HideTooltip
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TooltipCharacterInfo_C::HideTooltip()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.HideTooltip");

	UWidget_TooltipCharacterInfo_C_HideTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TooltipCharacterInfo_C::ShowTooltip()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ShowTooltip");

	UWidget_TooltipCharacterInfo_C_ShowTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipCharacterInfo_C::SetPosition(const struct FVector2D& Position)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.SetPosition");

	UWidget_TooltipCharacterInfo_C_SetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ShowWidget
// (BlueprintCallable, BlueprintEvent)
void UWidget_TooltipCharacterInfo_C::ShowWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ShowWidget");

	UWidget_TooltipCharacterInfo_C_ShowWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.DestroyWidget
// (BlueprintCallable, BlueprintEvent)
void UWidget_TooltipCharacterInfo_C::DestroyWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.DestroyWidget");

	UWidget_TooltipCharacterInfo_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.OnFinish
// (BlueprintCallable, BlueprintEvent)
void UWidget_TooltipCharacterInfo_C::OnFinish()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.OnFinish");

	UWidget_TooltipCharacterInfo_C_OnFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_TooltipCharacterInfo_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.Construct");

	UWidget_TooltipCharacterInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.RefreshData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHCharacterItem*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipCharacterInfo_C::RefreshData(class UHSHCharacterItem* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.RefreshData");

	UWidget_TooltipCharacterInfo_C_RefreshData_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ExecuteUbergraph_Widget_TooltipCharacterInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TooltipCharacterInfo_C::ExecuteUbergraph_Widget_TooltipCharacterInfo(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TooltipCharacterInfo.Widget_TooltipCharacterInfo_C.ExecuteUbergraph_Widget_TooltipCharacterInfo");

	UWidget_TooltipCharacterInfo_C_ExecuteUbergraph_Widget_TooltipCharacterInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
