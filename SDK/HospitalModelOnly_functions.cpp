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

// Function HospitalModelOnly.HospitalModelOnly_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHospitalModelOnly_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HospitalModelOnly.HospitalModelOnly_C.ReceiveBeginPlay");

	AHospitalModelOnly_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HospitalModelOnly.HospitalModelOnly_C.ExecuteUbergraph_HospitalModelOnly
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHospitalModelOnly_C::ExecuteUbergraph_HospitalModelOnly(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HospitalModelOnly.HospitalModelOnly_C.ExecuteUbergraph_HospitalModelOnly");

	AHospitalModelOnly_C_ExecuteUbergraph_HospitalModelOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
