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

// Function TrapActorBase.TrapActorBase_C.GetSnapIKLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSnap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Enum_IKHand_Enum_IKHand> IKTarget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 IKRight                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 IKLeft                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::GetSnapIKLocation(bool* bIsSnap, TEnumAsByte<Enum_IKHand_Enum_IKHand>* IKTarget, struct FVector* IKRight, struct FVector* IKLeft)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.GetSnapIKLocation");

	ATrapActorBase_C_GetSnapIKLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSnap != nullptr)
		*bIsSnap = params.bIsSnap;
	if (IKTarget != nullptr)
		*IKTarget = params.IKTarget;
	if (IKRight != nullptr)
		*IKRight = params.IKRight;
	if (IKLeft != nullptr)
		*IKLeft = params.IKLeft;

}


// Function TrapActorBase.TrapActorBase_C.GetInteractMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.GetInteractMontage");

	ATrapActorBase_C_GetInteractMontage_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
	if (PlayRate != nullptr)
		*PlayRate = params.PlayRate;
	if (StartSectionName != nullptr)
		*StartSectionName = params.StartSectionName;

}


// Function TrapActorBase.TrapActorBase_C.InteractSnapLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsSnapLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LookAtLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsNotAutoCalculateHeight      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrapActorBase_C::InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.InteractSnapLocation");

	ATrapActorBase_C_InteractSnapLocation_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSnapLocation != nullptr)
		*bIsSnapLocation = params.bIsSnapLocation;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (LookAtLocation != nullptr)
		*LookAtLocation = params.LookAtLocation;
	if (bIsNotAutoCalculateHeight != nullptr)
		*bIsNotAutoCalculateHeight = params.bIsNotAutoCalculateHeight;

}


// Function TrapActorBase.TrapActorBase_C.IsCanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrapActorBase_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.IsCanInteract");

	ATrapActorBase_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function TrapActorBase.TrapActorBase_C.InitOnSpawn
// (Public, BlueprintCallable, BlueprintEvent)
void ATrapActorBase_C::InitOnSpawn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.InitOnSpawn");

	ATrapActorBase_C_InitOnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.OnRep_DataFromSpawn
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void ATrapActorBase_C::OnRep_DataFromSpawn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.OnRep_DataFromSpawn");

	ATrapActorBase_C_OnRep_DataFromSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.InitOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATrapActorBase_C::InitOverride(TArray<class ATrapTargetActor_C*>* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.InitOverride");

	ATrapActorBase_C_InitOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function TrapActorBase.TrapActorBase_C.InitActorLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      Transfrom                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATrapActorBase_C::InitActorLocation(TArray<struct FTransform>* Transfrom)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.InitActorLocation");

	ATrapActorBase_C_InitActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transfrom != nullptr)
		*Transfrom = params.Transfrom;

}


// Function TrapActorBase.TrapActorBase_C.InitMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::InitMesh(TArray<struct FTransform>* Array, class UStaticMesh* NewMesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.InitMesh");

	ATrapActorBase_C_InitMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function TrapActorBase.TrapActorBase_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.Interaction");

	ATrapActorBase_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.SpawnSoundEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::SpawnSoundEffect(class USoundBase* Sound, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.SpawnSoundEffect");

	ATrapActorBase_C_SpawnSoundEffect_Params params;
	params.Sound = Sound;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.Initialize
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATrapTargetActor_C*> Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATrapActorBase_C::Initialize(TArray<struct FTransform>* Array, class UStaticMesh* NewMesh, TArray<class ATrapTargetActor_C*> Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.Initialize");

	ATrapActorBase_C_Initialize_Params params;
	params.NewMesh = NewMesh;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function TrapActorBase.TrapActorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ATrapActorBase_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ATrapActorBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.DestroySelf
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpawnParticle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::DestroySelf(bool SpawnParticle, class UObject* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.DestroySelf");

	ATrapActorBase_C_DestroySelf_Params params;
	params.SpawnParticle = SpawnParticle;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.SpawnParticle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::SpawnParticle(class UObject* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.SpawnParticle");

	ATrapActorBase_C_SpawnParticle_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.ReceiveTick");

	ATrapActorBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.ExecuteUbergraph_TrapActorBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorBase_C::ExecuteUbergraph_TrapActorBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.ExecuteUbergraph_TrapActorBase");

	ATrapActorBase_C_ExecuteUbergraph_TrapActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorBase.TrapActorBase_C.OnApplyEffect__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHSHCharacterBase*> Character                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATrapActorBase_C::OnApplyEffect__DelegateSignature(TArray<class AHSHCharacterBase*>* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorBase.TrapActorBase_C.OnApplyEffect__DelegateSignature");

	ATrapActorBase_C_OnApplyEffect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
