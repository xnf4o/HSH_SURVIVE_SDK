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

// BlueprintGeneratedClass SecretPortalTeamBase.SecretPortalTeamBase_C
// 0x008F (FullSize[0x0758] - InheritedSize[0x06C9])
class ASecretPortalTeamBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_Q7PR[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             ArrowSnapLocation;                                         // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             ArrowLookAt;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHSURPlayerController_C*                     ownerPortal;                                               // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPortalIsOpen;                                             // 0x06F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bPortalActive;                                             // 0x06F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bPortalHavePlayerExit;                                     // 0x06FA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bAutoActive;                                               // 0x06FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // 0x06FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecreaseProgressTimeInSD;                                  // 0x0700(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsProgress_;                                              // 0x0704(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bIsProgressFinish_;                                        // 0x0705(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FUDS[0x2];                                     // 0x0706(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_AnimationGender                          MontageExit;                                               // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnExitPortal;                                              // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnExitPortalTutorial;                                      // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnOpenPortal;                                              // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FString                                     PlayerExitDisplayName;                                     // 0x0748(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SecretPortalTeamBase.SecretPortalTeamBase_C");
		return ptr;
	}



	void OnRepIsProgress();
	void OnRep_bIsProgress_();
	void OnRep_bPortalActive();
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void OpenDoorAnimation();
	void ByPassProgress();
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void IsCanHelp_(bool* IsCan);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void CanUseProgress(bool* UseProgress);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void OnPlayerExit();
	void OpenPortal(bool bAutoActive);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void MulticastportalExit();
	void OnPortalOpen();
	void PlayerExit(class AActor* Actor);
	void ExecuteUbergraph_SecretPortalTeamBase(int EntryPoint);
	void OnOpenPortal__DelegateSignature();
	void OnExitPortalTutorial__DelegateSignature();
	void OnExitPortal__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
