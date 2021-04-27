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

// Function DoorBase.DoorBase_C.GetDestructible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::GetDestructible(bool* Destructable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.GetDestructible");

	ADoorBase_C_GetDestructible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destructable != nullptr)
		*Destructable = params.Destructable;

}


// Function DoorBase.DoorBase_C.SetDoorChannel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> SceneComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Engine_ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::SetDoorChannel(TArray<class USceneComponent*>* SceneComponent, TEnumAsByte<Engine_ECollisionChannel> Channel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SetDoorChannel");

	ADoorBase_C_SetDoorChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SceneComponent != nullptr)
		*SceneComponent = params.SceneComponent;

}


// Function DoorBase.DoorBase_C.SetDoorCollision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> SceneComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Engine_ECollisionEnabled> NewType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::SetDoorCollision(TArray<class USceneComponent*>* SceneComponent, TEnumAsByte<Engine_ECollisionEnabled> NewType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SetDoorCollision");

	ADoorBase_C_SetDoorCollision_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SceneComponent != nullptr)
		*SceneComponent = params.SceneComponent;

}


// Function DoorBase.DoorBase_C.SetDither
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> SceneComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::SetDither(TArray<class USceneComponent*>* SceneComponent, bool Active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SetDither");

	ADoorBase_C_SetDither_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SceneComponent != nullptr)
		*SceneComponent = params.SceneComponent;

}


// Function DoorBase.DoorBase_C.SetCollisionMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::SetCollisionMesh(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SetCollisionMesh");

	ADoorBase_C_SetCollisionMesh_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnRep_bIsCollisionEnable
// (BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnRep_bIsCollisionEnable()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnRep_bIsCollisionEnable");

	ADoorBase_C_OnRep_bIsCollisionEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.HunterCheckDoorAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::HunterCheckDoorAttack(class AActor* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.HunterCheckDoorAttack");

	ADoorBase_C_HunterCheckDoorAttack_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.SurvivorCheckDoorAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::SurvivorCheckDoorAttack(class AActor* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SurvivorCheckDoorAttack");

	ADoorBase_C_SurvivorCheckDoorAttack_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.InteractSnapLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsSnapLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LookAtLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsNotAutoCalculateHeight      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.InteractSnapLocation");

	ADoorBase_C_InteractSnapLocation_Params params;
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


// Function DoorBase.DoorBase_C.IsCanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.IsCanInteract");

	ADoorBase_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function DoorBase.DoorBase_C.CanInteraction?
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::CanInteraction_(bool* Can_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.CanInteraction?");

	ADoorBase_C_CanInteraction__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;

}


// Function DoorBase.DoorBase_C.OnCloseDoorSuccess
// (Public, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnCloseDoorSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnCloseDoorSuccess");

	ADoorBase_C_OnCloseDoorSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnOpenDoorSuccess
// (Public, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnOpenDoorSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnOpenDoorSuccess");

	ADoorBase_C_OnOpenDoorSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.GetInteractMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.GetInteractMontage");

	ADoorBase_C_GetInteractMontage_Params params;
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


// Function DoorBase.DoorBase_C.GetInteractSlateBrush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             SlateBrushNormal               (Parm, OutParm)
// struct FSlateBrush             SlateBrushHover                (Parm, OutParm)
// struct FSlateBrush             SlateBrushInteract             (Parm, OutParm)
// struct FText                   SlateText                      (Parm, OutParm)
// bool                           NotShowButton                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.GetInteractSlateBrush");

	ADoorBase_C_GetInteractSlateBrush_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlateBrushNormal != nullptr)
		*SlateBrushNormal = params.SlateBrushNormal;
	if (SlateBrushHover != nullptr)
		*SlateBrushHover = params.SlateBrushHover;
	if (SlateBrushInteract != nullptr)
		*SlateBrushInteract = params.SlateBrushInteract;
	if (SlateText != nullptr)
		*SlateText = params.SlateText;
	if (NotShowButton != nullptr)
		*NotShowButton = params.NotShowButton;

}


