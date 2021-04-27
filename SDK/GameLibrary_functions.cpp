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

// Function GameLibrary.GameLibrary_C.AddErrorLogAnalyticEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ErrorMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_AddErrorLogAnalyticEvent(const struct FString& ErrorMessage, const struct FString& State, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.AddErrorLogAnalyticEvent");

	UGameLibrary_C_AddErrorLogAnalyticEvent_Params params;
	params.ErrorMessage = ErrorMessage;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.AddStoreLogAnalyticEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 StoreType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_AddStoreLogAnalyticEvent(const struct FString& Currency, int Price, const struct FString& ItemId, int Quantity, const struct FString& StoreType, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.AddStoreLogAnalyticEvent");

	UGameLibrary_C_AddStoreLogAnalyticEvent_Params params;
	params.Currency = Currency;
	params.Price = Price;
	params.ItemId = ItemId;
	params.Quantity = Quantity;
	params.StoreType = StoreType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.AddGachaAnalyticEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 GachaItemID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            SpendAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 TakeItemID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            ReturnToken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_AddGachaAnalyticEvent(const struct FString& GachaItemID, int SpendAmount, const struct FString& TakeItemID, int ReturnToken, int Quantity, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.AddGachaAnalyticEvent");

	UGameLibrary_C_AddGachaAnalyticEvent_Params params;
	params.GachaItemID = GachaItemID;
	params.SpendAmount = SpendAmount;
	params.TakeItemID = TakeItemID;
	params.ReturnToken = ReturnToken;
	params.Quantity = Quantity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.GetAnalyticPlayerData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*       Player1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*       PlayerBalance1                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*       LootBoxBalance1                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetAnalyticPlayerData(class UObject* __WorldContext, class UVaRestJsonObject** Player1, class UVaRestJsonObject** PlayerBalance1, class UVaRestJsonObject** LootBoxBalance1)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetAnalyticPlayerData");

	UGameLibrary_C_GetAnalyticPlayerData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player1 != nullptr)
		*Player1 = params.Player1;
	if (PlayerBalance1 != nullptr)
		*PlayerBalance1 = params.PlayerBalance1;
	if (LootBoxBalance1 != nullptr)
		*LootBoxBalance1 = params.LootBoxBalance1;

}


// Function GameLibrary.GameLibrary_C.GetAnalyticDateTimeFormat
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 DateTime                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetAnalyticDateTimeFormat(class UObject* __WorldContext, struct FString* DateTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetAnalyticDateTimeFormat");

	UGameLibrary_C_GetAnalyticDateTimeFormat_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;

}


