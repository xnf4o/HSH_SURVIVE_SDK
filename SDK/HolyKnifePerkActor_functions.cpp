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

// Function HolyKnifePerkActor.HolyKnifePerkActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHolyKnifePerkActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyKnifePerkActor.HolyKnifePerkActor_C.ReceiveBeginPlay");

	AHolyKnifePerkActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyKnifePerkActor.HolyKnifePerkActor_C.DestroyParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyKnifePerkActor_C::DestroyParticle(class AActor* DestroyedActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyKnifePerkActor.HolyKnifePerkActor_C.DestroyParticle");

	AHolyKnifePerkActor_C_DestroyParticle_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HolyKnifePerkActor.HolyKnifePerkActor_C.ExecuteUbergraph_HolyKnifePerkActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHolyKnifePerkActor_C::ExecuteUbergraph_HolyKnifePerkActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HolyKnifePerkActor.HolyKnifePerkActor_C.ExecuteUbergraph_HolyKnifePerkActor");

	AHolyKnifePerkActor_C_ExecuteUbergraph_HolyKnifePerkActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
