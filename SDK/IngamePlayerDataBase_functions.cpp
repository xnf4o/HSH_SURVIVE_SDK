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

// Function IngamePlayerDataBase.IngamePlayerDataBase_C.GetPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UIngamePlayerDataBase_C::GetPlayerInfo(class APawn* Target, struct FPlayerInfoStruct_G* PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataBase.IngamePlayerDataBase_C.GetPlayerInfo");

	UIngamePlayerDataBase_C_GetPlayerInfo_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function IngamePlayerDataBase.IngamePlayerDataBase_C.SendBooleanSuddenDeathMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuddenDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataBase_C::SendBooleanSuddenDeathMode(bool* IsSuddenDeath)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataBase.IngamePlayerDataBase_C.SendBooleanSuddenDeathMode");

	UIngamePlayerDataBase_C_SendBooleanSuddenDeathMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuddenDeath != nullptr)
		*IsSuddenDeath = params.IsSuddenDeath;

}


// Function IngamePlayerDataBase.IngamePlayerDataBase_C.SendInteractSlateBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             SlateBrush_Normal              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Hover               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Interact            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SlateText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotShowButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataBase_C::SendInteractSlateBrush(const struct FSlateBrush& SlateBrush_Normal, const struct FSlateBrush& SlateBrush_Hover, const struct FSlateBrush& SlateBrush_Interact, const struct FText& SlateText, bool NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataBase.IngamePlayerDataBase_C.SendInteractSlateBrush");

	UIngamePlayerDataBase_C_SendInteractSlateBrush_Params params;
	params.SlateBrush_Normal = SlateBrush_Normal;
	params.SlateBrush_Hover = SlateBrush_Hover;
	params.SlateBrush_Interact = SlateBrush_Interact;
	params.SlateText = SlateText;
	params.NotShowButton = NotShowButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataBase.IngamePlayerDataBase_C.Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataBase_C::Tick(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataBase.IngamePlayerDataBase_C.Tick");

	UIngamePlayerDataBase_C_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataBase.IngamePlayerDataBase_C.ExecuteUbergraph_IngamePlayerDataBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataBase_C::ExecuteUbergraph_IngamePlayerDataBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataBase.IngamePlayerDataBase_C.ExecuteUbergraph_IngamePlayerDataBase");

	UIngamePlayerDataBase_C_ExecuteUbergraph_IngamePlayerDataBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataBase.IngamePlayerDataBase_C.OnGameplayEffectApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UIngamePlayerDataBase_C::OnGameplayEffectApply__DelegateSignature(const struct FGameplayTagContainer& GameplayTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataBase.IngamePlayerDataBase_C.OnGameplayEffectApply__DelegateSignature");

	UIngamePlayerDataBase_C_OnGameplayEffectApply__DelegateSignature_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataBase.IngamePlayerDataBase_C.OnSendInteractSlateBrush__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             SlateBrush_Normal              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Hover               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             SlateBrush_Interact            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SlateText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotShowButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataBase_C::OnSendInteractSlateBrush__DelegateSignature(const struct FSlateBrush& SlateBrush_Normal, const struct FSlateBrush& SlateBrush_Hover, const struct FSlateBrush& SlateBrush_Interact, const struct FText& SlateText, bool NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataBase.IngamePlayerDataBase_C.OnSendInteractSlateBrush__DelegateSignature");

	UIngamePlayerDataBase_C_OnSendInteractSlateBrush__DelegateSignature_Params params;
	params.SlateBrush_Normal = SlateBrush_Normal;
	params.SlateBrush_Hover = SlateBrush_Hover;
	params.SlateBrush_Interact = SlateBrush_Interact;
	params.SlateText = SlateText;
	params.NotShowButton = NotShowButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