// Function GameLibrary.GameLibrary_C.AddAPIAnalyticEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_AddAPIAnalyticEvent(const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.AddAPIAnalyticEvent");

	UGameLibrary_C_AddAPIAnalyticEvent_Params params;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.AddTransactionAnalyticEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TransactionId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 OrderId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 PackageID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_AddTransactionAnalyticEvent(const struct FString& TransactionId, const struct FString& OrderId, const struct FString& PackageID, int Quantity, bool Success, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.AddTransactionAnalyticEvent");

	UGameLibrary_C_AddTransactionAnalyticEvent_Params params;
	params.TransactionId = TransactionId;
	params.OrderId = OrderId;
	params.PackageID = PackageID;
	params.Quantity = Quantity;
	params.Success = Success;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.AddInGameAnalyticEventWithValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_AddInGameAnalyticEventWithValue(const struct FString& Event, float Value, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.AddInGameAnalyticEventWithValue");

	UGameLibrary_C_AddInGameAnalyticEventWithValue_Params params;
	params.Event = Event;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.AddInGameAnalyticEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_AddInGameAnalyticEvent(const struct FString& Event, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.AddInGameAnalyticEvent");

	UGameLibrary_C_AddInGameAnalyticEvent_Params params;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.FilterGenderAnimation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Male_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Female_Montage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            AnimMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_FilterGenderAnimation(class UClass* CharacterClass, class UAnimMontage* Male_Montage, class UAnimMontage* Female_Montage, class UObject* __WorldContext, class UAnimMontage** AnimMontage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.FilterGenderAnimation");

	UGameLibrary_C_FilterGenderAnimation_Params params;
	params.CharacterClass = CharacterClass;
	params.Male_Montage = Male_Montage;
	params.Female_Montage = Female_Montage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;

}


// Function GameLibrary.GameLibrary_C.GetBack
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetBack(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetBack");

	UGameLibrary_C_GetBack_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function GameLibrary.GameLibrary_C.GetHead
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHead(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHead");

	UGameLibrary_C_GetHead_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function GameLibrary.GameLibrary_C.GetHunterBack
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHunterBack(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHunterBack");

	UGameLibrary_C_GetHunterBack_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function GameLibrary.GameLibrary_C.GetHunterHead
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHunterHead(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHunterHead");

	UGameLibrary_C_GetHunterHead_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function GameLibrary.GameLibrary_C.GetSurvivorBack
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetSurvivorBack(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetSurvivorBack");

	UGameLibrary_C_GetSurvivorBack_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function GameLibrary.GameLibrary_C.GetSurvivorHead
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetSurvivorHead(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetSurvivorHead");

	UGameLibrary_C_GetSurvivorHead_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function GameLibrary.GameLibrary_C.GetPlayerSkillSurvivor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_PlayerRecordSurvivor SurvivorRecord                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Skill                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetPlayerSkillSurvivor(const struct FS_PlayerRecordSurvivor& SurvivorRecord, class UObject* __WorldContext, float* Skill)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetPlayerSkillSurvivor");

	UGameLibrary_C_GetPlayerSkillSurvivor_Params params;
	params.SurvivorRecord = SurvivorRecord;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skill != nullptr)
		*Skill = params.Skill;

}


// Function GameLibrary.GameLibrary_C.GetPlayerSkillHunter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_PlayerRecordHunter   HunterRecord                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Skill                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetPlayerSkillHunter(const struct FS_PlayerRecordHunter& HunterRecord, class UObject* __WorldContext, float* Skill)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetPlayerSkillHunter");

	UGameLibrary_C_GetPlayerSkillHunter_Params params;
	params.HunterRecord = HunterRecord;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skill != nullptr)
		*Skill = params.Skill;

}


// Function GameLibrary.GameLibrary_C.IsInQuickMatch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameLibrary_C::STATIC_IsInQuickMatch(class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.IsInQuickMatch");

	UGameLibrary_C_IsInQuickMatch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameLibrary.GameLibrary_C.EndGameResultToResultSurvivor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            eliminate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Escape                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_EndGameResultToResultSurvivor(const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext, int* eliminate, int* Escape)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.EndGameResultToResultSurvivor");

	UGameLibrary_C_EndGameResultToResultSurvivor_Params params;
	params.EndGameResult = EndGameResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (eliminate != nullptr)
		*eliminate = params.eliminate;
	if (Escape != nullptr)
		*Escape = params.Escape;

}


// Function GameLibrary.GameLibrary_C.EndGameResultToResultHunter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            eliminate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Souls                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_EndGameResultToResultHunter(const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext, int* eliminate, int* Souls)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.EndGameResultToResultHunter");

	UGameLibrary_C_EndGameResultToResultHunter_Params params;
	params.EndGameResult = EndGameResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (eliminate != nullptr)
		*eliminate = params.eliminate;
	if (Souls != nullptr)
		*Souls = params.Souls;

}


// Function GameLibrary.GameLibrary_C.GetPlayerRecordSurvivor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   GameSparksScriptData           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            matchplayed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            eliminate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Escape                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetPlayerRecordSurvivor(class UGameSparksScriptData* GameSparksScriptData, class UObject* __WorldContext, int* matchplayed, int* Score, int* eliminate, int* Escape)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetPlayerRecordSurvivor");

	UGameLibrary_C_GetPlayerRecordSurvivor_Params params;
	params.GameSparksScriptData = GameSparksScriptData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (matchplayed != nullptr)
		*matchplayed = params.matchplayed;
	if (Score != nullptr)
		*Score = params.Score;
	if (eliminate != nullptr)
		*eliminate = params.eliminate;
	if (Escape != nullptr)
		*Escape = params.Escape;

}


// Function GameLibrary.GameLibrary_C.GetPlayerRecordHunter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   GameSparksScriptData           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            matchplayed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            eliminate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Souls                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetPlayerRecordHunter(class UGameSparksScriptData* GameSparksScriptData, class UObject* __WorldContext, int* matchplayed, int* Score, int* eliminate, int* Souls)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetPlayerRecordHunter");

	UGameLibrary_C_GetPlayerRecordHunter_Params params;
	params.GameSparksScriptData = GameSparksScriptData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (matchplayed != nullptr)
		*matchplayed = params.matchplayed;
	if (Score != nullptr)
		*Score = params.Score;
	if (eliminate != nullptr)
		*eliminate = params.eliminate;
	if (Souls != nullptr)
		*Souls = params.Souls;

}


// Function GameLibrary.GameLibrary_C.GetRitualMultipleInState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Multiple                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetRitualMultipleInState(int State, class UObject* __WorldContext, float* Multiple)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetRitualMultipleInState");

	UGameLibrary_C_GetRitualMultipleInState_Params params;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Multiple != nullptr)
		*Multiple = params.Multiple;

}


// Function GameLibrary.GameLibrary_C.GetRitualGEInState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  GameplayEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetRitualGEInState(int State, class UObject* __WorldContext, class UClass** GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetRitualGEInState");

	UGameLibrary_C_GetRitualGEInState_Params params;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayEffect != nullptr)
		*GameplayEffect = params.GameplayEffect;

}


