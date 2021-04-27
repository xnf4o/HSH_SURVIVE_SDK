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

// Function StatusWidgetComponent.StatusWidgetComponent_C.FilterDeactiveSfxIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAudioComponent*> ActiveSFX                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USoundBase*>      SoundEffect                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusWidgetComponent_C::FilterDeactiveSfxIndex(TArray<class UAudioComponent*>* ActiveSFX, TArray<class USoundBase*>* SoundEffect, class UAudioComponent** AudioComponent, int* Array_Index, bool* bIsValid)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.FilterDeactiveSfxIndex");

	UStatusWidgetComponent_C_FilterDeactiveSfxIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveSFX != nullptr)
		*ActiveSFX = params.ActiveSFX;
	if (SoundEffect != nullptr)
		*SoundEffect = params.SoundEffect;
	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.RefreshSFX
// (Public, BlueprintCallable, BlueprintEvent)
void UStatusWidgetComponent_C::RefreshSFX()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.RefreshSFX");

	UStatusWidgetComponent_C_RefreshSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.FilterDeactiveParticleIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UParticleSystemComponent*> ActiveParticle                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UParticleSystem*> Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UParticleSystemComponent* ParticleComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusWidgetComponent_C::FilterDeactiveParticleIndex(TArray<class UParticleSystemComponent*>* ActiveParticle, TArray<class UParticleSystem*>* Particle, class UParticleSystemComponent** ParticleComponent, int* Array_Index, bool* bIsValid)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.FilterDeactiveParticleIndex");

	UStatusWidgetComponent_C_FilterDeactiveParticleIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveParticle != nullptr)
		*ActiveParticle = params.ActiveParticle;
	if (Particle != nullptr)
		*Particle = params.Particle;
	if (ParticleComponent != nullptr)
		*ParticleComponent = params.ParticleComponent;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.FillContent
// (Public, BlueprintCallable, BlueprintEvent)
void UStatusWidgetComponent_C::FillContent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.FillContent");

	UStatusWidgetComponent_C_FillContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UStatusWidgetComponent_C::Refresh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.Refresh");

	UStatusWidgetComponent_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.UpdateParticle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTagContainer> Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UParticleSystem*> Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USoundBase*>      SoundEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UStatusWidgetComponent_C::UpdateParticle(TArray<struct FGameplayTagContainer>* Tag, TArray<class UParticleSystem*>* Particle, TArray<struct FName>* Socket, TArray<class USoundBase*> SoundEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.UpdateParticle");

	UStatusWidgetComponent_C_UpdateParticle_Params params;
	params.SoundEffect = SoundEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;
	if (Particle != nullptr)
		*Particle = params.Particle;
	if (Socket != nullptr)
		*Socket = params.Socket;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.SpawnParticleStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Attach                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusWidgetComponent_C::SpawnParticleStatus(class UParticleSystem* Effect, const struct FVector& Scale, const struct FName& Socket, bool Attach)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.SpawnParticleStatus");

	UStatusWidgetComponent_C_SpawnParticleStatus_Params params;
	params.Effect = Effect;
	params.Scale = Scale;
	params.Socket = Socket;
	params.Attach = Attach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagIconsStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>      Icons                          (Parm, OutParm, ZeroConstructor)
// TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> Modes                          (Parm, OutParm, ZeroConstructor)
// TArray<struct FS_TagStatus>    Data                           (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UStatusWidgetComponent_C::CheckTagIconsStatus(class AHSHCharacterBase* Character, TArray<class UTexture2D*>* Icons, TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>>* Modes, TArray<struct FS_TagStatus>* Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagIconsStatus");

	UStatusWidgetComponent_C_CheckTagIconsStatus_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icons != nullptr)
		*Icons = params.Icons;
	if (Modes != nullptr)
		*Modes = params.Modes;
	if (Data != nullptr)
		*Data = params.Data;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckParticleStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTagContainer> Tag                            (Parm, OutParm, ZeroConstructor)
// TArray<class UParticleSystem*> Particle                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           Socket                         (Parm, OutParm, ZeroConstructor)
// TArray<class USoundBase*>      SoundEffect                    (Parm, OutParm, ZeroConstructor)
void UStatusWidgetComponent_C::CheckParticleStatus(class AHSHCharacterBase* Character, TArray<struct FGameplayTagContainer>* Tag, TArray<class UParticleSystem*>* Particle, TArray<struct FName>* Socket, TArray<class USoundBase*>* SoundEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.CheckParticleStatus");

	UStatusWidgetComponent_C_CheckParticleStatus_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;
	if (Particle != nullptr)
		*Particle = params.Particle;
	if (Socket != nullptr)
		*Socket = params.Socket;
	if (SoundEffect != nullptr)
		*SoundEffect = params.SoundEffect;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Return                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::CheckTagStatus(class AHSHCharacterBase* Character, struct FString* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagStatus");

	UStatusWidgetComponent_C_CheckTagStatus_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.OnWaterBinding
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void UStatusWidgetComponent_C::OnWaterBinding()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.OnWaterBinding");

	UStatusWidgetComponent_C_OnWaterBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.WaterBindingRemove
// (BlueprintCallable, BlueprintEvent)
void UStatusWidgetComponent_C::WaterBindingRemove()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.WaterBindingRemove");

	UStatusWidgetComponent_C_WaterBindingRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckHandleWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::CheckHandleWidget(const struct FName& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.CheckHandleWidget");

	UStatusWidgetComponent_C_CheckHandleWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.OnHandleWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::OnHandleWidget(const struct FName& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.OnHandleWidget");

	UStatusWidgetComponent_C_OnHandleWidget_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.MulticastSpawnParticleAndSFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Attach                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              SoundEffect                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::MulticastSpawnParticleAndSFX(class UParticleSystem* Effect, const struct FVector& Scale, const struct FName& Socket, bool Attach, class USoundBase* SoundEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.MulticastSpawnParticleAndSFX");

	UStatusWidgetComponent_C_MulticastSpawnParticleAndSFX_Params params;
	params.Effect = Effect;
	params.Scale = Scale;
	params.Socket = Socket;
	params.Attach = Attach;
	params.SoundEffect = SoundEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.SetVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusWidgetComponent_C::SetVisibility(bool bIsVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.SetVisibility");

	UStatusWidgetComponent_C_SetVisibility_Params params;
	params.bIsVisibility = bIsVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.MulticastSetVisibility
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStatusWidgetComponent_C::MulticastSetVisibility(bool IsVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.MulticastSetVisibility");

	UStatusWidgetComponent_C_MulticastSetVisibility_Params params;
	params.IsVisibility = IsVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UStatusWidgetComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveBeginPlay");

	UStatusWidgetComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveTick");

	UStatusWidgetComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveEndPlay");

	UStatusWidgetComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::CheckTagEffect(const struct FName& Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagEffect");

	UStatusWidgetComponent_C_CheckTagEffect_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.OnGameplayEffectApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagsContainer                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UStatusWidgetComponent_C::OnGameplayEffectApply(const struct FGameplayTagContainer& TagsContainer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.OnGameplayEffectApply");

	UStatusWidgetComponent_C_OnGameplayEffectApply_Params params;
	params.TagsContainer = TagsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusWidgetComponent.StatusWidgetComponent_C.ExecuteUbergraph_StatusWidgetComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusWidgetComponent_C::ExecuteUbergraph_StatusWidgetComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusWidgetComponent.StatusWidgetComponent_C.ExecuteUbergraph_StatusWidgetComponent");

	UStatusWidgetComponent_C_ExecuteUbergraph_StatusWidgetComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
