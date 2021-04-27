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
// Enums
//---------------------------------------------------------------------------

// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class GameplayAbilities_EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal = 0,
	EGameplayEffectReplicationMode__Mixed = 1,
	EGameplayEffectReplicationMode__Full = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX = 3,

};

// Enum GameplayAbilities.EAbilityTaskWaitState
enum class GameplayAbilities_EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame = 0,
	EAbilityTaskWaitState__WaitingOnUser = 1,
	EAbilityTaskWaitState__WaitingOnAvatar = 2,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 3,

};

// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class GameplayAbilities_ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3,

};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class GameplayAbilities_EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3,

};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class GameplayAbilities_EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7,

};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class GameplayAbilities_EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9,

};

// Enum GameplayAbilities.ETargetDataFilterSelf
enum class GameplayAbilities_ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3,

};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class GameplayAbilities_EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class GameplayAbilities_EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class GameplayAbilities_EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3,

};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class GameplayAbilities_EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class GameplayAbilities_EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class GameplayAbilities_EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayCuePayloadType
enum class GameplayAbilities_EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class GameplayAbilities_EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class GameplayAbilities_EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class GameplayAbilities_EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class GameplayAbilities_EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3,

};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class GameplayAbilities_EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 4,

};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class GameplayAbilities_EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4,

};

// Enum GameplayAbilities.EGameplayTagEventType
enum class GameplayAbilities_EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2,

};

