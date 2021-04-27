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
// Parameters
//---------------------------------------------------------------------------

// Function GameAnalytics.GameAnalytics.SetGender
struct UGameAnalytics_SetGender_Params
{
	GameAnalytics_EGAGender                            Gender;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.SetFacebookId
struct UGameAnalytics_SetFacebookId_Params
{
	struct FString                                     FacebookId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.SetCustomDimension03
struct UGameAnalytics_SetCustomDimension03_Params
{
	struct FString                                     CustomDimension;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.SetCustomDimension02
struct UGameAnalytics_SetCustomDimension02_Params
{
	struct FString                                     CustomDimension;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.SetCustomDimension01
struct UGameAnalytics_SetCustomDimension01_Params
{
	struct FString                                     CustomDimension;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.SetBirthYear
struct UGameAnalytics_SetBirthYear_Params
{
	int                                                BirthYear;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.OnQuit
struct UGameAnalytics_OnQuit_Params
{
};

// Function GameAnalytics.GameAnalytics.IsCommandCenterReady
struct UGameAnalytics_IsCommandCenterReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.GetConfigurationsContentAsString
struct UGameAnalytics_GetConfigurationsContentAsString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsStringWithDefaultValue
struct UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultValue;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsString
struct UGameAnalytics_GetCommandCenterValueAsString_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddResourceEvent
struct UGameAnalytics_AddResourceEvent_Params
{
	GameAnalytics_EGAResourceFlowType                  FlowType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddProgressionEvenWithOneTwoThreeAndScore
struct UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Params
{
	GameAnalytics_EGAProgressionStatus                 ProgressionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression01;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression02;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression03;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree
struct UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Params
{
	GameAnalytics_EGAProgressionStatus                 ProgressionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression01;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression02;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression03;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore
struct UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Params
{
	GameAnalytics_EGAProgressionStatus                 ProgressionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression01;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression02;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo
struct UGameAnalytics_AddProgressionEventWithOneAndTwo_Params
{
	GameAnalytics_EGAProgressionStatus                 ProgressionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression01;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression02;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore
struct UGameAnalytics_AddProgressionEventWithOneAndScore_Params
{
	GameAnalytics_EGAProgressionStatus                 ProgressionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression01;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne
struct UGameAnalytics_AddProgressionEventWithOne_Params
{
	GameAnalytics_EGAProgressionStatus                 ProgressionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Progression01;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddErrorEvent
struct UGameAnalytics_AddErrorEvent_Params
{
	GameAnalytics_EGAErrorSeverity                     Severity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddDesignEventWithValue
struct UGameAnalytics_AddDesignEventWithValue_Params
{
	struct FString                                     eventId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddDesignEvent
struct UGameAnalytics_AddDesignEvent_Params
{
	struct FString                                     eventId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddBusinessEventIOS
struct UGameAnalytics_AddBusinessEventIOS_Params
{
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CartType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Receipt;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid
struct UGameAnalytics_AddBusinessEventAndroid_Params
{
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CartType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Receipt;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Signature;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt
struct UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Params
{
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CartType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameAnalytics.GameAnalytics.AddBusinessEvent
struct UGameAnalytics_AddBusinessEvent_Params
{
	struct FString                                     Currency;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CartType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
