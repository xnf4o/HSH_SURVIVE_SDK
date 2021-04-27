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

// Class GameAnalytics.GameAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameAnalytics : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameAnalytics.GameAnalytics");
		return ptr;
	}



	void STATIC_SetGender(GameAnalytics_EGAGender Gender);
	void STATIC_SetFacebookId(const struct FString& FacebookId);
	void STATIC_SetCustomDimension03(const struct FString& CustomDimension);
	void STATIC_SetCustomDimension02(const struct FString& CustomDimension);
	void STATIC_SetCustomDimension01(const struct FString& CustomDimension);
	void STATIC_SetBirthYear(int BirthYear);
	void STATIC_OnQuit();
	bool STATIC_IsCommandCenterReady();
	struct FString STATIC_GetConfigurationsContentAsString();
	struct FString STATIC_GetCommandCenterValueAsStringWithDefaultValue(const struct FString& Key, const struct FString& DefaultValue);
	struct FString STATIC_GetCommandCenterValueAsString(const struct FString& Key);
	void STATIC_AddResourceEvent(GameAnalytics_EGAResourceFlowType FlowType, const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId);
	void STATIC_AddProgressionEvenWithOneTwoThreeAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03, int Score);
	void STATIC_AddProgressionEventWithOneTwoAndThree(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03);
	void STATIC_AddProgressionEventWithOneTwoAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, int Score);
	void STATIC_AddProgressionEventWithOneAndTwo(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02);
	void STATIC_AddProgressionEventWithOneAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, int Score);
	void STATIC_AddProgressionEventWithOne(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01);
	void STATIC_AddErrorEvent(GameAnalytics_EGAErrorSeverity Severity, const struct FString& Message);
	void STATIC_AddDesignEventWithValue(const struct FString& eventId, float Value);
	void STATIC_AddDesignEvent(const struct FString& eventId);
	void STATIC_AddBusinessEventIOS(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt);
	void STATIC_AddBusinessEventAndroid(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt, const struct FString& Signature);
	void STATIC_AddBusinessEventAndAutoFetchReceipt(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType);
	void STATIC_AddBusinessEvent(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
