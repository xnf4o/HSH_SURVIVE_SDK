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

// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.GetIngamePlayerDataHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIngamePlayerDataHunter_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UIngamePlayerDataHunter_C* UIngame_Hunter_PC1_C::GetIngamePlayerDataHunter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.GetIngamePlayerDataHunter");

	UIngame_Hunter_PC1_C_GetIngamePlayerDataHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_ProgressBar_Limit_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Hunter_PC1_C::Get_ProgressBar_Limit_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_ProgressBar_Limit_Visibility_1");

	UIngame_Hunter_PC1_C_Get_ProgressBar_Limit_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.GetRitualStateComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngame_Hunter_PC1_C::GetRitualStateComplete()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.GetRitualStateComplete");

	UIngame_Hunter_PC1_C_GetRitualStateComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.RefreshButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UIngame_Hunter_PC1_C::RefreshButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.RefreshButton");

	UIngame_Hunter_PC1_C_RefreshButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.InitHPPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::InitHPPercent(float Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.InitHPPercent");

	UIngame_Hunter_PC1_C_InitHPPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.SetHPDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::SetHPDynamicMaterials(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.SetHPDynamicMaterials");

	UIngame_Hunter_PC1_C_SetHPDynamicMaterials_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TrapIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Hunter_PC1_C::Get_TrapIcon_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TrapIcon_Visibility_1");

	UIngame_Hunter_PC1_C_Get_TrapIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TextBlock_Debuging_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UIngame_Hunter_PC1_C::Get_TextBlock_Debuging_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TextBlock_Debuging_Text");

	UIngame_Hunter_PC1_C_Get_TextBlock_Debuging_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TextBlock_SuddenDeath_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Hunter_PC1_C::Get_TextBlock_SuddenDeath_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TextBlock_SuddenDeath_Visibility_1");

	UIngame_Hunter_PC1_C_Get_TextBlock_SuddenDeath_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_InteractPanel_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Hunter_PC1_C::Get_InteractPanel_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_InteractPanel_Visibility_1");

	UIngame_Hunter_PC1_C_Get_InteractPanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TrapBorder_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Hunter_PC1_C::Get_TrapBorder_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_TrapBorder_Visibility_1");

	UIngame_Hunter_PC1_C_Get_TrapBorder_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_IMG_TeleportIcon_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngame_Hunter_PC1_C::Get_IMG_TeleportIcon_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_IMG_TeleportIcon_bIsEnabled_1");

	UIngame_Hunter_PC1_C_Get_IMG_TeleportIcon_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_ImmuneCD_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngame_Hunter_PC1_C::Get_ImmuneCD_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_ImmuneCD_bIsEnabled_1");

	UIngame_Hunter_PC1_C_Get_ImmuneCD_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_PerkCD_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngame_Hunter_PC1_C::Get_PerkCD_bIsEnabled_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_PerkCD_bIsEnabled_1");

	UIngame_Hunter_PC1_C_Get_PerkCD_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_Scan_Using_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Hunter_PC1_C::Get_Scan_Using_Visibility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Get_Scan_Using_Visibility");

	UIngame_Hunter_PC1_C_Get_Scan_Using_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ActiveCrossHair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_Hunter_PC1_C::ActiveCrossHair(bool bIsActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ActiveCrossHair");

	UIngame_Hunter_PC1_C_ActiveCrossHair_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.SendTutorialEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::SendTutorialEvent(const struct FName& EventName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.SendTutorialEvent");

	UIngame_Hunter_PC1_C_SendTutorialEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_Hunter_PC1_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Construct");

	UIngame_Hunter_PC1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ShowPing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIngame_Hunter_PC1_C::ShowPing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ShowPing");

	UIngame_Hunter_PC1_C_ShowPing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.UpdatePingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::UpdatePingUI(const struct FVector& WorldLocation, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.UpdatePingUI");

	UIngame_Hunter_PC1_C_UpdatePingUI_Params params;
	params.WorldLocation = WorldLocation;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.HidePingUI
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_Hunter_PC1_C::HidePingUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.HidePingUI");

	UIngame_Hunter_PC1_C_HidePingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ShowPingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::ShowPingUI(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& Color, const struct FVector& WorldLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ShowPingUI");

	UIngame_Hunter_PC1_C_ShowPingUI_Params params;
	params.HeadlineText = HeadlineText;
	params.DataText = DataText;
	params.Color = Color;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Tick");

	UIngame_Hunter_PC1_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.UpdateTrapState
// (BlueprintCallable, BlueprintEvent)
void UIngame_Hunter_PC1_C::UpdateTrapState()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.UpdateTrapState");

	UIngame_Hunter_PC1_C_UpdateTrapState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnShowTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::OnShowTutorial(const struct FText& Header, const struct FText& Description, float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnShowTutorial");

	UIngame_Hunter_PC1_C_OnShowTutorial_Params params;
	params.Header = Header;
	params.Description = Description;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnHideTutorial
// (BlueprintCallable, BlueprintEvent)
void UIngame_Hunter_PC1_C::OnHideTutorial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnHideTutorial");

	UIngame_Hunter_PC1_C_OnHideTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_Hunter_PC1_C::Destruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.Destruct");

	UIngame_Hunter_PC1_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnOptionValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_Hunter_PC1_C::OnOptionValueChanged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnOptionValueChanged");

	UIngame_Hunter_PC1_C_OnOptionValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.UpdatePing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIngame_Hunter_PC1_C::UpdatePing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.UpdatePing");

	UIngame_Hunter_PC1_C_UpdatePing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::OnTakeDamage(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnTakeDamage");

	UIngame_Hunter_PC1_C_OnTakeDamage_Params params;
	params.InstigatorCharacter = InstigatorCharacter;
	params.OwnerCharacter = OwnerCharacter;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnSendInteract_Brush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             SlateBrush_Normal              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Hover               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Interact            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SlateText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotShowButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_Hunter_PC1_C::OnSendInteract_Brush(const struct FSlateBrush& SlateBrush_Normal, const struct FSlateBrush& SlateBrush_Hover, const struct FSlateBrush& SlateBrush_Interact, const struct FText& SlateText, bool NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnSendInteract_Brush");

	UIngame_Hunter_PC1_C_OnSendInteract_Brush_Params params;
	params.SlateBrush_Normal = SlateBrush_Normal;
	params.SlateBrush_Hover = SlateBrush_Hover;
	params.SlateBrush_Interact = SlateBrush_Interact;
	params.SlateText = SlateText;
	params.NotShowButton = NotShowButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.PauseScreenAnimation
// (BlueprintCallable, BlueprintEvent)
void UIngame_Hunter_PC1_C::PauseScreenAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.PauseScreenAnimation");

	UIngame_Hunter_PC1_C_PauseScreenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnPerkApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PerkSlotIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::OnPerkApply(int PerkSlotIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnPerkApply");

	UIngame_Hunter_PC1_C_OnPerkApply_Params params;
	params.PerkSlotIndex = PerkSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ExecuteUbergraph_Ingame_Hunter_PC1
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Hunter_PC1_C::ExecuteUbergraph_Ingame_Hunter_PC1(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.ExecuteUbergraph_Ingame_Hunter_PC1");

	UIngame_Hunter_PC1_C_ExecuteUbergraph_Ingame_Hunter_PC1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnTrapped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngame_Hunter_PC1_C::OnTrapped__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Hunter_PC1.Ingame_Hunter_PC1_C.OnTrapped__DelegateSignature");

	UIngame_Hunter_PC1_C_OnTrapped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