// Enum GameplayAbilities.EGameplayCueEvent
enum class GameplayAbilities_EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4,

};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class GameplayAbilities_EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayModOp
enum class GameplayAbilities_EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4,

};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class GameplayAbilities_EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0 = 0,
	EGameplayModEvaluationChannel__Channel1 = 1,
	EGameplayModEvaluationChannel__Channel2 = 2,
	EGameplayModEvaluationChannel__Channel3 = 3,
	EGameplayModEvaluationChannel__Channel4 = 4,
	EGameplayModEvaluationChannel__Channel5 = 5,
	EGameplayModEvaluationChannel__Channel6 = 6,
	EGameplayModEvaluationChannel__Channel7 = 7,
	EGameplayModEvaluationChannel__Channel8 = 8,
	EGameplayModEvaluationChannel__Channel9 = 9,
	EGameplayModEvaluationChannel__Channel_MAX = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX = 11,

};

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class GameplayAbilities_EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class GameplayAbilities_EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__Rejected = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 5,

};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class GameplayAbilities_EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__GameCustom6 = 11,
	EAbilityGenericReplicatedEvent__MAX = 12,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	int16_t                                            Current;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            Base;                                                      // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ICSL[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPackageMap*                                 PredictiveConnection;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStale;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsServerInitiated;                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6XV[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0020
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData_NIX1[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0048
struct FGameplayAbilities_FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                         // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_63PL[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0020(0x0020) (NativeAccessSpecifierPublic)
	bool                                               InputPressed;                                              // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Ended;                                                     // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Started;                                                   // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VOG8[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x001C (0x0028 - 0x000C)
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_MAE0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0010(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0010 (0x00C0 - 0x00B0)
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
	TArray<struct FReplicatedPredictionKeyItem>        PredictionKeys;                                            // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0060
struct FMinimalReplicationTagCountMap
{
	unsigned char                                      UnknownData_Y9S8[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     Owner;                                                     // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CY92[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData_11SP[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x00B8
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawMagnitude;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MatchedTagName;                                            // 0x0020(0x0008) (BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                OriginalTag;                                               // 0x0028(0x0008) (BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                      // 0x0030(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                      // 0x0050(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Location;                                                  // 0x0070(0x000C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x007C(0x000C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Instigator;                                                // 0x0088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                              // 0x0090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x0098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysicalMaterial;                                          // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayEffectLevel;                                       // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AbilityLevel;                                              // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>              TargetAttachComponent;                                     // 0x00B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x00E4 (0x00F0 - 0x000C)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x000C(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V08U[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0018(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0030(0x00B8) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bPredictivelyRemoved;                                      // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KP54[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0020 (0x00D0 - 0x00B0)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                              // 0x00B0(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPIH[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     Owner;                                                     // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0020
struct FGameplayAttribute
{
	struct FString                                     AttributeName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProperty*                                   Attribute;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStruct*                                     AttributeOwner;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0028
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalMagnitude;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X8DS[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0028
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                        // 0x0000(0x0020) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayAbilities_EGameplayEffectAttributeCaptureSource AttributeSource;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapshot;                                                 // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D6VV[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0038
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                         // 0x0000(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A4K7[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                          // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                               bHasNonSnapshottedAttributes;                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JDWP[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0088
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                         // 0x0000(0x0020) (NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       CapturedSpecTags;                                          // 0x0020(0x0020) (NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       ScopedTags;                                                // 0x0040(0x0020) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G60K[0x28];                                    // 0x0060(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0020
struct FScalableFloat
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVQM[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurveTableRowHandle                        Curve;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRIB[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0090
struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                              LevelScalableFloat;                                        // 0x0008(0x0020) (Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	int                                                InputID;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                                             // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4NXN[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     SourceObject;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWB3[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                            // 0x0088(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUS1[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0298
struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                                // 0x0018(0x0028) (RepSkip, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_II6V[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToApplyToTarget;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MNRC[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagContainerAggregator                     CapturedSourceTags;                                        // 0x0060(0x0088) (RepSkip, NativeAccessSpecifierPublic)
	struct FTagContainerAggregator                     CapturedTargetTags;                                        // 0x00E8(0x0088) (RepSkip, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                        // 0x0170(0x0020) (NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DynamicAssetTags;                                          // 0x0190(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FModifierSpec>                       Modifiers;                                                 // 0x01B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StackCount;                                                // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                      // 0x01C4(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                      // 0x01C4(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDurationLocked : 1;                                       // 0x01C4(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57H3[0x3];                                     // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                       // 0x01C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9W2C[0xA0];                                    // 0x01D8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0278(0x0018) (NativeAccessSpecifierPrivate)
	float                                              Level;                                                     // 0x0290(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HGIZ[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x0364 (0x0370 - 0x000C)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_JCTG[0xC];                                     // 0x000C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectSpec                         Spec;                                                      // 0x0018(0x0298) (NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                             // 0x02B0(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartServerWorldTime;                                      // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CachedStartServerWorldTime;                                // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartWorldTime;                                            // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInhibited;                                              // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMRW[0x9B];                                    // 0x02D5(0x009B) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0388 (0x0438 - 0x00B0)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData_IFQE[0x40];                                    // 0x00B0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                  // 0x00F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GWAW[0x310];                                   // 0x0100(0x0310) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                           // 0x0410(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_842E[0x18];                                    // 0x0420(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlayBit;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIPP[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0010(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                            AnimatingAbility;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NextSectionID;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IsStopped : 1;                                             // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ForcePlayBit : 1;                                          // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SkipPositionCorrection : 1;                                // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipPlayRate : 1;                                         // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8E77[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0018(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0010
struct FGameplayAttributeData
{
	unsigned char                                      UnknownData_FH37[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseValue;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentValue;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028 (0x0030 - 0x0008)
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZFZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DerivedAttributeInfo;                                      // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanStack;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P95A[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_1H7W[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData_XBGF[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityTargetingLocationType> LocationType;                                              // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R163[0xF];                                     // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LiteralTransform;                                          // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                              SourceComponent;                                           // 0x0058(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                            SourceAbility;                                             // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceSocketName;                                          // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_ZDD1[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                            // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                          // 0x0080(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_Y2DL[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                            // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                            // 0x0080(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PredictionKeyAtCreation;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0018
struct FAbilityTaskDebugMessage
{
	class UGameplayTask*                               FromTask;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.AbilityEndedData
// 0x0010
struct FAbilityEndedData
{
	class UGameplayAbility*                            AbilityThatEnded;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                         // 0x0008(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplicateEndAbility;                                      // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasCancelled;                                             // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z5Z9[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// 0x01D0
struct FMinimalGameplayCueReplicationProxy
{
	unsigned char                                      UnknownData_M2HQ[0x1C0];                                   // 0x0000(0x01C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     Owner;                                                     // 0x01C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UMLW[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008
struct FGameplayCueTag
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0030
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             GameplayCueNotifyObj;                                      // 0x0008(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LoadedGameplayCueClass;                                    // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ERVD[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0018
struct FGameplayCueTranslationLink
{
	class UGameplayCueTranslator*                      RulesCDO;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJ5D[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0004
struct FGameplayCueTranslatorNodeIndex
{
	int                                                Index;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0078
struct FGameplayCueTranslatorNode
{
	TArray<struct FGameplayCueTranslationLink>         Links;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayCueTranslatorNodeIndex             CachedIndex;                                               // 0x0010(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                                CachedGameplayTag;                                         // 0x0014(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CachedGameplayTagName;                                     // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3T4E[0x54];                                    // 0x0024(0x0054) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0080
struct FGameplayCueTranslationManager
{
	TArray<struct FGameplayCueTranslatorNode>          TranslationLUT;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                                 // 0x0010(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UGameplayTagsManager*                        TagManager;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I9D6[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0070
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData_KEKC[0x70];                                    // 0x0000(0x0070) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0010
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData_U8VO[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00A8
struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     OptionalObject;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     OptionalObject2;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                ContextHandle;                                             // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InstigatorTags;                                            // 0x0040(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTags;                                                // 0x0060(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              EventMagnitude;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMIZ[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0088(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData_QFMX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SelfActor;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_ETargetDataFilterSelf> SelfFilter;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WF88[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RequiredActorClass;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReverseFilter;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YWRT[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData_9K9P[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0008
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bPassedFiltersAndWasExecuted;                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8X7K[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DefaultStartingTable;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<GameplayAbilities_EGameplayAbilityActivationMode> ActivationMode;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanBeEndedByOtherInstance : 1;                            // 0x0001(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C4AJ[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKeyWhenActivated;                                // 0x0008(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x00BC (0x00C8 - 0x000C)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                    // 0x000C(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                            Ability;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InputID;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     SourceObject;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ActiveCount;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InputPressed : 1;                                          // 0x0029(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RemoveAfterActivation : 1;                                 // 0x0029(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PendingRemove : 1;                                         // 0x0029(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ULC1[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                            // 0x0030(0x0020) (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                    // 0x0050(0x0010) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                       // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                      // 0x0070(0x0008) (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6LUJ[0x50];                                    // 0x0078(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                     // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     Owner;                                                     // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0138
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData_7FKM[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           OwningTagQuery;                                            // 0x0020(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           EffectTagQuery;                                            // 0x0068(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           SourceTagQuery;                                            // 0x00B0(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          ModifyingAttribute;                                        // 0x00F8(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     EffectSource;                                              // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EffectDefinition;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IF45[0x10];                                    // 0x0128(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0078
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                      // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                      // 0x0050(0x0020) (NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbilityLevel;                                              // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// 0x0020
struct FGameplayEffectRemovalInfo
{
	bool                                               bPrematureRemoval;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3EO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StackCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                                // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityTriggerSource> TriggerSource;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDWI[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0040
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData_XWHO[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       OwnerActor;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                          // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                    // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent>       SkeletalMeshComponent;                                     // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                              // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                         // 0x0038(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<GameplayAbilities_EGameplayAbilityInputBinds> Command;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_08EE[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GameplayAbilityClass;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x0050
struct FGameplayCueObjectLibrary
{
	TArray<struct FString>                             Paths;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z3H0[0x20];                                    // 0x0010(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObjectLibrary*                              ActorObjectLibrary;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectLibrary*                              StaticObjectLibrary;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayCueSet*                             CueSet;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JI4M[0x4];                                     // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bShouldSyncScan;                                           // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldAsyncLoad;                                          // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldSyncLoad;                                           // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBeenInitialized;                                       // 0x004F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0170
struct FGameplayCuePendingExecute
{
	unsigned char                                      UnknownData_UCPT[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0018(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayAbilities_EGameplayCuePayloadType          PayloadType;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWTE[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     OwningComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                  // 0x0040(0x0078) (NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      CueParameters;                                             // 0x00B8(0x00B8) (ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0068
struct FPreallocationInfo
{
	unsigned char                                      UnknownData_P223[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ClassesNeedingPreallocation;                               // 0x0050(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4LZP[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00E0
struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                               // 0x0000(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                  // 0x0020(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                 // 0x0040(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                          // 0x0060(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        AttributeCurve;                                            // 0x0088(0x0010) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayAbilities_EAttributeBasedFloatCalculationType AttributeCalculationType;                                  // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayAbilities_EGameplayModEvaluationChannel    FinalChannel;                                              // 0x0099(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7XBM[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       SourceTagFilter;                                           // 0x00A0(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTagFilter;                                           // 0x00C0(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0078
struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                              Coefficient;                                               // 0x0008(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                  // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                 // 0x0048(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        FinalLookupCurve;                                          // 0x0068(0x0010) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0010
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                DataTag;                                                   // 0x0008(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0190
struct FGameplayEffectModifierMagnitude
{
	GameplayAbilities_EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G6SO[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              ScalableFloatMagnitude;                                    // 0x0008(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                   // 0x0028(0x00E0) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                           // 0x0108(0x0078) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                      // 0x0180(0x0010) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0001
struct FGameplayModEvaluationChannelSettings
{
	GameplayAbilities_EGameplayModEvaluationChannel    Channel;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0040
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                               // 0x0000(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IgnoreTags;                                                // 0x0020(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0260
struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0020) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IMBC[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              Magnitude;                                                 // 0x0028(0x0020) (NativeAccessSpecifierPublic)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                         // 0x0048(0x0190) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                 // 0x01D8(0x0001) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1KH[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagRequirements                    SourceTags;                                                // 0x01E0(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTags;                                                // 0x0220(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0048
struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                        // 0x0000(0x0020) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinLevel;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLevel;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayCueTags;                                           // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0060
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                              // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Added;                                                     // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Removed;                                                   // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0248
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                         // 0x0000(0x0028) (Edit, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A7XW[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                         // 0x0030(0x0190) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                 // 0x01C0(0x0001) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3FWU[0x7];                                     // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagRequirements                    SourceTags;                                                // 0x01C8(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTags;                                                // 0x0208(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0028
struct FConditionalGameplayEffect
{
	class UClass*                                      EffectClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredSourceTags;                                        // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0058
struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PassedInTags;                                              // 0x0008(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                          // 0x0038(0x0010) (ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                                // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0038
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L66T[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Magnitude;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 Handle;                                                    // 0x0028(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8HIB[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                    // 0x0010(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bHandledStackCountManually : 1;                            // 0x0010(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bHandledGameplayCuesManually : 1;                          // 0x0010(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3YUZ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x00A8
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData_0CF1[0xA8];                                    // 0x0000(0x00A8) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0070
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData_PR4N[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       Instigator;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>             AbilityCDO;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>             AbilityInstanceNotReplicated;                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                AbilityLevel;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                          // 0x0034(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TEZ1[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                    // 0x0040(0x0010) (ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JEB2[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WorldOrigin;                                               // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bHasWorldOrigin : 1;                                       // 0x006C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bReplicateSourceObject : 1;                                // 0x006C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CX80[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0028
struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ResponseGameplayEffect;                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ResponseGameplayEffects;                                   // 0x0010(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int                                                SoftCountCap;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BE9K[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0050
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                  // 0x0000(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagReponsePair                     Negative;                                                  // 0x0028(0x0028) (Edit, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
