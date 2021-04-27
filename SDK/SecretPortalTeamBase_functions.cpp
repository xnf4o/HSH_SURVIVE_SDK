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

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRepIsProgress
// (Public, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnRepIsProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRepIsProgress");

	ASecretPortalTeamBase_C_OnRepIsProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRep_bIsProgress?
// (BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnRep_bIsProgress_()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRep_bIsProgress?");

	ASecretPortalTeamBase_C_OnRep_bIsProgress__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRep_bPortalActive
// (BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnRep_bPortalActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRep_bPortalActive");

	ASecretPortalTeamBase_C_OnRep_bPortalActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetInteractMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartSectionName               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalTeamBase_C::GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetInteractMontage");

	ASecretPortalTeamBase_C_GetInteractMontage_Params params;
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


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OpenDoorAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OpenDoorAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OpenDoorAnimation");

	ASecretPortalTeamBase_C_OpenDoorAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.ByPassProgress
// (Public, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::ByPassProgress()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.ByPassProgress");

	ASecretPortalTeamBase_C_ByPassProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetInteractSlateBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             SlateBrushNormal               (Parm, OutParm)
// struct FSlateBrush             SlateBrushHover                (Parm, OutParm)
// struct FSlateBrush             SlateBrushInteract             (Parm, OutParm)
// struct FText                   SlateText                      (Parm, OutParm)
// bool                           NotShowButton                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortalTeamBase_C::GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetInteractSlateBrush");

	ASecretPortalTeamBase_C_GetInteractSlateBrush_Params params;
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


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.IsCanHelp?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortalTeamBase_C::IsCanHelp_(bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.IsCanHelp?");

	ASecretPortalTeamBase_C_IsCanHelp__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.InteractSnapLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsSnapLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LookAtLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsNotAutoCalculateHeight      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortalTeamBase_C::InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.InteractSnapLocation");

	ASecretPortalTeamBase_C_InteractSnapLocation_Params params;
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


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.CanUseProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortalTeamBase_C::CanUseProgress(bool* UseProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.CanUseProgress");

	ASecretPortalTeamBase_C_CanUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseProgress != nullptr)
		*UseProgress = params.UseProgress;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalTeamBase_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetProgressTime");

	ASecretPortalTeamBase_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.IsCanSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsImprement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortalTeamBase_C::IsCanSkillCheck_(bool* IsImprement, bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.IsCanSkillCheck?");

	ASecretPortalTeamBase_C_IsCanSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImprement != nullptr)
		*IsImprement = params.IsImprement;
	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnPlayerExit
// (Public, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnPlayerExit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnPlayerExit");

	ASecretPortalTeamBase_C_OnPlayerExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OpenPortal
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAutoActive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecretPortalTeamBase_C::OpenPortal(bool bAutoActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OpenPortal");

	ASecretPortalTeamBase_C_OpenPortal_Params params;
	params.bAutoActive = bAutoActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalTeamBase_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnFinishProgress");

	ASecretPortalTeamBase_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.MulticastportalExit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::MulticastportalExit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.MulticastportalExit");

	ASecretPortalTeamBase_C_MulticastportalExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnPortalOpen
// (BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnPortalOpen()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnPortalOpen");

	ASecretPortalTeamBase_C_OnPortalOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.PlayerExit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalTeamBase_C::PlayerExit(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.PlayerExit");

	ASecretPortalTeamBase_C_PlayerExit_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.ExecuteUbergraph_SecretPortalTeamBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecretPortalTeamBase_C::ExecuteUbergraph_SecretPortalTeamBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.ExecuteUbergraph_SecretPortalTeamBase");

	ASecretPortalTeamBase_C_ExecuteUbergraph_SecretPortalTeamBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnOpenPortal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnOpenPortal__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnOpenPortal__DelegateSignature");

	ASecretPortalTeamBase_C_OnOpenPortal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnExitPortalTutorial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnExitPortalTutorial__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnExitPortalTutorial__DelegateSignature");

	ASecretPortalTeamBase_C_OnExitPortalTutorial__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnExitPortal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ASecretPortalTeamBase_C::OnExitPortal__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnExitPortal__DelegateSignature");

	ASecretPortalTeamBase_C_OnExitPortal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
