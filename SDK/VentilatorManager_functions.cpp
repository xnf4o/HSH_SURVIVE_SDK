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

// Function VentilatorManager.VentilatorManager_C.CheckVentilatorCameFrom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVentilator_C*           Ventilator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ventilator           VentilatorData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Ventilator>   VentilatorDatas                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FS_Ventilator           StructOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVentilatorManager_C::CheckVentilatorCameFrom(class AVentilator_C* Ventilator, const struct FS_Ventilator& VentilatorData, TArray<struct FS_Ventilator>* VentilatorDatas, struct FS_Ventilator* StructOut)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.CheckVentilatorCameFrom");

	AVentilatorManager_C_CheckVentilatorCameFrom_Params params;
	params.Ventilator = Ventilator;
	params.VentilatorData = VentilatorData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VentilatorDatas != nullptr)
		*VentilatorDatas = params.VentilatorDatas;
	if (StructOut != nullptr)
		*StructOut = params.StructOut;

}


// Function VentilatorManager.VentilatorManager_C.GetIsLift
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AVentilator_C*           FromVentilator                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ventilator           Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AVentilatorManager_C::GetIsLift(class AVentilator_C* FromVentilator, const struct FS_Ventilator& Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.GetIsLift");

	AVentilatorManager_C_GetIsLift_Params params;
	params.FromVentilator = FromVentilator;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VentilatorManager.VentilatorManager_C.GetDestinationVentilator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVentilator_C*           InteractedVentilator           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVentilator_C*           DestinationVentilator          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Ventilator           S_VentilatorList               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVentilatorManager_C::GetDestinationVentilator(class AVentilator_C* InteractedVentilator, class AVentilator_C** DestinationVentilator, struct FS_Ventilator* S_VentilatorList, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.GetDestinationVentilator");

	AVentilatorManager_C_GetDestinationVentilator_Params params;
	params.InteractedVentilator = InteractedVentilator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DestinationVentilator != nullptr)
		*DestinationVentilator = params.DestinationVentilator;
	if (S_VentilatorList != nullptr)
		*S_VentilatorList = params.S_VentilatorList;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function VentilatorManager.VentilatorManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AVentilatorManager_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.UserConstructionScript");

	AVentilatorManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VentilatorManager.VentilatorManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AVentilatorManager_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.ReceiveBeginPlay");

	AVentilatorManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VentilatorManager.VentilatorManager_C.SurvivorTeleportToAnotherVentilator
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVentilator_C*           InteractedVentilator           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVentilatorManager_C::SurvivorTeleportToAnotherVentilator(class ASurvivorBase_C* survivor, class AVentilator_C* InteractedVentilator)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.SurvivorTeleportToAnotherVentilator");

	AVentilatorManager_C_SurvivorTeleportToAnotherVentilator_Params params;
	params.survivor = survivor;
	params.InteractedVentilator = InteractedVentilator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VentilatorManager.VentilatorManager_C.OnLiftSuccess
// (BlueprintCallable, BlueprintEvent)
void AVentilatorManager_C::OnLiftSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.OnLiftSuccess");

	AVentilatorManager_C_OnLiftSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VentilatorManager.VentilatorManager_C.OnVenCDFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVentilatorManager_C::OnVenCDFinish(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.OnVenCDFinish");

	AVentilatorManager_C_OnVenCDFinish_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VentilatorManager.VentilatorManager_C.ExecuteUbergraph_VentilatorManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVentilatorManager_C::ExecuteUbergraph_VentilatorManager(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VentilatorManager.VentilatorManager_C.ExecuteUbergraph_VentilatorManager");

	AVentilatorManager_C_ExecuteUbergraph_VentilatorManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
