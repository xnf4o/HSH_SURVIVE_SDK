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

// BlueprintGeneratedClass ActivityManagerComponent.ActivityManagerComponent_C
// 0x0021 (FullSize[0x0121] - InheritedSize[0x0100])
class UActivityManagerComponent_C : public UActorComponent
{
public:
	TArray<struct FSTR_PlayerActivityData>             playerData;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FSTR_EventActivityData>              DT_PlayerActivities;                                       // 0x0110(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               IsInitialize;                                              // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ActivityManagerComponent.ActivityManagerComponent_C");
		return ptr;
	}



	void GetEscapedSurvivor(int* EscapedSurvivor);
	void GetCompletelyDeadSurvivor(int* DeadSurvivor);
	void GetHighestRitualComplete(int* HighestRitualComplete);
	void GetHighestRitualContribute(float* HighestRitualContribute);
	void AddPenaltyScore();
	void InitializeByController(class AController* Controller, const struct FPlayerInfoStruct_G& PlayerInfo);
	void GetHighestHPRemain(float* HighestHPRemain);
	void CalculateTotalScoreAndExpWithIndex(int Index);
	void GetHighestDecoyTime(int* HighestDecoyTime);
	void AddHighestScore();
	void AddCustomMatchScore();
	void GetPlayerIndexByGameID(int PlayerId, int* Index);
	void AddActivityPointByID(int PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity);
	void RemovePlayerData(class APlayerState* PlayerState);
	void GetUnresurrectSurvivor(int* UnResurrectCnt);
	void IsActivityCapped(const struct FString& PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, bool* IsCapped);
	void ReplaceActivityPoint(const struct FString& PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, int Coin, int Score);
	void CalculateTotalScoreAndExp();
	void GetHighestScore(int* HighestScore);
	void GetHighestDamageDoneToHunter(float* HighestDamageDone);
	void GetHighestResurrectSurvivor(int* HighestResurrect);
	void GetHighestPerfectSkillCheck(int* HighestSkillCheck);
	void CalculateFinalScoreSummary();
	void GetPlayerDataSummary(int PlayerIndex, TEnumAsByte<E_Role_E_Role> Role, struct FSTR_PlayerActivityData* PlayerActivity);
	void Initialize();
	void PrintDebugPlayerActivity();
	void GetPlayerActivityData(TEnumAsByte<E_PlayerActivities_E_PlayerActivities> PlayerActivity, struct FString* EventName, int* Coin, int* Score, bool* HasCap, int* CoinCap, int* ScoreCap);
	void GetPlayerIndexByID(const struct FString& PlayerId, int* Index);
	void AddActivityPoint(const struct FString& PlayerId, TEnumAsByte<E_PlayerActivities_E_PlayerActivities> Activity, int Coin, int Score);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
