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

// Function CatSurvivorMinion.CatSurvivorMinion_C.NotifyFootStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.NotifyFootStep");

	ACatSurvivorMinion_C_NotifyFootStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
	if (VolumeMultiplier != nullptr)
		*VolumeMultiplier = params.VolumeMultiplier;
	if (AttenuationSettings != nullptr)
		*AttenuationSettings = params.AttenuationSettings;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.StopMovement
// (Public, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::StopMovement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.StopMovement");

	ACatSurvivorMinion_C_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.CheckMovingHold
// (Public, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::CheckMovingHold()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.CheckMovingHold");

	ACatSurvivorMinion_C_CheckMovingHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.GetCurrentPickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CurrentPickable                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::GetCurrentPickable(struct FS_Pickable* CurrentPickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.GetCurrentPickable");

	ACatSurvivorMinion_C_GetCurrentPickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickable != nullptr)
		*CurrentPickable = params.CurrentPickable;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InitializeCameraPostProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::InitializeCameraPostProcess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InitializeCameraPostProcess");

	ACatSurvivorMinion_C_InitializeCameraPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.GetOverlapingCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
void ACatSurvivorMinion_C::GetOverlapingCharacter(TArray<class AActor*>* OutActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.GetOverlapingCharacter");

	ACatSurvivorMinion_C_GetOverlapingCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.OnDropItemEvent
// (Public, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::OnDropItemEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.OnDropItemEvent");

	ACatSurvivorMinion_C_OnDropItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.OnCollectItemEvent
// (Public, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::OnCollectItemEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.OnCollectItemEvent");

	ACatSurvivorMinion_C_OnCollectItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.GetCurrentItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::GetCurrentItemID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.GetCurrentItemID");

	ACatSurvivorMinion_C_GetCurrentItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.OnRep_bFlagPendingDestroy
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::OnRep_bFlagPendingDestroy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.OnRep_bFlagPendingDestroy");

	ACatSurvivorMinion_C_OnRep_bFlagPendingDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Interact_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpActEvt_Survivor_Interact_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Interact_K2Node_InputActionEvent_6");

	ACatSurvivorMinion_C_InpActEvt_Survivor_Interact_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_5");

	ACatSurvivorMinion_C_InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_4");

	ACatSurvivorMinion_C_InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_General_Ping_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpActEvt_General_Ping_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_General_Ping_K2Node_InputActionEvent_3");

	ACatSurvivorMinion_C_InpActEvt_General_Ping_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_2");

	ACatSurvivorMinion_C_InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_1");

	ACatSurvivorMinion_C_InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.CollectItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickableItemBase_C*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::CollectItem(class APickableItemBase_C* Item, const struct FPrimaryAssetId& ItemId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.CollectItem");

	ACatSurvivorMinion_C_CollectItem_Params params;
	params.Item = Item;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.DropItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DropItemOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACatSurvivorMinion_C::DropItem(bool DropItemOnly)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.DropItem");

	ACatSurvivorMinion_C_DropItem_Params params;
	params.DropItemOnly = DropItemOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.RemoveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::RemoveItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.RemoveItem");

	ACatSurvivorMinion_C_RemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ShowRespawnLocation
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACatSurvivorMinion_C::ShowRespawnLocation(bool bIsShow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ShowRespawnLocation");

	ACatSurvivorMinion_C_ShowRespawnLocation_Params params;
	params.bIsShow = bIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACatSurvivorMinion_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveBeginPlay");

	ACatSurvivorMinion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ReceivePossessed");

	ACatSurvivorMinion_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.OwingInitInteract
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::OwingInitInteract()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.OwingInitInteract");

	ACatSurvivorMinion_C_OwingInitInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.TryDestroySelf
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::TryDestroySelf()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.TryDestroySelf");

	ACatSurvivorMinion_C_TryDestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.OnTakeDamaged
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::OnTakeDamaged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.OnTakeDamaged");

	ACatSurvivorMinion_C_OnTakeDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveEndPlay");

	ACatSurvivorMinion_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_DropItem
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::Action_DropItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.Action_DropItem");

	ACatSurvivorMinion_C_Action_DropItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_Interact
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::Action_Interact()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.Action_Interact");

	ACatSurvivorMinion_C_Action_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_CancelBody
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::Action_CancelBody()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.Action_CancelBody");

	ACatSurvivorMinion_C_Action_CancelBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ServerDestroyBody
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::ServerDestroyBody()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ServerDestroyBody");

	ACatSurvivorMinion_C_ServerDestroyBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_Ping
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::Action_Ping()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.Action_Ping");

	ACatSurvivorMinion_C_Action_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_PingEnemy
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::Action_PingEnemy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.Action_PingEnemy");

	ACatSurvivorMinion_C_Action_PingEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.Action_SkillCheck
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::Action_SkillCheck()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.Action_SkillCheck");

	ACatSurvivorMinion_C_Action_SkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ACatSurvivorMinion_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");

	ACatSurvivorMinion_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	ACatSurvivorMinion_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");

	ACatSurvivorMinion_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.OnDamaged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   EffectGrantedTags              (BlueprintVisible, BlueprintReadOnly, Parm)
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.OnDamaged");

	ACatSurvivorMinion_C_OnDamaged_Params params;
	params.DamageAmount = DamageAmount;
	params.HitInfo = HitInfo;
	params.DamageTags = DamageTags;
	params.EffectGrantedTags = EffectGrantedTags;
	params.InstigatorCharacter = InstigatorCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACatSurvivorMinion_C::BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ACatSurvivorMinion_C_BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ACatSurvivorMinion_C_BndEvt__OutlineRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.Interact
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::Interact(class AInteractionBase_C* Interact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.Interact");

	ACatSurvivorMinion_C_Interact_Params params;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ClientRotationToLocation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BaseRelativeLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::ClientRotationToLocation(class APlayerController* PlayerController, const struct FVector& BaseRelativeLocation, const struct FVector& TargetRelativeLocation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ClientRotationToLocation");

	ACatSurvivorMinion_C_ClientRotationToLocation_Params params;
	params.PlayerController = PlayerController;
	params.BaseRelativeLocation = BaseRelativeLocation;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ClientMoveTo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRelativeRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::ClientMoveTo(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ClientMoveTo");

	ACatSurvivorMinion_C_ClientMoveTo_Params params;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.SnapToInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                TargetRelativeRotation         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 TargetLookAtLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEaseOut                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bEaseIn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OverTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::SnapToInteraction(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, const struct FVector& TargetLookAtLocation, bool bEaseOut, bool bEaseIn, float OverTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.SnapToInteraction");

	ACatSurvivorMinion_C_SnapToInteraction_Params params;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.TargetLookAtLocation = TargetLookAtLocation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.MulticastCloseBodyBlock
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::MulticastCloseBodyBlock(float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.MulticastCloseBodyBlock");

	ACatSurvivorMinion_C_MulticastCloseBodyBlock_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.SetMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCustomDepth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::SetMesh(bool bCustomDepth, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.SetMesh");

	ACatSurvivorMinion_C_SetMesh_Params params;
	params.bCustomDepth = bCustomDepth;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ReceiveTick");

	ACatSurvivorMinion_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ClientInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::ClientInteract(class AInteractionBase_C* Interact)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ClientInteract");

	ACatSurvivorMinion_C_ClientInteract_Params params;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.SimulateNotifyFootStep
// (BlueprintCallable, BlueprintEvent)
void ACatSurvivorMinion_C::SimulateNotifyFootStep()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.SimulateNotifyFootStep");

	ACatSurvivorMinion_C_SimulateNotifyFootStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CatSurvivorMinion.CatSurvivorMinion_C.ExecuteUbergraph_CatSurvivorMinion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACatSurvivorMinion_C::ExecuteUbergraph_CatSurvivorMinion(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CatSurvivorMinion.CatSurvivorMinion_C.ExecuteUbergraph_CatSurvivorMinion");

	ACatSurvivorMinion_C_ExecuteUbergraph_CatSurvivorMinion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
