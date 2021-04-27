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

// Function Widget_ImageItem.Widget_ImageItem_C.RefreshButtonImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ImageItem_C::RefreshButtonImage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.RefreshButtonImage");

	UWidget_ImageItem_C_RefreshButtonImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.SetItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ImageItem_C::SetItemName(const struct FText& ItemName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.SetItemName");

	UWidget_ImageItem_C_SetItemName_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.SetBorderWithType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHPickableItem*        PickableItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageItem_C::SetBorderWithType(class UHSHPickableItem* PickableItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.SetBorderWithType");

	UWidget_ImageItem_C_SetBorderWithType_Params params;
	params.PickableItem = PickableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.Get_Text_Cooldown_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ImageItem_C::Get_Text_Cooldown_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.Get_Text_Cooldown_Text_1");

	UWidget_ImageItem_C_Get_Text_Cooldown_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageItem.Widget_ImageItem_C.SetItemDurabilityAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             SPickable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageItem_C::SetItemDurabilityAnimation(const struct FS_Pickable& SPickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.SetItemDurabilityAnimation");

	UWidget_ImageItem_C_SetItemDurabilityAnimation_Params params;
	params.SPickable = SPickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.PlaySlotEffect
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ImageItem_C::PlaySlotEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.PlaySlotEffect");

	UWidget_ImageItem_C_PlaySlotEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.Get_ProgressBar_Cooldown_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_ImageItem_C::Get_ProgressBar_Cooldown_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.Get_ProgressBar_Cooldown_Visibility_1");

	UWidget_ImageItem_C_Get_ProgressBar_Cooldown_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageItem.Widget_ImageItem_C.SetKeybindVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageItem_C::SetKeybindVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.SetKeybindVisibility");

	UWidget_ImageItem_C_SetKeybindVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.SetItemImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Skill_Brush                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHaveItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ImageItem_C::SetItemImage(const struct FSlateBrush& Skill_Brush, bool bHaveItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.SetItemImage");

	UWidget_ImageItem_C_SetItemImage_Params params;
	params.Skill_Brush = Skill_Brush;
	params.bHaveItem = bHaveItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.SetItemDurability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Charge                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_Pickable             S_Pickable                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageItem_C::SetItemDurability(const struct FText& Charge, const struct FS_Pickable& S_Pickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.SetItemDurability");

	UWidget_ImageItem_C_SetItemDurability_Params params;
	params.Charge = Charge;
	params.S_Pickable = S_Pickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.Get_Image_ColorAndOpacity_Active
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWidget_ImageItem_C::Get_Image_ColorAndOpacity_Active()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.Get_Image_ColorAndOpacity_Active");

	UWidget_ImageItem_C_Get_Image_ColorAndOpacity_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageItem.Widget_ImageItem_C.Get_ProgressBar_Cooldown_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidget_ImageItem_C::Get_ProgressBar_Cooldown_Percent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.Get_ProgressBar_Cooldown_Percent");

	UWidget_ImageItem_C_Get_ProgressBar_Cooldown_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ImageItem.Widget_ImageItem_C.SetItemCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageItem_C::SetItemCooldown(float TimeRemaining, float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.SetItemCooldown");

	UWidget_ImageItem_C_SetItemCooldown_Params params;
	params.TimeRemaining = TimeRemaining;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ImageItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.PreConstruct");

	UWidget_ImageItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ImageItem_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.Construct");

	UWidget_ImageItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ImageItem_C::Destruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.Destruct");

	UWidget_ImageItem_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.OnOptionValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ImageItem_C::OnOptionValueChanged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.OnOptionValueChanged");

	UWidget_ImageItem_C_OnOptionValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ImageItem.Widget_ImageItem_C.ExecuteUbergraph_Widget_ImageItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ImageItem_C::ExecuteUbergraph_Widget_ImageItem(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ImageItem.Widget_ImageItem_C.ExecuteUbergraph_Widget_ImageItem");

	UWidget_ImageItem_C_ExecuteUbergraph_Widget_ImageItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
