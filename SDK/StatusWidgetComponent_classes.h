#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StatusWidgetComponent.StatusWidgetComponent_C
// 0x00A8 (FullSize[0x01A8] - InheritedSize[0x0100])
class UStatusWidgetComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AHSHCharacterBase*                           OwnerCharacter;                                            // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShowText;                                               // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7L30[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OffsetWidget;                                              // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_TagStatus>                        Tag;                                                       // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	class AStatusActor_C*                              _3DWidget;                                                 // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_WaterBinding_C*                      Widget_WaterBinding;                                       // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>            ActiveParticles;                                           // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>               CacheTag;                                                  // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     CacheParticle;                                             // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               CacheSocket;                                               // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          CacheSoundEffect;                                          // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAudioComponent*>                     ActiveSFX;                                                 // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass StatusWidgetComponent.StatusWidgetComponent_C");
		return ptr;
	}



	void FilterDeactiveSfxIndex(TArray<class UAudioComponent*>* ActiveSFX, TArray<class USoundBase*>* SoundEffect, class UAudioComponent** AudioComponent, int* Array_Index, bool* bIsValid);
	void RefreshSFX();
	void FilterDeactiveParticleIndex(TArray<class UParticleSystemComponent*>* ActiveParticle, TArray<class UParticleSystem*>* Particle, class UParticleSystemComponent** ParticleComponent, int* Array_Index, bool* bIsValid);
	void FillContent();
	void Refresh();
	void UpdateParticle(TArray<struct FGameplayTagContainer>* Tag, TArray<class UParticleSystem*>* Particle, TArray<struct FName>* Socket, TArray<class USoundBase*> SoundEffect);
	void SpawnParticleStatus(class UParticleSystem* Effect, const struct FVector& Scale, const struct FName& Socket, bool Attach);
	void CheckTagIconsStatus(class AHSHCharacterBase* Character, TArray<class UTexture2D*>* Icons, TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>>* Modes, TArray<struct FS_TagStatus>* Data);
	void CheckParticleStatus(class AHSHCharacterBase* Character, TArray<struct FGameplayTagContainer>* Tag, TArray<class UParticleSystem*>* Particle, TArray<struct FName>* Socket, TArray<class USoundBase*>* SoundEffect);
	void CheckTagStatus(class AHSHCharacterBase* Character, struct FString* Return);
	void OnWaterBinding();
	void WaterBindingRemove();
	void CheckHandleWidget(const struct FName& Name);
	void OnHandleWidget(const struct FName& Name);
	void MulticastSpawnParticleAndSFX(class UParticleSystem* Effect, const struct FVector& Scale, const struct FName& Socket, bool Attach, class USoundBase* SoundEffect);
	void SetVisibility(bool bIsVisibility);
	void MulticastSetVisibility(bool IsVisibility);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void CheckTagEffect(const struct FName& Tag);
	void OnGameplayEffectApply(const struct FGameplayTagContainer& TagsContainer);
	void ExecuteUbergraph_StatusWidgetComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
