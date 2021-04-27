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

// Class HSHSurvivor.AbilityBaseComponentNative
// 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
class UAbilityBaseComponentNative : public UActorComponent
{
public:
	struct FGameplayTagContainer                       ContainTag;                                                // 0x0100(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnUseAbilityComponent;                                     // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAnimNotify;                                              // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.AbilityBaseComponentNative");
		return ptr;
	}



	void UseAbilityComponent();
	void EndAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags);
	void BeginAnimationNotify(const struct FGameplayTagContainer& ContainGameplayTags);
};

// Class HSHSurvivor.BloodSeekComponentNative
// 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
class UBloodSeekComponentNative : public UActorComponent
{
public:
	class AHSHCharacterHunterBase*                     OwnerCharacter;                                            // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AHSHCharacterSurvivorBase*>           Survivors;                                                 // 0x0108(0x0010) (BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                BloodSeekStack;                                            // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentTime;                                               // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsStop;                                                   // 0x0120(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8YJ5[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumTimeCount;                                          // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4ER[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnBloodSeekStackChanged;                                   // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.BloodSeekComponentNative");
		return ptr;
	}



	void UpdateUnseenValue(float DeltaTime);
	void UpdateSeenValue(float DeltaTime);
	void StopBloodSeek();
	void StartBloodSeek();
	void SetBloodSeekStack(int Stack, float Time);
	void ResetStack();
	void IncreaseStack();
	TArray<class AHSHCharacterSurvivorBase*> GetSurvivors();
	class AHSHCharacterHunterBase* GetHunter();
	int GetBloodSeekStack();
	void FindSurvivors();
	void DecreaseStack();
	bool CheckInSeen();
};

// Class HSHSurvivor.ChaseAudioComponentNative
// 0x0038 (FullSize[0x0138] - InheritedSize[0x0100])
class UChaseAudioComponentNative : public UActorComponent
{
public:
	bool                                               isSoundActive;                                             // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInitialize;                                               // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsChase;                                                  // 0x0102(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9JX1[0x5];                                     // 0x0103(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSHCharacterBase*                           OwnerCharacter;                                            // 0x0108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AHSHCharacterBase*                           chaseCharacter;                                            // 0x0110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              currentChase;                                              // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              maxChase;                                                  // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              offsetChase;                                               // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              speedIncreaseChase;                                        // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              speedDecreaseChase;                                        // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              distanceChase;                                             // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Height;                                                    // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4FSM[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.ChaseAudioComponentNative");
		return ptr;
	}



	class AHSHCharacterBase* TryGetChaseCharacter();
	void SetSoundActive(bool IsActive);
	void OnInitialize();
	void OnEscape();
	void OnChasing();
	bool IsHunterSeen();
	void Initialize();
	void ForceEnableChase();
	void ForceDisableChase();
};

// Class HSHSurvivor.CheatComponent
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UCheatComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.CheatComponent");
		return ptr;
	}



};

// Class HSHSurvivor.DropItemsComponentBase
// 0x0030 (FullSize[0x0130] - InheritedSize[0x0100])
class UDropItemsComponentBase : public UActorComponent
{
public:
	class AHSHCharacterBase*                           Character;                                                 // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              damageReceive;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              damageRandomRate;                                          // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FHSHSurvivor_FDropItem>              spawnitems;                                                // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              DamageThreshold;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              damagevarious;                                             // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              heathLessthen;                                             // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZAG5[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.DropItemsComponentBase");
		return ptr;
	}



	void SpawnItem(int Index);
	void ReceiveDamage(float Dmg, float Heathpercent);
	bool IsItemDrop(float Dmg);
	int FindDropItem();
};

// Class HSHSurvivor.DropMovementComponentBase
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UDropMovementComponentBase : public UActorComponent
{
public:
	class USceneComponent*                             RootComponent;                                             // 0x0100(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.DropMovementComponentBase");
		return ptr;
	}



	void Init();
};

// Class HSHSurvivor.HSHAbilitySystem
// 0x0000 (FullSize[0x11A8] - InheritedSize[0x11A8])
class UHSHAbilitySystem : public UAbilitySystemComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAbilitySystem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHAbilitySystemComponent
// 0x0010 (FullSize[0x11B8] - InheritedSize[0x11A8])
class UHSHAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	struct FScriptMulticastDelegate                    OnGameplayEffectApplyCallback;                             // 0x11A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAbilitySystemComponent");
		return ptr;
	}



	void ReceiveOnGameplayEffectAppliedDelegateToSelf(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayEffectSpec& GameplayEffectSpec, const struct FActiveGameplayEffectHandle& ActiveGameplayEffectHandle);
	int GetGameplayEffectCountWithTag(const struct FGameplayTagContainer& SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	void GameplayEffectDelegate__DelegateSignature(const struct FGameplayTagContainer& Tags);
};

// Class HSHSurvivor.HSHAbilityTask_PlayMontageAndWaitForEvent
// 0x00C0 (FullSize[0x0158] - InheritedSize[0x0098])
class UHSHAbilityTask_PlayMontageAndWaitForEvent : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                               // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBlendOut;                                                // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInterrupted;                                             // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCancelled;                                               // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    EventReceived;                                             // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageToPlay;                                             // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       EventTags;                                                 // 0x00F0(0x0020) (NativeAccessSpecifierPrivate)
	float                                              Rate;                                                      // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       StartSection;                                              // 0x0114(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AnimRootMotionTranslationScale;                            // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bStopWhenAbilityEnds;                                      // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_005F[0x37];                                    // 0x0121(0x0037) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAbilityTask_PlayMontageAndWaitForEvent");
		return ptr;
	}



	class UHSHAbilityTask_PlayMontageAndWaitForEvent* STATIC_PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};

