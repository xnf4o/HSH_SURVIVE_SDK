// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameAnalytics.GameAnalytics.SetGender
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAGender        Gender                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_SetGender(GameAnalytics_EGAGender Gender)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetGender");

	UGameAnalytics_SetGender_Params params;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.SetFacebookId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FacebookId                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_SetFacebookId(const struct FString& FacebookId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetFacebookId");

	UGameAnalytics_SetFacebookId_Params params;
	params.FacebookId = FacebookId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.SetCustomDimension03
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_SetCustomDimension03(const struct FString& CustomDimension)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension03");

	UGameAnalytics_SetCustomDimension03_Params params;
	params.CustomDimension = CustomDimension;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.SetCustomDimension02
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_SetCustomDimension02(const struct FString& CustomDimension)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension02");

	UGameAnalytics_SetCustomDimension02_Params params;
	params.CustomDimension = CustomDimension;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.SetCustomDimension01
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_SetCustomDimension01(const struct FString& CustomDimension)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension01");

	UGameAnalytics_SetCustomDimension01_Params params;
	params.CustomDimension = CustomDimension;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.SetBirthYear
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            BirthYear                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_SetBirthYear(int BirthYear)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetBirthYear");

	UGameAnalytics_SetBirthYear_Params params;
	params.BirthYear = BirthYear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.OnQuit
// (Final, Native, Static, Public, BlueprintCallable)
void UGameAnalytics::STATIC_OnQuit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.OnQuit");

	UGameAnalytics_OnQuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.IsCommandCenterReady
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameAnalytics::STATIC_IsCommandCenterReady()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.IsCommandCenterReady");

	UGameAnalytics_IsCommandCenterReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetConfigurationsContentAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::STATIC_GetConfigurationsContentAsString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetConfigurationsContentAsString");

	UGameAnalytics_GetConfigurationsContentAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsStringWithDefaultValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DefaultValue                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::STATIC_GetCommandCenterValueAsStringWithDefaultValue(const struct FString& Key, const struct FString& DefaultValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsStringWithDefaultValue");

	UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Params params;
	params.Key = Key;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameAnalytics::STATIC_GetCommandCenterValueAsString(const struct FString& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsString");

	UGameAnalytics_GetCommandCenterValueAsString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.AddResourceEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAResourceFlowType FlowType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddResourceEvent(GameAnalytics_EGAResourceFlowType FlowType, const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddResourceEvent");

	UGameAnalytics_AddResourceEvent_Params params;
	params.FlowType = FlowType;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddProgressionEvenWithOneTwoThreeAndScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAProgressionStatus ProgressionStatus              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression03                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddProgressionEvenWithOneTwoThreeAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEvenWithOneTwoThreeAndScore");

	UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Params params;
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAProgressionStatus ProgressionStatus              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression03                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddProgressionEventWithOneTwoAndThree(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree");

	UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Params params;
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAProgressionStatus ProgressionStatus              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddProgressionEventWithOneTwoAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore");

	UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Params params;
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAProgressionStatus ProgressionStatus              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddProgressionEventWithOneAndTwo(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo");

	UGameAnalytics_AddProgressionEventWithOneAndTwo_Params params;
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAProgressionStatus ProgressionStatus              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddProgressionEventWithOneAndScore(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore");

	UGameAnalytics_AddProgressionEventWithOneAndScore_Params params;
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAProgressionStatus ProgressionStatus              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddProgressionEventWithOne(GameAnalytics_EGAProgressionStatus ProgressionStatus, const struct FString& Progression01)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne");

	UGameAnalytics_AddProgressionEventWithOne_Params params;
	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddErrorEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GameAnalytics_EGAErrorSeverity Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddErrorEvent(GameAnalytics_EGAErrorSeverity Severity, const struct FString& Message)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddErrorEvent");

	UGameAnalytics_AddErrorEvent_Params params;
	params.Severity = Severity;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddDesignEventWithValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 eventId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddDesignEventWithValue(const struct FString& eventId, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddDesignEventWithValue");

	UGameAnalytics_AddDesignEventWithValue_Params params;
	params.eventId = eventId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddDesignEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 eventId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddDesignEvent(const struct FString& eventId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddDesignEvent");

	UGameAnalytics_AddDesignEvent_Params params;
	params.eventId = eventId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddBusinessEventIOS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CartType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddBusinessEventIOS(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventIOS");

	UGameAnalytics_AddBusinessEventIOS_Params params;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CartType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Signature                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddBusinessEventAndroid(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt, const struct FString& Signature)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid");

	UGameAnalytics_AddBusinessEventAndroid_Params params;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;
	params.Receipt = Receipt;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CartType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddBusinessEventAndAutoFetchReceipt(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt");

	UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Params params;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameAnalytics.GameAnalytics.AddBusinessEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CartType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameAnalytics::STATIC_AddBusinessEvent(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEvent");

	UGameAnalytics_AddBusinessEvent_Params params;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
