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

// BlueprintGeneratedClass HunterBase.HunterBase_C
// 0x03EC (FullSize[0x0E1C] - InheritedSize[0x0A30])
class AHunterBase_C : public AHSHCharacterHunterBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_DeadSmoke;                                               // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioChase;                                                // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UJokeAudioHunterComponent_C*                 JokeAudioHunterComponent;                                  // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExecutionSpecterComponent_C*                ExecutionSpecterComponent;                                 // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioState;                                                // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioHiddenLoop;                                           // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActivityComponent_C*                        ActivityComponent;                                         // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Bloodseek_R;                                             // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Bloodseek_L;                                             // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPerkHandleHunterComponent_C*                PerkHandleHunterComponent;                                 // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBloodSeekComponent_C*                       BloodSeekComponent;                                        // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            OutlineCollision;                                          // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOutlineComponent_C*                         OutlineComponent;                                          // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStatusWidgetComponent_C*                    StatusWidgetComponent;                                     // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPingHunterComponent_C*                      PingHunterComponent;                                       // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharacterPhysicComponent_C*                 CharacterPhysicComponent;                                  // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractComponent_C*                        InteractComponent;                                         // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             LookAtCrosshairTimeline__Direction_4E7E0F87463D7EFA39C80686BA9F690C; // 0x0AE0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3A9J[0x7];                                     // 0x0AE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LookAtCrosshairTimeline;                                   // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Bodyfade_Alpha_0B09ED2041B4907FE5FDC5BBFEF99802;  // 0x0AF0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Bodyfade__Direction_0B09ED2041B4907FE5FDC5BBFEF99802; // 0x0AF4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6EH8[0x3];                                     // 0x0AF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Bodyfade;                                         // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_SlowAnimation_Rate_B173232F48C17151A9696CB94F389941; // 0x0B00(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_SlowAnimation__Direction_B173232F48C17151A9696CB94F389941; // 0x0B04(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BJ02[0x3];                                     // 0x0B05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_SlowAnimation;                                    // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Camera_Alpha_044DCB924515FD9D34D51387A7A46A49;    // 0x0B10(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Camera__Direction_044DCB924515FD9D34D51387A7A46A49; // 0x0B14(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LP16[0x3];                                     // 0x0B15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Camera;                                           // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_ColorAlpha_1ED7B53C4DBEF3A011661188980F1AEF;    // 0x0B20(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_RadiusAlpha_1ED7B53C4DBEF3A011661188980F1AEF;   // 0x0B24(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_1ED7B53C4DBEF3A011661188980F1AEF;         // 0x0B28(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_1ED7B53C4DBEF3A011661188980F1AEF;    // 0x0B2C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8TZ1[0x3];                                     // 0x0B2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterShield_RadiusAlpha_6E05719C4F09A33877AC589288D81418;  // 0x0B38(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterShield_Alpha_6E05719C4F09A33877AC589288D81418;        // 0x0B3C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             OuterShield__Direction_6E05719C4F09A33877AC589288D81418;   // 0x0B40(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S1YI[0x7];                                     // 0x0B41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          OuterShield;                                               // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_FOV_Alpha_85995D9B4525B2D3A62EF6BCFA5DDD60;       // 0x0B50(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_FOV_FOV_85995D9B4525B2D3A62EF6BCFA5DDD60;         // 0x0B54(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_FOV__Direction_85995D9B4525B2D3A62EF6BCFA5DDD60;  // 0x0B58(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_706Q[0x7];                                     // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_FOV;                                              // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTurnRate;                                              // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate;                                            // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxShowScannedTime;                                        // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VWWO[0x4];                                     // 0x0B74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             HitParticle;                                               // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   CacheTouchLocation2D;                                      // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CacheTouchLocation;                                        // 0x0B88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate_Moblie;                                     // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTurnRate_Mobile;                                       // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InputCore_ETouchIndex>                 CacheFingerIndex;                                          // 0x0B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTouch;                                                   // 0x0B9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GVOL[0x2];                                     // 0x0B9E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayWhenDestroyItem;                                      // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CameraMode;                                                // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnDeath;                                                   // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                                TempTag;                                                   // 0x0BB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAttacking;                                               // 0x0BC0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDie;                                                     // 0x0BC1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAtkHit;                                                  // 0x0BC2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTraped;                                                  // 0x0BC3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPerkActive;                                              // 0x0BC4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T5YB[0x3];                                     // 0x0BC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                AtkHitMontage;                                             // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FHSHItemSlot, class UHSHItem*>         TestInventory;                                             // 0x0BD0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                HitReactAnimMontage;                                       // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             ActivePerk;                                                // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AInteractionBase_C*                          CacheDestroyObject;                                        // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTakeDamage;                                              // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsCanExecution;                                           // 0x0C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2WXS[0x3];                                     // 0x0C51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FootStepDistance;                                          // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                FootStepChannal;                                           // 0x0C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OG6L[0x7];                                     // 0x0C59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  DataTableFootStep;                                         // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHiddenEffect_C*                             HiddenEffect;                                              // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_NotifyText_C*                        Widget_HiddenNotify;                                       // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHiddenNotifyEffect_C*                       Actor_HiddenNotify;                                        // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    PPI_Blur;                                                  // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimerScaned;                                               // 0x0C88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                HunterRitualState;                                         // 0x0C90(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SocketOffsetCache;                                         // 0x0C94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetArmLenght;                                           // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockHidden;                                               // 0x0CA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_82FB[0x3];                                     // 0x0CA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                LockHiddenTimer;                                           // 0x0CA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             CharacterID;                                               // 0x0CB0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                CounterCheckAtk;                                           // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHiddenWorking;                                            // 0x0CC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_81YB[0x3];                                     // 0x0CC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HiddenCounter;                                             // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M1MF[0x4];                                     // 0x0CCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnReciveDamaged;                                           // 0x0CD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnActionAttack;                                            // 0x0CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnAttackSuccess;                                           // 0x0CF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnEnterInvisible;                                          // 0x0D00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnExitInvisible;                                           // 0x0D10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnScaned;                                                  // 0x0D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnActionActivePerk;                                        // 0x0D30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnActionInteraction;                                       // 0x0D40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnActionImmuntity;                                         // 0x0D50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnRitualDone;                                              // 0x0D60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                SeeAnyOnes;                                                // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H1MO[0x4];                                     // 0x0D74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSeeAnyOneChanged;                                        // 0x0D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsAttackLocking;                                          // 0x0D88(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WLVZ[0x7];                                     // 0x0D89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    ChaseFX;                                                   // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTraped;                                                  // 0x0D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnShowTextDmg;                                             // 0x0DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MoveSpeed;                                                 // 0x0DB8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAFK;                                                   // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsGameStarted;                                            // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AQNC[0x7];                                     // 0x0DC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerUpdateAimTransform;                                   // 0x0DC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_CollisionMovement                        CollisionMovement;                                         // 0x0DD0(0x0002) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4X95[0x2];                                     // 0x0DD2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_AimTransform                             AimTransformInt;                                           // 0x0DD4(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DelayInput;                                                // 0x0DEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DG31[0x3];                                     // 0x0DED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ExitSpecterHidden;                                         // 0x0DF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHiddenCountdown;                                         // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3VS3[0x7];                                     // 0x0DF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Accessory_Head;                                            // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Accessory_Back;                                            // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FOV;                                                       // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CacheLookAtCrosshair;                                      // 0x0E14(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrosshairTraceLength;                                      // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HunterBase.HunterBase_C");
		return ptr;
	}



	void GetCurrentPickable(struct FS_Pickable* CurrentPickable);
	void GetExecuteCameraTransform(struct FTransform* Return);
	void isExecution(bool* Return);
	void GetAimTransform(struct FTransform* Return);
	void IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag);
	void GetCharacterID(struct FPrimaryAssetId* AssetID);
	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void GetCurrentItemID(struct FPrimaryAssetId* AssetID);
	void GetMainCameraComponent(class UCameraComponent** CameraComponent);
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
	void CheckPlayerInCrossHair(bool* InCamera);
	void OnRep_CollisionMovement();
	void InitBack();
	void InitHead();
	bool IsGameStarted();
	void ApplyDeleySpecter(float DelayDuration);
	void GetReachRange(float* ReachRange);
	void SetMaterialsAlpha(float ParameterValue);
	void SetMaterialsColor(const struct FLinearColor& InLinearColor);
	float GetScanTime();
	bool IsHaveAnyAxis();
	bool IsStunned();
	void OnRep_MoveSpeed();
	void CheckingInitStartGame();
	void GetSurvivorNearestDistance(float* Return, class AHSHCharacterSurvivorBase** NearSurvivor);
	void CheckDelaySpecter(float Distance, float* DelayDuration);
	void GetExecutionSpecterComponent(class UExecutionSpecterComponent_C** ExecutionSpecterComponent);
	void GetOptionSensitivity(float* Sensitivity);
	bool GetCheckHoldRight();
	bool GetCheckHoldForward();
	void IsInExecution(bool* bIsExecution);
	void OnTrapDamged();
	void IsBlockKeys(const struct FKey& Key, bool* Return);
	void IsBlockAction(bool* Return);
	float PlayAttackHitAnimation(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	void LockHiddenModeButton();
	void UnlockHiddenModeButton();
	void SetBodyHalfHeight(float ParameterValue);
	void NextHunterRitualState(int* State);
	void GetHunterRitualState(int* State);
	void CommitSpecterCooldown();
	bool GetSpecterCooldown(float* TimeRemaining, float* Duration);
	bool IsBlockMove();
	bool IsBlockSpecter();
	bool IsInStun();
	bool IsInSpecter();
	void SurvivorInRange(float Distance, bool* bInRange);
	void GetFootStepSound(struct FS_FootStepHunter* Out_Row);
	bool FindFlood(struct FHitResult* OutHit);
	bool IsBlockAttack();
	void DebugBellePortal();
	bool IsBlockActivePerk();
	bool IsBlockScan();
	bool IsBlockTeleport();
	bool IsActiveAbilitiesWithTags(const struct FGameplayTagContainer& AbilityTags);
	void CheckDoorDestroyable(class AActor* Actor, bool* isCanDestroy_);
	void OnHitReaction(class UAnimMontage* AnimMontage, TEnumAsByte<E_DmgDirection_E_DmgDirection> Direction);
	void DebugHealth(float Dmg, bool InBool);
	void ResetAttackState(bool AndSendToServer);
	void AddInventory(TMap<struct FHSHItemSlot, class UHSHItem*> Inventory, const struct FHSHItemSlot& Slot, class UHSHItem* NewItem, TMap<struct FHSHItemSlot, class UHSHItem*> TestInventory);
	void GetHeavyAtkGE(class UClass** GameplayEffect);
	void StopMontage();
	void OnAttackCollisionOverlap(class AActor* OtherActor, const struct FGameplayTag& EventTag);
	void UserConstructionScript();
	void Timeline_Bodyfade__FinishedFunc();
	void Timeline_Bodyfade__UpdateFunc();
	void OuterShield__FinishedFunc();
	void OuterShield__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_SlowAnimation__FinishedFunc();
	void Timeline_SlowAnimation__UpdateFunc();
	void LookAtCrosshairTimeline__FinishedFunc();
	void LookAtCrosshairTimeline__UpdateFunc();
	void Timeline_Camera__FinishedFunc();
	void Timeline_Camera__UpdateFunc();
	void Timeline_FOV__FinishedFunc();
	void Timeline_FOV__UpdateFunc();
	void InpActEvt_Hunter_Scan_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpTchEvt_Moved(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Released(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_Hunter_ActivatePerk_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Hunter_Attack_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Hunter_Immunity_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Hunter_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void HideAccessory(bool Hide);
	void ClientAddDesignEvent(const struct FString& eventId);
	void ClientAddDesignEventWithValue(const struct FString& eventId, float Value);
	void ChangeCameraSide();
	void MulticastChangeCameraSide();
	void BndEvt__BloodSeekComponent_K2Node_ComponentBoundEvent_1_EventDelegate__DelegateSignature(int Stack, int OldStack);
	void ServerUpdateSpeed(float MaxWalkSpeed);
	void MulticastActivateBloodseek(bool Activate, int Stack, int StackOld);
	void OnAttributeChange(const struct FGameplayAttribute& Attribute, float NewValue);
	void OnPostGameplayEffectExecute(const struct FGameplayTagContainer& EventTags);
	void SetBodyTranslucent();
	void ClientEnableDissolve();
	void OnGameplayEffectApply(const struct FGameplayTagContainer& Tags);
	void ClientReceiveGameplayEffectApply(const struct FGameplayTagContainer& GameplayTags);
	void SendOnGameplayEffectApply(const struct FGameplayTagContainer& Tags);
	void SpawnSmokeAtHunterLocation();
	void BodyfadeForceExit();
	void OnEyesightChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	void EnableFogManager();
	void UpdateFogManager();
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void Death();
	void Bodyfade(bool Active);
	void EnableInteraction();
	void EnableDissolveEffect(bool bIsEnable);
	void EnableOutlineComponent();
	void OnExecutionSuccess();
	void SetMaterialsEffect(float Alpha, const struct FLinearColor& Color);
	void StartGameCooldown();
	void BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OutlineCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ItemOutline(class AActor* Item);
	void DeleteOutline(class AActor* Item);
	void EnableChaseAudioComponent();
	void UpdateHunterCrosshair();
	void OnStartProgressAction(class AHSHCharacterBase* hshcharacter);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void ReceiveUnpossessed(class AController* OldController);
	void OnCannotProgress(class AHSHCharacterBase* hshcharacter);
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void OnUseActivePerk();
	void ForceJumpCurrentMontage(const struct FName& SectionName);
	void ServerPlayAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings);
	void MulticastAudio(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings);
	void TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section);
	void PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter);
	void ServerPlayAudioOnCharacter(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings);
	void MulticastAudioOnCharacter(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings);
	void MulticastStateLoopSound(bool Play);
	void MulticastGetHitSFX();
	void PlayHiddenSoundLoop();
	void StopHiddenSoundLoop();
	void MulticastGetHitOnImmune(class ASurvivorBase_C* HSHSurvivor);
	void OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_);
	void ServerActivateGE(class UClass* GameplayEffect);
	void ServerActivateGEWithTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target);
	void FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void ServerActivateGESetByCaller(class UClass* GameplayEffect, const struct FGameplayTag& DataTag, float Magnitude);
	void EnableCanSeeSpecter(bool Enable);
	void StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason);
	void MulticastCanSeeSpecter(bool Enable);
	void DoDamage(const struct FHitResult& HitInfo);
	void SpawnHitParticle(class AHSHCharacterBase* hshcharacter);
	void SendMeleeDistance(float Distance, float Width);
	void OnEnableAttackCollision();
	void OnDisableAttackCollision();
	void OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags);
	void OnEndAttackAnimation();
	void OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser);
	void BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk);
	void EndAttackCollision();
	void EndAttackAnimation();
	void DoAttack(int AttackType);
	void ChooseAttackSection(int Selection);
	void PerfromAttack(int AttackType);
	void PerformHitReaction(class AHSHCharacterBase* CauserCharacter, class AActor* CauserActor);
	void FadeHiddenSpecter();
	void CameraShake(class UClass* ShakeClass, float Value);
	void DoImmunityState();
	void PerfromSecondAttack();
	void OwningTakeOnDamage(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg);
	void CancelAbility();
	void NotifyCameraShake(class UClass* CameraShake, float Magnitude);
	void SlowAnimMontage();
	void PerformShieldEffect(class AActor* Causer);
	void PerformBeginState(int State);
	void ServerResetAttackState();
	void OnTakeDamageSurvivorAchievement(class ASurvivorBase_C* survivor);
	void OnDieSurvivorAchievement(class ASurvivorBase_C* survivor);
	void SpawnGetHitParticle(class UParticleSystem* EmitterTemplate, class AActor* Causer);
	void ClientResetAttackState();
	void NotifyAfterGetHit();
	void CheckAttackCollision(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FHitResult& HitInfo);
	void MulticastShowTextDmg(float Dmg);
	void CommitSpecterCooldownOnAttack();
	void TimerDoAttack(float Duration, int AttackType);
	void StartLookAtCrosshair();
	void UseCameraControl_2();
	void UseCameraControl_3();
	void MulticastSwitchCameraMode();
	void ClientToSpecterCamera();
	void ClientToNormalCamera();
	void ToSpecterCamera();
	void ToNormalCamera();
	void ChangeMode_0_LockRotate();
	void ChangeMode_1_UnlockRotate();
	void OnEndSpecter();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_4(float AxisValue);
	void Action_Immunity();
	void Action_Attack();
	void Movement_Forward(float AxisValue);
	void Movement_MoveRight(float AxisValue);
	void Movement_Turn(float AxisValue);
	void Movement_LookUp(float AxisValue);
	void Action_Perk();
	void ServerActivePerk();
	void CheckIsAttack();
	void Action_Interact();
	void Action_HiddingState();
	void Action_ChangeCameraSide();
	void ResetCheckAttack();
	void ServerActivePerkCallback();
	void ServerOnInteraction();
	void ServerSetAutoAttack(bool Set);
	void AIAction_Attack();
	void AIAction_HiddingState();
	void AIAction_Perk();
	void AIAction_Immune();
	void ReceiveTick(float DeltaSeconds);
	void DestroyItem(class AInteractionBase_C* InteractBase);
	void FadeCamera(float FromAlpha, float ToAlpha, float Duration, bool bShouldFadeAudio, bool bHoldWhenFinished);
	void PlayDestroyItemMontage();
	void GrantPerk();
	void MulticastPlaySound(class USoundBase* Sound, const struct FVector& Location, class USoundAttenuation* AttenuationSettings);
	void NotifyDestroyItem();
	void ForcePlayMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	void SetActorCollision(TEnumAsByte<Engine_ECollisionEnabled> Collsion, TEnumAsByte<Engine_EMovementMode> NewMovementMode);
	void ForceRotation(class AController* Controller, const struct FRotator& NewRotation);
	void CeremonyScan(class ACharacter* Character);
	void ForceScan();
	void SpawnScanEffect();
	void ClientSendTutorialEvent(const struct FName& EventName);
	void EnterHiddingState();
	void ExitHiddingState();
	void SpawnHiddenEffect();
	void HideHiddenEffect();
	void MulticastEnterHiddenEffect();
	void MulticastExitHiddenEffect();
	void ForceExitHiddenState();
	void ShowNotifyRange();
	void ShowNotifyText(const struct FText& Text, float PlayRate);
	void DebugGE();
	void SpecterScan();
	void ForceEnterHiddingState();
	void ForceJumpMontage(class UAnimMontage* AnimMontage, const struct FName& StartSectionName);
	void SnapToInteraction(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, const struct FVector& TargetLookAtLocation, bool bEaseOut, bool bEaseIn, float OverTime);
	void ClientRotationTo(class APlayerController* PlayerController, const struct FVector& BaseRelativeLocation, const struct FVector& TargetRelativeLocation, bool bEaseOut, bool bEaseIn, float OverTime);
	void ClientMoveTo(const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime);
	void CheckHiddenWorking();
	void ResetCheckHiddenWorking();
	void OnRitualStateChanged(int State);
	void ReportAFK();
	void MulticastSetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> NewResponse);
	void OnChangeHiddenState(bool InHiddenState);
	void SpecterScanWithTime(float Timer);
	void ForceStopMontage();
	void UpdateAimTransform();
	void StartDelayInput(float Time);
	void TryToNormalCamera(float Duration);
	void ForceExitHiddenStateWithDelayCamera(float DelayReturnCamera);
	void MulticastSetMeshHiddenInGame(bool bHidden);
	void SetMeshHiddenInGames(bool NewHidden, bool bPropagateToChildren);
	void SetRenderMainPass(bool Value);
	void ShowEffectClient();
	void ExecuteUbergraph_HunterBase(int EntryPoint);
	void OnShowTextDmg__DelegateSignature(class AHSHCharacterBase* OwnerCharacter, float Dmg);
	void OnTraped__DelegateSignature();
	void OnSeeAnyOneChanged__DelegateSignature(int Number);
	void OnRitualDone__DelegateSignature(int State);
	void OnActionImmuntity__DelegateSignature();
	void OnActionInteraction__DelegateSignature();
	void OnActionActivePerk__DelegateSignature();
	void OnScaned__DelegateSignature();
	void OnExitInvisible__DelegateSignature();
	void OnEnterInvisible__DelegateSignature();
	void OnAttackSuccess__DelegateSignature();
	void OnActionAttack__DelegateSignature();
	void OnReciveDamaged__DelegateSignature();
	void OnTakeDamage__DelegateSignature(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg);
	void OnDeath__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