// Class HSHSurvivor.HSHAchievementComponent
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UHSHAchievementComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAchievementComponent");
		return ptr;
	}



	void UnlockAchievement(const struct FString& achName);
	void StoreStats(const struct FString& StatName, int statToIncrease);
	void ResetAllStats(bool bAchievementsToo);
	void InitSteamAchievement();
	bool GetAchievement(const struct FString& achName);
	void ClearAchievement(const struct FString& pchName);
};

// Class HSHSurvivor.HSHItem
// 0x0160 (FullSize[0x0198] - InheritedSize[0x0038])
class UHSHItem : public UPrimaryDataAsset
{
public:
	struct FPrimaryAssetType                           ItemType;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ItemName;                                                  // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ItemDescription;                                           // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ItemIconNormal;                                            // 0x0070(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ItemIconHover;                                             // 0x00F8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rarity;                                                    // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLevel;                                                  // 0x018C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GrantedAbility;                                            // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHItem");
		return ptr;
	}



	bool IsConsumable();
	struct FString GetIdentifierString();
};

// Class HSHSurvivor.HSHActivePerkItem
// 0x0018 (FullSize[0x01B0] - InheritedSize[0x0198])
class UHSHActivePerkItem : public UHSHItem
{
public:
	TEnumAsByte<HSHSurvivor_ECharacterType>            CharacterType;                                             // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BD0I[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrimaryAssetId                             characteritem;                                             // 0x019C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OSFX[0x4];                                     // 0x01AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHActivePerkItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHAssetManager
// 0x0000 (FullSize[0x0430] - InheritedSize[0x0430])
class UHSHAssetManager : public UAssetManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAssetManager");
		return ptr;
	}



};

// Class HSHSurvivor.HSHAttributeSet
// 0x0100 (FullSize[0x0138] - InheritedSize[0x0038])
class UHSHAttributeSet : public UAttributeSet
{
public:
	struct FGameplayAttributeData                      Health;                                                    // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      MaxHealth;                                                 // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      AttackPower;                                               // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      DefensePower;                                              // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      AttackPoint;                                               // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      DefensePoint;                                              // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      AreaDistance;                                              // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      MoveSpeed;                                                 // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Damage;                                                    // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Eyesight;                                                  // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Strength;                                                  // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      LimitHealth;                                               // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      LimitEyesight;                                             // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      LimitMoveSpeed;                                            // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      LimitStrength;                                             // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnPostGameplayEffectCallBack;                              // 0x0128(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAttributeSet");
		return ptr;
	}



	void OnRep_Strength();
	void OnRep_MoveSpeed();
	void OnRep_MaxHealth();
	void OnRep_Health();
	void OnRep_Eyesight();
	void OnRep_DefensePower();
	void OnRep_DefensePoint();
	void OnRep_AttackPower();
	void OnRep_AttackPoint();
	void OnGameplayEffectExecuteDelegate__DelegateSignature(const struct FGameplayTagContainer& Tags);
};

// Class HSHSurvivor.HSHAttributeSetHunter
// 0x0020 (FullSize[0x0158] - InheritedSize[0x0138])
class UHSHAttributeSetHunter : public UHSHAttributeSet
{
public:
	struct FGameplayAttributeData                      Reach;                                                     // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      BloodSeekMoveSpeed;                                        // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAttributeSetHunter");
		return ptr;
	}



	void OnRep_Reach();
	void OnRep_BloodSeekMoveSpeed();
};

// Class HSHSurvivor.HSHAttributeSetSurvivor
// 0x00D0 (FullSize[0x0208] - InheritedSize[0x0138])
class UHSHAttributeSetSurvivor : public UHSHAttributeSet
{
public:
	struct FGameplayAttributeData                      FallenHealth;                                              // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      MaxFallenHealth;                                           // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Stamina;                                                   // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      MaxStamina;                                                // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      RegenStaminaRate;                                          // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      DrainStaminaRate;                                          // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      RegenStaminaRateCrouchBonus;                               // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      DrainStaminaRateCrouchBonus;                               // 0x01A8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      CrouchSpeedBonus;                                          // 0x01B8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      InjuredSpeedBonus;                                         // 0x01C8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Expertise;                                                 // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      LimitStamina;                                              // 0x01E8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      LimitExpertise;                                            // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHAttributeSetSurvivor");
		return ptr;
	}



	void OnRep_Stamina();
	void OnRep_RegenStaminaRateCrouchBonus();
	void OnRep_RegenStaminaRate();
	void OnRep_MaxStamina();
	void OnRep_MaxFallenHealth();
	void OnRep_InjuredSpeedBonus();
	void OnRep_FallenHealth();
	void OnRep_Expertise();
	void OnRep_DrainStaminaRateCrouchBonus();
	void OnRep_DrainStaminaRate();
	void OnRep_CrouchSpeedBonus();
};

