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

// BlueprintGeneratedClass SurvivorMinionBase.SurvivorMinionBase_C
// 0x0030 (FullSize[0x0A60] - InheritedSize[0x0A30])
class ASurvivorMinionBase_C : public AHSHCharacterSurvivorBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                                  DataTableFootStep;                                         // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                FootStepChannal;                                           // 0x0A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VJ0Q[0x3];                                     // 0x0A59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FootStepDistance;                                          // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SurvivorMinionBase.SurvivorMinionBase_C");
		return ptr;
	}



	void GetCurrentPickable(struct FS_Pickable* CurrentPickable);
	void GetMainCameraComponent(class UCameraComponent** CameraComponent);
	void GetCurrentItemID(struct FPrimaryAssetId* AssetID);
	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void GetCharacterID(struct FPrimaryAssetId* AssetID);
	void IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag);
	void GetAimTransform(struct FTransform* Return);
	void isExecution(bool* Return);
	void GetExecuteCameraTransform(struct FTransform* Return);
	void GetFootStepSound(struct FS_FootStepSurvivor* OutRow);
	bool FindFlood(struct FHitResult* OutHit);
	void GetOptionSensitivity(float* Sensitivity);
	void BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk);
	void EndAttackCollision();
	void EndAttackAnimation();
	void OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_);
	void OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags);
	void SendMeleeDistance(float Distance, float Width);
	void PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter);
	void StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void NotifyCameraShake(class UClass* CameraShake, float Magnitude);
	void EnableCanSeeSpecter(bool Enable);
	void FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section);
	void NotifyAfterGetHit();
	void ForceJumpCurrentMontage(const struct FName& SectionName);
	void SetMesh(bool bCustomDepth, int Index);
	void ExecuteUbergraph_SurvivorMinionBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