// Function GameLibrary.GameLibrary_C.GetRItualState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetRItualState(class UObject* __WorldContext, int* State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetRItualState");

	UGameLibrary_C_GetRItualState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function GameLibrary.GameLibrary_C.IsOtherInFrontOfActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOtherAtFront                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameLibrary_C::STATIC_IsOtherInFrontOfActor(class AActor* Actor, class AActor* Other, class UObject* __WorldContext, bool* IsOtherAtFront)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.IsOtherInFrontOfActor");

	UGameLibrary_C_IsOtherInFrontOfActor_Params params;
	params.Actor = Actor;
	params.Other = Other;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOtherAtFront != nullptr)
		*IsOtherAtFront = params.IsOtherAtFront;

}


// Function GameLibrary.GameLibrary_C.GetPlayerSkillByRole
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Skill                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetPlayerSkillByRole(TEnumAsByte<E_Role_E_Role> Role, class UObject* __WorldContext, float* Skill)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetPlayerSkillByRole");

	UGameLibrary_C_GetPlayerSkillByRole_Params params;
	params.Role = Role;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skill != nullptr)
		*Skill = params.Skill;

}


// Function GameLibrary.GameLibrary_C.GetAttack4Direction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_DmgDirection_E_DmgDirection> DmgDirection                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetAttack4Direction(class AActor* Owner, class AActor* Target, class UObject* __WorldContext, TEnumAsByte<E_DmgDirection_E_DmgDirection>* DmgDirection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetAttack4Direction");

	UGameLibrary_C_GetAttack4Direction_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DmgDirection != nullptr)
		*DmgDirection = params.DmgDirection;

}


// Function GameLibrary.GameLibrary_C.GetAttack2Direction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_DmgDirection_E_DmgDirection> DmgDirection                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetAttack2Direction(class AActor* Owner, class AActor* Target, class UObject* __WorldContext, TEnumAsByte<E_DmgDirection_E_DmgDirection>* DmgDirection)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetAttack2Direction");

	UGameLibrary_C_GetAttack2Direction_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DmgDirection != nullptr)
		*DmgDirection = params.DmgDirection;

}


// Function GameLibrary.GameLibrary_C.GetPlayerRecord
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   GameSparksScriptData           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            matchplayed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            win                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetPlayerRecord(class UGameSparksScriptData* GameSparksScriptData, class UObject* __WorldContext, int* matchplayed, int* Score, int* win)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetPlayerRecord");

	UGameLibrary_C_GetPlayerRecord_Params params;
	params.GameSparksScriptData = GameSparksScriptData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (matchplayed != nullptr)
		*matchplayed = params.matchplayed;
	if (Score != nullptr)
		*Score = params.Score;
	if (win != nullptr)
		*win = params.win;

}


// Function GameLibrary.GameLibrary_C.EndGameResultToResult
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsWin_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Reason                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_EndGameResultToResult(TEnumAsByte<E_Role_E_Role> Role, const struct FS_EndGameResult& EndGameResult, class UObject* __WorldContext, bool* bIsWin_, struct FString* Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.EndGameResultToResult");

	UGameLibrary_C_EndGameResultToResult_Params params;
	params.Role = Role;
	params.EndGameResult = EndGameResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsWin_ != nullptr)
		*bIsWin_ = params.bIsWin_;
	if (Reason != nullptr)
		*Reason = params.Reason;

}


