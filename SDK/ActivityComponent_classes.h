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

// BlueprintGeneratedClass ActivityComponent.ActivityComponent_C
// 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
class UActivityComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWDG_Activity_C*                             WDG_Activity;                                              // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInitialized;                                             // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OWA4[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSURPlayerController_C*                     HSURPlayerController;                                      // 0x0120(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ActivityComponent.ActivityComponent_C");
		return ptr;
	}



	void CalculateRitualContributionPoint(int CoinValue, int ScoreValue, int* Coin, int* Score);
	void CalculateAttackHunterPoint(int CoinValue, int ScoreValue, int* Coin, int* Score);
	void CalculateAttackSurvivorPoint(int CoinValue, int ScoreValue, int* Coin, int* Score);
	void RefreshPlayerController();
	void TryGetPlayerController(class AHSURPlayerController_C** HSURPlayerController);
	void TriggerActivity(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity);
	void GetOwnerPlayerID(struct FString* PlayerId);
	void TriggerActivityWithValue(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, int ScoreValue, int CoinValue);
	void Initialize();
	void CalculateActivityPoint(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity, int ScoreValue, int CoinValue, const struct FString& PlayerId, struct FString* Name, int* Coin, int* Score, bool* Success);
	void Server_TriggerActivity(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity, const struct FString& PlayerId, int ScoreValue, int CoinValue);
	void Client_TriggerActivity(const struct FString& EventName, int Coin, int Score);
	void ExecuteUbergraph_ActivityComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
