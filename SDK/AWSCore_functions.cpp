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

// Function AWSCore.UUID.RandomUUID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAWSUUID                ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAWSUUID UUUID::STATIC_RandomUUID()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AWSCore.UUID.RandomUUID");

	UUUID_RandomUUID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
