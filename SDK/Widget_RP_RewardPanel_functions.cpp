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

// Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RP_RewardPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.Tick");

	UWidget_RP_RewardPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_RP_RewardPanel_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UWidget_RP_RewardPanel_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_RP_RewardPanel_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UWidget_RP_RewardPanel_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremium                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RP_RewardPanel_C::Initialize(bool bIsPremium)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.Initialize");

	UWidget_RP_RewardPanel_C_Initialize_Params params;
	params.bIsPremium = bIsPremium;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.ExecuteUbergraph_Widget_RP_RewardPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RP_RewardPanel_C::ExecuteUbergraph_Widget_RP_RewardPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardPanel.Widget_RP_RewardPanel_C.ExecuteUbergraph_Widget_RP_RewardPanel");

	UWidget_RP_RewardPanel_C_ExecuteUbergraph_Widget_RP_RewardPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