// Class HSHSurvivor.HSHBackItem
// 0x00A8 (FullSize[0x0240] - InheritedSize[0x0198])
class UHSHBackItem : public UHSHItem
{
public:
	TEnumAsByte<HSHSurvivor_ECharacterType>            CharacterType;                                             // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDUK[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BackActor;                                                 // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BackActorFemale;                                           // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  BackTransform;                                             // 0x01B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FTransform>             PairTransform;                                             // 0x01E0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHBackItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHSHBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHBlueprintLibrary");
		return ptr;
	}



	void STATIC_StopLoadingScreen();
	void STATIC_ServerTravel(class AActor* Actor, const struct FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify);
	void STATIC_SaveLogsFileToAnother(const struct FString& ProjectName, const struct FString& savepath);
	void STATIC_RotatePawnTo(class APawn* Pawn, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<HSHSurvivor_EMoveActionHSH> MoveAction, const struct FLatentActionInfo& LatentInfo);
	void STATIC_RotateControllerTo(class APlayerController* PlayerController, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<HSHSurvivor_EMoveActionHSH> MoveAction, const struct FLatentActionInfo& LatentInfo);
	void STATIC_RequestExit(bool bForce);
	void STATIC_PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime);
	bool STATIC_NotEqual_HSHItemSlot(const struct FHSHItemSlot& A, const struct FHSHItemSlot& B);
	bool STATIC_IsValidItemSlot(const struct FHSHItemSlot& ItemSlot);
	bool STATIC_IsInEditor();
	float STATIC_GetMontageSectionLength(class UAnimMontage* AnimMontage, int SectionIndex);
	int STATIC_GetMontageSectionIndex(class UAnimMontage* AnimMontage, const struct FName& InSectionName);
	float STATIC_GetExecuteMagnitude(const struct FGameplayEffectExecutionDefinition& ExecuteEffect);
	void STATIC_GetDurationGameplayEffectSpecHandle(const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle, float* Duration);
	class UHSHStickerItem* STATIC_ForceLoadStickerItem(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning);
	class UHSHQuest* STATIC_ForceLoadQuest(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning);
	class UHSHPickableItem* STATIC_ForceLoadPickableItem(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning);
	class UHSHItemProfile* STATIC_ForceLoadItemProfile(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning);
	class UHSHItem* STATIC_ForceLoadItem(const struct FPrimaryAssetId& PrimaryAssetId, bool bLogWarning);
	void STATIC_FindScreenEdgeLocationForWorldLocation(class UObject* WorldContextObject, const struct FVector& InLocation, float EdgePercent, struct FVector2D* OutScreenPosition, float* OutRotationAngleDegrees, bool* bIsOnScreen);
	bool STATIC_EqualEqual_HSHItemSlot(const struct FHSHItemSlot& A, const struct FHSHItemSlot& B);
	void STATIC_Encode(const struct FString& secretKey, const struct FString& Body);
	bool STATIC_DoesEffectContainerSpecHaveTargets(const struct FHSHGameplayEffectContainerSpec& ContainerSpec);
	bool STATIC_DoesEffectContainerSpecHaveEffects(const struct FHSHGameplayEffectContainerSpec& ContainerSpec);
	void STATIC_CopyToClipboard(const struct FString& Str);
	void STATIC_ClipboardPaste(struct FString* Dest);
	void STATIC_ClientTravel(class APlayerController* PlayerController, const struct FString& URL, TEnumAsByte<Engine_ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void STATIC_ChangeLocalization(const struct FString& Target);
	void STATIC_BreakGameplayEffectSpec(const struct FGameplayEffectSpec& GameplayEffectSpec, struct FGameplayTagContainer* SourceTags, struct FGameplayTagContainer* TargetTags);
	TArray<struct FActiveGameplayEffectHandle> STATIC_ApplyExternalEffectContainerSpec(const struct FHSHGameplayEffectContainerSpec& ContainerSpec);
	struct FHSHGameplayEffectContainerSpec STATIC_AddTargetsToEffectContainerSpec(const struct FHSHGameplayEffectContainerSpec& ContainerSpec, TArray<struct FHitResult> HitResults, TArray<class AActor*> TargetActors);
};

// Class HSHSurvivor.HSHBundleItem
// 0x0010 (FullSize[0x01A8] - InheritedSize[0x0198])
class UHSHBundleItem : public UHSHItem
{
public:
	class UTexture2D*                                  Texture;                                                   // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHBundleItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHCameraShake
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UHSHCameraShake : public UCameraShake
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHCameraShake");
		return ptr;
	}



};

