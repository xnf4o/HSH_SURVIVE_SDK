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

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetPPCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PerkSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                          TimeRemainingPerk              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Cooldown_DurationPerk          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCooldown                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsReady                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataSurvivor_C::GetPPCooldown(const struct FPrimaryAssetId& PerkSlot, float* TimeRemainingPerk, float* Cooldown_DurationPerk, bool* IsCooldown, bool* IsReady)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetPPCooldown");

	UIngamePlayerDataSurvivor_C_GetPPCooldown_Params params;
	params.PerkSlot = PerkSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemainingPerk != nullptr)
		*TimeRemainingPerk = params.TimeRemainingPerk;
	if (Cooldown_DurationPerk != nullptr)
		*Cooldown_DurationPerk = params.Cooldown_DurationPerk;
	if (IsCooldown != nullptr)
		*IsCooldown = params.IsCooldown;
	if (IsReady != nullptr)
		*IsReady = params.IsReady;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetSelectionPerk
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PerkPassiveSlot_2              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PerkPassiveSlot_3              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::GetSelectionPerk(struct FPrimaryAssetId* PerkPassiveSlot_2, struct FPrimaryAssetId* PerkPassiveSlot_3)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetSelectionPerk");

	UIngamePlayerDataSurvivor_C_GetSelectionPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPassiveSlot_2 != nullptr)
		*PerkPassiveSlot_2 = params.PerkPassiveSlot_2;
	if (PerkPassiveSlot_3 != nullptr)
		*PerkPassiveSlot_3 = params.PerkPassiveSlot_3;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.FindSurvivorSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_SurvivorSlot> SurvivorSlots                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FS_SurvivorSlot         Slot                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::FindSurvivorSlot(class UObject* characteritem, TArray<struct FS_SurvivorSlot>* SurvivorSlots, struct FS_SurvivorSlot* Slot, bool* Found, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.FindSurvivorSlot");

	UIngamePlayerDataSurvivor_C_FindSurvivorSlot_Params params;
	params.characteritem = characteritem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurvivorSlots != nullptr)
		*SurvivorSlots = params.SurvivorSlots;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (Found != nullptr)
		*Found = params.Found;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetUIPerk
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ActivePerk                     (Parm, OutParm)
// struct FSlateBrush             Perk1                          (Parm, OutParm)
// struct FSlateBrush             Perk2                          (Parm, OutParm)
void UIngamePlayerDataSurvivor_C::GetUIPerk(struct FSlateBrush* ActivePerk, struct FSlateBrush* Perk1, struct FSlateBrush* Perk2)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetUIPerk");

	UIngamePlayerDataSurvivor_C_GetUIPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePerk != nullptr)
		*ActivePerk = params.ActivePerk;
	if (Perk1 != nullptr)
		*Perk1 = params.Perk1;
	if (Perk2 != nullptr)
		*Perk2 = params.Perk2;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TryGetInteractComponent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInteractComponent_C*    InteractComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::TryGetInteractComponent(class UInteractComponent_C** InteractComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TryGetInteractComponent");

	UIngamePlayerDataSurvivor_C_TryGetInteractComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractComponent != nullptr)
		*InteractComponent = params.InteractComponent;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetCooldownItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::GetCooldownItem(float* TimeRemaining, float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetCooldownItem");

	UIngamePlayerDataSurvivor_C_GetCooldownItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetDrinkEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngamePlayerDataSurvivor_C::GetDrinkEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetDrinkEffect");

	UIngamePlayerDataSurvivor_C_GetDrinkEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetCurrentPickItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_Pickable             CurrentPickItem                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::GetCurrentPickItem(struct FS_Pickable* CurrentPickItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetCurrentPickItem");

	UIngamePlayerDataSurvivor_C_GetCurrentPickItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickItem != nullptr)
		*CurrentPickItem = params.CurrentPickItem;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetDurability
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UIngamePlayerDataSurvivor_C::GetDurability()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetDurability");

	UIngamePlayerDataSurvivor_C_GetDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetStamina_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UIngamePlayerDataSurvivor_C::GetStamina_Percent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetStamina_Percent");

	UIngamePlayerDataSurvivor_C_GetStamina_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetHP_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UIngamePlayerDataSurvivor_C::GetHP_Percent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetHP_Percent");

	UIngamePlayerDataSurvivor_C_GetHP_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetQuestDetail
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::GetQuestDetail(struct FString* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetQuestDetail");

	UIngamePlayerDataSurvivor_C_GetQuestDetail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.MakeQuestDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Str                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::MakeQuestDetails(TArray<struct FString>* Array, struct FString* Str)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.MakeQuestDetails");

	UIngamePlayerDataSurvivor_C_MakeQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Str != nullptr)
		*Str = params.Str;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateQuestDetailsNew
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_QuestDetail>  QuestDetailsNew                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngamePlayerDataSurvivor_C::UpdateQuestDetailsNew(TArray<struct FS_QuestDetail>* QuestDetailsNew)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateQuestDetailsNew");

	UIngamePlayerDataSurvivor_C_UpdateQuestDetailsNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestDetailsNew != nullptr)
		*QuestDetailsNew = params.QuestDetailsNew;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateQuestDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         QuestDetails                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngamePlayerDataSurvivor_C::UpdateQuestDetails(TArray<struct FString>* QuestDetails)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateQuestDetails");

	UIngamePlayerDataSurvivor_C_UpdateQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestDetails != nullptr)
		*QuestDetails = params.QuestDetails;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHaveItem_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHSHPickableItem*        PickableItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::SetItem(bool bHaveItem_, class UHSHPickableItem* PickableItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.SetItem");

	UIngamePlayerDataSurvivor_C_SetItem_Params params;
	params.bHaveItem_ = bHaveItem_;
	params.PickableItem = PickableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateScreenFX
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::UpdateScreenFX(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateScreenFX");

	UIngamePlayerDataSurvivor_C_UpdateScreenFX_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TakeDamage
// (Public, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataSurvivor_C::TakeDamage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TakeDamage");

	UIngamePlayerDataSurvivor_C_TakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TryGetSurvivor
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASurvivorBase_C*         survivor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::TryGetSurvivor(class ASurvivorBase_C** survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TryGetSurvivor");

	UIngamePlayerDataSurvivor_C_TryGetSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (survivor != nullptr)
		*survivor = params.survivor;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.Construct
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataSurvivor_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.Construct");

	UIngamePlayerDataSurvivor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::Tick(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.Tick");

	UIngamePlayerDataSurvivor_C_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.ExecuteUbergraph_IngamePlayerDataSurvivor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::ExecuteUbergraph_IngamePlayerDataSurvivor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.ExecuteUbergraph_IngamePlayerDataSurvivor");

	UIngamePlayerDataSurvivor_C_ExecuteUbergraph_IngamePlayerDataSurvivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnUpdateQuestDetails__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         QuestDetails                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngamePlayerDataSurvivor_C::OnUpdateQuestDetails__DelegateSignature(TArray<struct FString>* QuestDetails)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnUpdateQuestDetails__DelegateSignature");

	UIngamePlayerDataSurvivor_C_OnUpdateQuestDetails__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestDetails != nullptr)
		*QuestDetails = params.QuestDetails;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnUpdateQuestDetailsNew__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_QuestDetail>  QuestDetailsNew                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngamePlayerDataSurvivor_C::OnUpdateQuestDetailsNew__DelegateSignature(TArray<struct FS_QuestDetail>* QuestDetailsNew)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnUpdateQuestDetailsNew__DelegateSignature");

	UIngamePlayerDataSurvivor_C_OnUpdateQuestDetailsNew__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestDetailsNew != nullptr)
		*QuestDetailsNew = params.QuestDetailsNew;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnSetItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHaveItem_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHSHPickableItem*        PickableItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataSurvivor_C::OnSetItem__DelegateSignature(bool bHaveItem_, class UHSHPickableItem* PickableItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnSetItem__DelegateSignature");

	UIngamePlayerDataSurvivor_C_OnSetItem__DelegateSignature_Params params;
	params.bHaveItem_ = bHaveItem_;
	params.PickableItem = PickableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnDecreaseScreenOpacity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataSurvivor_C::OnDecreaseScreenOpacity__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnDecreaseScreenOpacity__DelegateSignature");

	UIngamePlayerDataSurvivor_C_OnDecreaseScreenOpacity__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnTakeDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataSurvivor_C::OnTakeDamage__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnTakeDamage__DelegateSignature");

	UIngamePlayerDataSurvivor_C_OnTakeDamage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
