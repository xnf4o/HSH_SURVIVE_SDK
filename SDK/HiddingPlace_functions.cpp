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

// Function HiddingPlace.HiddingPlace_C.GetDestructible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHiddingPlace_C::GetDestructible(bool* Destructable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.GetDestructible");

	AHiddingPlace_C_GetDestructible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destructable != nullptr)
		*Destructable = params.Destructable;

}


// Function HiddingPlace.HiddingPlace_C.OnRep_bIsDestroy
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::OnRep_bIsDestroy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.OnRep_bIsDestroy");

	AHiddingPlace_C_OnRep_bIsDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.OnRep_HiddenSurvivor
// (BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::OnRep_HiddenSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.OnRep_HiddenSurvivor");

	AHiddingPlace_C_OnRep_HiddenSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.GetSpriteIndicator
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHunter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UTexture2D*              Sprite                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool AHiddingPlace_C::GetSpriteIndicator(bool bIsHunter, class UTexture2D** Sprite)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.GetSpriteIndicator");

	AHiddingPlace_C_GetSpriteIndicator_Params params;
	params.bIsHunter = bIsHunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sprite != nullptr)
		*Sprite = params.Sprite;


	return params.ReturnValue;
}


// Function HiddingPlace.HiddingPlace_C.GetControlCameraActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::GetControlCameraActor(class APawn** Pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.GetControlCameraActor");

	AHiddingPlace_C_GetControlCameraActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;

}


// Function HiddingPlace.HiddingPlace_C.GetInteractMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.GetInteractMontage");

	AHiddingPlace_C_GetInteractMontage_Params params;
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


// Function HiddingPlace.HiddingPlace_C.InteractSnapLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsSnapLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LookAtLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsNotAutoCalculateHeight      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHiddingPlace_C::InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.InteractSnapLocation");

	AHiddingPlace_C_InteractSnapLocation_Params params;
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


// Function HiddingPlace.HiddingPlace_C.IsCanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHiddingPlace_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.IsCanInteract");

	AHiddingPlace_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HiddingPlace.HiddingPlace_C.UpdateAutoSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::UpdateAutoSkillCheck(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.UpdateAutoSkillCheck");

	AHiddingPlace_C_UpdateAutoSkillCheck_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.IsCanExitHidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsCanInteract                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHiddingPlace_C::IsCanExitHidden(bool* bIsCanInteract)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.IsCanExitHidden");

	AHiddingPlace_C_IsCanExitHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsCanInteract != nullptr)
		*bIsCanInteract = params.bIsCanInteract;

}


// Function HiddingPlace.HiddingPlace_C.GetCameraTransfrom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform AHiddingPlace_C::GetCameraTransfrom()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.GetCameraTransfrom");

	AHiddingPlace_C_GetCameraTransfrom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HiddingPlace.HiddingPlace_C.GetInteractSlateBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             SlateBrushNormal               (Parm, OutParm)
// struct FSlateBrush             SlateBrushHover                (Parm, OutParm)
// struct FSlateBrush             SlateBrushInteract             (Parm, OutParm)
// struct FText                   SlateText                      (Parm, OutParm)
// bool                           NotShowButton                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHiddingPlace_C::GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.GetInteractSlateBrush");

	AHiddingPlace_C_GetInteractSlateBrush_Params params;
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


// Function HiddingPlace.HiddingPlace_C.PlayInnerAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lenght                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::PlayInnerAnimation(float* Lenght)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.PlayInnerAnimation");

	AHiddingPlace_C_PlayInnerAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Lenght != nullptr)
		*Lenght = params.Lenght;

}


// Function HiddingPlace.HiddingPlace_C.PlayOuterAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lenght                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::PlayOuterAnimation(float* Lenght)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.PlayOuterAnimation");

	AHiddingPlace_C_PlayOuterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Lenght != nullptr)
		*Lenght = params.Lenght;

}


// Function HiddingPlace.HiddingPlace_C.Timeline_AudioVolume__FinishedFunc
// (BlueprintEvent)
void AHiddingPlace_C::Timeline_AudioVolume__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.Timeline_AudioVolume__FinishedFunc");

	AHiddingPlace_C_Timeline_AudioVolume__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.Timeline_AudioVolume__UpdateFunc