// Function GameLibrary.GameLibrary_C.CreateLogEventEndGameSavePersonal
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_SummaryResult        SummaryResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EndGameResult        EndGameResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         UsedItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameSparksScriptData* UGameLibrary_C::STATIC_CreateLogEventEndGameSavePersonal(const struct FS_SummaryResult& SummaryResult, const struct FS_EndGameResult& EndGameResult, const struct FPrimaryAssetId& UsedItem, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateLogEventEndGameSavePersonal");

	UGameLibrary_C_CreateLogEventEndGameSavePersonal_Params params;
	params.SummaryResult = SummaryResult;
	params.EndGameResult = EndGameResult;
	params.UsedItem = UsedItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameLibrary.GameLibrary_C.CreateLogEventEndGameSave
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_SummaryResult> SummaryResult                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGameSparksScriptData*> GSDataArray                    (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_CreateLogEventEndGameSave(TArray<struct FS_SummaryResult>* SummaryResult, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* GSDataArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateLogEventEndGameSave");

	UGameLibrary_C_CreateLogEventEndGameSave_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SummaryResult != nullptr)
		*SummaryResult = params.SummaryResult;
	if (GSDataArray != nullptr)
		*GSDataArray = params.GSDataArray;

}


// Function GameLibrary.GameLibrary_C.MakeEndGameSummaryActivity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     GSLogEventResponse             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_MakeEndGameSummaryActivity(const struct FGSLogEventResponse& GSLogEventResponse, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.MakeEndGameSummaryActivity");

	UGameLibrary_C_MakeEndGameSummaryActivity_Params params;
	params.GSLogEventResponse = GSLogEventResponse;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLibrary.GameLibrary_C.CreateLogEventEndGameSummaryActivity
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_SummaryResult> SummaryResult                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGameSparksScriptData*> GSDataArray                    (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_CreateLogEventEndGameSummaryActivity(TArray<struct FS_SummaryResult>* SummaryResult, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* GSDataArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateLogEventEndGameSummaryActivity");

	UGameLibrary_C_CreateLogEventEndGameSummaryActivity_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SummaryResult != nullptr)
		*SummaryResult = params.SummaryResult;
	if (GSDataArray != nullptr)
		*GSDataArray = params.GSDataArray;

}


// Function GameLibrary.GameLibrary_C.GetSurvivorItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         Item                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetSurvivorItem(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, struct FPrimaryAssetId* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetSurvivorItem");

	UGameLibrary_C_GetSurvivorItem_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function GameLibrary.GameLibrary_C.GetLogsComponent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULogsComponent_C*        LogsComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetLogsComponent(class UObject* __WorldContext, class ULogsComponent_C** LogsComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetLogsComponent");

	UGameLibrary_C_GetLogsComponent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LogsComponent != nullptr)
		*LogsComponent = params.LogsComponent;

}


// Function GameLibrary.GameLibrary_C.GetPlayerInfoComponent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInfoComponent_C*  PlayerInfoComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameLibrary_C::STATIC_GetPlayerInfoComponent(class APlayerController* PlayerController, class UObject* __WorldContext, class UPlayerInfoComponent_C** PlayerInfoComponent, bool* IsValid)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetPlayerInfoComponent");

	UGameLibrary_C_GetPlayerInfoComponent_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfoComponent != nullptr)
		*PlayerInfoComponent = params.PlayerInfoComponent;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function GameLibrary.GameLibrary_C.GetHunterPerk
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          Return_Effects                 (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_GetHunterPerk(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, TArray<class UClass*>* Return_Effects)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHunterPerk");

	UGameLibrary_C_GetHunterPerk_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Effects != nullptr)
		*Return_Effects = params.Return_Effects;

}


// Function GameLibrary.GameLibrary_C.GetSurvivorPerk
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          Return_Effects                 (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_GetSurvivorPerk(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, TArray<class UClass*>* Return_Effects)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetSurvivorPerk");

	UGameLibrary_C_GetSurvivorPerk_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Effects != nullptr)
		*Return_Effects = params.Return_Effects;

}


// Function GameLibrary.GameLibrary_C.TryLoadPrimaryIDFromStr
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetType       Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FString                 StrID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHSHItem*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bLoadSuccess                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
class UHSHItem* UGameLibrary_C::STATIC_TryLoadPrimaryIDFromStr(const struct FPrimaryAssetType& Type, const struct FString& StrID, class UObject* __WorldContext, bool* bLoadSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.TryLoadPrimaryIDFromStr");

	UGameLibrary_C_TryLoadPrimaryIDFromStr_Params params;
	params.Type = Type;
	params.StrID = StrID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bLoadSuccess != nullptr)
		*bLoadSuccess = params.bLoadSuccess;


	return params.ReturnValue;
}


// Function GameLibrary.GameLibrary_C.BreakeHunterSlots
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGameSparksScriptData*> GSArraySlots                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_HunterSlot>   HunterSlots                    (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_BreakeHunterSlots(TArray<class UGameSparksScriptData*>* GSArraySlots, class UObject* __WorldContext, TArray<struct FS_HunterSlot>* HunterSlots)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.BreakeHunterSlots");

	UGameLibrary_C_BreakeHunterSlots_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GSArraySlots != nullptr)
		*GSArraySlots = params.GSArraySlots;
	if (HunterSlots != nullptr)
		*HunterSlots = params.HunterSlots;

}


// Function GameLibrary.GameLibrary_C.BreakeSurvivorSlots
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGameSparksScriptData*> GSArraySlots                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_SurvivorSlot> SurvivorSlots                  (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_BreakeSurvivorSlots(TArray<class UGameSparksScriptData*>* GSArraySlots, class UObject* __WorldContext, TArray<struct FS_SurvivorSlot>* SurvivorSlots)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.BreakeSurvivorSlots");

	UGameLibrary_C_BreakeSurvivorSlots_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GSArraySlots != nullptr)
		*GSArraySlots = params.GSArraySlots;
	if (SurvivorSlots != nullptr)
		*SurvivorSlots = params.SurvivorSlots;

}


