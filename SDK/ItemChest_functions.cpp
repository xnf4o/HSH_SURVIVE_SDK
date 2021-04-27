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

// Function ItemChest.ItemChest_C.ThisIsTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PlayerTeam_E_PlayerTeam> IsTeam                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::ThisIsTeam(TEnumAsByte<E_PlayerTeam_E_PlayerTeam>* IsTeam)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ThisIsTeam");

	AItemChest_C_ThisIsTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTeam != nullptr)
		*IsTeam = params.IsTeam;

}


// Function ItemChest.ItemChest_C.IsActivate?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActivate_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::IsActivate_(bool* IsActivate_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.IsActivate?");

	AItemChest_C_IsActivate__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsActivate_ != nullptr)
		*IsActivate_ = params.IsActivate_;

}


// Function ItemChest.ItemChest_C.OnRep_bIsProgressSoundPlayed
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::OnRep_bIsProgressSoundPlayed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnRep_bIsProgressSoundPlayed");

	AItemChest_C_OnRep_bIsProgressSoundPlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.DestroyRedrope
// (Public, BlueprintCallable, BlueprintEvent)
void AItemChest_C::DestroyRedrope()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.DestroyRedrope");

	AItemChest_C_DestroyRedrope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.IsChestOpen?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::IsChestOpen_(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.IsChestOpen?");

	AItemChest_C_IsChestOpen__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ItemChest.ItemChest_C.OnRep_bLockChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::OnRep_bLockChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnRep_bLockChest");

	AItemChest_C_OnRep_bLockChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnRep_bChestOpen
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::OnRep_bChestOpen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnRep_bChestOpen");

	AItemChest_C_OnRep_bChestOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.IsCanInteract
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.IsCanInteract");

	AItemChest_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ItemChest.ItemChest_C.InteractSnapLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsSnapLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LookAtLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsNotAutoCalculateHeight      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.InteractSnapLocation");

	AItemChest_C_InteractSnapLocation_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSnapLocation != nullptr)
		*bIsSnapLocation = params.bIsSnapLocation;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (LookAtLocation != nullptr)
		*LookAtLocation = params.LookAtLocation;
	if (bIsNotAutoCalculateHeight != nullptr)
		*bIsNotAutoCalculateHeight = params.bIsNotAutoCalculateHeight;

}


// Function ItemChest.ItemChest_C.CanUseProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::CanUseProgress(bool* UseProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.CanUseProgress");

	AItemChest_C_CanUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseProgress != nullptr)
		*UseProgress = params.UseProgress;

}


// Function ItemChest.ItemChest_C.GetSpeedSkillCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::GetSpeedSkillCheck(float* Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.GetSpeedSkillCheck");

	AItemChest_C_GetSpeedSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;

}


// Function ItemChest.ItemChest_C.IsCanSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsImprement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::IsCanSkillCheck_(bool* IsImprement, bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.IsCanSkillCheck?");

	AItemChest_C_IsCanSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImprement != nullptr)
		*IsImprement = params.IsImprement;
	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function ItemChest.ItemChest_C.IsCanHelp?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::IsCanHelp_(bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.IsCanHelp?");

	AItemChest_C_IsCanHelp__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function ItemChest.ItemChest_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.GetProgressTime");

	AItemChest_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


// Function ItemChest.ItemChest_C.OnRep_ItemDrop
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::OnRep_ItemDrop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnRep_ItemDrop");

	AItemChest_C_OnRep_ItemDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.SpawnItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         ItemInfo                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                  SpawnedItem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::SpawnItem(const struct FPrimaryAssetId& ItemInfo, class AActor** SpawnedItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.SpawnItem");

	AItemChest_C_SpawnItem_Params params;
	params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedItem != nullptr)
		*SpawnedItem = params.SpawnedItem;

}


// Function ItemChest.ItemChest_C.RandomItemFromChest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         ItemInfo                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::RandomItemFromChest(struct FPrimaryAssetId* ItemInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.RandomItemFromChest");

	AItemChest_C_RandomItemFromChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemInfo != nullptr)
		*ItemInfo = params.ItemInfo;

}


// Function ItemChest.ItemChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AItemChest_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.UserConstructionScript");

	AItemChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
void AItemChest_C::Activate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.Activate");

	AItemChest_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