// Class HSHSurvivor.HSHCharacterBase
// 0x02E0 (FullSize[0x0A28] - InheritedSize[0x0748])
class AHSHCharacterBase : public ACharacter
{
public:
	unsigned char                                      UnknownData_UHUC[0x8];                                     // 0x0748(0x0008) Fix Super Size
	unsigned char                                      UnknownData_52RK[0x8];                                     // 0x0750(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInventoryItemChanged;                                    // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AX4[0x18];                                    // 0x0768(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSlottedItemChanged;                                      // 0x0780(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YCX[0x18];                                    // 0x0790(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CharacterLevel;                                            // 0x07A8(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XSFE[0x4];                                     // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              GameplayAbilities;                                         // 0x07B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<struct FHSHItemSlot, class UClass*>           DefaultSlottedAbilities;                                   // 0x07C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              PassiveGameplayEffects;                                    // 0x0810(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<struct FHSHItemSlot, class UClass*>           SpawnSlottedAbilities;                                     // 0x0820(0x0050) (Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              SpawnPassiveGameplayEffects;                               // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierProtected)
	class UHSHAbilitySystemComponent*                  AbilitySystemComponent;                                    // 0x0880(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHSHAttributeSet*                            AttributeSet;                                              // 0x0888(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class UHSHInventoryInterface>     InventorySource;                                           // 0x0890(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int                                                bAbilitiesInitialized;                                     // 0x08A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1CKH[0x4];                                     // 0x08A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UHSHItem*, struct FHSHItemData>         InventoryData;                                             // 0x08A8(0x0050) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FHSHItemSlot, class UHSHItem*>         SlottedItems;                                              // 0x08F8(0x0050) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FHSHItemSlot, struct FGameplayAbilitySpecHandle> SlottedAbilities;                                          // 0x0948(0x0050) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class USkeletalMesh*                               SkinnedMesh;                                               // 0x0998(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRespawn;                                                  // 0x09A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FW1I[0x3];                                     // 0x09A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrimaryAssetId                             HeadAssetID;                                               // 0x09A4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPrimaryAssetId                             BackAssetID;                                               // 0x09B4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JB4B[0x14];                                    // 0x09C4(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FHSHItemSlot, struct FGameplayAbilitySpecHandle> InventoryAbilities;                                        // 0x09D8(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHCharacterBase");
		return ptr;
	}



	void UpdateProgressBar(float Current, float Max, float* Percent);
	void SlottedItemChanged(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item);
	bool SetSlottedItem(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item);
	bool SetCharacterLevel(int NewLevel);
	bool RemoveInventoryItem(class UHSHItem* RemovedItem, int RemoveCount);
	void RefreshInventory(TMap<struct FHSHItemSlot, class UHSHItem*> ThisSlottedItems);
	void OnRep_SkinnedMesh();
	void OnPostGameplayEffectExecute(const struct FGameplayTagContainer& EventTags);
	void OnMoveSpeedChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	void OnHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	void OnEyesightChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	void OnDamaged(float DamageAmount, const struct FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, const struct FGameplayTagContainer& EffectGrantedTags, class AHSHCharacterBase* InstigatorCharacter, class AActor* DamageCauser);
	void OnAttributeChange(const struct FGameplayAttribute& Attribute, float NewValue);
	void InventoryItemChanged(bool bAdded, class UHSHItem* Item);
	void InitAbility();
	class UHSHItem* GetSlottedItem(const struct FHSHItemSlot& ItemSlot);
	float GetMoveSpeed();
	float GetMaxHealth();
	void GetInventoryItems(TArray<class UHSHItem*>* Items, const struct FPrimaryAssetType& ItemType);
	bool GetInventoryItemData(class UHSHItem* Item, struct FHSHItemData* ItemData);
	int GetInventoryItemCount(class UHSHItem* Item);
	float GetHealth();
	float GetEyesight();
	bool GetCooldownRemainingForTag(const struct FGameplayTagContainer& CooldownTags, float* TimeRemaining, float* CooldownDuration);
	int GetCharacterLevel();
	void GetActiveGameplayEffectClass(const struct FActiveGameplayEffectHandle& Handle, class UClass** ActiveGameplayEffect);
	bool GetActiveEffectRemainingWithTag(const struct FGameplayTagContainer& EffectTags, float* TimeRemaining, float* Duration);
	void GetActiveAbilitiesWithTags(const struct FGameplayTagContainer& AbilityTags, TArray<class UHSHGameplayAbility*>* ActiveAbilities);
	void GetActiveAbilitiesWithItemSlotFromTestInventory(const struct FHSHItemSlot& ItemSlot, TArray<class UHSHGameplayAbility*>* ActiveAbilities);
	void GetActiveAbilitiesWithItemSlot(const struct FHSHItemSlot& ItemSlot, TArray<class UHSHGameplayAbility*>* ActiveAbilities);
	void FillSlottedAbilitySpecs(TMap<struct FHSHItemSlot, struct FGameplayAbilitySpec>* SlottedAbilitySpecs);
	bool FillEmptySlotWithItem(class UHSHItem* NewItem);
	void FillEmptySlots();
	void AddStartupGameplayAbilities();
	void AddSlottedGameplayAbilities();
	bool AddInventoryItem(class UHSHItem* NewItem, int ItemCount, int ItemLevel, bool bAutoSlot);
	void ActivateEffectByClass(class UClass* GameplayEffect);
	bool ActivateAbilitiesWithTags(const struct FGameplayTagContainer& AbilityTags, bool bAllowRemoteActivation);
	bool ActivateAbilitiesWithItemSlotFromTestInventory(const struct FHSHItemSlot& ItemSlot, bool bAllowRemoteActivation);
	bool ActivateAbilitiesWithItemSlot(const struct FHSHItemSlot& ItemSlot, bool bAllowRemoteActivation);
};

// Class HSHSurvivor.HSHCharacterHunterBase
// 0x0008 (FullSize[0x0A30] - InheritedSize[0x0A28])
class AHSHCharacterHunterBase : public AHSHCharacterBase
{
public:
	unsigned char                                      UnknownData_Z0K6[0x8];                                     // 0x0A28(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHCharacterHunterBase");
		return ptr;
	}



	float GetBloodSeekMoveSpeed();
};