// Function GameLibrary.GameLibrary_C.CreateHunterSlots
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_HunterSlot>   HunterSlots                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGameSparksScriptData*> Return_GSArray                 (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_CreateHunterSlots(TArray<struct FS_HunterSlot>* HunterSlots, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* Return_GSArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateHunterSlots");

	UGameLibrary_C_CreateHunterSlots_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HunterSlots != nullptr)
		*HunterSlots = params.HunterSlots;
	if (Return_GSArray != nullptr)
		*Return_GSArray = params.Return_GSArray;

}


// Function GameLibrary.GameLibrary_C.CreateSurvivorSlots
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_SurvivorSlot> SurvivorSlots                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGameSparksScriptData*> Return_GSArray                 (Parm, OutParm, ZeroConstructor)
void UGameLibrary_C::STATIC_CreateSurvivorSlots(TArray<struct FS_SurvivorSlot>* SurvivorSlots, class UObject* __WorldContext, TArray<class UGameSparksScriptData*>* Return_GSArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateSurvivorSlots");

	UGameLibrary_C_CreateSurvivorSlots_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurvivorSlots != nullptr)
		*SurvivorSlots = params.SurvivorSlots;
	if (Return_GSArray != nullptr)
		*Return_GSArray = params.Return_GSArray;

}


// Function GameLibrary.GameLibrary_C.GetSkinMesh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           NewMesh                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetSkinMesh(const struct FPlayerInfoStruct_G& PlayerInfo, class UObject* __WorldContext, class USkeletalMesh** NewMesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetSkinMesh");

	UGameLibrary_C_GetSkinMesh_Params params;
	params.PlayerInfo = PlayerInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewMesh != nullptr)
		*NewMesh = params.NewMesh;

}


// Function GameLibrary.GameLibrary_C.FindHunterSlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHCharacterItem*       characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_HunterSlot>   HunterSlots                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HunterSlot           Slot                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameLibrary_C::STATIC_FindHunterSlot(class UHSHCharacterItem* characteritem, TArray<struct FS_HunterSlot>* HunterSlots, class UObject* __WorldContext, struct FS_HunterSlot* Slot, bool* bFound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.FindHunterSlot");

	UGameLibrary_C_FindHunterSlot_Params params;
	params.characteritem = characteritem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HunterSlots != nullptr)
		*HunterSlots = params.HunterSlots;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (bFound != nullptr)
		*bFound = params.bFound;

}


// Function GameLibrary.GameLibrary_C.FindSurvivorSlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHCharacterItem*       characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_SurvivorSlot> SurvivorSlots                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SurvivorSlot         Slot                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_FindSurvivorSlot(class UHSHCharacterItem* characteritem, TArray<struct FS_SurvivorSlot>* SurvivorSlots, class UObject* __WorldContext, struct FS_SurvivorSlot* Slot, bool* Found, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.FindSurvivorSlot");

	UGameLibrary_C_FindSurvivorSlot_Params params;
	params.characteritem = characteritem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurvivorSlots != nullptr)
		*SurvivorSlots = params.SurvivorSlots;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (Found != nullptr)
		*Found = params.Found;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function GameLibrary.GameLibrary_C.GetSetupTrapCompletedCount
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_PrimaryAssetsIDCount> PrimaryAssetsArray             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SetupTrapCompletedCount        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetSetupTrapCompletedCount(TArray<struct FS_PrimaryAssetsIDCount>* PrimaryAssetsArray, class UObject* __WorldContext, int* SetupTrapCompletedCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetSetupTrapCompletedCount");

	UGameLibrary_C_GetSetupTrapCompletedCount_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrimaryAssetsArray != nullptr)
		*PrimaryAssetsArray = params.PrimaryAssetsArray;
	if (SetupTrapCompletedCount != nullptr)
		*SetupTrapCompletedCount = params.SetupTrapCompletedCount;

}


// Function GameLibrary.GameLibrary_C.IsYouWin?
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     PlayerRole                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURPlayerState_C*      HSURPlayerState                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURGameState_C*        HSURGameState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           YouWin_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameLibrary_C::STATIC_IsYouWin_(TEnumAsByte<E_Role_E_Role> PlayerRole, class AHSURPlayerState_C* HSURPlayerState, class AHSURGameState_C* HSURGameState, class UObject* __WorldContext, bool* YouWin_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.IsYouWin?");

	UGameLibrary_C_IsYouWin__Params params;
	params.PlayerRole = PlayerRole;
	params.HSURPlayerState = HSURPlayerState;
	params.HSURGameState = HSURGameState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (YouWin_ != nullptr)
		*YouWin_ = params.YouWin_;

}


