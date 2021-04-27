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

// Function BloodPortal.BloodPortal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABloodPortal_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodPortal.BloodPortal_C.Timeline_0__FinishedFunc");

	ABloodPortal_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodPortal.BloodPortal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABloodPortal_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodPortal.BloodPortal_C.Timeline_0__UpdateFunc");

	ABloodPortal_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodPortal.BloodPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABloodPortal_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodPortal.BloodPortal_C.ReceiveBeginPlay");

	ABloodPortal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodPortal.BloodPortal_C.PlayBloodEffect
// (BlueprintCallable, BlueprintEvent)
void ABloodPortal_C::PlayBloodEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodPortal.BloodPortal_C.PlayBloodEffect");

	ABloodPortal_C_PlayBloodEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BloodPortal.BloodPortal_C.ExecuteUbergraph_BloodPortal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABloodPortal_C::ExecuteUbergraph_BloodPortal(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BloodPortal.BloodPortal_C.ExecuteUbergraph_BloodPortal");

	ABloodPortal_C_ExecuteUbergraph_BloodPortal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
