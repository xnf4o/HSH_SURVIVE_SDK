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

// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::OnRep_State()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnRep_State");

	ARitual_ReleaseGhost_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnRep_bIsPrayingSoundActive
// (BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::OnRep_bIsPrayingSoundActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnRep_bIsPrayingSoundActive");

	ARitual_ReleaseGhost_C_OnRep_bIsPrayingSoundActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCenterCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ARitual_ReleaseGhost_C::IsCenterCharacter(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCenterCharacter");

	ARitual_ReleaseGhost_C_IsCenterCharacter_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetPlaceIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::GetPlaceIndex(const struct FPrimaryAssetId& Item, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetPlaceIndex");

	ARitual_ReleaseGhost_C_GetPlaceIndex_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCanSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsImprement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARitual_ReleaseGhost_C::IsCanSkillCheck_(bool* IsImprement, bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCanSkillCheck?");

	ARitual_ReleaseGhost_C_IsCanSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImprement != nullptr)
		*IsImprement = params.IsImprement;
	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCanInteract
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARitual_ReleaseGhost_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsCanInteract");

	ARitual_ReleaseGhost_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsLockCameraOnFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARitual_ReleaseGhost_C::IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.IsLockCameraOnFinish");

	ARitual_ReleaseGhost_C_IsLockCameraOnFinish_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetPingText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   PingText                       (Parm, OutParm)
void ARitual_ReleaseGhost_C::GetPingText(struct FText* PingText)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetPingText");

	ARitual_ReleaseGhost_C_GetPingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PingText != nullptr)
		*PingText = params.PingText;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetProgressTime");

	ARitual_ReleaseGhost_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetInteractMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetInteractMontage");

	ARitual_ReleaseGhost_C_GetInteractMontage_Params params;
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


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetSnapIKLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSnap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Enum_IKHand_Enum_IKHand> IKTarget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 IKRight                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 IKLeft                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::GetSnapIKLocation(bool* bIsSnap, TEnumAsByte<Enum_IKHand_Enum_IKHand>* IKTarget, struct FVector* IKRight, struct FVector* IKLeft)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetSnapIKLocation");

	ARitual_ReleaseGhost_C_GetSnapIKLocation_Params params;

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


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetInteractSlateBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             SlateBrushNormal               (Parm, OutParm)
// struct FSlateBrush             SlateBrushHover                (Parm, OutParm)
// struct FSlateBrush             SlateBrushInteract             (Parm, OutParm)
// struct FText                   SlateText                      (Parm, OutParm)
// bool                           NotShowButton                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARitual_ReleaseGhost_C::GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.GetInteractSlateBrush");

	ARitual_ReleaseGhost_C_GetInteractSlateBrush_Params params;
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


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaceItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARitual_ReleaseGhost_C::PlaceItem(class AHSHCharacterBase* Character, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaceItem");

	ARitual_ReleaseGhost_C_PlaceItem_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.CheckPlaceItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::CheckPlaceItem(class AHSHCharacterBase* Character, bool* Return, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.CheckPlaceItem");

	ARitual_ReleaseGhost_C_CheckPlaceItem_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::Timeline_1__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_1__FinishedFunc");

	ARitual_ReleaseGhost_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::Timeline_1__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_1__UpdateFunc");

	ARitual_ReleaseGhost_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::Timeline_2__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_2__FinishedFunc");

	ARitual_ReleaseGhost_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::Timeline_2__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_2__UpdateFunc");

	ARitual_ReleaseGhost_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallenGhost__FinishedFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::FallenGhost__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallenGhost__FinishedFunc");

	ARitual_ReleaseGhost_C_FallenGhost__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallenGhost__UpdateFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::FallenGhost__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallenGhost__UpdateFunc");

	ARitual_ReleaseGhost_C_FallenGhost__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_3__FinishedFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::Timeline_3__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_3__FinishedFunc");

	ARitual_ReleaseGhost_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_3__UpdateFunc
// (BlueprintEvent)
void ARitual_ReleaseGhost_C::Timeline_3__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Timeline_3__UpdateFunc");

	ARitual_ReleaseGhost_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Hunter Play UISound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::Hunter_Play_UISound(class USoundBase* Sound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.Hunter Play UISound");

	ARitual_ReleaseGhost_C_Hunter_Play_UISound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MultiCastAllPlayerUISound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::MultiCastAllPlayerUISound(class USoundBase* Sound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MultiCastAllPlayerUISound");

	ARitual_ReleaseGhost_C_MultiCastAllPlayerUISound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastLoopSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*         Audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeInDuration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeOutDuration                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::MulticastLoopSound(bool Play, class UAudioComponent* Audio, float Volume, float FadeInDuration, float FadeOutDuration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastLoopSound");

	ARitual_ReleaseGhost_C_MulticastLoopSound_Params params;
	params.Play = Play;
	params.Audio = Audio;
	params.Volume = Volume;
	params.FadeInDuration = FadeInDuration;
	params.FadeOutDuration = FadeOutDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.LoopSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*         Audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeInDuration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeOutDuration                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::LoopSound(bool Play, class UAudioComponent* Audio, float Volume, float FadeInDuration, float FadeOutDuration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.LoopSound");

	ARitual_ReleaseGhost_C_LoopSound_Params params;
	params.Play = Play;
	params.Audio = Audio;
	params.Volume = Volume;
	params.FadeInDuration = FadeInDuration;
	params.FadeOutDuration = FadeOutDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnFinishEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::OnFinishEvent(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnFinishEvent");

	ARitual_ReleaseGhost_C_OnFinishEvent_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ARitual_ReleaseGhost_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ReceiveBeginPlay");

	ARitual_ReleaseGhost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnPlaceEachItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::OnPlaceEachItem(const struct FPrimaryAssetId& AssetID, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnPlaceEachItem");

	ARitual_ReleaseGhost_C_OnPlaceEachItem_Params params;
	params.AssetID = AssetID;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SetOutlineVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARitual_ReleaseGhost_C::SetOutlineVisible(bool bValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SetOutlineVisible");

	ARitual_ReleaseGhost_C_SetOutlineVisible_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SpawnRitualEffect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::SpawnRitualEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SpawnRitualEffect");

	ARitual_ReleaseGhost_C_SpawnRitualEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ApplyEffectToActor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::ApplyEffectToActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ApplyEffectToActor");

	ARitual_ReleaseGhost_C_ApplyEffectToActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnOverlapHunter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::OnOverlapHunter(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnOverlapHunter");

	ARitual_ReleaseGhost_C_OnOverlapHunter_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SetOutlineCustomSencilValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::SetOutlineCustomSencilValue(int NewValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.SetOutlineCustomSencilValue");

	ARitual_ReleaseGhost_C_SetOutlineCustomSencilValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MultiCastChangePlaceItemState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::MultiCastChangePlaceItemState(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MultiCastChangePlaceItemState");

	ARitual_ReleaseGhost_C_MultiCastChangePlaceItemState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.BndEvt__Tutorial_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ARitual_ReleaseGhost_C::BndEvt__Tutorial_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.BndEvt__Tutorial_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ARitual_ReleaseGhost_C_BndEvt__Tutorial_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaySoundEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::PlaySoundEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaySoundEffect");

	ARitual_ReleaseGhost_C_PlaySoundEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastToggleVisibilityOnFinished
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::MulticastToggleVisibilityOnFinished()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastToggleVisibilityOnFinished");

	ARitual_ReleaseGhost_C_MulticastToggleVisibilityOnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ARitual_ReleaseGhost_C::ReceiveDestroyed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ReceiveDestroyed");

	ARitual_ReleaseGhost_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.DisableRitual
// (BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::DisableRitual()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.DisableRitual");

	ARitual_ReleaseGhost_C_DisableRitual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallingGhost
// (BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::FallingGhost()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.FallingGhost");

	ARitual_ReleaseGhost_C_FallingGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaySoundDone
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::PlaySoundDone(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.PlaySoundDone");

	ARitual_ReleaseGhost_C_PlaySoundDone_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastPlaceNail
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ARitual_ReleaseGhost_C::MulticastPlaceNail()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastPlaceNail");

	ARitual_ReleaseGhost_C_MulticastPlaceNail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnStartProgressAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::OnStartProgressAction(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnStartProgressAction");

	ARitual_ReleaseGhost_C_OnStartProgressAction_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnFinishProgress");

	ARitual_ReleaseGhost_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnStopProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::OnStopProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnStopProgress");

	ARitual_ReleaseGhost_C_OnStopProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.UpdateIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::UpdateIndicator(class AActor* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.UpdateIndicator");

	ARitual_ReleaseGhost_C_UpdateIndicator_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnCommitSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.OnCommitSkillCheck");

	ARitual_ReleaseGhost_C_OnCommitSkillCheck_Params params;
	params.Result = Result;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastFilterSurvivorPraying
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::MulticastFilterSurvivorPraying(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.MulticastFilterSurvivorPraying");

	ARitual_ReleaseGhost_C_MulticastFilterSurvivorPraying_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ChangePlaceItemState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::ChangePlaceItemState(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ChangePlaceItemState");

	ARitual_ReleaseGhost_C_ChangePlaceItemState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ExecuteUbergraph_Ritual_ReleaseGhost
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARitual_ReleaseGhost_C::ExecuteUbergraph_Ritual_ReleaseGhost(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ritual_ReleaseGhost.Ritual_ReleaseGhost_C.ExecuteUbergraph_Ritual_ReleaseGhost");

	ARitual_ReleaseGhost_C_ExecuteUbergraph_Ritual_ReleaseGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