// Function GameLibrary.GameLibrary_C.CreatePlayerData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_GameStatistic        PlayerStatistic                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          totalSurvivorHp                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   playerData                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_CreatePlayerData(const struct FS_GameStatistic& PlayerStatistic, float totalSurvivorHp, class UObject* __WorldContext, class UGameSparksScriptData** playerData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreatePlayerData");

	UGameLibrary_C_CreatePlayerData_Params params;
	params.PlayerStatistic = PlayerStatistic;
	params.totalSurvivorHp = totalSurvivorHp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerData != nullptr)
		*playerData = params.playerData;

}


// Function GameLibrary.GameLibrary_C.CreateEndGameSummaryLogEventData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGameSparksScriptData*> playerDataList                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsPortalExit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksLogEventData* EndGameSummaryLogEventData     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_CreateEndGameSummaryLogEventData(TArray<class UGameSparksScriptData*>* playerDataList, bool IsPortalExit, class UObject* __WorldContext, class UGameSparksLogEventData** EndGameSummaryLogEventData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateEndGameSummaryLogEventData");

	UGameLibrary_C_CreateEndGameSummaryLogEventData_Params params;
	params.IsPortalExit = IsPortalExit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerDataList != nullptr)
		*playerDataList = params.playerDataList;
	if (EndGameSummaryLogEventData != nullptr)
		*EndGameSummaryLogEventData = params.EndGameSummaryLogEventData;

}


// Function GameLibrary.GameLibrary_C.CreateHunterEndGameSummaryData
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isWin                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          totalSurvivorHp                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isLeaveGame                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isGotTerminated                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameSparksScriptData* UGameLibrary_C::STATIC_CreateHunterEndGameSummaryData(class UGameSparksScriptData** Target, bool isWin, float totalSurvivorHp, bool isLeaveGame, bool isGotTerminated, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateHunterEndGameSummaryData");

	UGameLibrary_C_CreateHunterEndGameSummaryData_Params params;
	params.isWin = isWin;
	params.totalSurvivorHp = totalSurvivorHp;
	params.isLeaveGame = isLeaveGame;
	params.isGotTerminated = isGotTerminated;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;


	return params.ReturnValue;
}


// Function GameLibrary.GameLibrary_C.CreateHunterInGamePlayerData
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          attackDamaged                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            attackedCount                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            attackedHiddenCount            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            destroyedObjectCount           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            killCount                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isGotTerminatedIn3Mins         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isGotTerminatedIn5Mins         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameSparksScriptData* UGameLibrary_C::STATIC_CreateHunterInGamePlayerData(const struct FString& PlayerId, const struct FString& Role, float attackDamaged, int attackedCount, int attackedHiddenCount, int destroyedObjectCount, int killCount, bool isGotTerminatedIn3Mins, bool isGotTerminatedIn5Mins, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateHunterInGamePlayerData");

	UGameLibrary_C_CreateHunterInGamePlayerData_Params params;
	params.PlayerId = PlayerId;
	params.Role = Role;
	params.attackDamaged = attackDamaged;
	params.attackedCount = attackedCount;
	params.attackedHiddenCount = attackedHiddenCount;
	params.destroyedObjectCount = destroyedObjectCount;
	params.killCount = killCount;
	params.isGotTerminatedIn3Mins = isGotTerminatedIn3Mins;
	params.isGotTerminatedIn5Mins = isGotTerminatedIn5Mins;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameLibrary.GameLibrary_C.CreateSurvivorEndGameSummaryData
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGameSparksScriptData*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isWin                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isHunterTerminated             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          hpRemainPercentage             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            revivedCount                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            helpRevivedCount               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isLeaveGame                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isGotTerminated                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameSparksScriptData* UGameLibrary_C::STATIC_CreateSurvivorEndGameSummaryData(class UGameSparksScriptData** Target, bool isWin, bool isHunterTerminated, float hpRemainPercentage, int revivedCount, int helpRevivedCount, bool isLeaveGame, bool isGotTerminated, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateSurvivorEndGameSummaryData");

	UGameLibrary_C_CreateSurvivorEndGameSummaryData_Params params;
	params.isWin = isWin;
	params.isHunterTerminated = isHunterTerminated;
	params.hpRemainPercentage = hpRemainPercentage;
	params.revivedCount = revivedCount;
	params.helpRevivedCount = helpRevivedCount;
	params.isLeaveGame = isLeaveGame;
	params.isGotTerminated = isGotTerminated;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;


	return params.ReturnValue;
}


// Function GameLibrary.GameLibrary_C.CreateSurvivorInGamePlayerData
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            giveItemToPlayerCount          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SetupTrapCompletedCount        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          trapDamaged                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            trappedCount                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          attackDamaged                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            attackedCount                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            perfectSkillCheckCount         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          timeToUseSupportPerk           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isGotTerminatedIn3Mins         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isGotTerminatedIn5Mins         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameSparksScriptData* UGameLibrary_C::STATIC_CreateSurvivorInGamePlayerData(const struct FString& PlayerId, const struct FString& Role, int giveItemToPlayerCount, int SetupTrapCompletedCount, float trapDamaged, int trappedCount, float attackDamaged, int attackedCount, int perfectSkillCheckCount, float timeToUseSupportPerk, bool isGotTerminatedIn3Mins, bool isGotTerminatedIn5Mins, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.CreateSurvivorInGamePlayerData");

	UGameLibrary_C_CreateSurvivorInGamePlayerData_Params params;
	params.PlayerId = PlayerId;
	params.Role = Role;
	params.giveItemToPlayerCount = giveItemToPlayerCount;
	params.SetupTrapCompletedCount = SetupTrapCompletedCount;
	params.trapDamaged = trapDamaged;
	params.trappedCount = trappedCount;
	params.attackDamaged = attackDamaged;
	params.attackedCount = attackedCount;
	params.perfectSkillCheckCount = perfectSkillCheckCount;
	params.timeToUseSupportPerk = timeToUseSupportPerk;
	params.isGotTerminatedIn3Mins = isGotTerminatedIn3Mins;
	params.isGotTerminatedIn5Mins = isGotTerminatedIn5Mins;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameLibrary.GameLibrary_C.GetScriptMessageType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ExtCode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_ScriptMessageType_E_ScriptMessageType> ScriptMessageType              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetScriptMessageType(const struct FString& ExtCode, class UObject* __WorldContext, TEnumAsByte<E_ScriptMessageType_E_ScriptMessageType>* ScriptMessageType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetScriptMessageType");

	UGameLibrary_C_GetScriptMessageType_Params params;
	params.ExtCode = ExtCode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScriptMessageType != nullptr)
		*ScriptMessageType = params.ScriptMessageType;

}


// Function GameLibrary.GameLibrary_C.GetHSURMenuCameraManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHSURMenuCameraManagerComponent_C* HSURMenuCameraManagerComponent (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURMenuCameraManager(class UObject* __WorldContext, class UHSURMenuCameraManagerComponent_C** HSURMenuCameraManagerComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURMenuCameraManager");

	UGameLibrary_C_GetHSURMenuCameraManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURMenuCameraManagerComponent != nullptr)
		*HSURMenuCameraManagerComponent = params.HSURMenuCameraManagerComponent;

}


