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

// Function IOutlineInterection.IOutlineInterection_C.RefreshUI
// (Public, BlueprintCallable, BlueprintEvent)
void UIOutlineInterection_C::RefreshUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.RefreshUI");

	UIOutlineInterection_C_RefreshUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IOutlineInterection.IOutlineInterection_C.HideIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIOutlineInterection_C::HideIndicator(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.HideIndicator");

	UIOutlineInterection_C_HideIndicator_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IOutlineInterection.IOutlineInterection_C.ShowIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIOutlineInterection_C::ShowIndicator(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.ShowIndicator");

	UIOutlineInterection_C_ShowIndicator_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IOutlineInterection.IOutlineInterection_C.DisableUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIOutlineInterection_C::DisableUI(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.DisableUI");

	UIOutlineInterection_C_DisableUI_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IOutlineInterection.IOutlineInterection_C.EnableUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIOutlineInterection_C::EnableUI(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.EnableUI");

	UIOutlineInterection_C_EnableUI_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IOutlineInterection.IOutlineInterection_C.GetInteractSlateBrush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             SlateBrushNormal               (Parm, OutParm)
// struct FSlateBrush             SlateBrushHover                (Parm, OutParm)
// struct FSlateBrush             SlateBrushInteract             (Parm, OutParm)
// struct FText                   SlateText                      (Parm, OutParm)
// bool                           NotShowButton                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIOutlineInterection_C::GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.GetInteractSlateBrush");

	UIOutlineInterection_C_GetInteractSlateBrush_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlateBrushNormal != nullptr)
		*SlateBrushNormal = params.SlateBrushNormal;
	if (SlateBrushHover != nullptr)
		*SlateBrushHover = params.SlateBrushHover;
	if (SlateBrushInteract != nullptr)
		*SlateBrushInteract = params.SlateBrushInteract;
	if (SlateText != nullptr)
		*SlateText = params.SlateText;
	if (NotShowButton != nullptr)
		*NotShowButton = params.NotShowButton;

}


// Function IOutlineInterection.IOutlineInterection_C.HideOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIOutlineInterection_C::HideOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.HideOutline");

	UIOutlineInterection_C_HideOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IOutlineInterection.IOutlineInterection_C.ShowOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIOutlineInterection_C::ShowOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOutlineInterection.IOutlineInterection_C.ShowOutline");

	UIOutlineInterection_C_ShowOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
