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

// Function PrayHunter.PrayHunter_C.GetIsOnPhaseShift
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APrayHunter_C::GetIsOnPhaseShift()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.GetIsOnPhaseShift");

	APrayHunter_C_GetIsOnPhaseShift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PrayHunter.PrayHunter_C.SetVisibilityWaterball
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APrayHunter_C::SetVisibilityWaterball(bool Visibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.SetVisibilityWaterball");

	APrayHunter_C_SetVisibilityWaterball_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.PlayAttackHitAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InPlayRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float APrayHunter_C::PlayAttackHitAnimation(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.PlayAttackHitAnimation");

	APrayHunter_C_PlayAttackHitAnimation_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PrayHunter.PrayHunter_C.NotifyFootStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrayHunter_C::NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.NotifyFootStep");

	APrayHunter_C_NotifyFootStep_Params params;

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


// Function PrayHunter.PrayHunter_C.GetHeavyAtkGE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  GameplayEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrayHunter_C::GetHeavyAtkGE(class UClass** GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.GetHeavyAtkGE");

	APrayHunter_C_GetHeavyAtkGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayEffect != nullptr)
		*GameplayEffect = params.GameplayEffect;

}


// Function PrayHunter.PrayHunter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APrayHunter_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.UserConstructionScript");

	APrayHunter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.BlendCamera__FinishedFunc
// (BlueprintEvent)
void APrayHunter_C::BlendCamera__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.BlendCamera__FinishedFunc");

	APrayHunter_C_BlendCamera__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.BlendCamera__UpdateFunc
// (BlueprintEvent)
void APrayHunter_C::BlendCamera__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.BlendCamera__UpdateFunc");

	APrayHunter_C_BlendCamera__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTransfrom                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APrayHunter_C::OnStateChanged(bool bIsTransfrom)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.OnStateChanged");

	APrayHunter_C_OnStateChanged_Params params;
	params.bIsTransfrom = bIsTransfrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.ProjectileAttackSuccess
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void APrayHunter_C::ProjectileAttackSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.ProjectileAttackSuccess");

	APrayHunter_C_ProjectileAttackSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APrayHunter_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.ReceiveBeginPlay");

	APrayHunter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.PlayDestroyItemMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void APrayHunter_C::PlayDestroyItemMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.PlayDestroyItemMontage");

	APrayHunter_C_PlayDestroyItemMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.OnDisableAttackCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void APrayHunter_C::OnDisableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.OnDisableAttackCollision");

	APrayHunter_C_OnDisableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrayHunter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.ReceiveTick");

	APrayHunter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.OnEnableAttackCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void APrayHunter_C::OnEnableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.OnEnableAttackCollision");

	APrayHunter_C_OnEnableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.MulticastPrayActivePerkLoopSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APrayHunter_C::MulticastPrayActivePerkLoopSound(bool Play)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.MulticastPrayActivePerkLoopSound");

	APrayHunter_C_MulticastPrayActivePerkLoopSound_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void APrayHunter_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	APrayHunter_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PrayHunter.PrayHunter_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrayHunter_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.SendMeleeDistance");

	APrayHunter_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.MulticastEnterHiddenEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void APrayHunter_C::MulticastEnterHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.MulticastEnterHiddenEffect");

	APrayHunter_C_MulticastEnterHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.MulticastExitHiddenEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void APrayHunter_C::MulticastExitHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.MulticastExitHiddenEffect");

	APrayHunter_C_MulticastExitHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.OnHitReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            AnimMontage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrayHunter_C::OnHitReaction(class UAnimMontage* AnimMontage, TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.OnHitReaction");

	APrayHunter_C_OnHitReaction_Params params;
	params.AnimMontage = AnimMontage;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.OnEndSpecter
// (BlueprintCallable, BlueprintEvent)
void APrayHunter_C::OnEndSpecter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.OnEndSpecter");

	APrayHunter_C_OnEndSpecter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrayHunter.PrayHunter_C.ExecuteUbergraph_PrayHunter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrayHunter_C::ExecuteUbergraph_PrayHunter(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrayHunter.PrayHunter_C.ExecuteUbergraph_PrayHunter");

	APrayHunter_C_ExecuteUbergraph_PrayHunter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