// Function GameLibrary.GameLibrary_C.FilterAudio
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PairSound>    S_PairSound                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USoundBase*              DefaultSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FindSuccess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_FilterAudio(class UClass* CharacterClass, TArray<struct FS_PairSound> S_PairSound, class USoundBase* DefaultSound, class UObject* __WorldContext, bool* FindSuccess, class USoundBase** Sound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.FilterAudio");

	UGameLibrary_C_FilterAudio_Params params;
	params.CharacterClass = CharacterClass;
	params.S_PairSound = S_PairSound;
	params.DefaultSound = DefaultSound;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FindSuccess != nullptr)
		*FindSuccess = params.FindSuccess;
	if (Sound != nullptr)
		*Sound = params.Sound;

}


// Function GameLibrary.GameLibrary_C.GetHSURLobbyHUD
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURLobbyHUD_C*         HSURLobby_HUD                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURLobbyHUD(class APlayerController* PlayerController, class UObject* __WorldContext, class AHSURLobbyHUD_C** HSURLobby_HUD)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURLobbyHUD");

	UGameLibrary_C_GetHSURLobbyHUD_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURLobby_HUD != nullptr)
		*HSURLobby_HUD = params.HSURLobby_HUD;

}


// Function GameLibrary.GameLibrary_C.GetHSURLobbyPS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURLobbyPS_C*          HSURLobby_PS                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURLobbyPS(class APlayerController* PlayerController, class UObject* __WorldContext, class AHSURLobbyPS_C** HSURLobby_PS)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURLobbyPS");

	UGameLibrary_C_GetHSURLobbyPS_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURLobby_PS != nullptr)
		*HSURLobby_PS = params.HSURLobby_PS;

}


// Function GameLibrary.GameLibrary_C.GetHSURLobbyPC
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURLobbyPC_C*          HSURLobby_PC                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURLobbyPC(class UObject* __WorldContext, class AHSURLobbyPC_C** HSURLobby_PC)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURLobbyPC");

	UGameLibrary_C_GetHSURLobbyPC_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURLobby_PC != nullptr)
		*HSURLobby_PC = params.HSURLobby_PC;

}


// Function GameLibrary.GameLibrary_C.GetHSURLobbyGS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURLobbyGS_C*          HSURLobby_GS                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURLobbyGS(class UObject* __WorldContext, class AHSURLobbyGS_C** HSURLobby_GS)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURLobbyGS");

	UGameLibrary_C_GetHSURLobbyGS_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURLobby_GS != nullptr)
		*HSURLobby_GS = params.HSURLobby_GS;

}


