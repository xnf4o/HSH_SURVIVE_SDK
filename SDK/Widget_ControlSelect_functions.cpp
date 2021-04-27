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

// Function Widget_ControlSelect.Widget_ControlSelect_C.SetInputSelectValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   MyActionDisplayName            (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FInputActionKeyMapping> ActionKeyMap                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_ControlSelect_C::SetInputSelectValues(const struct FName& Name, const struct FText& MyActionDisplayName, TArray<struct FInputActionKeyMapping>* ActionKeyMap)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ControlSelect.Widget_ControlSelect_C.SetInputSelectValues");

	UWidget_ControlSelect_C_SetInputSelectValues_Params params;
	params.Name = Name;
	params.MyActionDisplayName = MyActionDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionKeyMap != nullptr)
		*ActionKeyMap = params.ActionKeyMap;

}


// Function Widget_ControlSelect.Widget_ControlSelect_C.BndEvt__InputKeySelector_410_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ControlSelect_C::BndEvt__InputKeySelector_410_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ControlSelect.Widget_ControlSelect_C.BndEvt__InputKeySelector_410_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	UWidget_ControlSelect_C_BndEvt__InputKeySelector_410_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ControlSelect.Widget_ControlSelect_C.BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ControlSelect_C::BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ControlSelect.Widget_ControlSelect_C.BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");

	UWidget_ControlSelect_C_BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ControlSelect.Widget_ControlSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ControlSelect_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ControlSelect.Widget_ControlSelect_C.PreConstruct");

	UWidget_ControlSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ControlSelect.Widget_ControlSelect_C.ExecuteUbergraph_Widget_ControlSelect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ControlSelect_C::ExecuteUbergraph_Widget_ControlSelect(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ControlSelect.Widget_ControlSelect_C.ExecuteUbergraph_Widget_ControlSelect");

	UWidget_ControlSelect_C_ExecuteUbergraph_Widget_ControlSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ControlSelect.Widget_ControlSelect_C.OnKeySelected_1__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             InputChord                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ControlSelect_C::OnKeySelected_1__DelegateSignature(int Index, const struct FName& Name, const struct FInputChord& InputChord)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ControlSelect.Widget_ControlSelect_C.OnKeySelected_1__DelegateSignature");

	UWidget_ControlSelect_C_OnKeySelected_1__DelegateSignature_Params params;
	params.Index = Index;
	params.Name = Name;
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ControlSelect.Widget_ControlSelect_C.OnKeySelected_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             InputChord                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_ControlSelect_C::OnKeySelected_0__DelegateSignature(int Index, const struct FName& Name, const struct FInputChord& InputChord)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ControlSelect.Widget_ControlSelect_C.OnKeySelected_0__DelegateSignature");

	UWidget_ControlSelect_C_OnKeySelected_0__DelegateSignature_Params params;
	params.Index = Index;
	params.Name = Name;
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
