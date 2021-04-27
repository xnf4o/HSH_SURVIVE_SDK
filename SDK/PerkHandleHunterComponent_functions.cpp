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

// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.FindSurvivorForStaminaDrain
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AHSHCharacterSurvivorBase* Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UPerkHandleHunterComponent_C::FindSurvivorForStaminaDrain(class AHSHCharacterSurvivorBase** Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.FindSurvivorForStaminaDrain");

	UPerkHandleHunterComponent_C_FindSurvivorForStaminaDrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;


	return params.ReturnValue;
}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.IsCanHookInFrontOf
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleHunterComponent_C::IsCanHookInFrontOf(const struct FVector& Location, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.IsCanHookInFrontOf");

	UPerkHandleHunterComponent_C_IsCanHookInFrontOf_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.IsHookSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleHunterComponent_C::IsHookSuccess(bool* IsSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.IsHookSuccess");

	UPerkHandleHunterComponent_C_IsHookSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ChainTraceActor_Camera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ChainActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASurvivorBase_C*         HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::ChainTraceActor_Camera(class AActor* ChainActor, class AHSHCharacterBase* hshcharacter, const struct FVector& Start, const struct FVector& Target, class ASurvivorBase_C** HitActor, struct FVector* HitLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ChainTraceActor_Camera");

	UPerkHandleHunterComponent_C_ChainTraceActor_Camera_Params params;
	params.ChainActor = ChainActor;
	params.hshcharacter = hshcharacter;
	params.Start = Start;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.UpdateShowSpecter
// (Public, BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::UpdateShowSpecter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.UpdateShowSpecter");

	UPerkHandleHunterComponent_C_UpdateShowSpecter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.DebugHitActors
// (Public, BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::DebugHitActors()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.DebugHitActors");

	UPerkHandleHunterComponent_C_DebugHitActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ChainTraceActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::ChainTraceActor(const struct FVector& Start, const struct FVector& Target, class AActor** HitActor, struct FVector* HitLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ChainTraceActor");

	UPerkHandleHunterComponent_C_ChainTraceActor_Params params;
	params.Start = Start;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.FilterHitActors
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHSHCharacterBase*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AHSHCharacterBase*> Filter                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AHSHCharacterBase*> FilterdArray                   (Parm, OutParm, ZeroConstructor)
void UPerkHandleHunterComponent_C::FilterHitActors(TArray<class AHSHCharacterBase*>* Array, TArray<class AHSHCharacterBase*>* Filter, TArray<class AHSHCharacterBase*>* FilterdArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.FilterHitActors");

	UPerkHandleHunterComponent_C_FilterHitActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Filter != nullptr)
		*Filter = params.Filter;
	if (FilterdArray != nullptr)
		*FilterdArray = params.FilterdArray;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.GetGameplayAbilityCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCharge                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::GetGameplayAbilityCharge(int* CurrentCharge, int* MaxCharge)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.GetGameplayAbilityCharge");

	UPerkHandleHunterComponent_C_GetGameplayAbilityCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentCharge != nullptr)
		*CurrentCharge = params.CurrentCharge;
	if (MaxCharge != nullptr)
		*MaxCharge = params.MaxCharge;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.EndPrisonerChain
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::EndPrisonerChain()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.EndPrisonerChain");

	UPerkHandleHunterComponent_C_EndPrisonerChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.UpdatePrisonerChainShoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::UpdatePrisonerChainShoot(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.UpdatePrisonerChainShoot");

	UPerkHandleHunterComponent_C_UpdatePrisonerChainShoot_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ClientEndAbility
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHookSuccess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleHunterComponent_C::ClientEndAbility(bool bHookSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ClientEndAbility");

	UPerkHandleHunterComponent_C_ClientEndAbility_Params params;
	params.bHookSuccess = bHookSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.Draw
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::Draw(const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.Draw");

	UPerkHandleHunterComponent_C_Draw_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MulticastTryRotate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::MulticastTryRotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MulticastTryRotate");

	UPerkHandleHunterComponent_C_MulticastTryRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.Rotate
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::Rotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.Rotate");

	UPerkHandleHunterComponent_C_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MulticastTryMoveSurvivor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::MulticastTryMoveSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MulticastTryMoveSurvivor");

	UPerkHandleHunterComponent_C_MulticastTryMoveSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MoveSurvivor
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::MoveSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.MoveSurvivor");

	UPerkHandleHunterComponent_C_MoveSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.StartHookAnimation
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::StartHookAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.StartHookAnimation");

	UPerkHandleHunterComponent_C_StartHookAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.StartHookTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StunSurvivorTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DelayAfterHookSuccess          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DurationPrisoner               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HookBound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 CameraForward                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SectionHookSuccess             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SectionHookFailure             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::StartHookTarget(float StunSurvivorTime, float DelayAfterHookSuccess, float DurationPrisoner, const struct FVector& HookBound, const struct FVector& CameraLocation, const struct FVector& CameraForward, float Length, const struct FName& SectionHookSuccess, const struct FName& SectionHookFailure)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.StartHookTarget");

	UPerkHandleHunterComponent_C_StartHookTarget_Params params;
	params.StunSurvivorTime = StunSurvivorTime;
	params.DelayAfterHookSuccess = DelayAfterHookSuccess;
	params.DurationPrisoner = DurationPrisoner;
	params.HookBound = HookBound;
	params.CameraLocation = CameraLocation;
	params.CameraForward = CameraForward;
	params.Length = Length;
	params.SectionHookSuccess = SectionHookSuccess;
	params.SectionHookFailure = SectionHookFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.DebugDraw
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::DebugDraw(const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.DebugDraw");

	UPerkHandleHunterComponent_C_DebugDraw_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ClearPrisonerChainValue
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::ClearPrisonerChainValue()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ClearPrisonerChainValue");

	UPerkHandleHunterComponent_C_ClearPrisonerChainValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckApplyStatusWhenAttacked
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPerkHandleData         PerkHandleData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleHunterComponent_C::CheckApplyStatusWhenAttacked(const struct FPerkHandleData& PerkHandleData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckApplyStatusWhenAttacked");

	UPerkHandleHunterComponent_C_CheckApplyStatusWhenAttacked_Params params;
	params.PerkHandleData = PerkHandleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.InitiliazeOnServer
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::InitiliazeOnServer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.InitiliazeOnServer");

	UPerkHandleHunterComponent_C_InitiliazeOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ReceiveTick");

	UPerkHandleHunterComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckApplyStatusWhenEndAttack
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPerkHandleData         PerkHandleData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleHunterComponent_C::CheckApplyStatusWhenEndAttack(const struct FPerkHandleData& PerkHandleData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckApplyStatusWhenEndAttack");

	UPerkHandleHunterComponent_C_CheckApplyStatusWhenEndAttack_Params params;
	params.PerkHandleData = PerkHandleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.AddedHitActor
// (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       HitActor                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::AddedHitActor(class AHSHCharacterBase* HitActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.AddedHitActor");

	UPerkHandleHunterComponent_C_AddedHitActor_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckonDamaged
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPerkHandleData         PerkHandleData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleHunterComponent_C::CheckonDamaged(const struct FPerkHandleData& PerkHandleData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.CheckonDamaged");

	UPerkHandleHunterComponent_C_CheckonDamaged_Params params;
	params.PerkHandleData = PerkHandleData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ShowSoundIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::ShowSoundIcon(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ShowSoundIcon");

	UPerkHandleHunterComponent_C_ShowSoundIcon_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ExecuteUbergraph_PerkHandleHunterComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleHunterComponent_C::ExecuteUbergraph_PerkHandleHunterComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.ExecuteUbergraph_PerkHandleHunterComponent");

	UPerkHandleHunterComponent_C_ExecuteUbergraph_PerkHandleHunterComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.OnPrisonerHookSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UPerkHandleHunterComponent_C::OnPrisonerHookSuccess__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.OnPrisonerHookSuccess__DelegateSignature");

	UPerkHandleHunterComponent_C_OnPrisonerHookSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.OnPrisonerChainEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHookSuccess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleHunterComponent_C::OnPrisonerChainEnd__DelegateSignature(bool bHookSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleHunterComponent.PerkHandleHunterComponent_C.OnPrisonerChainEnd__DelegateSignature");

	UPerkHandleHunterComponent_C_OnPrisonerChainEnd__DelegateSignature_Params params;
	params.bHookSuccess = bHookSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
