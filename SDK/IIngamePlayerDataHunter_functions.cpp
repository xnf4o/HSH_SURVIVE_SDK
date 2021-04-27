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

// Function IIngamePlayerDataHunter.IIngamePlayerDataHunter_C.GetIngamePlayerDataHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIngamePlayerDataHunter_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UIngamePlayerDataHunter_C* UIIngamePlayerDataHunter_C::GetIngamePlayerDataHunter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IIngamePlayerDataHunter.IIngamePlayerDataHunter_C.GetIngamePlayerDataHunter");

	UIIngamePlayerDataHunter_C_GetIngamePlayerDataHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
