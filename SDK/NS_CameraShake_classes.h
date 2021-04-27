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

// BlueprintGeneratedClass NS_CameraShake.NS_CameraShake_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UNS_CameraShake_C : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass NS_CameraShake.NS_CameraShake_C");
		return ptr;
	}



	void GetCurrentPickable(struct FS_Pickable* CurrentPickable);
	void GetExecuteCameraTransform(struct FTransform* Return);
	void isExecution(bool* Return);
	void GetAimTransform(struct FTransform* Return);
	void IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag);
	void GetCharacterID(struct FPrimaryAssetId* AssetID);
	void GetMainCameraComponent(class UCameraComponent** CameraComponent);
	void GetCurrentItemID(struct FPrimaryAssetId* AssetID);
	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