// Function GameLibrary.GameLibrary_C.GetHSURLobbyGM
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURNewLobbyGM_C*       HSURNewLobby_GM                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURLobbyGM(class UObject* __WorldContext, class AHSURNewLobbyGM_C** HSURNewLobby_GM)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURLobbyGM");

	UGameLibrary_C_GetHSURLobbyGM_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURNewLobby_GM != nullptr)
		*HSURNewLobby_GM = params.HSURNewLobby_GM;

}


// Function GameLibrary.GameLibrary_C.GetMatchInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 MatchId                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 MatchShortCode                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 MatchGroup                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetMatchInfo(class UObject* __WorldContext, struct FString* MatchId, struct FString* MatchShortCode, struct FString* MatchGroup)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetMatchInfo");

	UGameLibrary_C_GetMatchInfo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MatchId != nullptr)
		*MatchId = params.MatchId;
	if (MatchShortCode != nullptr)
		*MatchShortCode = params.MatchShortCode;
	if (MatchGroup != nullptr)
		*MatchGroup = params.MatchGroup;

}


// Function GameLibrary.GameLibrary_C.FilterAnimation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PairAnimation> S_PairAnimation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAnimMontage*            DefaultAnimMontage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           FindSuccess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*            AnimMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_FilterAnimation(class UClass* CharacterClass, TArray<struct FS_PairAnimation> S_PairAnimation, class UAnimMontage* DefaultAnimMontage, class UObject* __WorldContext, bool* FindSuccess, class UAnimMontage** AnimMontage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.FilterAnimation");

	UGameLibrary_C_FilterAnimation_Params params;
	params.CharacterClass = CharacterClass;
	params.S_PairAnimation = S_PairAnimation;
	params.DefaultAnimMontage = DefaultAnimMontage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FindSuccess != nullptr)
		*FindSuccess = params.FindSuccess;
	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;

}


// Function GameLibrary.GameLibrary_C.GetHSURGameInstance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHSURGameInstance_C*     AsHSURGame_Instance            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURGameInstance(class UObject* __WorldContext, class UHSURGameInstance_C** AsHSURGame_Instance)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURGameInstance");

	UGameLibrary_C_GetHSURGameInstance_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsHSURGame_Instance != nullptr)
		*AsHSURGame_Instance = params.AsHSURGame_Instance;

}


// Function GameLibrary.GameLibrary_C.GetHSURPlayerHUD
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURHUD_C*              HSURHUD                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURPlayerHUD(class APawn* Pawn, class UObject* __WorldContext, class AHSURHUD_C** HSURHUD)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURPlayerHUD");

	UGameLibrary_C_GetHSURPlayerHUD_Params params;
	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURHUD != nullptr)
		*HSURHUD = params.HSURHUD;

}


// Function GameLibrary.GameLibrary_C.GetHSURPlayerState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURPlayerState_C*      HSURPlayer_State               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURPlayerState(class APawn* Pawn, class UObject* __WorldContext, class AHSURPlayerState_C** HSURPlayer_State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURPlayerState");

	UGameLibrary_C_GetHSURPlayerState_Params params;
	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURPlayer_State != nullptr)
		*HSURPlayer_State = params.HSURPlayer_State;

}


// Function GameLibrary.GameLibrary_C.GetHSURPlayerController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURPlayerController_C* HSURPlayer_Controller          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURPlayerController(class APawn* Pawn, class UObject* __WorldContext, class AHSURPlayerController_C** HSURPlayer_Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURPlayerController");

	UGameLibrary_C_GetHSURPlayerController_Params params;
	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURPlayer_Controller != nullptr)
		*HSURPlayer_Controller = params.HSURPlayer_Controller;

}


// Function GameLibrary.GameLibrary_C.GetHSURGameState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSURGameState_C*        HSURGameState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_GetHSURGameState(class UObject* __WorldContext, class AHSURGameState_C** HSURGameState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.GetHSURGameState");

	UGameLibrary_C_GetHSURGameState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSURGameState != nullptr)
		*HSURGameState = params.HSURGameState;

}


// Function GameLibrary.GameLibrary_C.IsRunningOnMobile
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsMobile                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 PlatformName                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UGameLibrary_C::STATIC_IsRunningOnMobile(class UObject* __WorldContext, bool* IsMobile, struct FString* PlatformName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameLibrary.GameLibrary_C.IsRunningOnMobile");

	UGameLibrary_C_IsRunningOnMobile_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsMobile != nullptr)
		*IsMobile = params.IsMobile;
	if (PlatformName != nullptr)
		*PlatformName = params.PlatformName;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