// Class HSHSurvivor.HSHCharacterItem
// 0x0040 (FullSize[0x01D8] - InheritedSize[0x0198])
class UHSHCharacterItem : public UHSHItem
{
public:
	class UClass*                                      CharacterClass;                                            // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHSkinItem*                                CharacterSkinItemAsset;                                    // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHPassivePerkItem*                         PassivePerkAsset_2;                                        // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHPassivePerkItem*                         PassivePerkAsset_3;                                        // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHPassivePerkItem*                         PassivePerkAsset_Unique;                                   // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHSHActivePerkItem*                          ActivePerkAsset;                                           // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FShowStatus>                         ShowStatus;                                                // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHCharacterItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHCharacterSurvivorBase
// 0x0008 (FullSize[0x0A30] - InheritedSize[0x0A28])
class AHSHCharacterSurvivorBase : public AHSHCharacterBase
{
public:
	class UHSHAttributeSetSurvivor*                    AttributeSetSurvivor;                                      // 0x0A28(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHCharacterSurvivorBase");
		return ptr;
	}



	void OnStaminaChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	bool IsCharacterSprint();
	float GetStamina();
	float GetRegenStaminaRateCrouchBonus();
	float GetRegenStaminaRate();
	float GetMaxStamina();
	float GetInjuredSpeedBonus();
	float GetExpertise();
	float GetDrainStaminaRateCrouchBonus();
	float GetDrainStaminaRate();
	float GetCrouchSpeedBonus();
};

// Class HSHSurvivor.HSHCheatManagerNative
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UHSHCheatManagerNative : public UCheatManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHCheatManagerNative");
		return ptr;
	}



	void TestClientCheat();
	void TestCheat();
};

// Class HSHSurvivor.HSHCurrencyItem
// 0x0010 (FullSize[0x01A8] - InheritedSize[0x0198])
class UHSHCurrencyItem : public UHSHItem
{
public:
	class UTexture2D*                                  Texture;                                                   // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHCurrencyItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHDamageExecution
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UHSHDamageExecution : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHDamageExecution");
		return ptr;
	}



};

// Class HSHSurvivor.HSHDmgNoStatusExecution
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UHSHDmgNoStatusExecution : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHDmgNoStatusExecution");
		return ptr;
	}



};

// Class HSHSurvivor.HSHGameInstanceBase
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UHSHGameInstanceBase : public UPlatformGameInstance
{
public:
	bool                                               bSteamInit;                                                // 0x0240(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8RA5[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHGameInstanceBase");
		return ptr;
	}



};

// Class HSHSurvivor.HSHGameModeBase
// 0x0008 (FullSize[0x0428] - InheritedSize[0x0420])
class AHSHGameModeBase : public AGameMode
{
public:
	int                                                MaxPlayer;                                                 // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4GJC[0x4];                                     // 0x0424(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHGameModeBase");
		return ptr;
	}



	int GetPlayerNumber();
	void AssignPlayerNumber(int Number);
};

// Class HSHSurvivor.HSHGameplayAbility
// 0x0050 (FullSize[0x0450] - InheritedSize[0x0400])
class UHSHGameplayAbility : public UGameplayAbility
{
public:
	TMap<struct FGameplayTag, struct FHSHGameplayEffectContainer> EffectContainerMap;                                        // 0x0400(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHGameplayAbility");
		return ptr;
	}



	struct FHSHGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const struct FHSHGameplayEffectContainer& Container, const struct FGameplayEventData& EventData, int OverrideGameplayLevel);
	struct FHSHGameplayEffectContainerSpec MakeEffectContainerSpec(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int OverrideGameplayLevel);
	void GetGameplayAbilityCharge(int* CurrentCharge, int* MaxCharge);
	class UClass* GetCooldownGameplayEffectClassBP();
	class UGameplayEffect* GetCooldownGameplayEffectBP();
	float GetCooldownDurationMagnitude();
	void GetAbilityTags(struct FGameplayTagContainer* Tags);
	void ChangeCooldownGEClass(class UClass* NewCooldown);
	TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerWithMagnitude(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, float Magnitude, int OverrideGameplayLevel);
	TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const struct FHSHGameplayEffectContainerSpec& ContainerSpec);
	TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainer(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int OverrideGameplayLevel);
};

// Class HSHSurvivor.HSHGameStateBase
// 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
class AHSHGameStateBase : public AGameState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHGameStateBase");
		return ptr;
	}



};

// Class HSHSurvivor.HSHHeadItem
// 0x00A8 (FullSize[0x0240] - InheritedSize[0x0198])
class UHSHHeadItem : public UHSHItem
{
public:
	TEnumAsByte<HSHSurvivor_ECharacterType>            CharacterType;                                             // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ABFZ[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      HeadActor;                                                 // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJJX[0x8];                                     // 0x01A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  HeadTransform;                                             // 0x01B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FTransform>             PairTransform;                                             // 0x01E0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHHeadItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHInventoryInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHSHInventoryInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHInventoryInterface");
		return ptr;
	}



};

