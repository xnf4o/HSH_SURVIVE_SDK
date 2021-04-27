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

// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngamePlayerDataSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIngamePlayerDataSurvivor_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UIngamePlayerDataSurvivor_C* UIngame_Survivor_PC1_C::GetIngamePlayerDataSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngamePlayerDataSurvivor");

	UIngame_Survivor_PC1_C_GetIngamePlayerDataSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngameCharacterDataSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIngamePlayerDataSurvivor_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UIngamePlayerDataSurvivor_C* UIngame_Survivor_PC1_C::GetIngameCharacterDataSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngameCharacterDataSurvivor");

	UIngame_Survivor_PC1_C_GetIngameCharacterDataSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngameCharacterDataHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterHunterBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AHSHCharacterHunterBase* UIngame_Survivor_PC1_C::GetIngameCharacterDataHunter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetIngameCharacterDataHunter");

	UIngame_Survivor_PC1_C_GetIngameCharacterDataHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SetStaminaDynamic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::SetStaminaDynamic(float Stamina)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SetStaminaDynamic");

	UIngame_Survivor_PC1_C_SetStaminaDynamic_Params params;
	params.Stamina = Stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SetHPDynamic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::SetHPDynamic(float HP)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SetHPDynamic");

	UIngame_Survivor_PC1_C_SetHPDynamic_Params params;
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.InitStaminaAndHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentSTA                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::InitStaminaAndHP(float CurrentHP, float CurrentSTA)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.InitStaminaAndHP");

	UIngame_Survivor_PC1_C_InitStaminaAndHP_Params params;
	params.CurrentHP = CurrentHP;
	params.CurrentSTA = CurrentSTA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdateCrosshair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UIngame_Survivor_PC1_C::UpdateCrosshair()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdateCrosshair");

	UIngame_Survivor_PC1_C_UpdateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_Crosshair_Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// TEnumAsByte<HSHSurvivor_EPickableType> PickableType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FSlateBrush UIngame_Survivor_PC1_C::Get_Crosshair_Brush(TEnumAsByte<HSHSurvivor_EPickableType>* PickableType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_Crosshair_Brush");

	UIngame_Survivor_PC1_C_Get_Crosshair_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PickableType != nullptr)
		*PickableType = params.PickableType;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetCooldownItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::GetCooldownItem(float* TimeRemaining, float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.GetCooldownItem");

	UIngame_Survivor_PC1_C_GetCooldownItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ChangeInteractImg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::ChangeInteractImg(class UObject* Object)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ChangeInteractImg");

	UIngame_Survivor_PC1_C_ChangeInteractImg_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowVisibilityIfNotHaveItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Survivor_PC1_C::ShowVisibilityIfNotHaveItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowVisibilityIfNotHaveItem");

	UIngame_Survivor_PC1_C_ShowVisibilityIfNotHaveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_TextBlock_SuddenDeath_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Survivor_PC1_C::Get_TextBlock_SuddenDeath_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_TextBlock_SuddenDeath_Visibility_1");

	UIngame_Survivor_PC1_C_Get_TextBlock_SuddenDeath_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_InteractPanel_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Survivor_PC1_C::Get_InteractPanel_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Get_InteractPanel_Visibility_1");

	UIngame_Survivor_PC1_C_Get_InteractPanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowVisibilityIfHaveItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Survivor_PC1_C::ShowVisibilityIfHaveItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowVisibilityIfHaveItem");

	UIngame_Survivor_PC1_C_ShowVisibilityIfHaveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowPingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::ShowPingUI(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& Color, const struct FVector& WorldLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowPingUI");

	UIngame_Survivor_PC1_C_ShowPingUI_Params params;
	params.HeadlineText = HeadlineText;
	params.DataText = DataText;
	params.Color = Color;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.HidePingUI
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_Survivor_PC1_C::HidePingUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.HidePingUI");

	UIngame_Survivor_PC1_C_HidePingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdatePingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::UpdatePingUI(const struct FVector& WorldLocation, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdatePingUI");

	UIngame_Survivor_PC1_C_UpdatePingUI_Params params;
	params.WorldLocation = WorldLocation;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowPing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIngame_Survivor_PC1_C::ShowPing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ShowPing");

	UIngame_Survivor_PC1_C_ShowPing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ActiveCrossHair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_Survivor_PC1_C::ActiveCrossHair(bool bIsActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ActiveCrossHair");

	UIngame_Survivor_PC1_C_ActiveCrossHair_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SendTutorialEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::SendTutorialEvent(const struct FName& EventName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SendTutorialEvent");

	UIngame_Survivor_PC1_C_SendTutorialEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_Survivor_PC1_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Construct");

	UIngame_Survivor_PC1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.Tick");

	UIngame_Survivor_PC1_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnShowTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::OnShowTutorial(const struct FText& Header, const struct FText& Description, float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnShowTutorial");

	UIngame_Survivor_PC1_C_OnShowTutorial_Params params;
	params.Header = Header;
	params.Description = Description;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnHideTutorial
// (BlueprintCallable, BlueprintEvent)
void UIngame_Survivor_PC1_C::OnHideTutorial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnHideTutorial");

	UIngame_Survivor_PC1_C_OnHideTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SendInteract_Brush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             SlateBrush_Normal              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Hover               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Interact            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SlateText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotShowButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_Survivor_PC1_C::SendInteract_Brush(const struct FSlateBrush& SlateBrush_Normal, const struct FSlateBrush& SlateBrush_Hover, const struct FSlateBrush& SlateBrush_Interact, const struct FText& SlateText, bool NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.SendInteract_Brush");

	UIngame_Survivor_PC1_C_SendInteract_Brush_Params params;
	params.SlateBrush_Normal = SlateBrush_Normal;
	params.SlateBrush_Hover = SlateBrush_Hover;
	params.SlateBrush_Interact = SlateBrush_Interact;
	params.SlateText = SlateText;
	params.NotShowButton = NotShowButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
void UIngame_Survivor_PC1_C::OnTakeDamage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnTakeDamage");

	UIngame_Survivor_PC1_C_OnTakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.PauseScreenAnimation
// (BlueprintCallable, BlueprintEvent)
void UIngame_Survivor_PC1_C::PauseScreenAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.PauseScreenAnimation");

	UIngame_Survivor_PC1_C_PauseScreenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnUpdateQuestDetailsNew
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_QuestDetail>  QuestStr                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_Survivor_PC1_C::OnUpdateQuestDetailsNew(TArray<struct FS_QuestDetail> QuestStr)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.OnUpdateQuestDetailsNew");

	UIngame_Survivor_PC1_C_OnUpdateQuestDetailsNew_Params params;
	params.QuestStr = QuestStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdatePing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIngame_Survivor_PC1_C::UpdatePing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdatePing");

	UIngame_Survivor_PC1_C_UpdatePing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdateSetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             Pickable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::UpdateSetItem(const struct FS_Pickable& Pickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.UpdateSetItem");

	UIngame_Survivor_PC1_C_UpdateSetItem_Params params;
	params.Pickable = Pickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ExecuteUbergraph_Ingame_Survivor_PC1
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Survivor_PC1_C::ExecuteUbergraph_Ingame_Survivor_PC1(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Survivor_PC1.Ingame_Survivor_PC1_C.ExecuteUbergraph_Ingame_Survivor_PC1");

	UIngame_Survivor_PC1_C_ExecuteUbergraph_Ingame_Survivor_PC1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
