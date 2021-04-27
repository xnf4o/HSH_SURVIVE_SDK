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

// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomRitual
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ARitual_ReleaseGhost_C*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ARitual_ReleaseGhost_C*  Array_Element                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::RandomRitual(TArray<class ARitual_ReleaseGhost_C*>* Array, class ARitual_ReleaseGhost_C** Array_Element)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomRitual");

	UPerkHandleSurvivorComponent_C_RandomRitual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomObjectiveChest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AItemChest_C*>    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AItemChest_C*            Array_Element                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::RandomObjectiveChest(TArray<class AItemChest_C*>* Array, class AItemChest_C** Array_Element)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomObjectiveChest");

	UPerkHandleSurvivorComponent_C_RandomObjectiveChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetObjectiveChest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AItemChest_C*>    Chest                          (Parm, OutParm, ZeroConstructor)
void UPerkHandleSurvivorComponent_C::GetObjectiveChest(TArray<class AItemChest_C*>* Chest)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetObjectiveChest");

	UPerkHandleSurvivorComponent_C_GetObjectiveChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Chest != nullptr)
		*Chest = params.Chest;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.SixSenseScan
// (Public, BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::SixSenseScan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.SixSenseScan");

	UPerkHandleSurvivorComponent_C_SixSenseScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetRespawnCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UPerkHandleSurvivorComponent_C::GetRespawnCooldown(const struct FGameplayTagContainer& Selection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetRespawnCooldown");

	UPerkHandleSurvivorComponent_C_GetRespawnCooldown_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnBareHand
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             PickItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bReturn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::CheckSpawnBareHand(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnBareHand");

	UPerkHandleSurvivorComponent_C_CheckSpawnBareHand_Params params;
	params.PickItem = PickItem;
	params.Tag = Tag;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bReturn != nullptr)
		*bReturn = params.bReturn;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCat
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             PickItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bReturn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::CheckSpawnCat(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCat");

	UPerkHandleSurvivorComponent_C_CheckSpawnCat_Params params;
	params.PickItem = PickItem;
	params.Tag = Tag;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bReturn != nullptr)
		*bReturn = params.bReturn;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.TimerHandEmptyReset
// (Public, BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::TimerHandEmptyReset()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.TimerHandEmptyReset");

	UPerkHandleSurvivorComponent_C_TimerHandEmptyReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.TimerHandEmptyCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::TimerHandEmptyCheck(float DeltaTime, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.TimerHandEmptyCheck");

	UPerkHandleSurvivorComponent_C_TimerHandEmptyCheck_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckIsPerkItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPerkHandleSurvivorComponent_C::CheckIsPerkItem(const struct FPrimaryAssetId& ItemId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckIsPerkItem");

	UPerkHandleSurvivorComponent_C_CheckIsPerkItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckUsingItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::CheckUsingItem(float Durability)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckUsingItem");

	UPerkHandleSurvivorComponent_C_CheckUsingItem_Params params;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckHaveItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPerkHandleSurvivorComponent_C::CheckHaveItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckHaveItem");

	UPerkHandleSurvivorComponent_C_CheckHaveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetSpawnData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Pickable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         ItemId                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                  GameplayEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::GetSpawnData(const struct FGameplayTag& Tag, class UClass** Pickable, struct FPrimaryAssetId* ItemId, class UClass** GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.GetSpawnData");

	UPerkHandleSurvivorComponent_C_GetSpawnData_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pickable != nullptr)
		*Pickable = params.Pickable;
	if (ItemId != nullptr)
		*ItemId = params.ItemId;
	if (GameplayEffect != nullptr)
		*GameplayEffect = params.GameplayEffect;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.SpawnCollect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PickableClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                  GameplayEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::SpawnCollect(class UClass* PickableClass, const struct FPrimaryAssetId& ItemId, class UClass* GameplayEffect, float Durability)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.SpawnCollect");

	UPerkHandleSurvivorComponent_C_SpawnCollect_Params params;
	params.PickableClass = PickableClass;
	params.ItemId = ItemId;
	params.GameplayEffect = GameplayEffect;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_Pickable             PickItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                           bReturn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::CheckSpawnDrop(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, bool* bReturn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnDrop");

	UPerkHandleSurvivorComponent_C_CheckSpawnDrop_Params params;
	params.PickItem = PickItem;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bReturn != nullptr)
		*bReturn = params.bReturn;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCamera
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             PickItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bReturn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::CheckSpawnCamera(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCamera");

	UPerkHandleSurvivorComponent_C_CheckSpawnCamera_Params params;
	params.PickItem = PickItem;
	params.Tag = Tag;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bReturn != nullptr)
		*bReturn = params.bReturn;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnDagger
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             PickItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bReturn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::CheckSpawnDagger(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnDagger");

	UPerkHandleSurvivorComponent_C_CheckSpawnDagger_Params params;
	params.PickItem = PickItem;
	params.Tag = Tag;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bReturn != nullptr)
		*bReturn = params.bReturn;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCollect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             PickItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bReturn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::CheckSpawnCollect(const struct FS_Pickable& PickItem, const struct FGameplayTag& Tag, float DeltaTime, bool* bReturn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckSpawnCollect");

	UPerkHandleSurvivorComponent_C_CheckSpawnCollect_Params params;
	params.PickItem = PickItem;
	params.Tag = Tag;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bReturn != nullptr)
		*bReturn = params.bReturn;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.IsCanSpawn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UPerkHandleSurvivorComponent_C::IsCanSpawn(float* TimeRemaining, float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.IsCanSpawn");

	UPerkHandleSurvivorComponent_C_IsCanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
	if (Duration != nullptr)
		*Duration = params.Duration;


	return params.ReturnValue;
}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.IsCharacterCanMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanMove_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleSurvivorComponent_C::IsCharacterCanMove(bool* CanMove_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.IsCharacterCanMove");

	UPerkHandleSurvivorComponent_C_IsCharacterCanMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanMove_ != nullptr)
		*CanMove_ = params.CanMove_;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StartSixSenseCounting
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::StartSixSenseCounting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StartSixSenseCounting");

	UPerkHandleSurvivorComponent_C_StartSixSenseCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StopSixSenseCounting
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::StopSixSenseCounting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StopSixSenseCounting");

	UPerkHandleSurvivorComponent_C_StopSixSenseCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnStartStartSixSenseCounting
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::OnStartStartSixSenseCounting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnStartStartSixSenseCounting");

	UPerkHandleSurvivorComponent_C_OnStartStartSixSenseCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnStopSixSenseCounting
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::OnStopSixSenseCounting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnStopSixSenseCounting");

	UPerkHandleSurvivorComponent_C_OnStopSixSenseCounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CallWeaknessDetector
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::CallWeaknessDetector(float Time)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CallWeaknessDetector");

	UPerkHandleSurvivorComponent_C_CallWeaknessDetector_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CloseWeaknessDetector
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::CloseWeaknessDetector()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CloseWeaknessDetector");

	UPerkHandleSurvivorComponent_C_CloseWeaknessDetector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StartWeaknessDetector
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::StartWeaknessDetector()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StartWeaknessDetector");

	UPerkHandleSurvivorComponent_C_StartWeaknessDetector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StopWeaknessDetector
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::StopWeaknessDetector()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.StopWeaknessDetector");

	UPerkHandleSurvivorComponent_C_StopWeaknessDetector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ApplyWeaknessDetecorCooldown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::ApplyWeaknessDetecorCooldown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ApplyWeaknessDetecorCooldown");

	UPerkHandleSurvivorComponent_C_ApplyWeaknessDetecorCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnChestOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItemChest_C*            Chest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::OnChestOpened(class AItemChest_C* Chest)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnChestOpened");

	UPerkHandleSurvivorComponent_C_OnChestOpened_Params params;
	params.Chest = Chest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnPlaceItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARitualBase_C*           Ritual                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::OnPlaceItem(class ARitualBase_C* Ritual)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnPlaceItem");

	UPerkHandleSurvivorComponent_C_OnPlaceItem_Params params;
	params.Ritual = Ritual;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomShowRitual
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::RandomShowRitual()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomShowRitual");

	UPerkHandleSurvivorComponent_C_RandomShowRitual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomShowObjectiveChest
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::RandomShowObjectiveChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.RandomShowObjectiveChest");

	UPerkHandleSurvivorComponent_C_RandomShowObjectiveChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnShowSoundIcon
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPerkHandleData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AHSHCharacterBase*> Characters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPerkHandleSurvivorComponent_C::OnShowSoundIcon(const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*>* Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnShowSoundIcon");

	UPerkHandleSurvivorComponent_C_OnShowSoundIcon_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ServerHandle
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FPerkHandleData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AHSHCharacterBase*> Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPerkHandleSurvivorComponent_C::ServerHandle(const struct FGameplayTag& Selection, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ServerHandle");

	UPerkHandleSurvivorComponent_C_ServerHandle_Params params;
	params.Selection = Selection;
	params.Data = Data;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnFindCharactersWithTag
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FPerkHandleData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AHSHCharacterBase*> Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPerkHandleSurvivorComponent_C::OnFindCharactersWithTag(const struct FGameplayTag& Tag, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.OnFindCharactersWithTag");

	UPerkHandleSurvivorComponent_C_OnFindCharactersWithTag_Params params;
	params.Tag = Tag;
	params.Data = Data;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckonDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPerkHandleData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   GE_TagContainer                (BlueprintVisible, BlueprintReadOnly, Parm)
void UPerkHandleSurvivorComponent_C::CheckonDamaged(const struct FPerkHandleData& Data, const struct FGameplayTagContainer& GE_TagContainer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.CheckonDamaged");

	UPerkHandleSurvivorComponent_C_CheckonDamaged_Params params;
	params.Data = Data;
	params.GE_TagContainer = GE_TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ShowHunterAura
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::ShowHunterAura(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ShowHunterAura");

	UPerkHandleSurvivorComponent_C_ShowHunterAura_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.MulticastShowHunterAura
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::MulticastShowHunterAura(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.MulticastShowHunterAura");

	UPerkHandleSurvivorComponent_C_MulticastShowHunterAura_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.FindAllCharacter
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleSurvivorComponent_C::FindAllCharacter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.FindAllCharacter");

	UPerkHandleSurvivorComponent_C_FindAllCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ReceiveTick");

	UPerkHandleSurvivorComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ExecuteUbergraph_PerkHandleSurvivorComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleSurvivorComponent_C::ExecuteUbergraph_PerkHandleSurvivorComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleSurvivorComponent.PerkHandleSurvivorComponent_C.ExecuteUbergraph_PerkHandleSurvivorComponent");

	UPerkHandleSurvivorComponent_C_ExecuteUbergraph_PerkHandleSurvivorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
