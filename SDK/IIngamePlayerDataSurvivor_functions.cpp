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

// Function IIngamePlayerDataSurvivor.IIngamePlayerDataSurvivor_C.GetIngamePlayerDataSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIngamePlayerDataSurvivor_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UIngamePlayerDataSurvivor_C* UIIngamePlayerDataSurvivor_C::GetIngamePlayerDataSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IIngamePlayerDataSurvivor.IIngamePlayerDataSurvivor_C.GetIngamePlayerDataSurvivor");

	UIIngamePlayerDataSurvivor_C_GetIngamePlayerDataSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
