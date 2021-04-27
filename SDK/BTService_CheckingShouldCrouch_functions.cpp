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

// Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.CheckCouch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_CheckingShouldCrouch_C::CheckCouch(class APawn* Owner)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.CheckCouch");

	UBTService_CheckingShouldCrouch_C_CheckCouch_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.IsNearHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerPawn                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HeightOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NearOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBTService_CheckingShouldCrouch_C::IsNearHunter(class AActor* OwnerPawn, float HeightOffset, float NearOffset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.IsNearHunter");

	UBTService_CheckingShouldCrouch_C_IsNearHunter_Params params;
	params.OwnerPawn = OwnerPawn;
	params.HeightOffset = HeightOffset;
	params.NearOffset = NearOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_CheckingShouldCrouch_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.ReceiveTickAI");

	UBTService_CheckingShouldCrouch_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.ExecuteUbergraph_BTService_CheckingShouldCrouch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_CheckingShouldCrouch_C::ExecuteUbergraph_BTService_CheckingShouldCrouch(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTService_CheckingShouldCrouch.BTService_CheckingShouldCrouch_C.ExecuteUbergraph_BTService_CheckingShouldCrouch");

	UBTService_CheckingShouldCrouch_C_ExecuteUbergraph_BTService_CheckingShouldCrouch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