// Class HSHSurvivor.HSHItemProfile
// 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
class UHSHItemProfile : public UPrimaryDataAsset
{
public:
	struct FPrimaryAssetType                           ItemType;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ItemName;                                                  // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ItemDescription;                                           // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ItemImageProfile;                                          // 0x0070(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHItemProfile");
		return ptr;
	}



	struct FString GetIdentifierString();
};

// Class HSHSurvivor.HSHObject
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHSHObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHObject");
		return ptr;
	}



	void Construct();
};

// Class HSHSurvivor.HSHPassivePerkItem
// 0x0020 (FullSize[0x01B8] - InheritedSize[0x0198])
class UHSHPassivePerkItem : public UHSHItem
{
public:
	TEnumAsByte<HSHSurvivor_ECharacterType>            CharacterType;                                             // 0x0198(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W6ND[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrimaryAssetId                             characteritem;                                             // 0x019C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_12U5[0x4];                                     // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GrantedEffect;                                             // 0x01B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHPassivePerkItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHPickableItem
// 0x00E8 (FullSize[0x0280] - InheritedSize[0x0198])
class UHSHPickableItem : public UHSHItem
{
public:
	class UClass*                                      ItemClass;                                                 // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<HSHSurvivor_EPickableType>             PickableType;                                              // 0x01A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBNS[0x3];                                     // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinDurability;                                             // 0x01A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDurability;                                             // 0x01A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UseTime;                                                   // 0x01AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 PreviewLootDropItemMesh;                                   // 0x01B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x01B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 LeftHandItemMesh;                                          // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIDZ[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LeftHandItemOffset;                                        // 0x01D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 RightHandItemMesh;                                         // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BW4M[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RightHandItemOffset;                                       // 0x0210(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      LeftHandItemActor;                                         // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RightHandItemActor;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageProgress;                                           // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FS_PairAnimationPickable>            MontageProgressPair;                                       // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               IsPlayDropAnimation;                                       // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VYZL[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              GrantedEffect;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHPickableItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHPlayerControllerBase
// 0x0120 (FullSize[0x07B0] - InheritedSize[0x0690])
class AHSHPlayerControllerBase : public APlayerController
{
public:
	unsigned char                                      UnknownData_66FN[0x8];                                     // 0x0690(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UHSHItem*, struct FHSHItemData>         InventoryData;                                             // 0x0698(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<struct FHSHItemSlot, class UHSHItem*>         SlottedItems;                                              // 0x06E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInventoryItemChanged;                                    // 0x0738(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BB5F[0x18];                                    // 0x0748(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSlottedItemChanged;                                      // 0x0760(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FNK1[0x18];                                    // 0x0770(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInventoryLoaded;                                         // 0x0788(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PX5[0x18];                                    // 0x0798(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHPlayerControllerBase");
		return ptr;
	}



	void SlottedItemChanged(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item);
	bool SetSlottedItem(const struct FHSHItemSlot& ItemSlot, class UHSHItem* Item);
	bool SaveInventory();
	bool RemoveInventoryItem(class UHSHItem* RemovedItem, int RemoveCount);
	bool LoadInventory();
	void InventoryItemChanged(bool bAdded, class UHSHItem* Item);
	class UHSHItem* GetSlottedItem(const struct FHSHItemSlot& ItemSlot);
	void GetInventoryItems(TArray<class UHSHItem*>* Items, const struct FPrimaryAssetType& ItemType);
	bool GetInventoryItemData(class UHSHItem* Item, struct FHSHItemData* ItemData);
	int GetInventoryItemCount(class UHSHItem* Item);
	void FillEmptySlots();
	bool AddInventoryItem(class UHSHItem* NewItem, int ItemCount, int ItemLevel, bool bAutoSlot);
};

// Class HSHSurvivor.HSHPlayerControllerNative
// 0x0008 (FullSize[0x0698] - InheritedSize[0x0690])
class AHSHPlayerControllerNative : public APlayerController
{
public:
	class APawn*                                       CachePawn;                                                 // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHPlayerControllerNative");
		return ptr;
	}



	void HSH_Debug_PawnMoveFlag();
	void HSH_Cheat_TimeOut();
	void HSH_Cheat_SpawnTrapItem();
	void HSH_Cheat_SpawnProjectileItem();
	void HSH_Cheat_SpawnMeleeItem();
	void HSH_Cheat_SpawnKeyItem();
	void HSH_Cheat_SpawnItem();
	void HSH_Cheat_KillSurvivor();
	void HSH_Cheat_KillME();
	void HSH_Cheat_KillHunter();
	void HSH_Cheat_CompleteQuestAndOpenPortal();
	void HSH_Cheat_CompleteQuest();
	void ChangeStateToSpectator();
	void ChangeStateToPlayer();
	void ChangeSpectatorToSelectPlayer(int dir);
	void ChangeSpectatorToPrevPlayer();
	void ChangeSpectatorToNextPlayer();
	void ChangeSpectatorToCurrentPlayer(const struct FViewTargetTransitionParams& ViewTarget);
};

// Class HSHSurvivor.HSHPlayerStateNative
// 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
class AHSHPlayerStateNative : public APlayerState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHPlayerStateNative");
		return ptr;
	}



	void TrySetPlayerID(int ID);
};

