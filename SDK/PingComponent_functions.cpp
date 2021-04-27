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

// Function PingComponent.PingComponent_C.OnRep_PingReplicate
// (BlueprintCallable, BlueprintEvent)
void UPingComponent_C::OnRep_PingReplicate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.OnRep_PingReplicate");

	UPingComponent_C_OnRep_PingReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.FillterArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_PingPair>     OutArray                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UPingComponent_C::FillterArray(TArray<struct FS_PingPair>* Array, TArray<struct FS_PingPair>* OutArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.FillterArray");

	UPingComponent_C_FillterArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (OutArray != nullptr)
		*OutArray = params.OutArray;

}


// Function PingComponent.PingComponent_C.TryGetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSURHUD_C*              HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingComponent_C::TryGetHUD(class AHSURHUD_C** HUD)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.TryGetHUD");

	UPingComponent_C_TryGetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;

}


// Function PingComponent.PingComponent_C.LineTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Scene                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPingComponent_C::LineTrace(class USceneComponent* Scene, float Distance, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.LineTrace");

	UPingComponent_C_LineTrace_Params params;
	params.Scene = Scene;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function PingComponent.PingComponent_C.RequestPing
// (BlueprintCallable, BlueprintEvent)
void UPingComponent_C::RequestPing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.RequestPing");

	UPingComponent_C_RequestPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.ServerRequestPing
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingComponent_C::ServerRequestPing(const struct FHitResult& OutHit, bool IsHit_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.ServerRequestPing");

	UPingComponent_C_ServerRequestPing_Params params;
	params.OutHit = OutHit;
	params.IsHit_ = IsHit_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.ReceiveTick");

	UPingComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.ForceRequestPing
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_PingCase_E_PingCase> PingCase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCanSameTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bForceUpdateSameCase           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bPlaySound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingComponent_C::ForceRequestPing(class AHSHCharacterBase* Character, TEnumAsByte<E_PingCase_E_PingCase> PingCase, const struct FVector& Location, class AActor* HitActor, float Distance, bool IsUpdateLocation, bool bCanSameTarget, bool bForceUpdateSameCase, bool bPlaySound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.ForceRequestPing");

	UPingComponent_C_ForceRequestPing_Params params;
	params.Character = Character;
	params.PingCase = PingCase;
	params.Location = Location;
	params.HitActor = HitActor;
	params.Distance = Distance;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bCanSameTarget = bCanSameTarget;
	params.bForceUpdateSameCase = bForceUpdateSameCase;
	params.bPlaySound = bPlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.PlaySound
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           _2D                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingComponent_C::PlaySound(class UClass* CharacterClass, class USoundBase* Sound, const struct FVector& Location, bool _2D)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.PlaySound");

	UPingComponent_C_PlaySound_Params params;
	params.CharacterClass = CharacterClass;
	params.Sound = Sound;
	params.Location = Location;
	params._2D = _2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.EnbleSendSound
// (BlueprintCallable, BlueprintEvent)
void UPingComponent_C::EnbleSendSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.EnbleSendSound");

	UPingComponent_C_EnbleSendSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.SendSound
// (BlueprintCallable, BlueprintEvent)
void UPingComponent_C::SendSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.SendSound");

	UPingComponent_C_SendSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.ExecuteUbergraph_PingComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingComponent_C::ExecuteUbergraph_PingComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.ExecuteUbergraph_PingComponent");

	UPingComponent_C_ExecuteUbergraph_PingComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingComponent.PingComponent_C.OnPingUpdated__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     Pings                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UPingComponent_C::OnPingUpdated__DelegateSignature(TArray<struct FS_PingPair>* Pings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingComponent.PingComponent_C.OnPingUpdated__DelegateSignature");

	UPingComponent_C_OnPingUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pings != nullptr)
		*Pings = params.Pings;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
