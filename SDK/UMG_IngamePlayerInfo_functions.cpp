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

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.IsSomePlayerHaveWeaknessDetector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUMG_IngamePlayerInfo_C::IsSomePlayerHaveWeaknessDetector()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.IsSomePlayerHaveWeaknessDetector");

	UUMG_IngamePlayerInfo_C_IsSomePlayerHaveWeaknessDetector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.IsHaveWeaknessDetector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUMG_IngamePlayerInfo_C::IsHaveWeaknessDetector(class APlayerState* State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.IsHaveWeaknessDetector");

	UUMG_IngamePlayerInfo_C_IsHaveWeaknessDetector_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_TotalCoin_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUMG_IngamePlayerInfo_C::Get_TotalCoin_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_TotalCoin_Text_1");

	UUMG_IngamePlayerInfo_C_Get_TotalCoin_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_TotalScore_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUMG_IngamePlayerInfo_C::Get_TotalScore_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_TotalScore_Text_1");

	UUMG_IngamePlayerInfo_C_Get_TotalScore_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_Ping_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUMG_IngamePlayerInfo_C::Get_Ping_Text_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_Ping_Text_1");

	UUMG_IngamePlayerInfo_C_Get_Ping_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.UpdatePing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
void UUMG_IngamePlayerInfo_C::UpdatePing(struct FText* Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.UpdatePing");

	UUMG_IngamePlayerInfo_C_UpdatePing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerState_C*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     OwnerInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UUMG_IngamePlayerInfo_C::Active(class AHSURPlayerState_C* PlayerState, const struct FPlayerInfoStruct_G& OwnerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Active");

	UUMG_IngamePlayerInfo_C_Active_Params params;
	params.PlayerState = PlayerState;
	params.OwnerInfo = OwnerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_IngamePlayerInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Tick");

	UUMG_IngamePlayerInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.ExecuteUbergraph_UMG_IngamePlayerInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_IngamePlayerInfo_C::ExecuteUbergraph_UMG_IngamePlayerInfo(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.ExecuteUbergraph_UMG_IngamePlayerInfo");

	UUMG_IngamePlayerInfo_C_ExecuteUbergraph_UMG_IngamePlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
