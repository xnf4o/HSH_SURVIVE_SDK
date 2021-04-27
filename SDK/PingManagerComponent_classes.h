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

// BlueprintGeneratedClass PingManagerComponent.PingManagerComponent_C
// 0x0068 (FullSize[0x0168] - InheritedSize[0x0100])
class UPingManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AHSURPlayerController_C*>             PlayerController;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FS_PingPair>                         ActivePair;                                                // 0x0120(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bInitialize;                                               // 0x0130(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9I8W[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CanCancelDegrees;                                          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsChange;                                                 // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q7DH[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeEnemy;                                                 // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeItem;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeChest;                                                 // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeTrap;                                                  // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeSurvivorTime;                                          // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PingSoundList>                    SoundList;                                                 // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TimeRitual;                                                // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeHunterSpecter;                                         // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PingManagerComponent.PingManagerComponent_C");
		return ptr;
	}



	void FoundLongTime(float* Return);
	void CreateHunterSpecter(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair);
	void HunterSpecterTime(float* Return);
	void FindSoundList(TEnumAsByte<E_PingCase_E_PingCase> Case, TArray<struct FS_PingSoundList>* SoundList, bool* Found, class USoundBase** Sound, bool* _2D);
	void FoundRitualTime(float* Return);
	void CreateFoundRitual(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair);
	bool IsTargetInActive(class AActor* Target, TArray<struct FS_PingPair>* ActivePair, bool ForceFind, int* Array_Index);
	void FoundSoulTime(float* Return);
	void CreateFoundSoul(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair);
	void CheckOnlyOnePing(TEnumAsByte<E_PingCase_E_PingCase> Case, bool* bHaveInArray);
	void CreateFoundPortal(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair);
	void FoundPortalTime(float* Return);
	void CheckPingCondition_Refactor(const struct FHitResult& HitResult, bool IsHit_, class AHSHCharacterBase* PlayerCharacter, class UClass* PlayerClass, class UClass* EnemyClass, struct FS_PingPair* S_PingPair, bool* bIsShouldAdded);
	void FoundSurvivorTime(float* Return);
	void CreateFoundSurvivor(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair);
	void AddOrUpdatePingActiveTarget(TArray<struct FS_PingPair>* ActivePair, const struct FS_PingPair& NewItem, class AActor* Target, bool bCanSameTarget, TEnumAsByte<E_PingCase_E_PingCase> Case, bool bForceUpdateSameCase, struct FS_PingPair* Output);
	void FillterPingPair(TArray<struct FS_PingPair>* Array, class UPingComponent_C* PingComponent, TArray<struct FS_PingPair>* OutputArray);
	void AddPingActiveNotPair(TArray<struct FS_PingPair>* ActivePair, class AHSHCharacterBase* PlayerCharacter, const struct FS_PingPair& NewItem, struct FS_PingPair* Output);
	void RemovePingActiveWithTarget(TArray<struct FS_PingPair>* ActivePair, class AActor* Target, bool* Return);
	void FoundTrapTime(float* Return);
	void FoundChestTime(float* Return);
	void MakeS_PingPair(TEnumAsByte<E_PingCase_E_PingCase> PingCase, class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* HitActor, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair);
	void GetPlayerName(class AController* Controller, struct FString* PlayerName);
	void RemovePingActiveWithCharacter(TArray<struct FS_PingPair>* ActivePair, class AHSHCharacterBase* Character, bool* Return);
	void IsCancel_(class AHSHCharacterBase* Character, TArray<struct FS_PingPair>* ActivePair, bool* Cancel_);
	void FoundItemTime(float* Return);
	void FoundEnemyTime(float* Return);
	void UpdatePair(const struct FS_PingPair& Pair, float DeltaTime, struct FS_PingPair* Return);
	void GotoLocationTime(float* Return);
	void TryGetPlayerController(TArray<class AHSURPlayerController_C*>* ReturnPlayerController);
	void NotifyUpdatePing(TArray<struct FS_PingPair>* ActivePing);
	void RemovePingActive(TArray<struct FS_PingPair>* ActivePair, const struct FS_PingPair& PingPair);
	void AddPingActive(TArray<struct FS_PingPair>* ActivePair, class AHSHCharacterBase* PlayerCharacter, const struct FS_PingPair& NewItem, struct FS_PingPair* Output);
	void CheckPingCondition(const struct FHitResult& HitResult, bool IsHit_, class AHSHCharacterBase* PlayerCharacter, class UClass* PlayerClass, class UClass* EnemyClass, struct FS_PingPair* S_PingPair);
	bool IsInActive(class AHSHCharacterBase* PlayerCharacter, TArray<struct FS_PingPair>* ActivePair, int* Array_Index);
	void Initialize();
	void RequestPing(const struct FHitResult& OutHit, bool IsHit_, class AHSHCharacterBase* Player, class UClass* PlayerClass, class UClass* EnemyClass);
	void ReceiveTick(float DeltaSeconds);
	void ForceRequestPing(class AHSHCharacterBase* Character, TEnumAsByte<E_PingCase_E_PingCase> PingCase, const struct FVector& Location, class AActor* HitActor, float Distance, bool IsUpdateLocation, bool bCanSameTarget, bool bForceUpdateSameCase, bool bPlaySound, bool bShowLongTime);
	void ServerPlaySound(class UClass* CharacterClass, TEnumAsByte<E_PingCase_E_PingCase> Case, const struct FVector& Location);
	void ForceRemovePingByTarget(class AActor* Target);
	void ForceRemovePingByCharacter(class AHSHCharacterBase* Character);
	void ExecuteUbergraph_PingManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
