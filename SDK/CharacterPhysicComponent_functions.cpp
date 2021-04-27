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

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.HitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterPhysicComponent_C::HitReaction(const struct FName& Bone, const struct FVector& HitLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CharacterPhysicComponent.CharacterPhysicComponent_C.HitReaction");

	UCharacterPhysicComponent_C_HitReaction_Params params;
	params.Bone = Bone;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterPhysicComponent.CharacterPhysicComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterPhysicComponent_C::Initialize(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CharacterPhysicComponent.CharacterPhysicComponent_C.Initialize");

	UCharacterPhysicComponent_C_Initialize_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterPhysicComponent.CharacterPhysicComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterPhysicComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CharacterPhysicComponent.CharacterPhysicComponent_C.ReceiveTick");

	UCharacterPhysicComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterPhysicComponent.CharacterPhysicComponent_C.CountBlend
// (BlueprintCallable, BlueprintEvent)
void UCharacterPhysicComponent_C::CountBlend()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CharacterPhysicComponent.CharacterPhysicComponent_C.CountBlend");

	UCharacterPhysicComponent_C_CountBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterPhysicComponent.CharacterPhysicComponent_C.MultiCastHitReaction
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterPhysicComponent_C::MultiCastHitReaction(const struct FName& Bone, const struct FVector& HitLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CharacterPhysicComponent.CharacterPhysicComponent_C.MultiCastHitReaction");

	UCharacterPhysicComponent_C_MultiCastHitReaction_Params params;
	params.Bone = Bone;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterPhysicComponent.CharacterPhysicComponent_C.ServerHitReaction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterPhysicComponent_C::ServerHitReaction(const struct FName& Bone, const struct FVector& HitLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CharacterPhysicComponent.CharacterPhysicComponent_C.ServerHitReaction");

	UCharacterPhysicComponent_C_ServerHitReaction_Params params;
	params.Bone = Bone;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterPhysicComponent.CharacterPhysicComponent_C.ExecuteUbergraph_CharacterPhysicComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCharacterPhysicComponent_C::ExecuteUbergraph_CharacterPhysicComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CharacterPhysicComponent.CharacterPhysicComponent_C.ExecuteUbergraph_CharacterPhysicComponent");

	UCharacterPhysicComponent_C_ExecuteUbergraph_CharacterPhysicComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