void AItemChest_C::Deactivate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.Deactivate");

	AItemChest_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ServerSetProgressChestSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::ServerSetProgressChestSound(bool Play)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ServerSetProgressChestSound");

	AItemChest_C_ServerSetProgressChestSound_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.MultiCastOpenChestSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AItemChest_C::MultiCastOpenChestSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.MultiCastOpenChestSound");

	AItemChest_C_MultiCastOpenChestSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ProgressChestSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::ProgressChestSound(bool Play)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ProgressChestSound");

	AItemChest_C_ProgressChestSound_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ServerCloseChest
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AItemChest_C::ServerCloseChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ServerCloseChest");

	AItemChest_C_ServerCloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.MulticastCloseChest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AItemChest_C::MulticastCloseChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.MulticastCloseChest");

	AItemChest_C_MulticastCloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AItemChest_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ReceiveBeginPlay");

	AItemChest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ServerOpenChest
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AItemChest_C::ServerOpenChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ServerOpenChest");

	AItemChest_C_ServerOpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.MulticastOpenChest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AItemChest_C::MulticastOpenChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.MulticastOpenChest");

	AItemChest_C_MulticastOpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.RespawnChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::RespawnChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.RespawnChest");

	AItemChest_C_RespawnChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnDestroy(class AActor* DestroyedActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnDestroy");

	AItemChest_C_OnDestroy_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.BindDestroyEvent
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::BindDestroyEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.BindDestroyEvent");

	AItemChest_C_BindDestroyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnStopProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnStopProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnStopProgress");

	AItemChest_C_OnStopProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnFinishProgress");

	AItemChest_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ServerLockChest
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AItemChest_C::ServerLockChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ServerLockChest");

	AItemChest_C_ServerLockChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ServerUnlockChest
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AItemChest_C::ServerUnlockChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ServerUnlockChest");

	AItemChest_C_ServerUnlockChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.Interaction");

	AItemChest_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnInteraction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnInteraction");

	AItemChest_C_OnInteraction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnCannotProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnCannotProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnCannotProgress");

	AItemChest_C_OnCannotProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnStopSearchChest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         SurvivorBase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnStopSearchChest(class ASurvivorBase_C* SurvivorBase)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnStopSearchChest");

	AItemChest_C_OnStopSearchChest_Params params;
	params.SurvivorBase = SurvivorBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnFinishSearchChestWithSurvivor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         SurvivorBase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnFinishSearchChestWithSurvivor(class ASurvivorBase_C* SurvivorBase)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnFinishSearchChestWithSurvivor");

	AItemChest_C_OnFinishSearchChestWithSurvivor_Params params;
	params.SurvivorBase = SurvivorBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OpenChestNotRespawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AItemChest_C::OpenChestNotRespawn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OpenChestNotRespawn");

	AItemChest_C_OpenChestNotRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.CloseChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::CloseChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.CloseChest");

	AItemChest_C_CloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OpenChest
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::OpenChest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OpenChest");

	AItemChest_C_OpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnCommitSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnCommitSkillCheck");

	AItemChest_C_OnCommitSkillCheck_Params params;
	params.Result = Result;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.MulticastSpawnParticle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAutoDestroy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// Engine_EPSCPoolMethod          PoolingMethod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::MulticastSpawnParticle(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, Engine_EPSCPoolMethod PoolingMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.MulticastSpawnParticle");

	AItemChest_C_MulticastSpawnParticle_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.PoolingMethod = PoolingMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void AItemChest_C::ReceiveDestroyed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ReceiveDestroyed");

	AItemChest_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.SetOutlineCustomSencilValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::SetOutlineCustomSencilValue(int NewValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.SetOutlineCustomSencilValue");

	AItemChest_C_SetOutlineCustomSencilValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.SetOutlineVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItemChest_C::SetOutlineVisible(bool bValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.SetOutlineVisible");

	AItemChest_C_SetOutlineVisible_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.CheckDropPoint
// (BlueprintCallable, BlueprintEvent)
void AItemChest_C::CheckDropPoint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.CheckDropPoint");

	AItemChest_C_CheckDropPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.ExecuteUbergraph_ItemChest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::ExecuteUbergraph_ItemChest(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.ExecuteUbergraph_ItemChest");

	AItemChest_C_ExecuteUbergraph_ItemChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemChest.ItemChest_C.OnChestOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItemChest_C*            Chest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemChest_C::OnChestOpen__DelegateSignature(class AItemChest_C* Chest)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemChest.ItemChest_C.OnChestOpen__DelegateSignature");

	AItemChest_C_OnChestOpen__DelegateSignature_Params params;
	params.Chest = Chest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
