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

// Function IUIPingable.IUIPingable_C.UpdatePing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIUIPingable_C::UpdatePing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IUIPingable.IUIPingable_C.UpdatePing");

	UIUIPingable_C_UpdatePing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IUIPingable.IUIPingable_C.ShowPing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIUIPingable_C::ShowPing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IUIPingable.IUIPingable_C.ShowPing");

	UIUIPingable_C_ShowPing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IUIPingable.IUIPingable_C.UpdatePingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIUIPingable_C::UpdatePingUI(const struct FVector& WorldLocation, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IUIPingable.IUIPingable_C.UpdatePingUI");

	UIUIPingable_C_UpdatePingUI_Params params;
	params.WorldLocation = WorldLocation;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IUIPingable.IUIPingable_C.HidePingUI
// (Public, BlueprintCallable, BlueprintEvent)
void UIUIPingable_C::HidePingUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IUIPingable.IUIPingable_C.HidePingUI");

	UIUIPingable_C_HidePingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IUIPingable.IUIPingable_C.ShowPingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIUIPingable_C::ShowPingUI(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& Color, const struct FVector& WorldLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IUIPingable.IUIPingable_C.ShowPingUI");

	UIUIPingable_C_ShowPingUI_Params params;
	params.HeadlineText = HeadlineText;
	params.DataText = DataText;
	params.Color = Color;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
