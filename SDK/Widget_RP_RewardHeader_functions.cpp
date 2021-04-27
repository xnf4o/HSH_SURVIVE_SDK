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

// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.SetHeaderBackground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremium                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RP_RewardHeader_C::SetHeaderBackground(bool bIsPremium)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.SetHeaderBackground");

	UWidget_RP_RewardHeader_C_SetHeaderBackground_Params params;
	params.bIsPremium = bIsPremium;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPremium                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RP_RewardHeader_C::Initialize(bool bIsPremium)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.Initialize");

	UWidget_RP_RewardHeader_C_Initialize_Params params;
	params.bIsPremium = bIsPremium;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.UpdateFreeValue
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsClaimed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RP_RewardHeader_C::UpdateFreeValue(TArray<struct FString> Name, bool IsClaimed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.UpdateFreeValue");

	UWidget_RP_RewardHeader_C_UpdateFreeValue_Params params;
	params.Name = Name;
	params.IsClaimed = IsClaimed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.UpdatePremiumValue
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsClaimed                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RP_RewardHeader_C::UpdatePremiumValue(TArray<struct FString> Name, bool IsClaimed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.UpdatePremiumValue");

	UWidget_RP_RewardHeader_C_UpdatePremiumValue_Params params;
	params.Name = Name;
	params.IsClaimed = IsClaimed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.ExecuteUbergraph_Widget_RP_RewardHeader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RP_RewardHeader_C::ExecuteUbergraph_Widget_RP_RewardHeader(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_RP_RewardHeader.Widget_RP_RewardHeader_C.ExecuteUbergraph_Widget_RP_RewardHeader");

	UWidget_RP_RewardHeader_C_ExecuteUbergraph_Widget_RP_RewardHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
