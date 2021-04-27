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

// BlueprintGeneratedClass HSHSpectator.HSHSpectator_C
// 0x0124 (FullSize[0x086C] - InheritedSize[0x0748])
class AHSHSpectator_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_I3XP[0x8];                                     // 0x0748(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0750(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            SpectatorCamera;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHSURPlayerController_C*                     HSHController;                                             // 0x0770(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       LookActor;                                                 // 0x0778(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Team;                                                      // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X5OV[0x7];                                     // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASurvivorBase_C*>                     SurvivorList;                                              // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Index;                                                     // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanSpawnByOwner;                                          // 0x079C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bPauseCount;                                               // 0x079D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bSpawning;                                                 // 0x079E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MRNI[0x1];                                     // 0x079F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerId;                                                  // 0x07A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timer;                                                     // 0x07A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTime;                                                   // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timer_Jane;                                                // 0x07AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_Spectator_C*                         IngameUI;                                                  // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTime_Jane;                                              // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AK26[0x4];                                     // 0x07BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSURHUD_C*                                  HUD;                                                       // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DeathCount;                                                // 0x07C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReadyInput;                                               // 0x07CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bTriggerRemoveSoul;                                        // 0x07CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D1C6[0x2];                                     // 0x07CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InterpSpeed;                                               // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JQBZ[0xC];                                     // 0x07D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LookTransfrom;                                             // 0x07E0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  ResetTransfrom;                                            // 0x0810(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NetUpdate;                                                 // 0x0840(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsPossessed;                                              // 0x0844(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K10Y[0x3];                                     // 0x0845(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    AimRotation;                                               // 0x0848(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     AimLocation;                                               // 0x0854(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsGameInProgress;                                         // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsAI;                                                     // 0x0861(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A3CL[0x2];                                     // 0x0862(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AlphaArmLength;                                            // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CacheArmLength;                                            // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSHSpectator.HSHSpectator_C");
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
	float GetOptionSensitivity();
	void RefreshTransform(float DeltaTime, bool SetLocation, bool SetRotaion);
	void GetterViewTarget(class APawn** View);
	void LookAtTo(class AActor* NewViewTarget);
	void GetCharacterList(TArray<class ASurvivorBase_C*>* SurvivorList);
	void RefreshCharacterList();
	void FilterSurvivor(TArray<class ASurvivorBase_C*>* Survivors, TArray<class ASurvivorBase_C*>* Return);
	void OnRep_NetUpdate();
	void OnRep_bCanSpawnByOwner();
	void CapIndex(int* Index, TArray<class ASurvivorBase_C*>* SurvivorList);
	void InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Spectator_Respawn_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Spectator_Ping_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Exit_Game_K2Node_InputActionEvent_1(const struct FKey& Key);
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
	void CreateUI(class APlayerController* PlayerController);
	void RemoveUI();
	void UpdateUI(const struct FS_UISpectator& Data);
	void Spawning();
	void RemoveSoulInHand();
	void RemoveSoulInScene();
	void ForcePingSoul();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
	void Movement_Turn(float AxisValue);
	void Movement_LookUp(float AxisValue);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void NextSpactator();
	void BackSpactator();
	void ReceiveTick(float DeltaSeconds);
	void MulticastSetTransfrom(const struct FTransform& Transfrom);
	void StartSpectator();
	void OnSpawning(const struct FTransform& InTransform);
	void ClientFadeCameraSpawn();
	void SetPauseCount(bool bPauseCount);
	void OnCharacterChange();
	void SetTickEnabled(bool bEnabled);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_HSHSpectator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
