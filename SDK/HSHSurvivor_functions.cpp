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

// Function HSHSurvivor.AbilityBaseComponentNative.UseAbilityComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UAbilityBaseComponentNative::UseAbilityComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.AbilityBaseComponentNative.UseAbilityComponent");

	UAbilityBaseComponentNative_UseAbilityComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.AbilityBaseComponentNative.EndAnimationNotify
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   ContainGameplayTags            (Parm, NativeAccessSpecifierPublic)
void UAbilityBaseComponentNative::EndAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.AbilityBaseComponentNative.EndAnimationNotify");

	UAbilityBaseComponentNative_EndAnimationNotify_Params params;
	params.ContainGameplayTags = ContainGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.AbilityBaseComponentNative.BeginAnimationNotify
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   ContainGameplayTags            (Parm, NativeAccessSpecifierPublic)
void UAbilityBaseComponentNative::BeginAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.AbilityBaseComponentNative.BeginAnimationNotify");

	UAbilityBaseComponentNative_BeginAnimationNotify_Params params;
	params.ContainGameplayTags = ContainGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.UpdateUnseenValue
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodSeekComponentNative::UpdateUnseenValue(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.UpdateUnseenValue");

	UBloodSeekComponentNative_UpdateUnseenValue_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.UpdateSeenValue
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodSeekComponentNative::UpdateSeenValue(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.UpdateSeenValue");

	UBloodSeekComponentNative_UpdateSeenValue_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.StopBloodSeek
// (Final, Native, Public, BlueprintCallable)
void UBloodSeekComponentNative::StopBloodSeek()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.StopBloodSeek");

	UBloodSeekComponentNative_StopBloodSeek_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.StartBloodSeek
// (Final, Native, Public, BlueprintCallable)
void UBloodSeekComponentNative::StartBloodSeek()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.StartBloodSeek");

	UBloodSeekComponentNative_StartBloodSeek_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.SetBloodSeekStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Stack                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodSeekComponentNative::SetBloodSeekStack(int Stack, float Time)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.SetBloodSeekStack");

	UBloodSeekComponentNative_SetBloodSeekStack_Params params;
	params.Stack = Stack;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.ResetStack
// (Final, Native, Public, BlueprintCallable)
void UBloodSeekComponentNative::ResetStack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.ResetStack");

	UBloodSeekComponentNative_ResetStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.IncreaseStack
// (Final, Native, Protected, BlueprintCallable)
void UBloodSeekComponentNative::IncreaseStack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.IncreaseStack");

	UBloodSeekComponentNative_IncreaseStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.GetSurvivors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AHSHCharacterSurvivorBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AHSHCharacterSurvivorBase*> UBloodSeekComponentNative::GetSurvivors()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.GetSurvivors");

	UBloodSeekComponentNative_GetSurvivors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.BloodSeekComponentNative.GetHunter
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AHSHCharacterHunterBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AHSHCharacterHunterBase* UBloodSeekComponentNative::GetHunter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.GetHunter");

	UBloodSeekComponentNative_GetHunter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.BloodSeekComponentNative.GetBloodSeekStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBloodSeekComponentNative::GetBloodSeekStack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.GetBloodSeekStack");

	UBloodSeekComponentNative_GetBloodSeekStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.BloodSeekComponentNative.FindSurvivors
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UBloodSeekComponentNative::FindSurvivors()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.FindSurvivors");

	UBloodSeekComponentNative_FindSurvivors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.DecreaseStack
// (Final, Native, Protected, BlueprintCallable)
void UBloodSeekComponentNative::DecreaseStack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.DecreaseStack");

	UBloodSeekComponentNative_DecreaseStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.BloodSeekComponentNative.CheckInSeen
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBloodSeekComponentNative::CheckInSeen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.BloodSeekComponentNative.CheckInSeen");

	UBloodSeekComponentNative_CheckInSeen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ChaseAudioComponentNative.TryGetChaseCharacter
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AHSHCharacterBase* UChaseAudioComponentNative::TryGetChaseCharacter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.TryGetChaseCharacter");

	UChaseAudioComponentNative_TryGetChaseCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ChaseAudioComponentNative.SetSoundActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaseAudioComponentNative::SetSoundActive(bool IsActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.SetSoundActive");

	UChaseAudioComponentNative_SetSoundActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.ChaseAudioComponentNative.OnInitialize
// (Event, Protected, BlueprintEvent)
void UChaseAudioComponentNative::OnInitialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.OnInitialize");

	UChaseAudioComponentNative_OnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.ChaseAudioComponentNative.OnEscape
// (Event, Protected, BlueprintEvent)
void UChaseAudioComponentNative::OnEscape()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.OnEscape");

	UChaseAudioComponentNative_OnEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.ChaseAudioComponentNative.OnChasing
// (Event, Protected, BlueprintEvent)
void UChaseAudioComponentNative::OnChasing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.OnChasing");

	UChaseAudioComponentNative_OnChasing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.ChaseAudioComponentNative.IsHunterSeen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChaseAudioComponentNative::IsHunterSeen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.IsHunterSeen");

	UChaseAudioComponentNative_IsHunterSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ChaseAudioComponentNative.Initialize
// (Final, Native, Public, BlueprintCallable)
void UChaseAudioComponentNative::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.Initialize");

	UChaseAudioComponentNative_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.ChaseAudioComponentNative.ForceEnableChase
// (Final, Native, Public, BlueprintCallable)
void UChaseAudioComponentNative::ForceEnableChase()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.ForceEnableChase");

	UChaseAudioComponentNative_ForceEnableChase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.ChaseAudioComponentNative.ForceDisableChase
// (Final, Native, Public, BlueprintCallable)
void UChaseAudioComponentNative::ForceDisableChase()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ChaseAudioComponentNative.ForceDisableChase");

	UChaseAudioComponentNative_ForceDisableChase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.DropItemsComponentBase.SpawnItem
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDropItemsComponentBase::SpawnItem(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.DropItemsComponentBase.SpawnItem");

	UDropItemsComponentBase_SpawnItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.DropItemsComponentBase.ReceiveDamage
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// float                          Dmg                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Heathpercent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDropItemsComponentBase::ReceiveDamage(float Dmg, float Heathpercent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.DropItemsComponentBase.ReceiveDamage");

	UDropItemsComponentBase_ReceiveDamage_Params params;
	params.Dmg = Dmg;
	params.Heathpercent = Heathpercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.DropItemsComponentBase.IsItemDrop
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Dmg                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDropItemsComponentBase::IsItemDrop(float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.DropItemsComponentBase.IsItemDrop");

	UDropItemsComponentBase_IsItemDrop_Params params;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.DropItemsComponentBase.FindDropItem
// (Final, Native, Protected)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UDropItemsComponentBase::FindDropItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.DropItemsComponentBase.FindDropItem");

	UDropItemsComponentBase_FindDropItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.DropMovementComponentBase.Init
// (Event, Public, BlueprintEvent)
void UDropMovementComponentBase::Init()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.DropMovementComponentBase.Init");

	UDropMovementComponentBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAbilitySystemComponent.ReceiveOnGameplayEffectAppliedDelegateToSelf
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec     GameplayEffectSpec             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveGameplayEffectHandle     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHAbilitySystemComponent::ReceiveOnGameplayEffectAppliedDelegateToSelf(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayEffectSpec& GameplayEffectSpec, const struct FActiveGameplayEffectHandle& ActiveGameplayEffectHandle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAbilitySystemComponent.ReceiveOnGameplayEffectAppliedDelegateToSelf");

	UHSHAbilitySystemComponent_ReceiveOnGameplayEffectAppliedDelegateToSelf_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayEffectSpec = GameplayEffectSpec;
	params.ActiveGameplayEffectHandle = ActiveGameplayEffectHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAbilitySystemComponent.GetGameplayEffectCountWithTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   SourceGameplayEffect           (Parm, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* OptionalInstigatorFilterComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnforceOnGoingCheck           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UHSHAbilitySystemComponent::GetGameplayEffectCountWithTag(const struct FGameplayTagContainer& SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAbilitySystemComponent.GetGameplayEffectCountWithTag");

	UHSHAbilitySystemComponent_GetGameplayEffectCountWithTag_Params params;
	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	params.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction HSHSurvivor.HSHAbilitySystemComponent.GameplayEffectDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm, NativeAccessSpecifierPublic)
void UHSHAbilitySystemComponent::GameplayEffectDelegate__DelegateSignature(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction HSHSurvivor.HSHAbilitySystemComponent.GameplayEffectDelegate__DelegateSignature");

	UHSHAbilitySystemComponent_GameplayEffectDelegate__DelegateSignature_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAbilityTask_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   EventTags                      (Parm, NativeAccessSpecifierPublic)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StartSection                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAbilityEnds           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AnimRootMotionTranslationScale (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHAbilityTask_PlayMontageAndWaitForEvent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHAbilityTask_PlayMontageAndWaitForEvent* UHSHAbilityTask_PlayMontageAndWaitForEvent::STATIC_PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAbilityTask_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent");

	UHSHAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.EventTags = EventTags;
	params.Rate = Rate;
	params.StartSection = StartSection;
	params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHAchievementComponent.UnlockAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 achName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHAchievementComponent::UnlockAchievement(const struct FString& achName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAchievementComponent.UnlockAchievement");

	UHSHAchievementComponent_UnlockAchievement_Params params;
	params.achName = achName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAchievementComponent.StoreStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            statToIncrease                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHAchievementComponent::StoreStats(const struct FString& StatName, int statToIncrease)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAchievementComponent.StoreStats");

	UHSHAchievementComponent_StoreStats_Params params;
	params.StatName = StatName;
	params.statToIncrease = statToIncrease;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAchievementComponent.ResetAllStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAchievementsToo               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHAchievementComponent::ResetAllStats(bool bAchievementsToo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAchievementComponent.ResetAllStats");

	UHSHAchievementComponent_ResetAllStats_Params params;
	params.bAchievementsToo = bAchievementsToo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAchievementComponent.InitSteamAchievement
// (Final, Native, Public, BlueprintCallable)
void UHSHAchievementComponent::InitSteamAchievement()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAchievementComponent.InitSteamAchievement");

	UHSHAchievementComponent_InitSteamAchievement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAchievementComponent.GetAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 achName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHAchievementComponent::GetAchievement(const struct FString& achName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAchievementComponent.GetAchievement");

	UHSHAchievementComponent_GetAchievement_Params params;
	params.achName = achName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHAchievementComponent.ClearAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 pchName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHAchievementComponent::ClearAchievement(const struct FString& pchName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAchievementComponent.ClearAchievement");

	UHSHAchievementComponent_ClearAchievement_Params params;
	params.pchName = pchName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHItem.IsConsumable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHItem::IsConsumable()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHItem.IsConsumable");

	UHSHItem_IsConsumable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHItem.GetIdentifierString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UHSHItem::GetIdentifierString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHItem.GetIdentifierString");

	UHSHItem_GetIdentifierString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHAttributeSet.OnRep_Strength
// (Native, Protected)
void UHSHAttributeSet::OnRep_Strength()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_Strength");

	UHSHAttributeSet_OnRep_Strength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_MoveSpeed
// (Native, Protected)
void UHSHAttributeSet::OnRep_MoveSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_MoveSpeed");

	UHSHAttributeSet_OnRep_MoveSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_MaxHealth
// (Native, Protected)
void UHSHAttributeSet::OnRep_MaxHealth()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_MaxHealth");

	UHSHAttributeSet_OnRep_MaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_Health
// (Native, Protected)
void UHSHAttributeSet::OnRep_Health()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_Health");

	UHSHAttributeSet_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_Eyesight
// (Native, Protected)
void UHSHAttributeSet::OnRep_Eyesight()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_Eyesight");

	UHSHAttributeSet_OnRep_Eyesight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_DefensePower
// (Native, Protected)
void UHSHAttributeSet::OnRep_DefensePower()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_DefensePower");

	UHSHAttributeSet_OnRep_DefensePower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_DefensePoint
// (Native, Protected)
void UHSHAttributeSet::OnRep_DefensePoint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_DefensePoint");

	UHSHAttributeSet_OnRep_DefensePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_AttackPower
// (Native, Protected)
void UHSHAttributeSet::OnRep_AttackPower()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_AttackPower");

	UHSHAttributeSet_OnRep_AttackPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSet.OnRep_AttackPoint
// (Native, Protected)
void UHSHAttributeSet::OnRep_AttackPoint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSet.OnRep_AttackPoint");

	UHSHAttributeSet_OnRep_AttackPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction HSHSurvivor.HSHAttributeSet.OnGameplayEffectExecuteDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm, NativeAccessSpecifierPublic)
void UHSHAttributeSet::OnGameplayEffectExecuteDelegate__DelegateSignature(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction HSHSurvivor.HSHAttributeSet.OnGameplayEffectExecuteDelegate__DelegateSignature");

	UHSHAttributeSet_OnGameplayEffectExecuteDelegate__DelegateSignature_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetHunter.OnRep_Reach
// (Native, Protected)
void UHSHAttributeSetHunter::OnRep_Reach()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetHunter.OnRep_Reach");

	UHSHAttributeSetHunter_OnRep_Reach_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetHunter.OnRep_BloodSeekMoveSpeed
// (Native, Protected)
void UHSHAttributeSetHunter::OnRep_BloodSeekMoveSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetHunter.OnRep_BloodSeekMoveSpeed");

	UHSHAttributeSetHunter_OnRep_BloodSeekMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_Stamina
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_Stamina()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_Stamina");

	UHSHAttributeSetSurvivor_OnRep_Stamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_RegenStaminaRateCrouchBonus
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_RegenStaminaRateCrouchBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_RegenStaminaRateCrouchBonus");

	UHSHAttributeSetSurvivor_OnRep_RegenStaminaRateCrouchBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_RegenStaminaRate
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_RegenStaminaRate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_RegenStaminaRate");

	UHSHAttributeSetSurvivor_OnRep_RegenStaminaRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_MaxStamina
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_MaxStamina()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_MaxStamina");

	UHSHAttributeSetSurvivor_OnRep_MaxStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_MaxFallenHealth
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_MaxFallenHealth()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_MaxFallenHealth");

	UHSHAttributeSetSurvivor_OnRep_MaxFallenHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_InjuredSpeedBonus
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_InjuredSpeedBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_InjuredSpeedBonus");

	UHSHAttributeSetSurvivor_OnRep_InjuredSpeedBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_FallenHealth
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_FallenHealth()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_FallenHealth");

	UHSHAttributeSetSurvivor_OnRep_FallenHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_Expertise
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_Expertise()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_Expertise");

	UHSHAttributeSetSurvivor_OnRep_Expertise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_DrainStaminaRateCrouchBonus
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_DrainStaminaRateCrouchBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_DrainStaminaRateCrouchBonus");

	UHSHAttributeSetSurvivor_OnRep_DrainStaminaRateCrouchBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_DrainStaminaRate
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_DrainStaminaRate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_DrainStaminaRate");

	UHSHAttributeSetSurvivor_OnRep_DrainStaminaRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_CrouchSpeedBonus
// (Native, Protected)
void UHSHAttributeSetSurvivor::OnRep_CrouchSpeedBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHAttributeSetSurvivor.OnRep_CrouchSpeedBonus");

	UHSHAttributeSetSurvivor_OnRep_CrouchSpeedBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.StopLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
void UHSHBlueprintLibrary::STATIC_StopLoadingScreen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.StopLoadingScreen");

	UHSHBlueprintLibrary_StopLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.ServerTravel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InURL                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldSkipGameNotify          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_ServerTravel(class AActor* Actor, const struct FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ServerTravel");

	UHSHBlueprintLibrary_ServerTravel_Params params;
	params.Actor = Actor;
	params.InURL = InURL;
	params.bAbsolute = bAbsolute;
	params.bShouldSkipGameNotify = bShouldSkipGameNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.SaveLogsFileToAnother
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ProjectName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 savepath                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_SaveLogsFileToAnother(const struct FString& ProjectName, const struct FString& savepath)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.SaveLogsFileToAnother");

	UHSHBlueprintLibrary_SaveLogsFileToAnother_Params params;
	params.ProjectName = ProjectName;
	params.savepath = savepath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.RotatePawnTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                TargetRelativeRotation         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bEaseOut                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEaseIn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OverTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceShortestRotationPath     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<HSHSurvivor_EMoveActionHSH> MoveAction                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_RotatePawnTo(class APawn* Pawn, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<HSHSurvivor_EMoveActionHSH> MoveAction, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.RotatePawnTo");

	UHSHBlueprintLibrary_RotatePawnTo_Params params;
	params.Pawn = Pawn;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;
	params.bForceShortestRotationPath = bForceShortestRotationPath;
	params.MoveAction = MoveAction;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.RotateControllerTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                TargetRelativeRotation         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bEaseOut                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEaseIn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OverTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceShortestRotationPath     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<HSHSurvivor_EMoveActionHSH> MoveAction                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_RotateControllerTo(class APlayerController* PlayerController, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<HSHSurvivor_EMoveActionHSH> MoveAction, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.RotateControllerTo");

	UHSHBlueprintLibrary_RotateControllerTo_Params params;
	params.PlayerController = PlayerController;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;
	params.bForceShortestRotationPath = bForceShortestRotationPath;
	params.MoveAction = MoveAction;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.RequestExit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_RequestExit(bool bForce)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.RequestExit");

	UHSHBlueprintLibrary_RequestExit_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.PlayLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bPlayUntilStopped              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlayTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.PlayLoadingScreen");

	UHSHBlueprintLibrary_PlayLoadingScreen_Params params;
	params.bPlayUntilStopped = bPlayUntilStopped;
	params.PlayTime = PlayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.NotEqual_HSHItemSlot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHSHItemSlot            A                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHSHItemSlot            B                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHBlueprintLibrary::STATIC_NotEqual_HSHItemSlot(const struct FHSHItemSlot& A, const struct FHSHItemSlot& B)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.NotEqual_HSHItemSlot");

	UHSHBlueprintLibrary_NotEqual_HSHItemSlot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.IsValidItemSlot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHBlueprintLibrary::STATIC_IsValidItemSlot(const struct FHSHItemSlot& ItemSlot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.IsValidItemSlot");

	UHSHBlueprintLibrary_IsValidItemSlot_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.IsInEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHBlueprintLibrary::STATIC_IsInEditor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.IsInEditor");

	UHSHBlueprintLibrary_IsInEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.GetMontageSectionLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHSHBlueprintLibrary::STATIC_GetMontageSectionLength(class UAnimMontage* AnimMontage, int SectionIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.GetMontageSectionLength");

	UHSHBlueprintLibrary_GetMontageSectionLength_Params params;
	params.AnimMontage = AnimMontage;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.GetMontageSectionIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   InSectionName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UHSHBlueprintLibrary::STATIC_GetMontageSectionIndex(class UAnimMontage* AnimMontage, const struct FName& InSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.GetMontageSectionIndex");

	UHSHBlueprintLibrary_GetMontageSectionIndex_Params params;
	params.AnimMontage = AnimMontage;
	params.InSectionName = InSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.GetExecuteMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectExecutionDefinition ExecuteEffect                  (Parm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHSHBlueprintLibrary::STATIC_GetExecuteMagnitude(const struct FGameplayEffectExecutionDefinition& ExecuteEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.GetExecuteMagnitude");

	UHSHBlueprintLibrary_GetExecuteMagnitude_Params params;
	params.ExecuteEffect = ExecuteEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.GetDurationGameplayEffectSpecHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle GameplayEffectSpecHandle       (Parm, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_GetDurationGameplayEffectSpecHandle(const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle, float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.GetDurationGameplayEffectSpecHandle");

	UHSHBlueprintLibrary_GetDurationGameplayEffectSpecHandle_Params params;
	params.GameplayEffectSpecHandle = GameplayEffectSpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadStickerItem
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLogWarning                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHStickerItem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHStickerItem* UHSHBlueprintLibrary::STATIC_ForceLoadStickerItem(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadStickerItem");

	UHSHBlueprintLibrary_ForceLoadStickerItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.bLogWarning = bLogWarning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadQuest
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLogWarning                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHQuest*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHQuest* UHSHBlueprintLibrary::STATIC_ForceLoadQuest(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadQuest");

	UHSHBlueprintLibrary_ForceLoadQuest_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.bLogWarning = bLogWarning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadPickableItem
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLogWarning                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHPickableItem*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHPickableItem* UHSHBlueprintLibrary::STATIC_ForceLoadPickableItem(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadPickableItem");

	UHSHBlueprintLibrary_ForceLoadPickableItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.bLogWarning = bLogWarning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadItemProfile
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLogWarning                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItemProfile*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHItemProfile* UHSHBlueprintLibrary::STATIC_ForceLoadItemProfile(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadItemProfile");

	UHSHBlueprintLibrary_ForceLoadItemProfile_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.bLogWarning = bLogWarning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadItem
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLogWarning                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHItem* UHSHBlueprintLibrary::STATIC_ForceLoadItem(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ForceLoadItem");

	UHSHBlueprintLibrary_ForceLoadItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.bLogWarning = bLogWarning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.FindScreenEdgeLocationForWorldLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EdgePercent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               OutScreenPosition              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutRotationAngleDegrees        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsOnScreen                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_FindScreenEdgeLocationForWorldLocation(class UObject* WorldContextObject, const struct FVector& InLocation, float EdgePercent, struct FVector2D* OutScreenPosition, float* OutRotationAngleDegrees, bool* bIsOnScreen)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.FindScreenEdgeLocationForWorldLocation");

	UHSHBlueprintLibrary_FindScreenEdgeLocationForWorldLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InLocation = InLocation;
	params.EdgePercent = EdgePercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutScreenPosition != nullptr)
		*OutScreenPosition = params.OutScreenPosition;
	if (OutRotationAngleDegrees != nullptr)
		*OutRotationAngleDegrees = params.OutRotationAngleDegrees;
	if (bIsOnScreen != nullptr)
		*bIsOnScreen = params.bIsOnScreen;

}


// Function HSHSurvivor.HSHBlueprintLibrary.EqualEqual_HSHItemSlot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHSHItemSlot            A                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHSHItemSlot            B                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHBlueprintLibrary::STATIC_EqualEqual_HSHItemSlot(const struct FHSHItemSlot& A, const struct FHSHItemSlot& B)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.EqualEqual_HSHItemSlot");

	UHSHBlueprintLibrary_EqualEqual_HSHItemSlot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.Encode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 secretKey                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Body                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_Encode(const struct FString& secretKey, const struct FString& Body)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.Encode");

	UHSHBlueprintLibrary_Encode_Params params;
	params.secretKey = secretKey;
	params.Body = Body;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.DoesEffectContainerSpecHaveTargets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHSHGameplayEffectContainerSpec ContainerSpec                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHBlueprintLibrary::STATIC_DoesEffectContainerSpecHaveTargets(const struct FHSHGameplayEffectContainerSpec& ContainerSpec)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.DoesEffectContainerSpecHaveTargets");

	UHSHBlueprintLibrary_DoesEffectContainerSpecHaveTargets_Params params;
	params.ContainerSpec = ContainerSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.DoesEffectContainerSpecHaveEffects
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHSHGameplayEffectContainerSpec ContainerSpec                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHSHBlueprintLibrary::STATIC_DoesEffectContainerSpecHaveEffects(const struct FHSHGameplayEffectContainerSpec& ContainerSpec)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.DoesEffectContainerSpecHaveEffects");

	UHSHBlueprintLibrary_DoesEffectContainerSpecHaveEffects_Params params;
	params.ContainerSpec = ContainerSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.CopyToClipboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Str                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_CopyToClipboard(const struct FString& Str)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.CopyToClipboard");

	UHSHBlueprintLibrary_CopyToClipboard_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.ClipboardPaste
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Dest                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_ClipboardPaste(struct FString* Dest)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ClipboardPaste");

	UHSHBlueprintLibrary_ClipboardPaste_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;

}


// Function HSHSurvivor.HSHBlueprintLibrary.ClientTravel
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETravelType> TravelType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSeamless                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   MapPackageGuid                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_ClientTravel(class APlayerController* PlayerController, const struct FString& URL, TEnumAsByte<Engine_ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ClientTravel");

	UHSHBlueprintLibrary_ClientTravel_Params params;
	params.PlayerController = PlayerController;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bSeamless = bSeamless;
	params.MapPackageGuid = MapPackageGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.ChangeLocalization
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Target                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_ChangeLocalization(const struct FString& Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ChangeLocalization");

	UHSHBlueprintLibrary_ChangeLocalization_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.BreakGameplayEffectSpec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     GameplayEffectSpec             (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   SourceTags                     (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   TargetTags                     (Parm, OutParm, NativeAccessSpecifierPublic)
void UHSHBlueprintLibrary::STATIC_BreakGameplayEffectSpec(const struct FGameplayEffectSpec& GameplayEffectSpec, struct FGameplayTagContainer* SourceTags, struct FGameplayTagContainer* TargetTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.BreakGameplayEffectSpec");

	UHSHBlueprintLibrary_BreakGameplayEffectSpec_Params params;
	params.GameplayEffectSpec = GameplayEffectSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceTags != nullptr)
		*SourceTags = params.SourceTags;
	if (TargetTags != nullptr)
		*TargetTags = params.TargetTags;

}


// Function HSHSurvivor.HSHBlueprintLibrary.ApplyExternalEffectContainerSpec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHSHGameplayEffectContainerSpec ContainerSpec                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FActiveGameplayEffectHandle> UHSHBlueprintLibrary::STATIC_ApplyExternalEffectContainerSpec(const struct FHSHGameplayEffectContainerSpec& ContainerSpec)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.ApplyExternalEffectContainerSpec");

	UHSHBlueprintLibrary_ApplyExternalEffectContainerSpec_Params params;
	params.ContainerSpec = ContainerSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHBlueprintLibrary.AddTargetsToEffectContainerSpec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHSHGameplayEffectContainerSpec ContainerSpec                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      HitResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<class AActor*>          TargetActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHSHGameplayEffectContainerSpec ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FHSHGameplayEffectContainerSpec UHSHBlueprintLibrary::STATIC_AddTargetsToEffectContainerSpec(const struct FHSHGameplayEffectContainerSpec& ContainerSpec, TArray<struct FHitResult> HitResults, TArray<class AActor*> TargetActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHBlueprintLibrary.AddTargetsToEffectContainerSpec");

	UHSHBlueprintLibrary_AddTargetsToEffectContainerSpec_Params params;
	params.ContainerSpec = ContainerSpec;
	params.HitResults = HitResults;
	params.TargetActors = TargetActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.UpdateProgressBar
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Current                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::UpdateProgressBar(float Current, float Max, float* Percent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.UpdateProgressBar");

	AHSHCharacterBase_UpdateProgressBar_Params params;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;

}


// Function HSHSurvivor.HSHCharacterBase.SlottedItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::SlottedItemChanged(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.SlottedItemChanged");

	AHSHCharacterBase_SlottedItemChanged_Params params;
	params.ItemSlot = ItemSlot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.SetSlottedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::SetSlottedItem(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.SetSlottedItem");

	AHSHCharacterBase_SetSlottedItem_Params params;
	params.ItemSlot = ItemSlot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.SetCharacterLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::SetCharacterLevel(int NewLevel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.SetCharacterLevel");

	AHSHCharacterBase_SetCharacterLevel_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.RemoveInventoryItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHSHItem*                RemovedItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RemoveCount                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::RemoveInventoryItem(class UHSHItem* RemovedItem, int RemoveCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.RemoveInventoryItem");

	AHSHCharacterBase_RemoveInventoryItem_Params params;
	params.RemovedItem = RemovedItem;
	params.RemoveCount = RemoveCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.RefreshInventory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TMap<struct FHSHItemSlot, class UHSHItem*> ThisSlottedItems               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AHSHCharacterBase::RefreshInventory(TMap<struct FHSHItemSlot, class UHSHItem*> ThisSlottedItems)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.RefreshInventory");

	AHSHCharacterBase_RefreshInventory_Params params;
	params.ThisSlottedItems = ThisSlottedItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.OnRep_SkinnedMesh
// (Native, Event, Protected, BlueprintEvent)
void AHSHCharacterBase::OnRep_SkinnedMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.OnRep_SkinnedMesh");

	AHSHCharacterBase_OnRep_SkinnedMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.OnPostGameplayEffectExecute
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   EventTags                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AHSHCharacterBase::OnPostGameplayEffectExecute(const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.OnPostGameplayEffectExecute");

	AHSHCharacterBase_OnPostGameplayEffectExecute_Params params;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.OnMoveSpeedChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   EventTags                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AHSHCharacterBase::OnMoveSpeedChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.OnMoveSpeedChanged");

	AHSHCharacterBase_OnMoveSpeedChanged_Params params;
	params.DeltaValue = DeltaValue;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.OnHealthChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   EventTags                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AHSHCharacterBase::OnHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.OnHealthChanged");

	AHSHCharacterBase_OnHealthChanged_Params params;
	params.DeltaValue = DeltaValue;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.OnEyesightChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   EventTags                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AHSHCharacterBase::OnEyesightChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.OnEyesightChanged");

	AHSHCharacterBase_OnEyesightChanged_Params params;
	params.DeltaValue = DeltaValue;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.OnDamaged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   EffectGrantedTags              (Parm, NativeAccessSpecifierPublic)
// class AHSHCharacterBase*       InstigatorCharacter            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.OnDamaged");

	AHSHCharacterBase_OnDamaged_Params params;
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


// Function HSHSurvivor.HSHCharacterBase.OnAttributeChange
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::OnAttributeChange(const struct FGameplayAttribute& Attribute, float NewValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.OnAttributeChange");

	AHSHCharacterBase_OnAttributeChange_Params params;
	params.Attribute = Attribute;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.InventoryItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bAdded                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::InventoryItemChanged(bool bAdded, class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.InventoryItemChanged");

	AHSHCharacterBase_InventoryItemChanged_Params params;
	params.bAdded = bAdded;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.InitAbility
// (Native, Public, BlueprintCallable)
void AHSHCharacterBase::InitAbility()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.InitAbility");

	AHSHCharacterBase_InitAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.GetSlottedItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHItem* AHSHCharacterBase::GetSlottedItem(const struct FHSHItemSlot& ItemSlot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetSlottedItem");

	AHSHCharacterBase_GetSlottedItem_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetMoveSpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterBase::GetMoveSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetMoveSpeed");

	AHSHCharacterBase_GetMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetMaxHealth
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterBase::GetMaxHealth()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetMaxHealth");

	AHSHCharacterBase_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetInventoryItems
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UHSHItem*>        Items                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FPrimaryAssetType       ItemType                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::GetInventoryItems(TArray<class UHSHItem*>* Items, const struct FPrimaryAssetType& ItemType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetInventoryItems");

	AHSHCharacterBase_GetInventoryItems_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function HSHSurvivor.HSHCharacterBase.GetInventoryItemData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHSHItemData            ItemData                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::GetInventoryItemData(class UHSHItem* Item, struct FHSHItemData* ItemData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetInventoryItemData");

	AHSHCharacterBase_GetInventoryItemData_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemData != nullptr)
		*ItemData = params.ItemData;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetInventoryItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AHSHCharacterBase::GetInventoryItemCount(class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetInventoryItemCount");

	AHSHCharacterBase_GetInventoryItemCount_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetHealth
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterBase::GetHealth()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetHealth");

	AHSHCharacterBase_GetHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetEyesight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterBase::GetEyesight()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetEyesight");

	AHSHCharacterBase_GetEyesight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetCooldownRemainingForTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   CooldownTags                   (Parm, NativeAccessSpecifierPublic)
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CooldownDuration               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::GetCooldownRemainingForTag(const struct FGameplayTagContainer& CooldownTags, float* TimeRemaining, float* CooldownDuration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetCooldownRemainingForTag");

	AHSHCharacterBase_GetCooldownRemainingForTag_Params params;
	params.CooldownTags = CooldownTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
	if (CooldownDuration != nullptr)
		*CooldownDuration = params.CooldownDuration;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetCharacterLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AHSHCharacterBase::GetCharacterLevel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetCharacterLevel");

	AHSHCharacterBase_GetCharacterLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetActiveGameplayEffectClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActiveGameplayEffect           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::GetActiveGameplayEffectClass(const struct FActiveGameplayEffectHandle& Handle, class UClass** ActiveGameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetActiveGameplayEffectClass");

	AHSHCharacterBase_GetActiveGameplayEffectClass_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveGameplayEffect != nullptr)
		*ActiveGameplayEffect = params.ActiveGameplayEffect;

}


// Function HSHSurvivor.HSHCharacterBase.GetActiveEffectRemainingWithTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   EffectTags                     (Parm, NativeAccessSpecifierPublic)
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::GetActiveEffectRemainingWithTag(const struct FGameplayTagContainer& EffectTags, float* TimeRemaining, float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetActiveEffectRemainingWithTag");

	AHSHCharacterBase_GetActiveEffectRemainingWithTag_Params params;
	params.EffectTags = EffectTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
	if (Duration != nullptr)
		*Duration = params.Duration;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   AbilityTags                    (Parm, NativeAccessSpecifierPublic)
// TArray<class UHSHGameplayAbility*> ActiveAbilities                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AHSHCharacterBase::GetActiveAbilitiesWithTags(const struct FGameplayTagContainer& AbilityTags, TArray<class UHSHGameplayAbility*>* ActiveAbilities)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithTags");

	AHSHCharacterBase_GetActiveAbilitiesWithTags_Params params;
	params.AbilityTags = AbilityTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveAbilities != nullptr)
		*ActiveAbilities = params.ActiveAbilities;

}


// Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithItemSlotFromTestInventory
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UHSHGameplayAbility*> ActiveAbilities                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AHSHCharacterBase::GetActiveAbilitiesWithItemSlotFromTestInventory(const struct FHSHItemSlot& ItemSlot, TArray<class UHSHGameplayAbility*>* ActiveAbilities)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithItemSlotFromTestInventory");

	AHSHCharacterBase_GetActiveAbilitiesWithItemSlotFromTestInventory_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveAbilities != nullptr)
		*ActiveAbilities = params.ActiveAbilities;

}


// Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithItemSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UHSHGameplayAbility*> ActiveAbilities                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AHSHCharacterBase::GetActiveAbilitiesWithItemSlot(const struct FHSHItemSlot& ItemSlot, TArray<class UHSHGameplayAbility*>* ActiveAbilities)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.GetActiveAbilitiesWithItemSlot");

	AHSHCharacterBase_GetActiveAbilitiesWithItemSlot_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveAbilities != nullptr)
		*ActiveAbilities = params.ActiveAbilities;

}


// Function HSHSurvivor.HSHCharacterBase.FillSlottedAbilitySpecs
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FHSHItemSlot, struct FGameplayAbilitySpec> SlottedAbilitySpecs            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AHSHCharacterBase::FillSlottedAbilitySpecs(TMap<struct FHSHItemSlot, struct FGameplayAbilitySpec>* SlottedAbilitySpecs)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.FillSlottedAbilitySpecs");

	AHSHCharacterBase_FillSlottedAbilitySpecs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlottedAbilitySpecs != nullptr)
		*SlottedAbilitySpecs = params.SlottedAbilitySpecs;

}


// Function HSHSurvivor.HSHCharacterBase.FillEmptySlotWithItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UHSHItem*                NewItem                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::FillEmptySlotWithItem(class UHSHItem* NewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.FillEmptySlotWithItem");

	AHSHCharacterBase_FillEmptySlotWithItem_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.FillEmptySlots
// (Final, Native, Public, BlueprintCallable)
void AHSHCharacterBase::FillEmptySlots()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.FillEmptySlots");

	AHSHCharacterBase_FillEmptySlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.AddStartupGameplayAbilities
// (Final, Native, Protected, BlueprintCallable)
void AHSHCharacterBase::AddStartupGameplayAbilities()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.AddStartupGameplayAbilities");

	AHSHCharacterBase_AddStartupGameplayAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.AddSlottedGameplayAbilities
// (Final, Native, Protected, BlueprintCallable)
void AHSHCharacterBase::AddSlottedGameplayAbilities()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.AddSlottedGameplayAbilities");

	AHSHCharacterBase_AddSlottedGameplayAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.AddInventoryItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHSHItem*                NewItem                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoSlot                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::AddInventoryItem(class UHSHItem* NewItem, int ItemCount, int ItemLevel, bool bAutoSlot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.AddInventoryItem");

	AHSHCharacterBase_AddInventoryItem_Params params;
	params.NewItem = NewItem;
	params.ItemCount = ItemCount;
	params.ItemLevel = ItemLevel;
	params.bAutoSlot = bAutoSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.ActivateEffectByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHCharacterBase::ActivateEffectByClass(class UClass* GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.ActivateEffectByClass");

	AHSHCharacterBase_ActivateEffectByClass_Params params;
	params.GameplayEffect = GameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   AbilityTags                    (Parm, NativeAccessSpecifierPublic)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::ActivateAbilitiesWithTags(const struct FGameplayTagContainer& AbilityTags, bool bAllowRemoteActivation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithTags");

	AHSHCharacterBase_ActivateAbilitiesWithTags_Params params;
	params.AbilityTags = AbilityTags;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithItemSlotFromTestInventory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::ActivateAbilitiesWithItemSlotFromTestInventory(const struct FHSHItemSlot& ItemSlot, bool bAllowRemoteActivation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithItemSlotFromTestInventory");

	AHSHCharacterBase_ActivateAbilitiesWithItemSlotFromTestInventory_Params params;
	params.ItemSlot = ItemSlot;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithItemSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterBase::ActivateAbilitiesWithItemSlot(const struct FHSHItemSlot& ItemSlot, bool bAllowRemoteActivation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterBase.ActivateAbilitiesWithItemSlot");

	AHSHCharacterBase_ActivateAbilitiesWithItemSlot_Params params;
	params.ItemSlot = ItemSlot;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterHunterBase.GetBloodSeekMoveSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterHunterBase::GetBloodSeekMoveSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterHunterBase.GetBloodSeekMoveSpeed");

	AHSHCharacterHunterBase_GetBloodSeekMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.OnStaminaChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DeltaValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   EventTags                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AHSHCharacterSurvivorBase::OnStaminaChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.OnStaminaChanged");

	AHSHCharacterSurvivorBase_OnStaminaChanged_Params params;
	params.DeltaValue = DeltaValue;
	params.EventTags = EventTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCharacterSurvivorBase.IsCharacterSprint
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHCharacterSurvivorBase::IsCharacterSprint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.IsCharacterSprint");

	AHSHCharacterSurvivorBase_IsCharacterSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetStamina
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetStamina()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetStamina");

	AHSHCharacterSurvivorBase_GetStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetRegenStaminaRateCrouchBonus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetRegenStaminaRateCrouchBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetRegenStaminaRateCrouchBonus");

	AHSHCharacterSurvivorBase_GetRegenStaminaRateCrouchBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetRegenStaminaRate
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetRegenStaminaRate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetRegenStaminaRate");

	AHSHCharacterSurvivorBase_GetRegenStaminaRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetMaxStamina
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetMaxStamina()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetMaxStamina");

	AHSHCharacterSurvivorBase_GetMaxStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetInjuredSpeedBonus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetInjuredSpeedBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetInjuredSpeedBonus");

	AHSHCharacterSurvivorBase_GetInjuredSpeedBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetExpertise
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetExpertise()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetExpertise");

	AHSHCharacterSurvivorBase_GetExpertise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetDrainStaminaRateCrouchBonus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetDrainStaminaRateCrouchBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetDrainStaminaRateCrouchBonus");

	AHSHCharacterSurvivorBase_GetDrainStaminaRateCrouchBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetDrainStaminaRate
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetDrainStaminaRate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetDrainStaminaRate");

	AHSHCharacterSurvivorBase_GetDrainStaminaRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCharacterSurvivorBase.GetCrouchSpeedBonus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AHSHCharacterSurvivorBase::GetCrouchSpeedBonus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCharacterSurvivorBase.GetCrouchSpeedBonus");

	AHSHCharacterSurvivorBase_GetCrouchSpeedBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHCheatManagerNative.TestClientCheat
// (Net, NetReliable, Native, Event, Public, NetClient)
void UHSHCheatManagerNative::TestClientCheat()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCheatManagerNative.TestClientCheat");

	UHSHCheatManagerNative_TestClientCheat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHCheatManagerNative.TestCheat
// (Final, Exec, Native, Public)
void UHSHCheatManagerNative::TestCheat()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHCheatManagerNative.TestCheat");

	UHSHCheatManagerNative_TestCheat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHGameModeBase.GetPlayerNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AHSHGameModeBase::GetPlayerNumber()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameModeBase.GetPlayerNumber");

	AHSHGameModeBase_GetPlayerNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameModeBase.AssignPlayerNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHGameModeBase::AssignPlayerNumber(int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameModeBase.AssignPlayerNumber");

	AHSHGameModeBase_AssignPlayerNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHGameplayAbility.MakeEffectContainerSpecFromContainer
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHSHGameplayEffectContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            OverrideGameplayLevel          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHSHGameplayEffectContainerSpec ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FHSHGameplayEffectContainerSpec UHSHGameplayAbility::MakeEffectContainerSpecFromContainer(const struct FHSHGameplayEffectContainer& Container, const struct FGameplayEventData& EventData, int OverrideGameplayLevel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.MakeEffectContainerSpecFromContainer");

	UHSHGameplayAbility_MakeEffectContainerSpecFromContainer_Params params;
	params.Container = Container;
	params.EventData = EventData;
	params.OverrideGameplayLevel = OverrideGameplayLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameplayAbility.MakeEffectContainerSpec
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            ContainerTag                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            OverrideGameplayLevel          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHSHGameplayEffectContainerSpec ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FHSHGameplayEffectContainerSpec UHSHGameplayAbility::MakeEffectContainerSpec(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int OverrideGameplayLevel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.MakeEffectContainerSpec");

	UHSHGameplayAbility_MakeEffectContainerSpec_Params params;
	params.ContainerTag = ContainerTag;
	params.EventData = EventData;
	params.OverrideGameplayLevel = OverrideGameplayLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameplayAbility.GetGameplayAbilityCharge
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxCharge                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHGameplayAbility::GetGameplayAbilityCharge(int* CurrentCharge, int* MaxCharge)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.GetGameplayAbilityCharge");

	UHSHGameplayAbility_GetGameplayAbilityCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentCharge != nullptr)
		*CurrentCharge = params.CurrentCharge;
	if (MaxCharge != nullptr)
		*MaxCharge = params.MaxCharge;

}


// Function HSHSurvivor.HSHGameplayAbility.GetCooldownGameplayEffectClassBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UHSHGameplayAbility::GetCooldownGameplayEffectClassBP()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.GetCooldownGameplayEffectClassBP");

	UHSHGameplayAbility_GetCooldownGameplayEffectClassBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameplayAbility.GetCooldownGameplayEffectBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayEffect* UHSHGameplayAbility::GetCooldownGameplayEffectBP()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.GetCooldownGameplayEffectBP");

	UHSHGameplayAbility_GetCooldownGameplayEffectBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameplayAbility.GetCooldownDurationMagnitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHSHGameplayAbility::GetCooldownDurationMagnitude()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.GetCooldownDurationMagnitude");

	UHSHGameplayAbility_GetCooldownDurationMagnitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameplayAbility.GetAbilityTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm, OutParm, NativeAccessSpecifierPublic)
void UHSHGameplayAbility::GetAbilityTags(struct FGameplayTagContainer* Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.GetAbilityTags");

	UHSHGameplayAbility_GetAbilityTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;

}


// Function HSHSurvivor.HSHGameplayAbility.ChangeCooldownGEClass
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewCooldown                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHSHGameplayAbility::ChangeCooldownGEClass(class UClass* NewCooldown)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.ChangeCooldownGEClass");

	UHSHGameplayAbility_ChangeCooldownGEClass_Params params;
	params.NewCooldown = NewCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainerWithMagnitude
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            ContainerTag                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OverrideGameplayLevel          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FActiveGameplayEffectHandle> UHSHGameplayAbility::ApplyEffectContainerWithMagnitude(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, float Magnitude, int OverrideGameplayLevel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainerWithMagnitude");

	UHSHGameplayAbility_ApplyEffectContainerWithMagnitude_Params params;
	params.ContainerTag = ContainerTag;
	params.EventData = EventData;
	params.Magnitude = Magnitude;
	params.OverrideGameplayLevel = OverrideGameplayLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainerSpec
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHSHGameplayEffectContainerSpec ContainerSpec                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FActiveGameplayEffectHandle> UHSHGameplayAbility::ApplyEffectContainerSpec(const struct FHSHGameplayEffectContainerSpec& ContainerSpec)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainerSpec");

	UHSHGameplayAbility_ApplyEffectContainerSpec_Params params;
	params.ContainerSpec = ContainerSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainer
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            ContainerTag                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            OverrideGameplayLevel          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FActiveGameplayEffectHandle> UHSHGameplayAbility::ApplyEffectContainer(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int OverrideGameplayLevel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHGameplayAbility.ApplyEffectContainer");

	UHSHGameplayAbility_ApplyEffectContainer_Params params;
	params.ContainerTag = ContainerTag;
	params.EventData = EventData;
	params.OverrideGameplayLevel = OverrideGameplayLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHItemProfile.GetIdentifierString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UHSHItemProfile::GetIdentifierString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHItemProfile.GetIdentifierString");

	UHSHItemProfile_GetIdentifierString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHObject.Construct
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UHSHObject::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHObject.Construct");

	UHSHObject_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerBase.SlottedItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHPlayerControllerBase::SlottedItemChanged(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.SlottedItemChanged");

	AHSHPlayerControllerBase_SlottedItemChanged_Params params;
	params.ItemSlot = ItemSlot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerBase.SetSlottedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHPlayerControllerBase::SetSlottedItem(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.SetSlottedItem");

	AHSHPlayerControllerBase_SetSlottedItem_Params params;
	params.ItemSlot = ItemSlot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerBase.SaveInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHPlayerControllerBase::SaveInventory()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.SaveInventory");

	AHSHPlayerControllerBase_SaveInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerBase.RemoveInventoryItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHSHItem*                RemovedItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RemoveCount                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHPlayerControllerBase::RemoveInventoryItem(class UHSHItem* RemovedItem, int RemoveCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.RemoveInventoryItem");

	AHSHPlayerControllerBase_RemoveInventoryItem_Params params;
	params.RemovedItem = RemovedItem;
	params.RemoveCount = RemoveCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerBase.LoadInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHPlayerControllerBase::LoadInventory()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.LoadInventory");

	AHSHPlayerControllerBase_LoadInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerBase.InventoryItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bAdded                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHPlayerControllerBase::InventoryItemChanged(bool bAdded, class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.InventoryItemChanged");

	AHSHPlayerControllerBase_InventoryItemChanged_Params params;
	params.bAdded = bAdded;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerBase.GetSlottedItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHSHItemSlot            ItemSlot                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHSHItem*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHItem* AHSHPlayerControllerBase::GetSlottedItem(const struct FHSHItemSlot& ItemSlot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.GetSlottedItem");

	AHSHPlayerControllerBase_GetSlottedItem_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItems
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UHSHItem*>        Items                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FPrimaryAssetType       ItemType                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHPlayerControllerBase::GetInventoryItems(TArray<class UHSHItem*>* Items, const struct FPrimaryAssetType& ItemType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItems");

	AHSHPlayerControllerBase_GetInventoryItems_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItemData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHSHItemData            ItemData                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHPlayerControllerBase::GetInventoryItemData(class UHSHItem* Item, struct FHSHItemData* ItemData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItemData");

	AHSHPlayerControllerBase_GetInventoryItemData_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemData != nullptr)
		*ItemData = params.ItemData;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHSHItem*                Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AHSHPlayerControllerBase::GetInventoryItemCount(class UHSHItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.GetInventoryItemCount");

	AHSHPlayerControllerBase_GetInventoryItemCount_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerBase.FillEmptySlots
// (Final, Native, Public, BlueprintCallable)
void AHSHPlayerControllerBase::FillEmptySlots()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.FillEmptySlots");

	AHSHPlayerControllerBase_FillEmptySlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerBase.AddInventoryItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHSHItem*                NewItem                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoSlot                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AHSHPlayerControllerBase::AddInventoryItem(class UHSHItem* NewItem, int ItemCount, int ItemLevel, bool bAutoSlot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerBase.AddInventoryItem");

	AHSHPlayerControllerBase_AddInventoryItem_Params params;
	params.NewItem = NewItem;
	params.ItemCount = ItemCount;
	params.ItemLevel = ItemLevel;
	params.bAutoSlot = bAutoSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Debug.PawnMoveFlag
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Debug_PawnMoveFlag()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Debug.PawnMoveFlag");

	AHSHPlayerControllerNative_HSH_Debug_PawnMoveFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.TimeOut
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_TimeOut()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.TimeOut");

	AHSHPlayerControllerNative_HSH_Cheat_TimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnTrapItem
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_SpawnTrapItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnTrapItem");

	AHSHPlayerControllerNative_HSH_Cheat_SpawnTrapItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnProjectileItem
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_SpawnProjectileItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnProjectileItem");

	AHSHPlayerControllerNative_HSH_Cheat_SpawnProjectileItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnMeleeItem
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_SpawnMeleeItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnMeleeItem");

	AHSHPlayerControllerNative_HSH_Cheat_SpawnMeleeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnKeyItem
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_SpawnKeyItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnKeyItem");

	AHSHPlayerControllerNative_HSH_Cheat_SpawnKeyItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnItem
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_SpawnItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.SpawnItem");

	AHSHPlayerControllerNative_HSH_Cheat_SpawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillSurvivor
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_KillSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillSurvivor");

	AHSHPlayerControllerNative_HSH_Cheat_KillSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillME
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_KillME()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillME");

	AHSHPlayerControllerNative_HSH_Cheat_KillME_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillHunter
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_KillHunter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.KillHunter");

	AHSHPlayerControllerNative_HSH_Cheat_KillHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.CompleteQuestAndOpenPortal
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_CompleteQuestAndOpenPortal()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.CompleteQuestAndOpenPortal");

	AHSHPlayerControllerNative_HSH_Cheat_CompleteQuestAndOpenPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.CompleteQuest
// (Exec, Event, Public, BlueprintEvent)
void AHSHPlayerControllerNative::HSH_Cheat_CompleteQuest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.HSH.Cheat.CompleteQuest");

	AHSHPlayerControllerNative_HSH_Cheat_CompleteQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.ChangeStateToSpectator
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
void AHSHPlayerControllerNative::ChangeStateToSpectator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.ChangeStateToSpectator");

	AHSHPlayerControllerNative_ChangeStateToSpectator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.ChangeStateToPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
void AHSHPlayerControllerNative::ChangeStateToPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.ChangeStateToPlayer");

	AHSHPlayerControllerNative_ChangeStateToPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToSelectPlayer
// (Net, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            dir                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHPlayerControllerNative::ChangeSpectatorToSelectPlayer(int dir)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToSelectPlayer");

	AHSHPlayerControllerNative_ChangeSpectatorToSelectPlayer_Params params;
	params.dir = dir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToPrevPlayer
// (Final, Native, Public, BlueprintCallable)
void AHSHPlayerControllerNative::ChangeSpectatorToPrevPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToPrevPlayer");

	AHSHPlayerControllerNative_ChangeSpectatorToPrevPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToNextPlayer
// (Final, Native, Public, BlueprintCallable)
void AHSHPlayerControllerNative::ChangeSpectatorToNextPlayer()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToNextPlayer");

	AHSHPlayerControllerNative_ChangeSpectatorToNextPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToCurrentPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FViewTargetTransitionParams ViewTarget                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AHSHPlayerControllerNative::ChangeSpectatorToCurrentPlayer(const struct FViewTargetTransitionParams& ViewTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerControllerNative.ChangeSpectatorToCurrentPlayer");

	AHSHPlayerControllerNative_ChangeSpectatorToCurrentPlayer_Params params;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHPlayerStateNative.TrySetPlayerID
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHSHPlayerStateNative::TrySetPlayerID(int ID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHPlayerStateNative.TrySetPlayerID");

	AHSHPlayerStateNative_TrySetPlayerID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.HSHQuest.GetIdentifierString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UHSHQuest::GetIdentifierString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHQuest.GetIdentifierString");

	UHSHQuest_GetIdentifierString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.HSHTargetType.GetTargets
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AHSHCharacterBase*       TargetingCharacter             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  TargetingActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData      EventData                      (Parm, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHitResults                  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UHSHTargetType::GetTargets(class AHSHCharacterBase* TargetingCharacter, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.HSHTargetType.GetTargets");

	UHSHTargetType_GetTargets_Params params;
	params.TargetingCharacter = TargetingCharacter;
	params.TargetingActor = TargetingActor;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHitResults != nullptr)
		*OutHitResults = params.OutHitResults;
	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function HSHSurvivor.JokeAudioComponentNative.UpdateNotSeeAnyoneEvent
// (Final, Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::UpdateNotSeeAnyoneEvent(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.UpdateNotSeeAnyoneEvent");

	UJokeAudioComponentNative_UpdateNotSeeAnyoneEvent_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.UpdateIdleEvent
// (Final, Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::UpdateIdleEvent(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.UpdateIdleEvent");

	UJokeAudioComponentNative_UpdateIdleEvent_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.SetActiveNotSeeAnyoneEvent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           IsEventActive                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::SetActiveNotSeeAnyoneEvent(bool IsEventActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.SetActiveNotSeeAnyoneEvent");

	UJokeAudioComponentNative_SetActiveNotSeeAnyoneEvent_Params params;
	params.IsEventActive = IsEventActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.SetActiveIdleEvent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           IsEventActive                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::SetActiveIdleEvent(bool IsEventActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.SetActiveIdleEvent");

	UJokeAudioComponentNative_SetActiveIdleEvent_Params params;
	params.IsEventActive = IsEventActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.SendEvent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HSHSurvivor_EJokeEvent> Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::SendEvent(TEnumAsByte<HSHSurvivor_EJokeEvent> Event)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.SendEvent");

	UJokeAudioComponentNative_SendEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.ResetNotSeeAnyoneEvent
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
void UJokeAudioComponentNative::ResetNotSeeAnyoneEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.ResetNotSeeAnyoneEvent");

	UJokeAudioComponentNative_ResetNotSeeAnyoneEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.ResetIdleEvent
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
void UJokeAudioComponentNative::ResetIdleEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.ResetIdleEvent");

	UJokeAudioComponentNative_ResetIdleEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.RandomSoundFromSource
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<struct FJokeData>       Source                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundBase* UJokeAudioComponentNative::RandomSoundFromSource(TArray<struct FJokeData>* Source)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.RandomSoundFromSource");

	UJokeAudioComponentNative_RandomSoundFromSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;


	return params.ReturnValue;
}


// Function HSHSurvivor.JokeAudioComponentNative.OnCheckingEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<HSHSurvivor_EJokeEvent> Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::OnCheckingEvent(TEnumAsByte<HSHSurvivor_EJokeEvent> Event)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.OnCheckingEvent");

	UJokeAudioComponentNative_OnCheckingEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.MulticastSpawnSound
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::MulticastSpawnSound(class USoundBase* Sound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.MulticastSpawnSound");

	UJokeAudioComponentNative_MulticastSpawnSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.JokeAudioComponentNative.GetSoundsData
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<HSHSurvivor_EJokeEvent> Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FJokeData>       Source                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UJokeAudioComponentNative::GetSoundsData(TEnumAsByte<HSHSurvivor_EJokeEvent> Event, bool* IsFound, TArray<struct FJokeData>* Source)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.JokeAudioComponentNative.GetSoundsData");

	UJokeAudioComponentNative_GetSoundsData_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (Source != nullptr)
		*Source = params.Source;

}


// Function HSHSurvivor.Noise.perlinNoise1D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          persistence                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Octave                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNoise::STATIC_perlinNoise1D(float X, float persistence, int Octave)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.Noise.perlinNoise1D");

	UNoise_perlinNoise1D_Params params;
	params.X = X;
	params.persistence = persistence;
	params.Octave = Octave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.PerkHandleComponentNative.OnFindHandleTagSuccess
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            AbilityTag                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPerkHandleData         Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class AHSHCharacterBase*> Characters                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UPerkHandleComponentNative::OnFindHandleTagSuccess(const struct FGameplayTag& AbilityTag, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.PerkHandleComponentNative.OnFindHandleTagSuccess");

	UPerkHandleComponentNative_OnFindHandleTagSuccess_Params params;
	params.AbilityTag = AbilityTag;
	params.Data = Data;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.PerkHandleComponentNative.FindHandleTag
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            AbilityTag                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AHSHCharacterBase*> Characters                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPerkHandleComponentNative::FindHandleTag(const struct FGameplayTag& AbilityTag, TArray<class AHSHCharacterBase*>* Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.PerkHandleComponentNative.FindHandleTag");

	UPerkHandleComponentNative_FindHandleTag_Params params;
	params.AbilityTag = AbilityTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;


	return params.ReturnValue;
}


// Function HSHSurvivor.PerkHandleComponentNative.CheckHandleTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            AbilityTag                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPerkHandleData         Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UPerkHandleComponentNative::CheckHandleTag(const struct FGameplayTag& AbilityTag, const struct FPerkHandleData& Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.PerkHandleComponentNative.CheckHandleTag");

	UPerkHandleComponentNative_CheckHandleTag_Params params;
	params.AbilityTag = AbilityTag;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.ProgressManagerComponentNative.ContainTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSProgressInfo>  Array                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bIsContain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IndexArray                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressManagerComponentNative::ContainTarget(class UObject* Target, TArray<struct FSProgressInfo> Array, bool* bIsContain, int* IndexArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProgressManagerComponentNative.ContainTarget");

	UProgressManagerComponentNative_ContainTarget_Params params;
	params.Target = Target;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsContain != nullptr)
		*bIsContain = params.bIsContain;
	if (IndexArray != nullptr)
		*IndexArray = params.IndexArray;

}


// Function HSHSurvivor.ProgressManagerComponentNative.ContainPlayerController
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSProgressInfo>  Array                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bIsContain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IndexArray                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressManagerComponentNative::ContainPlayerController(class AController* PlayerController, TArray<struct FSProgressInfo> Array, bool* bIsContain, int* IndexArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProgressManagerComponentNative.ContainPlayerController");

	UProgressManagerComponentNative_ContainPlayerController_Params params;
	params.PlayerController = PlayerController;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsContain != nullptr)
		*bIsContain = params.bIsContain;
	if (IndexArray != nullptr)
		*IndexArray = params.IndexArray;

}


// Function HSHSurvivor.ProgressManagerComponentNative.ContainAIController
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             AIController                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSProgressInfo>  Array                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bIsContain                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IndexArray                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressManagerComponentNative::ContainAIController(class AController* AIController, TArray<struct FSProgressInfo> Array, bool* bIsContain, int* IndexArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProgressManagerComponentNative.ContainAIController");

	UProgressManagerComponentNative_ContainAIController_Params params;
	params.AIController = AIController;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsContain != nullptr)
		*bIsContain = params.bIsContain;
	if (IndexArray != nullptr)
		*IndexArray = params.IndexArray;

}


// Function HSHSurvivor.ProjectFunctionLibrary.ParseMatchMakeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JSONString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            survivor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            hunter                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProjectFunctionLibrary::STATIC_ParseMatchMakeData(const struct FString& JSONString, int* survivor, int* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.ParseMatchMakeData");

	UProjectFunctionLibrary_ParseMatchMakeData_Params params;
	params.JSONString = JSONString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (survivor != nullptr)
		*survivor = params.survivor;
	if (hunter != nullptr)
		*hunter = params.hunter;

}


// Function HSHSurvivor.ProjectFunctionLibrary.LoadFileToStringArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UProjectFunctionLibrary::STATIC_LoadFileToStringArray(const struct FString& Filename)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.LoadFileToStringArray");

	UProjectFunctionLibrary_LoadFileToStringArray_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ProjectFunctionLibrary.LoadFileToString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UProjectFunctionLibrary::STATIC_LoadFileToString(const struct FString& Filename)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.LoadFileToString");

	UProjectFunctionLibrary_LoadFileToString_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ProjectFunctionLibrary.GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UProjectFunctionLibrary::STATIC_GetProjectVersion()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.GetProjectVersion");

	UProjectFunctionLibrary_GetProjectVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ProjectFunctionLibrary.GetGameSingleton
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UProjectFunctionLibrary::STATIC_GetGameSingleton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.GetGameSingleton");

	UProjectFunctionLibrary_GetGameSingleton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ProjectFunctionLibrary.GetDynamicBandwidth
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            MinDynamicBandwidth            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxDynamicBandwidth            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProjectFunctionLibrary::STATIC_GetDynamicBandwidth(int* MinDynamicBandwidth, int* MaxDynamicBandwidth)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.GetDynamicBandwidth");

	UProjectFunctionLibrary_GetDynamicBandwidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinDynamicBandwidth != nullptr)
		*MinDynamicBandwidth = params.MinDynamicBandwidth;
	if (MaxDynamicBandwidth != nullptr)
		*MaxDynamicBandwidth = params.MaxDynamicBandwidth;

}


// Function HSHSurvivor.ProjectFunctionLibrary.GetCalculatedNetSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UProjectFunctionLibrary::STATIC_GetCalculatedNetSpeed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.GetCalculatedNetSpeed");

	UProjectFunctionLibrary_GetCalculatedNetSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.ProjectFunctionLibrary.DebugFilePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UProjectFunctionLibrary::STATIC_DebugFilePath()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.ProjectFunctionLibrary.DebugFilePath");

	UProjectFunctionLibrary_DebugFilePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.QuestObjectiveBase.IsObjectiveSuccess
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UQuestObjectiveBase::IsObjectiveSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.QuestObjectiveBase.IsObjectiveSuccess");

	UQuestObjectiveBase_IsObjectiveSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.SteamIAP.StartPurchase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            productID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamIAP::StartPurchase(int productID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamIAP.StartPurchase");

	USteamIAP_StartPurchase_Params params;
	params.productID = productID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamIAP.RequestPrice
// (Final, Native, Public, BlueprintCallable)
void USteamIAP::RequestPrice()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamIAP.RequestPrice");

	USteamIAP_RequestPrice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamIAP.Initialize
// (Final, Native, Public, BlueprintCallable)
void USteamIAP::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamIAP.Initialize");

	USteamIAP_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamIAP.GetItemPrice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            productID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamIAP::GetItemPrice(int productID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamIAP.GetItemPrice");

	USteamIAP_GetItemPrice_Params params;
	params.productID = productID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.SteamIAP.GetCurrency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamIAP::GetCurrency()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamIAP.GetCurrency");

	USteamIAP_GetCurrency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.SteamIAP.BIsDlcInstalled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<HSHSurvivor_EDlc>  dlc                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamIAP::BIsDlcInstalled(TEnumAsByte<HSHSurvivor_EDlc> dlc)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamIAP.BIsDlcInstalled");

	USteamIAP_BIsDlcInstalled_Params params;
	params.dlc = dlc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.SteamIAP.ActivateGameOverlayToStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<HSHSurvivor_EDlc>  dlc                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamIAP::ActivateGameOverlayToStore(TEnumAsByte<HSHSurvivor_EDlc> dlc)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamIAP.ActivateGameOverlayToStore");

	USteamIAP_ActivateGameOverlayToStore_Params params;
	params.dlc = dlc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.SetLobbyOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamLobby::SetLobbyOwner(int MemberIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.SetLobbyOwner");

	USteamLobby_SetLobbyOwner_Params params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.SetLobbyMemberData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 pchKey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 pchValue                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamLobby::SetLobbyMemberData(const struct FString& pchKey, const struct FString& pchValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.SetLobbyMemberData");

	USteamLobby_SetLobbyMemberData_Params params;
	params.pchKey = pchKey;
	params.pchValue = pchValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.SetLobbyJoinable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           joinable                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamLobby::SetLobbyJoinable(bool joinable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.SetLobbyJoinable");

	USteamLobby_SetLobbyJoinable_Params params;
	params.joinable = joinable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.SetLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 pchKey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 pchValue                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamLobby::SetLobbyData(const struct FString& pchKey, const struct FString& pchValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.SetLobbyData");

	USteamLobby_SetLobbyData_Params params;
	params.pchKey = pchKey;
	params.pchValue = pchValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.LeaveLobby
// (Final, Native, Public, BlueprintCallable)
void USteamLobby::LeaveLobby()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.LeaveLobby");

	USteamLobby_LeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.KickMember
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamLobby::KickMember(int MemberIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.KickMember");

	USteamLobby_KickMember_Params params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.IsLobbyOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamLobby::IsLobbyOwner()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.IsLobbyOwner");

	USteamLobby_IsLobbyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.SteamLobby.IsInLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamLobby::IsInLobby()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.IsInLobby");

	USteamLobby_IsInLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.SteamLobby.Initialize
// (Final, Native, Public, BlueprintCallable)
void USteamLobby::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.Initialize");

	USteamLobby_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.GetLobbyMemberInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            MemberCnt                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         PlayerId                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         PlayerProfile                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         PlayerState                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         DisplayName                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FString>         Survivorskill                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<bool>                   IsOwner                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USteamLobby::GetLobbyMemberInfo(int* MemberCnt, TArray<struct FString>* PlayerId, TArray<struct FString>* PlayerProfile, TArray<struct FString>* PlayerState, TArray<struct FString>* DisplayName, TArray<struct FString>* Survivorskill, TArray<bool>* IsOwner)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.GetLobbyMemberInfo");

	USteamLobby_GetLobbyMemberInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MemberCnt != nullptr)
		*MemberCnt = params.MemberCnt;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
	if (PlayerProfile != nullptr)
		*PlayerProfile = params.PlayerProfile;
	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
	if (Survivorskill != nullptr)
		*Survivorskill = params.Survivorskill;
	if (IsOwner != nullptr)
		*IsOwner = params.IsOwner;

}


// Function HSHSurvivor.SteamLobby.GetLobbyData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 pchKey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamLobby::GetLobbyData(const struct FString& pchKey)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.GetLobbyData");

	USteamLobby_GetLobbyData_Params params;
	params.pchKey = pchKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.SteamLobby.CreateLobby
// (Final, Native, Public, BlueprintCallable)
void USteamLobby::CreateLobby()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.CreateLobby");

	USteamLobby_CreateLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.ActivateGameOverlayToUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamLobby::ActivateGameOverlayToUser(int MemberIndex)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.ActivateGameOverlayToUser");

	USteamLobby_ActivateGameOverlayToUser_Params params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.SteamLobby.ActivateGameOverlayInviteDialog
// (Final, Native, Public, BlueprintCallable)
void USteamLobby::ActivateGameOverlayInviteDialog()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.SteamLobby.ActivateGameOverlayInviteDialog");

	USteamLobby_ActivateGameOverlayInviteDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.TestAttributeSetComponent.GetHSHAttributeSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHSHAttributeSet*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHSHAttributeSet* UTestAttributeSetComponent::GetHSHAttributeSet()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.TestAttributeSetComponent.GetHSHAttributeSet");

	UTestAttributeSetComponent_GetHSHAttributeSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.TestGameModeBase.InitNewPlayer
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       NewPlayerController            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Options                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Portal                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ATestGameModeBase::InitNewPlayer(class APlayerController* NewPlayerController, const struct FUniqueNetIdRepl& UniqueId, const struct FString& Options, const struct FString& Portal)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.TestGameModeBase.InitNewPlayer");

	ATestGameModeBase_InitNewPlayer_Params params;
	params.NewPlayerController = NewPlayerController;
	params.UniqueId = UniqueId;
	params.Options = Options;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.VentilatorManagerNative.IsVentilatorCooldowm
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVentilatorManagerNative::IsVentilatorCooldowm(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.VentilatorManagerNative.IsVentilatorCooldowm");

	AVentilatorManagerNative_IsVentilatorCooldowm_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.VentilatorManagerNative.AddedVentilatorCooldown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVentilatorManagerNative::AddedVentilatorCooldown(int Index, float Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.VentilatorManagerNative.AddedVentilatorCooldown");

	AVentilatorManagerNative_AddedVentilatorCooldown_Params params;
	params.Index = Index;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.WTxtFile.TestFilePath
// (Final, Native, Static, Public, BlueprintCallable)
void UWTxtFile::STATIC_TestFilePath()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.WTxtFile.TestFilePath");

	UWTxtFile_TestFilePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSurvivor.WTxtFile.SaveArrayTxtWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AppendDirectory                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         SaveText                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           AllowOverWriting               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWTxtFile::STATIC_SaveArrayTxtWithPath(const struct FString& AppendDirectory, const struct FString& Filename, TArray<struct FString> SaveText, bool AllowOverWriting)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.WTxtFile.SaveArrayTxtWithPath");

	UWTxtFile_SaveArrayTxtWithPath_Params params;
	params.AppendDirectory = AppendDirectory;
	params.Filename = Filename;
	params.SaveText = SaveText;
	params.AllowOverWriting = AllowOverWriting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSurvivor.WTxtFile.SaveArrayTxt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SaveDirectory                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         SaveText                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           AllowOverWriting               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWTxtFile::STATIC_SaveArrayTxt(const struct FString& SaveDirectory, const struct FString& Filename, TArray<struct FString> SaveText, bool AllowOverWriting)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSurvivor.WTxtFile.SaveArrayTxt");

	UWTxtFile_SaveArrayTxt_Params params;
	params.SaveDirectory = SaveDirectory;
	params.Filename = Filename;
	params.SaveText = SaveText;
	params.AllowOverWriting = AllowOverWriting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
