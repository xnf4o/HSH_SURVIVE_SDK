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

// BlueprintGeneratedClass InteractionBase.InteractionBase_C
// 0x0391 (FullSize[0x06C9] - InheritedSize[0x0338])
class AInteractionBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UItemDecriptionComponent_C*                  ItemDecriptionComponent;                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         Indicator;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_InteractionType_E_InteractionType>   InteractionType;                                           // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9Z3W[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 SlateBrushNormal;                                          // 0x0370(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 SlateBrushHover;                                           // 0x03F8(0x0088) (Edit, BlueprintVisible)
	class UAnimMontage*                                MaleMontage;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                FemaleMontage;                                             // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<TEnumAsByte<E_Role_E_Role>, bool>             IsShowOutline_;                                            // 0x04A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<TEnumAsByte<E_Role_E_Role>, bool>             IsShowIndicator_;                                          // 0x04F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<TEnumAsByte<E_Role_E_Role>, bool>             UIEnable_;                                                 // 0x0540(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSlateBrush                                 SlateBrushInteract;                                        // 0x0590(0x0088) (Edit, BlueprintVisible)
	struct FText                                       SlateText;                                                 // 0x0618(0x0018) (Edit, BlueprintVisible)
	bool                                               SurvivorUseCustomIndicator;                                // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4HJY[0x7];                                     // 0x0631(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  SurvivorIndicator;                                         // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SurvivorUseCustomStencil;                                  // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8RS1[0x3];                                     // 0x0641(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SurvivorStencilValue;                                      // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HunterUseCustomIndicator;                                  // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MEQV[0x7];                                     // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  HunterIndicator;                                           // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HunterUseCustomStencil;                                    // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KJ17[0x3];                                     // 0x0659(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HunterStencilValue;                                        // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SurvivorShowOnHide;                                        // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TX9P[0x3];                                     // 0x0661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SurvivorStencilValueOnHide;                                // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HunterShowOnHide;                                          // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7NUC[0x3];                                     // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HunterStencilValueOnHide;                                  // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsOutlineShow;                                            // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsIndicatorShow;                                          // 0x0671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> CurrentResult;                                             // 0x0672(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZGP[0x1];                                     // 0x0673(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SkilcheckPerfectSection;                                   // 0x0674(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SkilcheckGreatSection;                                     // 0x067C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SkilcheckFailedSection;                                    // 0x0684(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EndAnimation;                                              // 0x068C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6D5A[0x4];                                     // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReasonFinish;                                              // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ReasonStop;                                                // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     UsedByAI;                                                  // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsInteracted_;                                             // 0x06C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass InteractionBase.InteractionBase_C");
		return ptr;
	}



	void GetSnapIKLocation(bool* bIsSnap, TEnumAsByte<Enum_IKHand_Enum_IKHand>* IKTarget, struct FVector* IKRight, struct FVector* IKLeft);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return);
	void GetFinishSection(struct FName* Return);
	void GetSkilcheckFailedSection(struct FName* Return);
	void GetSkilcheckGreatSection(struct FName* Return);
	void GetSkilcheckPerfectSection(struct FName* Return);
	void IsForceSkillCheck_(bool* bForceSkillCheck);
	void IsNotCancelProgressonMove(bool* IsNotCancel);
	void CanUseProgress(bool* UseProgress);
	void GetSpeedSkillCheck(float* Speed);
	void IsResetResult_(bool* IsReset);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void IsCanHelp_(bool* IsCan);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	bool GetStencilValueOnHide(bool bIsHunter, int* Value);
	void OutlineChangeOnHide(bool bIsHunter);
	void SetOutlineCustomSencilValue(int NewValue);
	void CanInteraction_(bool* Can_);
	bool GetStencilValue(bool bIsHunter, int* Value);
	void OutlineChangeOnShow(bool bIsHunter);
	void SpriteChangeOnShow(bool bIsHunter);
	bool GetSpriteIndicator(bool bIsHunter, class UTexture2D** Sprite);
	void SetIndicatorVisible(bool Value);
	void SetOutlineVisible(bool bValue);
	bool GetValue(TMap<TEnumAsByte<E_Role_E_Role>, bool> ListMap, bool IsHunter);
	void ForceHideUI();
	void OnCannotProgress(class AHSHCharacterBase* hshcharacter);
	void HideIndicator(class AActor* PlayerCharacter);
	void ShowIndicator(class AActor* PlayerCharacter);
	void DisableUI(class AActor* PlayerCharacter);
	void EnableUIOnRole(TEnumAsByte<E_Role_E_Role> Role);
	void DisableUIOnRole(TEnumAsByte<E_Role_E_Role> Role);
	void EnableUI(class AActor* PlayerCharacter);
	void RefreshUI();
	void MulticastEnableUIOnRole(TEnumAsByte<E_Role_E_Role> Role);
	void MulticastDisableUIOnRole(TEnumAsByte<E_Role_E_Role> Role);
	void ReceiveBeginPlay();
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void Interaction(class AHSHCharacterBase* Character);
	void OnStartProgressAction(class AHSHCharacterBase* hshcharacter);
	void ShowOutline(class AActor* PlayerCharacter);
	void HideOutline(class AActor* PlayerCharacter);
	void SetInteracted_Server();
	void ExecuteUbergraph_InteractionBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
