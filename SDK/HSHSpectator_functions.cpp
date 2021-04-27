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

// Function HSHSpectator.HSHSpectator_C.GetCurrentPickable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CurrentPickable                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::GetCurrentPickable(struct FS_Pickable* CurrentPickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetCurrentPickable");

	AHSHSpectator_C_GetCurrentPickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPickable != nullptr)
		*CurrentPickable = params.CurrentPickable;

}


// Function HSHSpectator.HSHSpectator_C.GetExecuteCameraTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::GetExecuteCameraTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetExecuteCameraTransform");

	AHSHSpectator_C_GetExecuteCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSHSpectator.HSHSpectator_C.isExecution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::isExecution(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.isExecution");

	AHSHSpectator_C_isExecution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSHSpectator.HSHSpectator_C.GetAimTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Return                         (Parm, OutParm, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::GetAimTransform(struct FTransform* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetAimTransform");

	AHSHSpectator_C_GetAimTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSHSpectator.HSHSpectator_C.IsHaveSpawnPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHave                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   Tag                            (Parm, OutParm)
void AHSHSpectator_C::IsHaveSpawnPerk(bool* bIsHave, struct FGameplayTagContainer* Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.IsHaveSpawnPerk");

	AHSHSpectator_C_IsHaveSpawnPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsHave != nullptr)
		*bIsHave = params.bIsHave;
	if (Tag != nullptr)
		*Tag = params.Tag;

}


// Function HSHSpectator.HSHSpectator_C.GetCharacterID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::GetCharacterID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetCharacterID");

	AHSHSpectator_C_GetCharacterID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function HSHSpectator.HSHSpectator_C.GetMainCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::GetMainCameraComponent(class UCameraComponent** CameraComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetMainCameraComponent");

	AHSHSpectator_C_GetMainCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;

}


// Function HSHSpectator.HSHSpectator_C.GetCurrentItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetID                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::GetCurrentItemID(struct FPrimaryAssetId* AssetID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetCurrentItemID");

	AHSHSpectator_C_GetCurrentItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetID != nullptr)
		*AssetID = params.AssetID;

}


// Function HSHSpectator.HSHSpectator_C.NotifyFootStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.NotifyFootStep");

	AHSHSpectator_C_NotifyFootStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
	if (VolumeMultiplier != nullptr)
		*VolumeMultiplier = params.VolumeMultiplier;
	if (AttenuationSettings != nullptr)
		*AttenuationSettings = params.AttenuationSettings;

}


// Function HSHSpectator.HSHSpectator_C.GetOptionSensitivity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AHSHSpectator_C::GetOptionSensitivity()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetOptionSensitivity");

	AHSHSpectator_C_GetOptionSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSHSpectator.HSHSpectator_C.RefreshTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SetLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SetRotaion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::RefreshTransform(float DeltaTime, bool SetLocation, bool SetRotaion)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.RefreshTransform");

	AHSHSpectator_C_RefreshTransform_Params params;
	params.DeltaTime = DeltaTime;
	params.SetLocation = SetLocation;
	params.SetRotaion = SetRotaion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.GetterViewTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   View                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::GetterViewTarget(class APawn** View)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetterViewTarget");

	AHSHSpectator_C_GetterViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (View != nullptr)
		*View = params.View;

}


// Function HSHSpectator.HSHSpectator_C.LookAtTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::LookAtTo(class AActor* NewViewTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.LookAtTo");

	AHSHSpectator_C_LookAtTo_Params params;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.GetCharacterList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ASurvivorBase_C*> SurvivorList                   (Parm, OutParm, ZeroConstructor)
void AHSHSpectator_C::GetCharacterList(TArray<class ASurvivorBase_C*>* SurvivorList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.GetCharacterList");

	AHSHSpectator_C_GetCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurvivorList != nullptr)
		*SurvivorList = params.SurvivorList;

}


// Function HSHSpectator.HSHSpectator_C.RefreshCharacterList
// (Public, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::RefreshCharacterList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.RefreshCharacterList");

	AHSHSpectator_C_RefreshCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.FilterSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASurvivorBase_C*> Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class ASurvivorBase_C*> Return                         (Parm, OutParm, ZeroConstructor)
