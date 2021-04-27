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

// Function SecretPortalBase.SecretPortalBase_C.OpenPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerControlller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalBase_C::OpenPortal(class AHSURPlayerController_C* PlayerControlller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalBase.SecretPortalBase_C.OpenPortal");

	ASecretPortalBase_C_OpenPortal_Params params;
	params.PlayerControlller = PlayerControlller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalBase.SecretPortalBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalBase.SecretPortalBase_C.ReceiveActorBeginOverlap");

	ASecretPortalBase_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalBase.SecretPortalBase_C.ExecuteUbergraph_SecretPortalBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalBase_C::ExecuteUbergraph_SecretPortalBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalBase.SecretPortalBase_C.ExecuteUbergraph_SecretPortalBase");

	ASecretPortalBase_C_ExecuteUbergraph_SecretPortalBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