// Class HSHSurvivor.HSHQuest
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UHSHQuest : public UPrimaryDataAsset
{
public:
	struct FPrimaryAssetType                           QuestType;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      QuestObjective;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHQuest");
		return ptr;
	}



	struct FString GetIdentifierString();
};

// Class HSHSurvivor.HSHSaveGame
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UHSHSaveGame : public USaveGame
{
public:
	TMap<struct FPrimaryAssetId, struct FHSHItemData>  InventoryData;                                             // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<struct FHSHItemSlot, struct FPrimaryAssetId>  SlottedItems;                                              // 0x0080(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                    // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPrimaryAssetId>                     InventoryItems;                                            // 0x00E0(0x0010) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	int                                                SavedDataVersion;                                          // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P7B8[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHSaveGame");
		return ptr;
	}



};

// Class HSHSurvivor.HSHSkinItem
// 0x0030 (FullSize[0x01C8] - InheritedSize[0x0198])
class UHSHSkinItem : public UHSHItem
{
public:
	class UHSHCharacterItem*                           CharacterItemAsset;                                        // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               SpawnAnimation;                                            // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               IdleAnimation;                                             // 0x01B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimBlueprint*                              AnimationBlueprint;                                        // 0x01B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHSkinItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHStickerItem
// 0x0010 (FullSize[0x01A8] - InheritedSize[0x0198])
class UHSHStickerItem : public UHSHItem
{
public:
	class UTexture2D*                                  Texture;                                                   // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewLootDropActor;                                      // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHStickerItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHSurvivorQuest
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UHSHSurvivorQuest : public UHSHQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHSurvivorQuest");
		return ptr;
	}



};

// Class HSHSurvivor.HSHTargetType
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHSHTargetType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHTargetType");
		return ptr;
	}



	void GetTargets(class AHSHCharacterBase* TargetingCharacter, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors);
};

// Class HSHSurvivor.HSHTargetType_UseOwner
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHSHTargetType_UseOwner : public UHSHTargetType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHTargetType_UseOwner");
		return ptr;
	}



};

// Class HSHSurvivor.HSHTargetType_UseEventData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHSHTargetType_UseEventData : public UHSHTargetType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHTargetType_UseEventData");
		return ptr;
	}



};

// Class HSHSurvivor.HSHTestItem
// 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
class UHSHTestItem : public UHSHItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHTestItem");
		return ptr;
	}



};

// Class HSHSurvivor.HSHTokenItem
// 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
class UHSHTokenItem : public UHSHItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.HSHTokenItem");
		return ptr;
	}



};

// Class HSHSurvivor.JokeAudioComponentNative
// 0x0070 (FullSize[0x0170] - InheritedSize[0x0100])
class UJokeAudioComponentNative : public UActorComponent
{
public:
	class UAudioComponent*                             CacheSpawnSound;                                           // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<TEnumAsByte<HSHSurvivor_EJokeEvent>, struct FJokeArray> SoundSource;                                               // 0x0108(0x0050) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsIdle;                                                   // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VSN7[0x3];                                     // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdleCurrent;                                               // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleTriggerTime;                                           // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsNotSeeAnyone;                                           // 0x0164(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WRFV[0x3];                                     // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NotSeeAnyoneCurrent;                                       // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NotSeeAnyoneTriggerTime;                                   // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.JokeAudioComponentNative");
		return ptr;
	}



	void UpdateNotSeeAnyoneEvent(float DeltaTime);
	void UpdateIdleEvent(float DeltaTime);
	void SetActiveNotSeeAnyoneEvent(bool IsEventActive);
	void SetActiveIdleEvent(bool IsEventActive);
	void SendEvent(TEnumAsByte<HSHSurvivor_EJokeEvent> Event);
	void ResetNotSeeAnyoneEvent();
	void ResetIdleEvent();
	class USoundBase* RandomSoundFromSource(TArray<struct FJokeData>* Source);
	void OnCheckingEvent(TEnumAsByte<HSHSurvivor_EJokeEvent> Event);
	void MulticastSpawnSound(class USoundBase* Sound);
	void GetSoundsData(TEnumAsByte<HSHSurvivor_EJokeEvent> Event, bool* IsFound, TArray<struct FJokeData>* Source);
};

// Class HSHSurvivor.Noise
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNoise : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.Noise");
		return ptr;
	}



	float STATIC_perlinNoise1D(float X, float persistence, int Octave);
};

// Class HSHSurvivor.PerkHandleComponentNative
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class UPerkHandleComponentNative : public UActorComponent
{
public:
	class UHSHAbilitySystemComponent*                  abilitycomponent;                                          // 0x0100(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AHSHCharacterBase*                           hshcharacter;                                              // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.PerkHandleComponentNative");
		return ptr;
	}



	void OnFindHandleTagSuccess(const struct FGameplayTag& AbilityTag, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters);
	bool FindHandleTag(const struct FGameplayTag& AbilityTag, TArray<class AHSHCharacterBase*>* Characters);
	void CheckHandleTag(const struct FGameplayTag& AbilityTag, const struct FPerkHandleData& Data);
};

