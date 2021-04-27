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

// BlueprintGeneratedClass ICharacter.ICharacter_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UICharacter_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ICharacter.ICharacter_C");
		return ptr;
	}



	void GetCurrentPickable(struct FS_Pickable* CurrentPickable);
	void GetExecuteCameraTransform(struct FTransform* Return);
	void isExecution(bool* Return);
	void ForceJumpCurrentMontage(const struct FName& SectionName);
	void GetAimTransform(struct FTransform* Return);
	void NotifyAfterGetHit();
	void IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag);
	void GetCharacterID(struct FPrimaryAssetId* AssetID);
	void TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section);
	void FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void EnableCanSeeSpecter(bool Enable);
	void NotifyCameraShake(class UClass* CameraShake, float Magnitude);
	void StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter);
	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void SendMeleeDistance(float Distance, float Width);
	void GetCurrentItemID(struct FPrimaryAssetId* AssetID);
	void GetMainCameraComponent(class UCameraComponent** CameraComponent);
	void OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags);
	void OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_);
	void EndAttackAnimation();
	void EndAttackCollision();
	void BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
