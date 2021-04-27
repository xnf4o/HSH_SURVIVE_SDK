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

// Function TrapTargetActor.TrapTargetActor_C.GetInteractSlateBrush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             SlateBrushNormal               (Parm, OutParm)
// struct FSlateBrush             SlateBrushHover                (Parm, OutParm)
// struct FSlateBrush             SlateBrushInteract             (Parm, OutParm)
// struct FText                   SlateText                      (Parm, OutParm)
// bool                           NotShowButton                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrapTargetActor_C::GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.GetInteractSlateBrush");

	ATrapTargetActor_C_GetInteractSlateBrush_Params params;
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


// Function TrapTargetActor.TrapTargetActor_C.SetInteractColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::SetInteractColor(const struct FLinearColor& Color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.SetInteractColor");

	ATrapTargetActor_C_SetInteractColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.OnClearUpdate
// (Public, BlueprintCallable, BlueprintEvent)
void ATrapTargetActor_C::OnClearUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.OnClearUpdate");

	ATrapTargetActor_C_OnClearUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.GetWidth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return_Height                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::GetWidth(float* Return_Height)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.GetWidth");

	ATrapTargetActor_C_GetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Height != nullptr)
		*Return_Height = params.Return_Height;

}


// Function TrapTargetActor.TrapTargetActor_C.GetHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return_Height                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::GetHeight(float* Return_Height)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.GetHeight");

	ATrapTargetActor_C_GetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Height != nullptr)
		*Return_Height = params.Return_Height;

}


// Function TrapTargetActor.TrapTargetActor_C.DrawLine
// (Public, BlueprintCallable, BlueprintEvent)
void ATrapTargetActor_C::DrawLine()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.DrawLine");

	ATrapTargetActor_C_DrawLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrapTargetActor_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.UserConstructionScript");

	ATrapTargetActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.EnableUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::EnableUI(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.EnableUI");

	ATrapTargetActor_C_EnableUI_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.DisableUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::DisableUI(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.DisableUI");

	ATrapTargetActor_C_DisableUI_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.ShowIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::ShowIndicator(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.ShowIndicator");

	ATrapTargetActor_C_ShowIndicator_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.HideIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::HideIndicator(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.HideIndicator");

	ATrapTargetActor_C_HideIndicator_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.RefreshUI
// (Public, BlueprintCallable, BlueprintEvent)
void ATrapTargetActor_C::RefreshUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.RefreshUI");

	ATrapTargetActor_C_RefreshUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.ShowOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::ShowOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.ShowOutline");

	ATrapTargetActor_C_ShowOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.HideOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::HideOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.HideOutline");

	ATrapTargetActor_C_HideOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATrapTargetActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.ReceiveBeginPlay");

	ATrapTargetActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.UpdateOneStep
// (BlueprintCallable, BlueprintEvent)
void ATrapTargetActor_C::UpdateOneStep()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.UpdateOneStep");

	ATrapTargetActor_C_UpdateOneStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapTargetActor.TrapTargetActor_C.ExecuteUbergraph_TrapTargetActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapTargetActor_C::ExecuteUbergraph_TrapTargetActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapTargetActor.TrapTargetActor_C.ExecuteUbergraph_TrapTargetActor");

	ATrapTargetActor_C_ExecuteUbergraph_TrapTargetActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
