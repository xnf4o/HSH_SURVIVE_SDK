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

// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Coins_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWDG_ActivityItem_C::Get_Text_Coins_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Coins_Visibility_1");

	UWDG_ActivityItem_C_Get_Text_Coins_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_EventName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWDG_ActivityItem_C::Get_EventName_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.Get_EventName_Text_1");

	UWDG_ActivityItem_C_Get_EventName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Coins_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWDG_ActivityItem_C::Get_Text_Coins_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Coins_Text_1");

	UWDG_ActivityItem_C_Get_Text_Coins_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Score_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWDG_ActivityItem_C::Get_Text_Score_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.Get_Text_Score_Text_1");

	UWDG_ActivityItem_C_Get_Text_Score_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WDG_ActivityItem.WDG_ActivityItem_C.IntValueToSymbol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Symbol                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWDG_ActivityItem_C::IntValueToSymbol(int Value, struct FString* Symbol)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.IntValueToSymbol");

	UWDG_ActivityItem_C_IntValueToSymbol_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Symbol != nullptr)
		*Symbol = params.Symbol;

}


// Function WDG_ActivityItem.WDG_ActivityItem_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Coin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWDG_ActivityItem_C::SetDetails(const struct FString& EventName, int Coin, int Score)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.SetDetails");

	UWDG_ActivityItem_C_SetDetails_Params params;
	params.EventName = EventName;
	params.Coin = Coin;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WDG_ActivityItem.WDG_ActivityItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWDG_ActivityItem_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.Construct");

	UWDG_ActivityItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WDG_ActivityItem.WDG_ActivityItem_C.ExecuteUbergraph_WDG_ActivityItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWDG_ActivityItem_C::ExecuteUbergraph_WDG_ActivityItem(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function WDG_ActivityItem.WDG_ActivityItem_C.ExecuteUbergraph_WDG_ActivityItem");

	UWDG_ActivityItem_C_ExecuteUbergraph_WDG_ActivityItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
