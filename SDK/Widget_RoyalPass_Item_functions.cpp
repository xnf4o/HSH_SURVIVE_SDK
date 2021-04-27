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

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ParseIntToRarity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::ParseIntToRarity(int Rarity, struct FText* Text, struct FLinearColor* Color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ParseIntToRarity");

	UWidget_RoyalPass_Item_C_ParseIntToRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetBackgroundRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::SetBackgroundRarity(class UImage* Target, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetBackgroundRarity");

	UWidget_RoyalPass_Item_C_SetBackgroundRarity_Params params;
	params.Target = Target;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetBrushProductImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             SlateBrush                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWidget_RoyalPass_Item_C::SetBrushProductImage(class UImage* Target, const struct FSlateBrush& SlateBrush)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetBrushProductImage");

	UWidget_RoyalPass_Item_C_SetBrushProductImage_Params params;
	params.Target = Target;
	params.SlateBrush = SlateBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.AssignWidgetManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWidgetMainMenuManager_C* WidgetManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.AssignWidgetManager");

	UWidget_RoyalPass_Item_C_AssignWidgetManager_Params params;
	params.WidgetManager = WidgetManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BeginMenuAnimation");

	UWidget_RoyalPass_Item_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.EndMenuAnimation");

	UWidget_RoyalPass_Item_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ShowPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::ShowPreview(const struct FText& Header, const struct FText& ItemName, class UObject* Image)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ShowPreview");

	UWidget_RoyalPass_Item_C_ShowPreview_Params params;
	params.Header = Header;
	params.ItemName = ItemName;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RefreshButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_RoyalPass_Item_C::RefreshButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RefreshButton");

	UWidget_RoyalPass_Item_C_RefreshButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RefreshContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremium                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RewardIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::RefreshContent(bool bIsPremium, int CurrentLevel, int RewardIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RefreshContent");

	UWidget_RoyalPass_Item_C_RefreshContent_Params params;
	params.bIsPremium = bIsPremium;
	params.CurrentLevel = CurrentLevel;
	params.RewardIndex = RewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetPremiumBackground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremium                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RoyalPass_Item_C::SetPremiumBackground(bool bIsPremium)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetPremiumBackground");

	UWidget_RoyalPass_Item_C_SetPremiumBackground_Params params;
	params.bIsPremium = bIsPremium;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BndEvt__Button_Free_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_Item_C::BndEvt__Button_Free_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BndEvt__Button_Free_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_RoyalPass_Item_C_BndEvt__Button_Free_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BndEvt__Button_Premium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_RoyalPass_Item_C::BndEvt__Button_Premium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BndEvt__Button_Premium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWidget_RoyalPass_Item_C_BndEvt__Button_Premium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.UpdateValue
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremiumItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FString>         Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bIsClaimed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RewardIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::UpdateValue(bool bIsPremiumItem, TArray<struct FString> Name, bool bIsClaimed, int CurrentLevel, int RewardIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.UpdateValue");

	UWidget_RoyalPass_Item_C_UpdateValue_Params params;
	params.bIsPremiumItem = bIsPremiumItem;
	params.Name = Name;
	params.bIsClaimed = bIsClaimed;
	params.CurrentLevel = CurrentLevel;
	params.RewardIndex = RewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RewardIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::RewardIndex(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RewardIndex");

	UWidget_RoyalPass_Item_C_RewardIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetPremium
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremium                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RoyalPass_Item_C::SetPremium(bool bIsPremium)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetPremium");

	UWidget_RoyalPass_Item_C_SetPremium_Params params;
	params.bIsPremium = bIsPremium;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.InitializeContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremium                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RewardIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::InitializeContent(bool bIsPremium, int CurrentLevel, int RewardIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.InitializeContent");

	UWidget_RoyalPass_Item_C_InitializeContent_Params params;
	params.bIsPremium = bIsPremium;
	params.CurrentLevel = CurrentLevel;
	params.RewardIndex = RewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ExecuteUbergraph_Widget_RoyalPass_Item
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RoyalPass_Item_C::ExecuteUbergraph_Widget_RoyalPass_Item(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ExecuteUbergraph_Widget_RoyalPass_Item");

	UWidget_RoyalPass_Item_C_ExecuteUbergraph_Widget_RoyalPass_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
