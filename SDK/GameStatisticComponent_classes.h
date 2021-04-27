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

// BlueprintGeneratedClass GameStatisticComponent.GameStatisticComponent_C
// 0x0170 (FullSize[0x0270] - InheritedSize[0x0100])
class UGameStatisticComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<class AController*, struct FS_GameStatistic>  ControllerStatistic;                                       // 0x0110(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bInitialize;                                               // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J8PU[0x7];                                     // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStatisticUpdate;                                         // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AController*>                         ControllerHealthFull;                                      // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AHSURPlayerController_C*>             PlayerControllerCloseEnemy;                                // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ASurvivorBase_C*>                     SurvivorRef;                                               // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CloseDistance;                                             // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HK9T[0x4];                                     // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHunterBase_C*                               HunterRef;                                                 // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_GameStatisticGlobal                      GlobalStatistic;                                           // 0x01B8(0x0060) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ARitualBase_C*>                       CeremonyActors;                                            // 0x0218(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APlayerState*>                        PlayerState;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TotalHP;                                                   // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TRLJ[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSURGameState_C*                            HSURGameState;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_GameStatistic>                    ReplicateStatistic;                                        // 0x0248(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<class AController*>                         Controllers;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ULogsComponent_C*                            LogsComponent;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GameStatisticComponent.GameStatisticComponent_C");
		return ptr;
	}



	void AddRitualContribution(class AController* Controller, float Percent);
	void TryGetPlayerStatisticByID(const struct FString& GameSparkID, struct FS_GameStatistic* PlayerStatistic);
	void AddUseActivePerk(class AController* Controller);
	void GetItemUsedCount(class APlayerController* PlayerController, int* Count);
	void GetRitualItemPlacedCount(class APlayerController* PlayerController, int* Count);
	void AddRemainingHP(class AController* Controller);
	void AddRitualComplete(class AController* Controller);
	void GetData(class AController* Controller, bool* bFound, struct FS_GameStatistic* Output);
	float GetRemainingHP(class AHSHCharacterBase* Target);
	void AddGameResult(class AController* Controller);
	void AddLeaveGame(class AController* Controller);
	void AddKillCount(class AController* Controller);
	void totalSurvivorHp(float* ReturnTotalHP);
	void AddDamageTrapReceive(class AController* Controller, float Damage);
	void AddDamageTrapDone(class AController* Controller, float Damage);
	void AddDeathCount(class AController* Controller);
	void CreateData(class AController* Controller);
	void AddDestroyedEnvirment(class AController* Controller, bool IsHaveSurvivor);
	void AddResurrectPlayer(class AController* Controller);
	void AddPerfectSuccess(class AController* Controller);
	void AddDamageReceive(class AController* Controller, float Damage);
	void AddDamageDone(class AController* Controller, float Damage);
	void GetCeremonyActor(class UClass* CeremonyClass, TArray<class ARitualBase_C*>* OutActors);
	void AddCarryItem(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId);
	void EndCloseEnemy(class AHSURPlayerController_C* PlayerController);
	void EndHealthFull(class AController* Controller);
	void BeginHealthFull(class AController* Controller);
	void BeginCloseEnemy(class AHSURPlayerController_C* PlayerController);
	void AddCloseEnemy(class AController* Controller, float DeltaTime);
	void AddPlayerHPFull(class AController* Controller, float DeltaTime);
	void AddRevivePlayer(class AController* Controller);
	void DebugPrintListWithController(class AHSURPlayerController_C* PlayerController, float DebugTime);
	void AddOpenChest(class AController* Controller);
	void AddPingEnemy(class AController* Controller);
	void AddItemEmpty(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId);
	void AddItemSuccess(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId);
	void DebugPrintList(float DebugTime);
	void FindAssetID(const struct FPrimaryAssetId& ID, TArray<struct FS_PrimaryAssetsIDCount>* Array, bool* IsFound, struct FS_PrimaryAssetsIDCount* FoundID, int* Array_Index);
	void AddItemUsed(class AController* Controller, const struct FPrimaryAssetId& PrimaryAssetId);
	void TryGetPlayerStatistic(class AController* Controller, struct FS_GameStatistic* PlayerStatistic);
	void Initialize();
	void ReceiveTick(float DeltaSeconds);
	void OnStatisticUpdate_Event(class AController* Controller);
	void ExecuteUbergraph_GameStatisticComponent(int EntryPoint);
	void OnStatisticUpdate__DelegateSignature(class AController* Controller);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
