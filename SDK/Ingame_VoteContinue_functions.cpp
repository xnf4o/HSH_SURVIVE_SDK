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

// Function Ingame_VoteContinue.Ingame_VoteContinue_C.GetText_Time
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UIngame_VoteContinue_C::GetText_Time()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.GetText_Time");

	UIngame_VoteContinue_C_GetText_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.RefreshPlayerIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                   IsContinue                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_VoteContinue_C::RefreshPlayerIcon(int Number, TArray<bool>* IsContinue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.RefreshPlayerIcon");

	UIngame_VoteContinue_C_RefreshPlayerIcon_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsContinue != nullptr)
		*IsContinue = params.IsContinue;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UIngame_VoteContinue_C::BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UIngame_VoteContinue_C_BndEvt__Widget_Button_C_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UIngame_VoteContinue_C::BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UIngame_VoteContinue_C_BndEvt__Widget_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_VoteContinue_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.Tick");

	UIngame_VoteContinue_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_VoteContinue_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.PreConstruct");

	UIngame_VoteContinue_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_VoteContinue_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.Construct");

	UIngame_VoteContinue_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.ExecuteUbergraph_Ingame_VoteContinue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_VoteContinue_C::ExecuteUbergraph_Ingame_VoteContinue(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.ExecuteUbergraph_Ingame_VoteContinue");

	UIngame_VoteContinue_C_ExecuteUbergraph_Ingame_VoteContinue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.OnRemoveWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngame_VoteContinue_C::OnRemoveWidget__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.OnRemoveWidget__DelegateSignature");

	UIngame_VoteContinue_C_OnRemoveWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.OnLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngame_VoteContinue_C::OnLeave__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.OnLeave__DelegateSignature");

	UIngame_VoteContinue_C_OnLeave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_VoteContinue.Ingame_VoteContinue_C.OnContinue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngame_VoteContinue_C::OnContinue__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_VoteContinue.Ingame_VoteContinue_C.OnContinue__DelegateSignature");

	UIngame_VoteContinue_C_OnContinue__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