// Class HSHSurvivor.ProgressManagerComponentNative
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class UProgressManagerComponentNative : public UActorComponent
{
public:
	TArray<struct FSProgressInfo>                      ProgressInfo;                                              // 0x0100(0x0010) (BlueprintVisible, Net, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.ProgressManagerComponentNative");
		return ptr;
	}



	void ContainTarget(class UObject* Target, TArray<struct FSProgressInfo> Array, bool* bIsContain, int* IndexArray);
	void ContainPlayerController(class AController* PlayerController, TArray<struct FSProgressInfo> Array, bool* bIsContain, int* IndexArray);
	void ContainAIController(class AController* AIController, TArray<struct FSProgressInfo> Array, bool* bIsContain, int* IndexArray);
};

// Class HSHSurvivor.ProjectFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UProjectFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.ProjectFunctionLibrary");
		return ptr;
	}



	void STATIC_ParseMatchMakeData(const struct FString& JSONString, int* survivor, int* hunter);
	TArray<struct FString> STATIC_LoadFileToStringArray(const struct FString& Filename);
	struct FString STATIC_LoadFileToString(const struct FString& Filename);
	struct FString STATIC_GetProjectVersion();
	class UObject* STATIC_GetGameSingleton();
	void STATIC_GetDynamicBandwidth(int* MinDynamicBandwidth, int* MaxDynamicBandwidth);
	int STATIC_GetCalculatedNetSpeed();
	TArray<struct FString> STATIC_DebugFilePath();
};

// Class HSHSurvivor.QuestObjectiveBase
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UQuestObjectiveBase : public UObject
{
public:
	class UClass*                                      QuestWidget;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.QuestObjectiveBase");
		return ptr;
	}



	bool IsObjectiveSuccess();
};

// Class HSHSurvivor.RazorBladeExecution
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class URazorBladeExecution : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.RazorBladeExecution");
		return ptr;
	}



};

// Class HSHSurvivor.SteamIAP
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class USteamIAP : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRequestPriceSuccess;                                     // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestPriceFailed;                                      // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStartPurchaseSuccess;                                    // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStartPurchaseFailed;                                     // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPurchaseSuccess;                                         // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPurchaseFailed;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.SteamIAP");
		return ptr;
	}



	void StartPurchase(int productID);
	void RequestPrice();
	void Initialize();
	struct FString GetItemPrice(int productID);
	struct FString GetCurrency();
	bool BIsDlcInstalled(TEnumAsByte<HSHSurvivor_EDlc> dlc);
	void ActivateGameOverlayToStore(TEnumAsByte<HSHSurvivor_EDlc> dlc);
};

// Class HSHSurvivor.SteamLobby
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class USteamLobby : public UObject
{
public:
	unsigned char                                      UnknownData_GT6K[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLobbyCreated;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyEntered;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyDataUpdated;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyChatUpdated;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.SteamLobby");
		return ptr;
	}



	void SetLobbyOwner(int MemberIndex);
	void SetLobbyMemberData(const struct FString& pchKey, const struct FString& pchValue);
	void SetLobbyJoinable(bool joinable);
	void SetLobbyData(const struct FString& pchKey, const struct FString& pchValue);
	void LeaveLobby();
	void KickMember(int MemberIndex);
	bool IsLobbyOwner();
	bool IsInLobby();
	void Initialize();
	void GetLobbyMemberInfo(int* MemberCnt, TArray<struct FString>* PlayerId, TArray<struct FString>* PlayerProfile, TArray<struct FString>* PlayerState, TArray<struct FString>* DisplayName, TArray<struct FString>* Survivorskill, TArray<bool>* IsOwner);
	struct FString GetLobbyData(const struct FString& pchKey);
	void CreateLobby();
	void ActivateGameOverlayToUser(int MemberIndex);
	void ActivateGameOverlayInviteDialog();
};

// Class HSHSurvivor.TestAttributeSetComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UTestAttributeSetComponent : public UActorComponent
{
public:
	class UHSHAttributeSet*                            HSHAttributeSet;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.TestAttributeSetComponent");
		return ptr;
	}



	class UHSHAttributeSet* GetHSHAttributeSet();
};

// Class HSHSurvivor.TestGameModeBase
// 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
class ATestGameModeBase : public AGameModeBase
{
public:
	struct FString                                     Str;                                                       // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.TestGameModeBase");
		return ptr;
	}



	struct FString InitNewPlayer(class APlayerController* NewPlayerController, const struct FUniqueNetIdRepl& UniqueId, const struct FString& Options, const struct FString& Portal);
};

// Class HSHSurvivor.VentilatorManagerNative
// 0x0020 (FullSize[0x0358] - InheritedSize[0x0338])
class AVentilatorManagerNative : public AActor
{
public:
	TArray<struct FVentilatorCooldown>                 VentilatorCooldowns;                                       // 0x0338(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnVentilatorCDFinish;                                      // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.VentilatorManagerNative");
		return ptr;
	}



	bool IsVentilatorCooldowm(int Index);
	void AddedVentilatorCooldown(int Index, float Duration);
};

// Class HSHSurvivor.WTxtFile
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UWTxtFile : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HSHSurvivor.WTxtFile");
		return ptr;
	}



	void STATIC_TestFilePath();
	bool STATIC_SaveArrayTxtWithPath(const struct FString& AppendDirectory, const struct FString& Filename, TArray<struct FString> SaveText, bool AllowOverWriting);
	bool STATIC_SaveArrayTxt(const struct FString& SaveDirectory, const struct FString& Filename, TArray<struct FString> SaveText, bool AllowOverWriting);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
