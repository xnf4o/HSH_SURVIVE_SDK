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

// Function SecretPortal.SecretPortal_C.InteractSnapLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsSnapLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LookAtLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsNotAutoCalculateHeight      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortal_C::InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.InteractSnapLocation");

	ASecretPortal_C_InteractSnapLocation_Params params;
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


// Function SecretPortal.SecretPortal_C.GetSnapIKLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSnap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Enum_IKHand_Enum_IKHand> IKTarget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 IKRight                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 IKLeft                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::GetSnapIKLocation(bool* bIsSnap, TEnumAsByte<Enum_IKHand_Enum_IKHand>* IKTarget, struct FVector* IKRight, struct FVector* IKLeft)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.GetSnapIKLocation");

	ASecretPortal_C_GetSnapIKLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSnap != nullptr)
		*bIsSnap = params.bIsSnap;
	if (IKTarget != nullptr)
		*IKTarget = params.IKTarget;
	if (IKRight != nullptr)
		*IKRight = params.IKRight;
	if (IKLeft != nullptr)
		*IKLeft = params.IKLeft;

}


// Function SecretPortal.SecretPortal_C.CanUseProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortal_C::CanUseProgress(bool* UseProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.CanUseProgress");

	ASecretPortal_C_CanUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseProgress != nullptr)
		*UseProgress = params.UseProgress;

}


// Function SecretPortal.SecretPortal_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.GetProgressTime");

	ASecretPortal_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


// Function SecretPortal.SecretPortal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.UserConstructionScript");

	ASecretPortal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ASecretPortal_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.Timeline_0__FinishedFunc");

	ASecretPortal_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ASecretPortal_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.Timeline_0__UpdateFunc");

	ASecretPortal_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.ShowGate__FinishedFunc
// (BlueprintEvent)
void ASecretPortal_C::ShowGate__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.ShowGate__FinishedFunc");

	ASecretPortal_C_ShowGate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.ShowGate__UpdateFunc
// (BlueprintEvent)
void ASecretPortal_C::ShowGate__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.ShowGate__UpdateFunc");

	ASecretPortal_C_ShowGate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.CloseGate__FinishedFunc
// (BlueprintEvent)
void ASecretPortal_C::CloseGate__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.CloseGate__FinishedFunc");

	ASecretPortal_C_CloseGate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.CloseGate__UpdateFunc
// (BlueprintEvent)
void ASecretPortal_C::CloseGate__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.CloseGate__UpdateFunc");

	ASecretPortal_C_CloseGate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void ASecretPortal_C::Timeline_1__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.Timeline_1__FinishedFunc");

	ASecretPortal_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void ASecretPortal_C::Timeline_1__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.Timeline_1__UpdateFunc");

	ASecretPortal_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.Timeline_1__PlaySound__EventFunc
// (BlueprintEvent)
void ASecretPortal_C::Timeline_1__PlaySound__EventFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.Timeline_1__PlaySound__EventFunc");

	ASecretPortal_C_Timeline_1__PlaySound__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.ProgressPortalSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortal_C::ProgressPortalSound(bool Play)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.ProgressPortalSound");

	ASecretPortal_C_ProgressPortalSound_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.SetOutlineVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortal_C::SetOutlineVisible(bool bValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.SetOutlineVisible");

	ASecretPortal_C_SetOutlineVisible_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.OutlineChangeOnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHunter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortal_C::OutlineChangeOnShow(bool bIsHunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.OutlineChangeOnShow");

	ASecretPortal_C_OutlineChangeOnShow_Params params;
	params.bIsHunter = bIsHunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASecretPortal_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.ReceiveBeginPlay");

	ASecretPortal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.MulticastProgressPortalSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortal_C::MulticastProgressPortalSound(bool Play)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.MulticastProgressPortalSound");

	ASecretPortal_C_MulticastProgressPortalSound_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.OnPlayerExit
// (Public, BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::OnPlayerExit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.OnPlayerExit");

	ASecretPortal_C_OnPlayerExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.Interaction");

	ASecretPortal_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.MulticastFinish
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::MulticastFinish(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.MulticastFinish");

	ASecretPortal_C_MulticastFinish_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.SpawnDimensionLoopSound
// (BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::SpawnDimensionLoopSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.SpawnDimensionLoopSound");

	ASecretPortal_C_SpawnDimensionLoopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.OnPortalOpen
// (BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::OnPortalOpen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.OnPortalOpen");

	ASecretPortal_C_OnPortalOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.DuringOpen
// (BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::DuringOpen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.DuringOpen");

	ASecretPortal_C_DuringOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.ReceiveTick");

	ASecretPortal_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.OnStopProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::OnStopProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.OnStopProgress");

	ASecretPortal_C_OnStopProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.OnFinishProgress");

	ASecretPortal_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.OpenDoorAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::OpenDoorAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.OpenDoorAnimation");

	ASecretPortal_C_OpenDoorAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.Opendoor
// (BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::Opendoor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.Opendoor");

	ASecretPortal_C_Opendoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.OnRepIsProgress
// (Public, BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::OnRepIsProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.OnRepIsProgress");

	ASecretPortal_C_OnRepIsProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.ReturnToCloseDoor
// (BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::ReturnToCloseDoor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.ReturnToCloseDoor");

	ASecretPortal_C_ReturnToCloseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.MulticastCloseDoor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASecretPortal_C::MulticastCloseDoor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.MulticastCloseDoor");

	ASecretPortal_C_MulticastCloseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortal.SecretPortal_C.ExecuteUbergraph_SecretPortal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortal_C::ExecuteUbergraph_SecretPortal(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortal.SecretPortal_C.ExecuteUbergraph_SecretPortal");

	ASecretPortal_C_ExecuteUbergraph_SecretPortal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
