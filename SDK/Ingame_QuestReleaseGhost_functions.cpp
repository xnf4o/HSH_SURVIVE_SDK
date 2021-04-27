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

// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdatePortalWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PortalDetail         PortalDetails                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_QuestReleaseGhost_C::UpdatePortalWidget(const struct FS_PortalDetail& PortalDetails)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdatePortalWidget");

	UIngame_QuestReleaseGhost_C_UpdatePortalWidget_Params params;
	params.PortalDetails = PortalDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.TryGetSDManager
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USD_ManagerComponent_C*  Cache                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_QuestReleaseGhost_C::TryGetSDManager(class USD_ManagerComponent_C** Cache)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.TryGetSDManager");

	UIngame_QuestReleaseGhost_C_TryGetSDManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cache != nullptr)
		*Cache = params.Cache;

}


// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdateIconWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_QuestDetail>  Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_QuestReleaseGhost_C::UpdateIconWidget(TArray<struct FS_QuestDetail>* Array)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdateIconWidget");

	UIngame_QuestReleaseGhost_C_UpdateIconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.GetRitualImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             Brush                          (Parm, OutParm)
void UIngame_QuestReleaseGhost_C::GetRitualImage(int Index, struct FSlateBrush* Brush)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.GetRitualImage");

	UIngame_QuestReleaseGhost_C_GetRitualImage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdateQuestWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_QuestDetail>  QuestDetail                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_QuestReleaseGhost_C::UpdateQuestWidget(TArray<struct FS_QuestDetail> QuestDetail)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.UpdateQuestWidget");

	UIngame_QuestReleaseGhost_C_UpdateQuestWidget_Params params;
	params.QuestDetail = QuestDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_QuestReleaseGhost_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.Tick");

	UIngame_QuestReleaseGhost_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.ExecuteUbergraph_Ingame_QuestReleaseGhost
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_QuestReleaseGhost_C::ExecuteUbergraph_Ingame_QuestReleaseGhost(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_QuestReleaseGhost.Ingame_QuestReleaseGhost_C.ExecuteUbergraph_Ingame_QuestReleaseGhost");

	UIngame_QuestReleaseGhost_C_ExecuteUbergraph_Ingame_QuestReleaseGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
