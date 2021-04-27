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

// BlueprintGeneratedClass SurvivorBase.SurvivorBase_C
// 0x0550 (FullSize[0x0F80] - InheritedSize[0x0A30])
class ASurvivorBase_C : public AHSHCharacterSurvivorBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                 // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioInjured;                                              // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioExhausted;                                            // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProgressClientComponent_C*                  ProgressClientComponent;                                   // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UJokeAudioSurvivorComponent_C*               JokeAudioSurvivorComponent;                                // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera1;                                                   // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm1;                                                // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExecutionSurvivorComponent_C*               ExecutionSurvivorComponent;                                // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioChaseHeart;                                           // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActivityComponent_C*                        ActivityComponent;                                         // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCommunicationWheelComponent_C*              CommunicationWheelComponent;                               // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStatusWidgetComponent_C*                    StatusWidgetComponent;                                     // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPerkHandleSurvivorComponent_C*              PerkHandleSurvivorComponent;                               // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChaseAudioComponent_C*                      ChaseAudioComponent;                                       // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioChaseLoop;                                            // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioChaseBegin;                                           // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPingSurvivorComponent_C*                    PingSurvivorComponent;                                     // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestComponent_C*                           QuestComponent;                                            // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilityTrapComponent_C*                     AbilityTrapComponent;                                      // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractComponent_C*                        InteractComponent;                                         // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOutlineComponent_C*                         OutlineComponent;                                          // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            OutlineRadius;                                             // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              RotateMeshToDefaultTimeline_Alpha_719A16234C2CA735CCB22A9CF1E94765; // 0x0B00(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             RotateMeshToDefaultTimeline__Direction_719A16234C2CA735CCB22A9CF1E94765; // 0x0B04(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_17XZ[0x3];                                     // 0x0B05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RotateMeshToDefaultTimeline;                               // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LookAtCrosshairTimeline__Direction_93213575475BC288C54B70BAEF202EE6; // 0x0B10(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UBND[0x7];                                     // 0x0B11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LookAtCrosshairTimeline;                                   // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dissolve_Alpha_E9E032D74B98C26C2D48DDAA8E1E74C6;           // 0x0B20(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Dissolve__Direction_E9E032D74B98C26C2D48DDAA8E1E74C6;      // 0x0B24(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0ZKX[0x3];                                     // 0x0B25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Dissolve;                                                  // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_E2DA146C4A239839D05F8489E6DBF005;         // 0x0B30(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_E2DA146C4A239839D05F8489E6DBF005;    // 0x0B34(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_65MD[0x3];                                     // 0x0B35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delay_Alpha_FCBC07E64022BCD3D36968B02BCF27D3;              // 0x0B40(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Delay__Direction_FCBC07E64022BCD3D36968B02BCF27D3;         // 0x0B44(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VC7U[0x3];                                     // 0x0B45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Delay;                                                     // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeControl_Alpha_1167A1C0459A9B058BC495948E989F02;        // 0x0B50(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeControl__Direction_1167A1C0459A9B058BC495948E989F02;   // 0x0B54(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6SMN[0x3];                                     // 0x0B55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeControl;                                               // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWalking;                                                 // 0x0B60(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrouch;                                                  // 0x0B61(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSprint;                                                  // 0x0B62(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SFZO[0x1];                                     // 0x0B63(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseLookUpRate;                                            // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTurnRate;                                              // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsKnockdown;                                               // 0x0B6C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsInjure;                                                  // 0x0B6D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsHiding;                                                  // 0x0B6E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsUsingItem;                                               // 0x0B6F(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearchingItem;                                           // 0x0B70(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_13OI[0x3];                                     // 0x0B71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   CacheTouchLocation2D;                                      // 0x0B74(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InputCore_ETouchIndex>                 CacheFingerIndex;                                          // 0x0B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTouch;                                                   // 0x0B7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BG3O[0x2];                                     // 0x0B7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CrouchSpeed;                                               // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkSpeedPercent;                                          // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BackwardSpeedPercent;                                      // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InjuredSprintAffectSpeed;                                  // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsForward_;                                                // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2JFX[0x3];                                     // 0x0B91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InjuredWalkAffectSpeed;                                    // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnMoveToCompleted;                                         // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FS_Pickable                                 CurrentPickItem;                                           // 0x0BA8(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                TempTag;                                                   // 0x0BD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HitParticle;                                               // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAttacking;                                               // 0x0BE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9BRC[0x3];                                     // 0x0BE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttackType;                                                // 0x0BE4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FHSHItemSlot, class UHSHItem*>         HSHInventory;                                              // 0x0BE8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAbilityBaseComponentNative*>         CacheAbilityComponent;                                     // 0x0C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AHunterBase_C*                               HunterRef;                                                 // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APreviewMeshActor_C*                         RightPreviewMesh;                                          // 0x0C50(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APreviewMeshActor_C*                         LeftPreviewMesh;                                           // 0x0C58(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                HitAnimMontage;                                            // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInteractionBase_C*                          InteractionCache;                                          // 0x0C68(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPingHunterComponent_C*                      PingHunterCache;                                           // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FallingDistance;                                           // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KA4E[0x4];                                     // 0x0C7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                FallingMontage;                                            // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFirstTouchGround;                                       // 0x0C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8XPI[0x7];                                     // 0x0C89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTakeDamage;                                              // 0x0C90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsHideMesh;                                                // 0x0CA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_VJGP[0x7];                                     // 0x0CA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  DataTableFootStep;                                         // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                FootStepChannal;                                           // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LBW0[0x3];                                     // 0x0CB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FootStepDistance;                                          // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCheckStartSprint;                                         // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsAiming;                                                 // 0x0CB9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_B8LL[0x6];                                     // 0x0CBA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIngame_NotifyText_C*                        Widget_HiddenNotify;                                       // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AHunterBase_C*>                       HunterHitActor;                                            // 0x0CC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsLockingItem;                                             // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsOnLockingItem;                                           // 0x0CD9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_7KV4[0x2];                                     // 0x0CDA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CheckLockingLockItem;                                      // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraShakeMagnitude;                                      // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bMovingHoldForward;                                        // 0x0CE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bMovingHoldRight;                                          // 0x0CE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BJCS[0x2];                                     // 0x0CE6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CacheFallingLocation;                                      // 0x0CE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsLookBack_;                                              // 0x0CF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsExitPortal;                                             // 0x0CF5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LVYC[0x2];                                     // 0x0CF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefualtSpringSocketY;                                      // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefualtHalfHeight;                                         // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    PPI_Blur;                                                  // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnUseItem;                                                 // 0x0D08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDropItem;                                                // 0x0D18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPrimaryAssetId                             CharacterID;                                               // 0x0D28(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                DropMontage;                                               // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // 0x0D40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsSnapRotation;                                           // 0x0D41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S8KN[0x6];                                     // 0x0D42(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnActionAttack;                                            // 0x0D48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnActionUseItem;                                           // 0x0D58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnChasing;                                                 // 0x0D68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnScaned;                                                  // 0x0D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnRitualDone;                                              // 0x0D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                SeeAnyOnes;                                                // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0U3S[0x4];                                     // 0x0D9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAttackSuccess;                                           // 0x0DA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSeeAnyOneChanged;                                        // 0x0DB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnInteractionDone;                                         // 0x0DC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnInteractionStart;                                        // 0x0DD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class USoundBase*>                          InjuredSound;                                              // 0x0DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundBase*>                          ExhaustedSound;                                            // 0x0DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsExhausted;                                               // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DZLA[0x3];                                     // 0x0E01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CameraMode;                                                // 0x0E04(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSnapLocationSuccess;                                     // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AHSURPlayerController_C*                     HSURPlayerController;                                      // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMinionBase_C*                       MinionCache;                                               // 0x0E20(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClientTakeDamage;                                        // 0x0E28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCharacterFall;                                           // 0x0E38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MoveSpeed;                                                 // 0x0E48(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0T1J[0x4];                                     // 0x0E4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinishedVent;                                            // 0x0E50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnStopInteraction;                                         // 0x0E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFinishInteraction;                                       // 0x0E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnStopUseItem;                                             // 0x0E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnActionUseItemFinish;                                     // 0x0E90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              TimeAFK;                                                   // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NEC1[0x4];                                     // 0x0EA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCharacterDie;                                            // 0x0EA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsGameStarted;                                            // 0x0EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M9SX[0x7];                                     // 0x0EB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_CacheVentilator                          CacheVentilator;                                           // 0x0EC0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSurvivorDoorStun;                                        // 0x0F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAnimMontage*                                BreakMontage;                                              // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                TremorReactionMontage;                                     // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOnVent;                                                  // 0x0F20(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BUGL[0x7];                                     // 0x0F21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                UpdateTransformTimer;                                      // 0x0F28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_CollisionMovement                        CollisionMovement;                                         // 0x0F30(0x0002) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GXD0[0x2];                                     // 0x0F32(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_AimTransform                             AimTransformInt;                                           // 0x0F34(0x0018) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LockTickTimer;                                             // 0x0F4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DelayInput;                                                // 0x0F50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Gender_E_Gender>                     Gender;                                                    // 0x0F51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PendingHide;                                               // 0x0F52(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KIPM[0x1];                                     // 0x0F53(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CacheLookAtCrosshair;                                      // 0x0F54(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CacheSocketOffset;                                         // 0x0F58(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrosshairTraceLength;                                      // 0x0F64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<HSHSurvivor_EPickableType>             CurrentItemType;                                           // 0x0F68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0I9Q[0x7];                                     // 0x0F69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHiddenSurvivor;                                          // 0x0F70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SurvivorBase.SurvivorBase_C");
		return ptr;
	}



	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
	void IsCanHelp_(bool* IsCan);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void IsResetResult_(bool* IsReset);
	void GetSpeedSkillCheck(float* Speed);
	void CanUseProgress(bool* UseProgress);
	void IsNotCancelProgressonMove(bool* IsNotCancel);
	void IsForceSkillCheck_(bool* bForceSkillCheck);
	void GetSkilcheckPerfectSection(struct FName* Return);
	void GetSkilcheckGreatSection(struct FName* Return);
	void GetSkilcheckFailedSection(struct FName* Return);
	void GetFinishSection(struct FName* Return);
	void IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return);
	void GetCurrentPickable(struct FS_Pickable* CurrentPickable);
	void GetExecuteCameraTransform(struct FTransform* Return);
	void isExecution(bool* Return);
	void GetAimTransform(struct FTransform* Return);
	void IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag);
	void GetCharacterID(struct FPrimaryAssetId* AssetID);
	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void GetCurrentItemID(struct FPrimaryAssetId* AssetID);
	void GetMainCameraComponent(class UCameraComponent** CameraComponent);
	void CheckHunterInCrosshair(bool* InCamera);
	bool ShouldInteractStartDelay(class AInteractionBase_C* Interact);
	void OnRep_CurrentPickItem();
	void OnRep_IsHideMesh();
	void OnRep_CollisionMovement();
	void GetMontageProgress(class UHSHPickableItem* HSHPickable, class UAnimMontage** Anim_Montage);
	void InitBack();
	void InitHead();
	struct FTransform GetSpawnSoulLocation();
	bool IsGameStarted();
	bool IsHaveAnyAxis();
	void OnRep_IsKnockdown();
	void OnRep_bIsAiming();
	void OnRep_MoveSpeed();
	void IsBlockKeys(const struct FKey& Key, bool* Return);
	void CheckMovementModified(float AxisIn, float* AxisOut);
	void GetPossessMinion(class ASurvivorMinionBase_C** MinionCache);
	void ResetPossessMinion();
	void SetUpPossessMinion(class ASurvivorMinionBase_C* Minion);
	void TryGetHSURPlayerController(class AHSURPlayerController_C** HSURPlayerController);
	void CheckingInitStartGame();
	void GetOverlapingCharacter(TArray<class AActor*>* OutActors);
	void InitializeCameraPostProcess();
	void DeinitializePreviewMeshInHand();
	void GetExecutionSurvivorComponent(class UExecutionSurvivorComponent_C** ExecutionSurvivorComponent);
	void GetProgressComponent(class UProgressClientComponent_C** ProgressComponent);
	void IsLookBack(bool* Return);
	void OnDroptItemEvent();
	void OnCollectItemEvent();
	void GetOptionToggleCounch(TEnumAsByte<E_ControlType_E_ControlType>* ToggleCounch);
	void GetOptionToggleSprint(TEnumAsByte<E_ControlType_E_ControlType>* ToggleSprint);
	void GetOptionSensitivity(float* Sensitivity);
	void ResetMovingHold();
	bool IsNotHoldMovementInput();
	void CheckStopMovement_Item(const struct FS_Pickable& Item, bool bForceStop);
	void IsPickItem(bool* bIsPick);
	void CheckMovingHold();
	void CheckStopMovement(class UObject* Interaction);
	void GetPlayerID(int* PlayerId);
	void OnRep_IsOnLockingItem();
	bool IsContainHitActor(class AHunterBase_C* hunter);
	void ClearHitActor();
	void AddedHitActor(class AHunterBase_C* hunter);
	void UpdateFOV();
	void GetFootStepSound(struct FS_FootStepSurvivor* OutRow);
	bool FindFlood(struct FHitResult* OutHit);
	void DebugTagContainer(const struct FGameplayTagContainer& TagContainer, struct FString* Str);
	bool IsCharacterSprint();
	void SetVisiblePreviewMeshInHand(bool Visibility);
	void DebugAudio();
	void TryGetPingHunterComponent(class UPingHunterComponent_C** PingHunterCache);
	void TryGetHunter(class AHunterBase_C** HunterRef);
	void OnHitReaction(class UAnimMontage* AnimMontage, TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction);
	void InitializePreviewMeshInHand(class APreviewMeshActor_C** RightPreviewMesh, class APreviewMeshActor_C** LeftPreviewMesh);
	void UpdatePreviewMeshInHand(class UHSHPickableItem* PickableObject);
	void CheckCurrentItem(float DurabilityLeft, bool* RemoveItem_);
	void AddInventory(TMap<struct FHSHItemSlot, class UHSHItem*>* Inventory, const struct FHSHItemSlot& Slot, class UHSHItem* NewItem, TMap<struct FHSHItemSlot, class UHSHItem*>* TestInventory);
	void OnAttackCollisionOverlap(class AActor* OtherActor, const struct FGameplayTag& EventTag, bool* IsSend);
	void UpdateDurabiilty(bool UseAllDurability_, float DurabilityLeft, struct FS_Pickable* CurrentPickItem);
	void GetSurvivalSpeed(float Axis, float BackwardAxis, float* Speed);
	void CheckAction(bool* DoingProgress);
	void RegenStamina();
	void DrainStamina();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Dissolve__FinishedFunc();
	void Dissolve__UpdateFunc();
	void Delay__FinishedFunc();
	void Delay__UpdateFunc();
	void FadeControl__FinishedFunc();
	void FadeControl__UpdateFunc();
	void LookAtCrosshairTimeline__FinishedFunc();
	void LookAtCrosshairTimeline__UpdateFunc();
	void RotateMeshToDefaultTimeline__FinishedFunc();
	void RotateMeshToDefaultTimeline__UpdateFunc();
	void InpActEvt_Survivor_UseItem_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_Survivor_Crouch_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_Survivor_Sprint_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Survivor_Skillcheck_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpTchEvt_Moved(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Released(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_Survivor_DropItem_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_General_Ping_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Survivor_Aiming_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Survivor_ForcePingHunter_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker1_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker2_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker3_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker4_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker5_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker6_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker7_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Survivor_Sticker8_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Survivor_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void SendMeleeDistance(float Distance, float Width);
	void EnableCanSeeSpecter(bool Enable);
	void TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section);
	void UpdateSurvivalCrosshair();
	void UpdatePickableType();
	void MulticastSpawnParticle(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, Engine_EPSCPoolMethod PoolingMethod);
	void ClientAddDesignEvent(const struct FString& eventId);
	void ClientAddDesignEventWithValue(const struct FString& eventId, float Value);
	void SetCameraMode(int CameraMode);
	void ChangeMode_0_LockRotate();
	void ChangeMode_1_UnlockRotate();
	void CheckInfiniteStaminaEffect();
	void MulticastSetBloodEffect(bool IsInjury);
	void MulticastOnResurrect();
	void SetMaterialsEffect(float Alpha, const struct FLinearColor& Color);
	void EnableDissolveEffect(bool bIsEnable);
	void MulticastOnDissolve();
	void NotifyItemIcon();
	void EnableFogManager();
	void UpdateFogManager();
	void OnAttributeChange(const struct FGameplayAttribute& Attribute, float NewValue);
	void OnGameplayEffectApply(const struct FGameplayTagContainer& Tags);
	void SendOnGameplayEffectApply(const struct FGameplayTagContainer& Tags);
	void ClientReceiveGameplayEffectApply(const struct FGameplayTagContainer& GameplayTags);
	void ServerPlayAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool Attach);
	void MulticastAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool Attach);
	void PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter);
	void MulticastInjuredSound(bool Active);
	void MulticastExhaustedSound(bool Active);
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void EnableOutlineComponent();
	void ReceiveUnpossessed(class AController* OldController);
	void MulticastInitSpeed();
	void EnableInteractComponent();
	void OnProgressFailed();
	void EnableChaseAudioComponent();
	void OnCharacterChange();
	void ShowSurvivorAura();
	void OnStartProgressAction(class AHSHCharacterBase* hshcharacter);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void OnCannotProgress(class AHSHCharacterBase* hshcharacter);
	void OnTriggerChasing_Event();
	void ServerChasing();
	void OnRequestProgress_Event(class UObject* Target, float progress);
	void ServerRequestProgress();
	void Emit(class UParticleSystem* EmitterTemplate);
	void OnTriggerRitualActivity(float ContributePercent);
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void HotfixedHiddenSpecter(class AHunterBase_C* hunter);
	void DoDamage(const struct FHitResult& HitInfo);
	void SpawnHitParticleAndSound(class AHunterBase_C* hunter);
	void OnEnableAttackCollision();
	void OnDisableAttackCollision();
	void OnEndAttackAnimation();
	void BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk);
	void EndAttackCollision();
	void EndAttackAnimation();
	void DoAttack(int AttackType);
	void Injure();
	void PerfromAttack(int AttackType);
	void ChooseAttackSection(int Selection);
	void OnHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	void CancelAbility();
	void GameStatisticMelee();
	void GameStatisticHealthFull();
	void CameraShake(class UClass* ShakeClass, float Value);
	void OwningTakeOnDamage();
	void NotifyCameraShake(class UClass* CameraShake, float Magnitude);
	void OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser);
	void SlowAnimMontage();
	void MulticastCloseBodyBlock(float Duration);
	void ShowNotifyText(const struct FText& Text, float PlayRate);
	void PerformHitReaction(class AHSHCharacterBase* CauserCharacter, class AActor* CauserActor);
	void ShowNotifyTextPortal(const struct FText& Text, float FadeTime, float ShowTime);
	void NotifyAfterGetHit();
	void TakeOnDamage();
	void StartLookAtCrosshair();
	void StartRotateMeshToDefault();
	void ServerActivateGE(class UClass* GameplayEffect);
	void OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_);
	void OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags);
	void ServerActivateGEWithMagnitude(class UClass* GameplayEffectClass, const struct FGameplayTag& DataTag, float Magnitude);
	void AddedItemPassiveEffect(const struct FS_Pickable& PickableStruct);
	void RemoveItemPassiveEffect(const struct FS_Pickable& PickableStruct);
	void ServerSetWalkSpeed(float Axis);
	void K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void CheckFallingDamage();
	void OnLanded(const struct FHitResult& Hit);
	void RefreshFallingLocation();
	void ChangeCameraSide();
	void MulticastChangeCameraSide();
	void ClientSetWalkSpeed(float Axis);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4(float AxisValue);
	void Movement_Forward(float AxisValue);
	void Movement_MoveRight(float AxisValue);
	void Movement_Turn(float AxisValue);
	void Movement_LookUp(float AxisValue);
	void Action_Interaction();
	void Action_UseItem();
	void Action_ToggleCrouch();
	void Action_SprintPress();
	void Action_SprintReleased();
	void Action_SprintToggle();
	void Action_SkillCheck(const struct FKey& Key);
	void Action_DropItem();
	void Action_Ping();
	void CheckingInteractState();
	void CheckingBlockAction();
	void Action_Aiming();
	void CheckingLockItem();
	void Action_ChangeCameraSide();
	void Action_PingEnemy();
	void RunSticker();
	void Action_Crouch();
	void Action_Uncrouch();
	void ResetLockItem();
	void StartDelayInput(float Duration);
	void S_Survivor_ActiveSkill();
	void Death(class AHunterBase_C* KilledBy);
	void UseItem();
	void ServerInteraction(class AInteractionBase_C* InteractionItem);
	void Crouching(float Axis);
	void sprint(float Axis);
	void Walk(float Axis);
	void ReceiveTick(float DeltaSeconds);
	void CollectItem(class APickableItemBase_C* Item, const struct FPrimaryAssetId& ItemId);
	void MovePlayerTo(class USceneComponent* Component, const struct FVector& Location, const struct FRotator& Rotation, float OverTime);
	void BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HunterFarRadius_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ItemOutline(class AActor* Item);
	void DeleteOutline(class AActor* Item);
	void ActionCrouch();
	void ActionUnCrouch();
	void MulticastSetMeshOwnerSee(bool bNewOnlyOwnerSee);
	void AddedActorToOutlineComponent(class AActor* Actor);
	void DisableandEnableInputAfterDelay(float Delay);
	void TeleportToVentilator(const struct FVector& DestLocation, const struct FRotator& DestRotation, const struct FS_Ventilator& PairVentilator, class AVentilatorManager_C* VentilatorMechanic, int Index);
	void FadeCamera(float FromAlpha, float ToAlpha, float Duration, bool bShouldFadeAudio, bool bHoldWhenFinished);
	void SetActorCollision(TEnumAsByte<Engine_ECollisionEnabled> Collsion, TEnumAsByte<Engine_EMovementMode> NewMovementMode);
	void CallUseItem();
	void CheckItem();
	void UpdateItemDurability(bool UseAllDurability_, float UseDurability);
	void DropItem(bool DropItemOnly);
	void MulticastSetMeshHiddenInGame(bool bHidden);
	void MulticastPlayDropSound();
	void MulticastPlayCollectSound();
	void ForcePlayMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	void SetActorCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> NewResponse);
	void StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void ServerStopInteraction(class AInteractionBase_C* Interact);
	void ExitHiddenPlace();
	void OnStopUsingItem();
	void RemoveItem();
	void ForceStopMontage(class UAnimMontage* AnimMontage);
	void OnExecutionSuccess();
	void ClientRotationToLocation(class APlayerController* PlayerController, const struct FVector& BaseRelativeLocation, const struct FVector& TargetRelativeLocation, bool bEaseOut, bool bEaseIn, float OverTime);
	void SnapToInteraction(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, const struct FVector& TargetLookAtLocation, bool bEaseOut, bool bEaseIn, float OverTime);
	void ClientMoveTo(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime);
	void ClientSendTutorialEvent(const struct FName& EventName);
	void ClientChangeToHideCamara(class AActor* Actor, float BlendTime, float BlendExp);
	void EnterAiming();
	void ExitAiming();
	void FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void ServerFinishInteraction(class AInteractionBase_C* Interact);
	void TeleportPlayer(const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void MulticastJumpMontage(const struct FName& SectionName);
	void ClientResetMovingHold();
	void RotateActorTo(const struct FRotator& Rotation);
	void LocationTo(const struct FVector& Location);
	void Interaction(class AInteractionBase_C* InteractionItem);
	void ShowSpawnLocation(bool bIsShow);
	void ForceJumpCurrentMontage(const struct FName& SectionName);
	void ClientCrouch(float Axis);
	void ClientWalk(float Axis);
	void ClientSprint(float Axis);
	void OnHunterScan();
	void OnRitualStateChanged(int State);
	void ClientSendEventSnap();
	void ForceRemoveItem();
	void ClientFinishInteraction(const struct FString& Reason);
	void ClientStopInteraction(const struct FString& Reason);
	void ReportAFK();
	void ClientTrackDeathEvent();
	void BindUseItemEvent();
	void UnbindUseItemEvent();
	void UpdateAimTransform();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void SetMeshHiddenInGames(bool NewHidden, bool bPropagateToChildren);
	void SetMeshOwnerSees(bool bNewOnlyOwnerSee);
	void HideMesh(bool IsHide);
	void ForceCollectItem(const struct FS_Pickable& CurrentPickItem);
	void CallExitHiddenPlace();
	void ExecuteUbergraph_SurvivorBase(int EntryPoint);
	void OnHiddenSurvivor__DelegateSignature(bool IsHidden);
	void OnSurvivorDoorStun__DelegateSignature();
	void OnCharacterDie__DelegateSignature();
	void OnActionUseItemFinish__DelegateSignature();
	void OnStopUseItem__DelegateSignature();
	void OnFinishInteraction__DelegateSignature(class ASurvivorBase_C* survivor);
	void OnStopInteraction__DelegateSignature(class ASurvivorBase_C* survivor);
	void OnFinishedVent__DelegateSignature();
	void OnCharacterFall__DelegateSignature();
	void OnClientTakeDamage__DelegateSignature();
	void OnSnapLocationSuccess__DelegateSignature();
	void OnInteractionStart__DelegateSignature(bool bIsProgress);
	void OnInteractionDone__DelegateSignature();
	void OnSeeAnyOneChanged__DelegateSignature(int Number);
	void OnAttackSuccess__DelegateSignature();
	void OnRitualDone__DelegateSignature(int State);
	void OnScaned__DelegateSignature();
	void OnChasing__DelegateSignature();
	void OnActionUseItem__DelegateSignature();
	void OnActionAttack__DelegateSignature();
	void OnDropItem__DelegateSignature(class APickableItemBase_C* Item);
	void OnUseItem__DelegateSignature(const struct FGameplayTagContainer& Tags);
	void OnTakeDamage__DelegateSignature();
	void OnMoveToCompleted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