// Function DoorBase.DoorBase_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnRep_State()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnRep_State");

	ADoorBase_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.UpdateDoorRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::UpdateDoorRotation(float Alpha)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.UpdateDoorRotation");

	ADoorBase_C_UpdateDoorRotation_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.InverseXAxis
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::InverseXAxis(const struct FVector& Location, struct FVector* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.InverseXAxis");

	ADoorBase_C_InverseXAxis_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function DoorBase.DoorBase_C.IsObjectReverse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::IsObjectReverse(class AActor* Actor, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.IsObjectReverse");

	ADoorBase_C_IsObjectReverse_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function DoorBase.DoorBase_C.UpdateOpenDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::UpdateOpenDoor(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.UpdateOpenDoor");

	ADoorBase_C_UpdateOpenDoor_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.UpdateCloseDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::UpdateCloseDoor(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.UpdateCloseDoor");

	ADoorBase_C_UpdateCloseDoor_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnRep_Alpha
// (BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnRep_Alpha()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnRep_Alpha");

	ADoorBase_C_OnRep_Alpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.UserConstructionScript");

	ADoorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.SetDestructible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::SetDestructible(bool Destructible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SetDestructible");

	ADoorBase_C_SetDestructible_Params params;
	params.Destructible = Destructible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.MulticastSpawnParticle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAutoDestroy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// Engine_EPSCPoolMethod          PoolingMethod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::MulticastSpawnParticle(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, Engine_EPSCPoolMethod PoolingMethod)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.MulticastSpawnParticle");

	ADoorBase_C_MulticastSpawnParticle_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.PoolingMethod = PoolingMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.BndEvt__Dooractor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ADoorBase_C::BndEvt__Dooractor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.BndEvt__Dooractor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ADoorBase_C_BndEvt__Dooractor_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnHunterChangeHiddenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHiddenState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::OnHunterChangeHiddenState(bool InHiddenState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnHunterChangeHiddenState");

	ADoorBase_C_OnHunterChangeHiddenState_Params params;
	params.InHiddenState = InHiddenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.ForceDisableUI
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::ForceDisableUI(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.ForceDisableUI");

	ADoorBase_C_ForceDisableUI_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.ForceEnableUI
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::ForceEnableUI(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.ForceEnableUI");

	ADoorBase_C_ForceEnableUI_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.PlayOnOpening
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::PlayOnOpening()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.PlayOnOpening");

	ADoorBase_C_PlayOnOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.PlayOnOpenSuccess
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::PlayOnOpenSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.PlayOnOpenSuccess");

	ADoorBase_C_PlayOnOpenSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.PlayOnClosing
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::PlayOnClosing()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.PlayOnClosing");

	ADoorBase_C_PlayOnClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.PlayOnCloseSuccess
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::PlayOnCloseSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.PlayOnCloseSuccess");

	ADoorBase_C_PlayOnCloseSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.PlayAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              NewSound                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::PlayAudio(class USoundBase* NewSound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.PlayAudio");

	ADoorBase_C_PlayAudio_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.Interaction");

	ADoorBase_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnInteraction
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::OnInteraction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnInteraction");

	ADoorBase_C_OnInteraction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.DoorOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       CacheCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::DoorOpen(class AHSHCharacterBase* CacheCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.DoorOpen");

	ADoorBase_C_DoorOpen_Params params;
	params.CacheCharacter = CacheCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.DoorClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       CacheCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::DoorClose(class AHSHCharacterBase* CacheCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.DoorClose");

	ADoorBase_C_DoorClose_Params params;
	params.CacheCharacter = CacheCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.ReceiveTick");

	ADoorBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.EnableCollision
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::EnableCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.EnableCollision");

	ADoorBase_C_EnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.DisableCollision
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::DisableCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.DisableCollision");

	ADoorBase_C_DisableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADoorBase_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.ReceiveBeginPlay");

	ADoorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.ShowOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::ShowOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.ShowOutline");

	ADoorBase_C_ShowOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.HideOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::HideOutline(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.HideOutline");

	ADoorBase_C_HideOutline_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.DestroyedByHunter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunterBase_C*           DestroyedBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.DestroyedByHunter");

	ADoorBase_C_DestroyedByHunter_Params params;
	params.Damage = Damage;
	params.DestroyedBy = DestroyedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.MulticastBreakDoorSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::MulticastBreakDoorSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.MulticastBreakDoorSound");

	ADoorBase_C_MulticastBreakDoorSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnOpenSuccess
// (BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnOpenSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnOpenSuccess");

	ADoorBase_C_OnOpenSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnCloseSuccess
// (BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnCloseSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnCloseSuccess");

	ADoorBase_C_OnCloseSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.SpriteChangeOnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHunter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::SpriteChangeOnShow(bool bIsHunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SpriteChangeOnShow");

	ADoorBase_C_SpriteChangeOnShow_Params params;
	params.bIsHunter = bIsHunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.SpawnDestructMesh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::SpawnDestructMesh(class ACharacter* Causer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SpawnDestructMesh");

	ADoorBase_C_SpawnDestructMesh_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.ApplyDamageToDestructMesh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::ApplyDamageToDestructMesh(class ACharacter* Causer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.ApplyDamageToDestructMesh");

	ADoorBase_C_ApplyDamageToDestructMesh_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.SpawnDestructAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReverse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADoorBase_C::SpawnDestructAnimation(bool IsReverse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.SpawnDestructAnimation");

	ADoorBase_C_SpawnDestructAnimation_Params params;
	params.IsReverse = IsReverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.DestroyDoor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHunterBase_C*           hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::DestroyDoor(class AHunterBase_C* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.DestroyDoor");

	ADoorBase_C_DestroyDoor_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.TryCheckEnableCollision
// (BlueprintCallable, BlueprintEvent)
void ADoorBase_C::TryCheckEnableCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.TryCheckEnableCollision");

	ADoorBase_C_TryCheckEnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.ExecuteUbergraph_DoorBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorBase_C::ExecuteUbergraph_DoorBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.ExecuteUbergraph_DoorBase");

	ADoorBase_C_ExecuteUbergraph_DoorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnSurvivorDoorStun__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnSurvivorDoorStun__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnSurvivorDoorStun__DelegateSignature");

	ADoorBase_C_OnSurvivorDoorStun__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnHunterDoorStun__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnHunterDoorStun__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnHunterDoorStun__DelegateSignature");

	ADoorBase_C_OnHunterDoorStun__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnOpenDoor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnOpenDoor__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnOpenDoor__DelegateSignature");

	ADoorBase_C_OnOpenDoor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnCloseDoor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnCloseDoor__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnCloseDoor__DelegateSignature");

	ADoorBase_C_OnCloseDoor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DoorBase.DoorBase_C.OnDestroy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ADoorBase_C::OnDestroy__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DoorBase.DoorBase_C.OnDestroy__DelegateSignature");

	ADoorBase_C_OnDestroy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
