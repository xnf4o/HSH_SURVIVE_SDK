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

// Function OutlineManagerComponent.OutlineManagerComponent_C.OnUpdateReplicate
// (Public, BlueprintCallable, BlueprintEvent)
void UOutlineManagerComponent_C::OnUpdateReplicate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.OnUpdateReplicate");

	UOutlineManagerComponent_C_OnUpdateReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.IsPlayerHavePerkClairvoyant
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bHave                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutlineManagerComponent_C::IsPlayerHavePerkClairvoyant(bool* bHave)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.IsPlayerHavePerkClairvoyant");

	UOutlineManagerComponent_C_IsPlayerHavePerkClairvoyant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHave != nullptr)
		*bHave = params.bHave;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.OnRep_AuraInfo
// (BlueprintCallable, BlueprintEvent)
void UOutlineManagerComponent_C::OnRep_AuraInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.OnRep_AuraInfo");

	UOutlineManagerComponent_C_OnRep_AuraInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.FindCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsFindSuccess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::FindCharacter(class AHSHCharacterBase* hshcharacter, bool* bIsFindSuccess, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.FindCharacter");

	UOutlineManagerComponent_C_FindCharacter_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsFindSuccess != nullptr)
		*bIsFindSuccess = params.bIsFindSuccess;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.OnRemoveAurainfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::OnRemoveAurainfo(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.OnRemoveAurainfo");

	UOutlineManagerComponent_C_OnRemoveAurainfo_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.UpdateAura
// (Public, BlueprintCallable, BlueprintEvent)
void UOutlineManagerComponent_C::UpdateAura()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.UpdateAura");

	UOutlineManagerComponent_C_UpdateAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.RequestShowSurvivorAura
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsCanHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutlineManagerComponent_C::RequestShowSurvivorAura(class ASurvivorBase_C* survivor, float Timer, bool bIsCanHide)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.RequestShowSurvivorAura");

	UOutlineManagerComponent_C_RequestShowSurvivorAura_Params params;
	params.survivor = survivor;
	params.Timer = Timer;
	params.bIsCanHide = bIsCanHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.HideSurvivorAura
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::HideSurvivorAura(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.HideSurvivorAura");

	UOutlineManagerComponent_C_HideSurvivorAura_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.RefreshSurvivorAura
// (BlueprintCallable, BlueprintEvent)
void UOutlineManagerComponent_C::RefreshSurvivorAura()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.RefreshSurvivorAura");

	UOutlineManagerComponent_C_RefreshSurvivorAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.ShowSurvivorAura
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::ShowSurvivorAura(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.ShowSurvivorAura");

	UOutlineManagerComponent_C_ShowSurvivorAura_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.RequestHideSurvivorAura
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::RequestHideSurvivorAura(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.RequestHideSurvivorAura");

	UOutlineManagerComponent_C_RequestHideSurvivorAura_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.ShowHunterAura
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::ShowHunterAura(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.ShowHunterAura");

	UOutlineManagerComponent_C_ShowHunterAura_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.MulticastHunterAura
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::MulticastHunterAura(bool bShow, class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.MulticastHunterAura");

	UOutlineManagerComponent_C_MulticastHunterAura_Params params;
	params.bShow = bShow;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.RefreshHunterAura
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::RefreshHunterAura(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.RefreshHunterAura");

	UOutlineManagerComponent_C_RefreshHunterAura_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.ShowHunterAuraWithTime
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::ShowHunterAuraWithTime(class AHunterBase_C* hunter, float Time)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.ShowHunterAuraWithTime");

	UOutlineManagerComponent_C_ShowHunterAuraWithTime_Params params;
	params.hunter = hunter;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UOutlineManagerComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.Initialize");

	UOutlineManagerComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.ReceiveTick");

	UOutlineManagerComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OutlineManagerComponent.OutlineManagerComponent_C.ExecuteUbergraph_OutlineManagerComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOutlineManagerComponent_C::ExecuteUbergraph_OutlineManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OutlineManagerComponent.OutlineManagerComponent_C.ExecuteUbergraph_OutlineManagerComponent");

	UOutlineManagerComponent_C_ExecuteUbergraph_OutlineManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
