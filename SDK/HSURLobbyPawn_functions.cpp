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

// Function HSURLobbyPawn.HSURLobbyPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSURLobbyPawn_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPawn.HSURLobbyPawn_C.ReceiveBeginPlay");

	AHSURLobbyPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPawn.HSURLobbyPawn_C.CheckInitCamera
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyPawn_C::CheckInitCamera()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPawn.HSURLobbyPawn_C.CheckInitCamera");

	AHSURLobbyPawn_C_CheckInitCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPawn.HSURLobbyPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPawn_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPawn.HSURLobbyPawn_C.ReceivePossessed");

	AHSURLobbyPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyPawn.HSURLobbyPawn_C.ExecuteUbergraph_HSURLobbyPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyPawn_C::ExecuteUbergraph_HSURLobbyPawn(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyPawn.HSURLobbyPawn_C.ExecuteUbergraph_HSURLobbyPawn");

	AHSURLobbyPawn_C_ExecuteUbergraph_HSURLobbyPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
