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

// Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.SortByDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATeleportBase_C*> Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATeleportBase_C*> Teleport                       (Parm, OutParm, ZeroConstructor)
void UBTTask_FindRespawnPlace_C::SortByDistance(TArray<class ATeleportBase_C*>* Source, class APawn* Pawn, TArray<class ATeleportBase_C*>* Teleport)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.SortByDistance");

	UBTTask_FindRespawnPlace_C_SortByDistance_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
	if (Teleport != nullptr)
		*Teleport = params.Teleport;

}


// Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindRespawnPlace_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.ReceiveExecuteAI");

	UBTTask_FindRespawnPlace_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.ExecuteUbergraph_BTTask_FindRespawnPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindRespawnPlace_C::ExecuteUbergraph_BTTask_FindRespawnPlace(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_FindRespawnPlace.BTTask_FindRespawnPlace_C.ExecuteUbergraph_BTTask_FindRespawnPlace");

	UBTTask_FindRespawnPlace_C_ExecuteUbergraph_BTTask_FindRespawnPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
