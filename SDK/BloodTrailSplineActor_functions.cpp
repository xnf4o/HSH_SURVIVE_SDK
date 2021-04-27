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

// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ToggleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABloodTrailSplineActor_C::ToggleVisibility(bool bIsEnable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodTrailSplineActor.BloodTrailSplineActor_C.ToggleVisibility");

	ABloodTrailSplineActor_C_ToggleVisibility_Params params;
	params.bIsEnable = bIsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodTrailSplineActor.BloodTrailSplineActor_C.UpdateSplinePoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABloodTrailSplineActor_C::UpdateSplinePoints(TArray<struct FVector> Position)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodTrailSplineActor.BloodTrailSplineActor_C.UpdateSplinePoints");

	ABloodTrailSplineActor_C_UpdateSplinePoints_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodTrailSplineActor.BloodTrailSplineActor_C.Initialize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABloodTrailSplineActor_C::Initialize(TArray<struct FVector> Position)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodTrailSplineActor.BloodTrailSplineActor_C.Initialize");

	ABloodTrailSplineActor_C_Initialize_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ParticleMovement__FinishedFunc
// (BlueprintEvent)
void ABloodTrailSplineActor_C::ParticleMovement__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodTrailSplineActor.BloodTrailSplineActor_C.ParticleMovement__FinishedFunc");

	ABloodTrailSplineActor_C_ParticleMovement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ParticleMovement__UpdateFunc
// (BlueprintEvent)
void ABloodTrailSplineActor_C::ParticleMovement__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodTrailSplineActor.BloodTrailSplineActor_C.ParticleMovement__UpdateFunc");

	ABloodTrailSplineActor_C_ParticleMovement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ExecuteUbergraph_BloodTrailSplineActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABloodTrailSplineActor_C::ExecuteUbergraph_BloodTrailSplineActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodTrailSplineActor.BloodTrailSplineActor_C.ExecuteUbergraph_BloodTrailSplineActor");

	ABloodTrailSplineActor_C_ExecuteUbergraph_BloodTrailSplineActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