// (BlueprintEvent)
void AHiddingPlace_C::Timeline_AudioVolume__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.Timeline_AudioVolume__UpdateFunc");

	AHiddingPlace_C_Timeline_AudioVolume__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.OnHunterChangeHiddenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHiddenState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHiddingPlace_C::OnHunterChangeHiddenState(bool InHiddenState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.OnHunterChangeHiddenState");

	AHiddingPlace_C_OnHunterChangeHiddenState_Params params;
	params.InHiddenState = InHiddenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.OnCommitSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.OnCommitSkillCheck");

	AHiddingPlace_C_OnCommitSkillCheck_Params params;
	params.Result = Result;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.MulticastStartNewAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::MulticastStartNewAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.MulticastStartNewAudio");

	AHiddingPlace_C_MulticastStartNewAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.DestroyedByHunter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunterBase_C*           DestroyedBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.DestroyedByHunter");

	AHiddingPlace_C_DestroyedByHunter_Params params;
	params.Damage = Damage;
	params.DestroyedBy = DestroyedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.SetDestructible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destructible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHiddingPlace_C::SetDestructible(bool Destructible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.SetDestructible");

	AHiddingPlace_C_SetDestructible_Params params;
	params.Destructible = Destructible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.ServerPlayInnnerAnimation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::ServerPlayInnnerAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.ServerPlayInnnerAnimation");

	AHiddingPlace_C_ServerPlayInnnerAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.MulticastPlayInnerAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::MulticastPlayInnerAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.MulticastPlayInnerAnimation");

	AHiddingPlace_C_MulticastPlayInnerAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.ServerPlayOuterAnimation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::ServerPlayOuterAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.ServerPlayOuterAnimation");

	AHiddingPlace_C_ServerPlayOuterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.MulticastPlayOuterAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::MulticastPlayOuterAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.MulticastPlayOuterAnimation");

	AHiddingPlace_C_MulticastPlayOuterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.ServerDisableHideable
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::ServerDisableHideable()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.ServerDisableHideable");

	AHiddingPlace_C_ServerDisableHideable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.MulticastDisableHideable
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::MulticastDisableHideable()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.MulticastDisableHideable");

	AHiddingPlace_C_MulticastDisableHideable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.SetHiddenSurvivor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         HiddenSurvivor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::SetHiddenSurvivor(class ASurvivorBase_C* HiddenSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.SetHiddenSurvivor");

	AHiddingPlace_C_SetHiddenSurvivor_Params params;
	params.HiddenSurvivor = HiddenSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.ShowTutorial
// (BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::ShowTutorial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.ShowTutorial");

	AHiddingPlace_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.BndEvt__BoxTutorial_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AHiddingPlace_C::BndEvt__BoxTutorial_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.BndEvt__BoxTutorial_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AHiddingPlace_C_BndEvt__BoxTutorial_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function HiddingPlace.HiddingPlace_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.Interaction");

	AHiddingPlace_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.ReceiveTick");

	AHiddingPlace_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHiddingPlace_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.ReceiveBeginPlay");

	AHiddingPlace_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.SpawnDestructAnimation
// (BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::SpawnDestructAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.SpawnDestructAnimation");

	AHiddingPlace_C_SpawnDestructAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.CommitCooldown
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::CommitCooldown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.CommitCooldown");

	AHiddingPlace_C_CommitCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.DestroyThis
// (BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::DestroyThis()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.DestroyThis");

	AHiddingPlace_C_DestroyThis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.ExecuteUbergraph_HiddingPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddingPlace_C::ExecuteUbergraph_HiddingPlace(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.ExecuteUbergraph_HiddingPlace");

	AHiddingPlace_C_ExecuteUbergraph_HiddingPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.OnOuterAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::OnOuterAnimationFinish__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.OnOuterAnimationFinish__DelegateSignature");

	AHiddingPlace_C_OnOuterAnimationFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddingPlace.HiddingPlace_C.OnInnerAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHiddingPlace_C::OnInnerAnimationFinish__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddingPlace.HiddingPlace_C.OnInnerAnimationFinish__DelegateSignature");

	AHiddingPlace_C_OnInnerAnimationFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
