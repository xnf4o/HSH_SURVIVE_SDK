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

// BlueprintGeneratedClass LogsComponent.LogsComponent_C
// 0x0088 (FullSize[0x0188] - InheritedSize[0x0100])
class ULogsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     DefualtFileName;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                StartNumber;                                               // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7F6F[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             LogsData;                                                  // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Directory;                                                 // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Format;                                                    // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             LogsData_Activity;                                         // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_DirectoryInt_Int>                 CachePlayerUsePotion;                                      // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LogsMatchMakeData;                                         // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LogsComponent.LogsComponent_C");
		return ptr;
	}



	void SaveLogsMatchData();
	bool GetUsedPotion(int PlayerId, int* Value);
	void AddedUsedPotion(const struct FPrimaryAssetId& Item, class AController* Controller);
	void SaveLogs_GameSparks();
	void DebugPrintLogs();
	void MakePlayerRole(class AController* Controller, struct FString* Role);
	void SaveLogs();
	void MakePlayerStamp(class AController* Controller, struct FString* Return);
	void FindPlayerName(int PlayerId, struct FString* Name);
	void GetGameTime(struct FString* ToString);
	void DateToString(const struct FDateTime& InDateTime, struct FString* ToString);
	void TimeToString(const struct FTimespan& InTimespan, struct FString* ToString);
	void GetPlayerName(class AHSURPlayerController_C* PlayerController, struct FString* Name);
	void LogUseItemSuccess(class AController* Controller, const struct FPrimaryAssetId& AssetsID);
	void LogEndGame();
	void LogOpenChest(class AController* Controller);
	void LogOpenChestCount();
	void LogUseItemUsed(class AController* Controller, const struct FPrimaryAssetId& AssetsID);
	void LogRitualSuccess(class AHSURPlayerController_C* PlayerController);
	void LogPlayerDoDmg(class AController* Controller, float Dmg);
	void LogAllDmg();
	void LogPlayerSkicker(class AHSURPlayerController_C* PlayerController, const struct FString& StickerName);
	void LogPlayerActivity(class AController* Controller, const struct FString& ActivityName, const struct FString& Coin, const struct FString& Score);
	void LogPlayerActivityTotal();
	void LogPlayerRevive(class AController* Controller);
	void LogPlayerDeath(class AController* Controller);
	void LogUsePotionCount();
	void LogMatchMakeData();
	void ServerSaveLogs();
	void MulticastSaveLogs();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void WriteLogs(bool WithSave);
	void Response(class UVaRestRequestJSON* Request);
	void ExecuteUbergraph_LogsComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