void AHSHSpectator_C::FilterSurvivor(TArray<class ASurvivorBase_C*>* Survivors, TArray<class ASurvivorBase_C*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.FilterSurvivor");

	AHSHSpectator_C_FilterSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Survivors != nullptr)
		*Survivors = params.Survivors;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSHSpectator.HSHSpectator_C.OnRep_NetUpdate
// (BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::OnRep_NetUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.OnRep_NetUpdate");

	AHSHSpectator_C_OnRep_NetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.OnRep_bCanSpawnByOwner
// (BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::OnRep_bCanSpawnByOwner()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.OnRep_bCanSpawnByOwner");

	AHSHSpectator_C_OnRep_bCanSpawnByOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.CapIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASurvivorBase_C*> SurvivorList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHSHSpectator_C::CapIndex(int* Index, TArray<class ASurvivorBase_C*>* SurvivorList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.CapIndex");

	AHSHSpectator_C_CapIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (SurvivorList != nullptr)
		*SurvivorList = params.SurvivorList;

}


// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectator_C::InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_5");

	AHSHSpectator_C_InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectator_C::InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_4");

	AHSHSpectator_C_InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_Respawn_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectator_C::InpActEvt_Spectator_Respawn_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_Respawn_K2Node_InputActionEvent_3");

	AHSHSpectator_C_InpActEvt_Spectator_Respawn_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_Ping_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectator_C::InpActEvt_Spectator_Ping_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.InpActEvt_Spectator_Ping_K2Node_InputActionEvent_2");

	AHSHSpectator_C_InpActEvt_Spectator_Ping_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.InpActEvt_Exit_Game_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectator_C::InpActEvt_Exit_Game_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.InpActEvt_Exit_Game_K2Node_InputActionEvent_1");

	AHSHSpectator_C_InpActEvt_Exit_Game_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.BeginAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              SoundAtk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::BeginAttackCollision(const struct FGameplayTag& Tag, class USoundBase* SoundAtk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.BeginAttackCollision");

	AHSHSpectator_C_BeginAttackCollision_Params params;
	params.Tag = Tag;
	params.SoundAtk = SoundAtk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.EndAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::EndAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.EndAttackCollision");

	AHSHSpectator_C_EndAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.EndAttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::EndAttackAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.EndAttackAnimation");

	AHSHSpectator_C_EndAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.OnEndAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                           IsCancel_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::OnEndAbility(const struct FGameplayTag& Tag, bool IsCancel_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.OnEndAbility");

	AHSHSpectator_C_OnEndAbility_Params params;
	params.Tag = Tag;
	params.IsCancel_ = IsCancel_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void AHSHSpectator_C::OnUpdateItem(float Durability, const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.OnUpdateItem");

	AHSHSpectator_C_OnUpdateItem_Params params;
	params.Durability = Durability;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.SendMeleeDistance");

	AHSHSpectator_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAttenuation*       AttenuationSettings            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAttachCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::PlaySound(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, class USoundAttenuation* AttenuationSettings, bool bAttachCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.PlaySound");

	AHSHSpectator_C_PlaySound_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.AttenuationSettings = AttenuationSettings;
	params.bAttachCharacter = bAttachCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.StopInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSHSpectator_C::StopInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.StopInteraction");

	AHSHSpectator_C_StopInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.NotifyCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CameraShake                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::NotifyCameraShake(class UClass* CameraShake, float Magnitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.NotifyCameraShake");

	AHSHSpectator_C_NotifyCameraShake_Params params;
	params.CameraShake = CameraShake;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.EnableCanSeeSpecter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::EnableCanSeeSpecter(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.EnableCanSeeSpecter");

	AHSHSpectator_C_EnableCanSeeSpecter_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.FinishInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractionBase_C*      Interact                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AHSHSpectator_C::FinishInteraction(class AInteractionBase_C* Interact, const struct FString& Reason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.FinishInteraction");

	AHSHSpectator_C_FinishInteraction_Params params;
	params.Interact = Interact;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.TryPlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::TryPlayMontage(class UAnimMontage* Montage, const struct FName& Section)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.TryPlayMontage");

	AHSHSpectator_C_TryPlayMontage_Params params;
	params.Montage = Montage;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.NotifyAfterGetHit
// (Public, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::NotifyAfterGetHit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.NotifyAfterGetHit");

	AHSHSpectator_C_NotifyAfterGetHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ForceJumpCurrentMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::ForceJumpCurrentMontage(const struct FName& SectionName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ForceJumpCurrentMontage");

	AHSHSpectator_C_ForceJumpCurrentMontage_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.CreateUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::CreateUI(class APlayerController* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.CreateUI");

	AHSHSpectator_C_CreateUI_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.RemoveUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::RemoveUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.RemoveUI");

	AHSHSpectator_C_RemoveUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.UpdateUI
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UISpectator          Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::UpdateUI(const struct FS_UISpectator& Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.UpdateUI");

	AHSHSpectator_C_UpdateUI_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.Spawning
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::Spawning()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.Spawning");

	AHSHSpectator_C_Spawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.RemoveSoulInHand
// (BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::RemoveSoulInHand()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.RemoveSoulInHand");

	AHSHSpectator_C_RemoveSoulInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.RemoveSoulInScene
// (BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::RemoveSoulInScene()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.RemoveSoulInScene");

	AHSHSpectator_C_RemoveSoulInScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ForcePingSoul
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::ForcePingSoul()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ForcePingSoul");

	AHSHSpectator_C_ForcePingSoul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	AHSHSpectator_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");

	AHSHSpectator_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.Movement_Turn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::Movement_Turn(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.Movement_Turn");

	AHSHSpectator_C_Movement_Turn_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.Movement_LookUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::Movement_LookUp(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.Movement_LookUp");

	AHSHSpectator_C_Movement_LookUp_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ReceivePossessed");

	AHSHSpectator_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ReceiveUnpossessed");

	AHSHSpectator_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.NextSpactator
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::NextSpactator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.NextSpactator");

	AHSHSpectator_C_NextSpactator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.BackSpactator
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::BackSpactator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.BackSpactator");

	AHSHSpectator_C_BackSpactator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ReceiveTick");

	AHSHSpectator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.MulticastSetTransfrom
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transfrom                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::MulticastSetTransfrom(const struct FTransform& Transfrom)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.MulticastSetTransfrom");

	AHSHSpectator_C_MulticastSetTransfrom_Params params;
	params.Transfrom = Transfrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.StartSpectator
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::StartSpectator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.StartSpectator");

	AHSHSpectator_C_StartSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.OnSpawning
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              InTransform                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::OnSpawning(const struct FTransform& InTransform)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.OnSpawning");

	AHSHSpectator_C_OnSpawning_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ClientFadeCameraSpawn
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::ClientFadeCameraSpawn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ClientFadeCameraSpawn");

	AHSHSpectator_C_ClientFadeCameraSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.SetPauseCount
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPauseCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::SetPauseCount(bool bPauseCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.SetPauseCount");

	AHSHSpectator_C_SetPauseCount_Params params;
	params.bPauseCount = bPauseCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.OnCharacterChange
// (BlueprintCallable, BlueprintEvent)
void AHSHSpectator_C::OnCharacterChange()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.OnCharacterChange");

	AHSHSpectator_C_OnCharacterChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.SetTickEnabled
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSHSpectator_C::SetTickEnabled(bool bEnabled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.SetTickEnabled");

	AHSHSpectator_C_SetTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSHSpectator_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ReceiveBeginPlay");

	AHSHSpectator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectator.HSHSpectator_C.ExecuteUbergraph_HSHSpectator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectator_C::ExecuteUbergraph_HSHSpectator(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectator.HSHSpectator_C.ExecuteUbergraph_HSHSpectator");

	AHSHSpectator_C_ExecuteUbergraph_HSHSpectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
