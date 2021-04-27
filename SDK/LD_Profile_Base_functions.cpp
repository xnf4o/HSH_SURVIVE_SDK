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

// Function LD_Profile_Base.LD_Profile_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALD_Profile_Base_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Profile_Base.LD_Profile_Base_C.ReceiveBeginPlay");

	ALD_Profile_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_Profile_Base.LD_Profile_Base_C.ExecuteUbergraph_LD_Profile_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_Profile_Base_C::ExecuteUbergraph_LD_Profile_Base(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_Profile_Base.LD_Profile_Base_C.ExecuteUbergraph_LD_Profile_Base");

	ALD_Profile_Base_C_ExecuteUbergraph_LD_Profile_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
