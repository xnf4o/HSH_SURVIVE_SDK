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

// Function HSURLobbyActor.HSURLobbyActor_C.SetupShowPet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::SetupShowPet(class UClass* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetupShowPet");

	AHSURLobbyActor_C_SetupShowPet_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.ToggleVisiblePet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyActor_C::ToggleVisiblePet(bool bNewVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.ToggleVisiblePet");

	AHSURLobbyActor_C_ToggleVisiblePet_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.GetIsOtherSameRole
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURLobbyActor_C::GetIsOtherSameRole()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.GetIsOtherSameRole");

	AHSURLobbyActor_C_GetIsOtherSameRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURLobbyActor.HSURLobbyActor_C.ClearAccessories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InputObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::ClearAccessories(class UObject* InputObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.ClearAccessories");

	AHSURLobbyActor_C_ClearAccessories_Params params;
	params.InputObject = InputObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.UpdateAccessories
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyActor_C::UpdateAccessories(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G, bool NewVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.UpdateAccessories");

	AHSURLobbyActor_C_UpdateAccessories_Params params;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.SetAccMaterialsEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            InLinearColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::SetAccMaterialsEffect(float ParameterValue, const struct FLinearColor& InLinearColor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetAccMaterialsEffect");

	AHSURLobbyActor_C_SetAccMaterialsEffect_Params params;
	params.ParameterValue = ParameterValue;
	params.InLinearColor = InLinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.SetAccPreviewMeshVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyActor_C::SetAccPreviewMeshVisible(bool NewVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetAccPreviewMeshVisible");

	AHSURLobbyActor_C_SetAccPreviewMeshVisible_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.PreviewAccBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHBackItem*            HSHBackItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::PreviewAccBack(class UHSHBackItem* HSHBackItem, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.PreviewAccBack");

	AHSURLobbyActor_C_PreviewAccBack_Params params;
	params.HSHBackItem = HSHBackItem;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.PreviewAccHead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHHeadItem*            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     InputPin2                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::PreviewAccHead(class UHSHHeadItem* InputPin, const struct FPlayerInfoStruct_G& InputPin2)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.PreviewAccHead");

	AHSURLobbyActor_C_PreviewAccHead_Params params;
	params.InputPin = InputPin;
	params.InputPin2 = InputPin2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.GetBackPreviewMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsAsBackSK                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyActor_C::GetBackPreviewMesh(class USkeletalMeshComponent** SkeletalMesh, bool* bIsAsBackSK)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.GetBackPreviewMesh");

	AHSURLobbyActor_C_GetBackPreviewMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (bIsAsBackSK != nullptr)
		*bIsAsBackSK = params.bIsAsBackSK;

}


// Function HSURLobbyActor.HSURLobbyActor_C.GetHeadPreviewMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::GetHeadPreviewMesh(class UMeshComponent** Mesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.GetHeadPreviewMesh");

	AHSURLobbyActor_C_GetHeadPreviewMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function HSURLobbyActor.HSURLobbyActor_C.InitializeHunterAccHead
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::InitializeHunterAccHead(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.InitializeHunterAccHead");

	AHSURLobbyActor_C_InitializeHunterAccHead_Params params;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.InitializeHunterAccBack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::InitializeHunterAccBack(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.InitializeHunterAccBack");

	AHSURLobbyActor_C_InitializeHunterAccBack_Params params;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.InitializeSurvivorAccHead
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::InitializeSurvivorAccHead(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.InitializeSurvivorAccHead");

	AHSURLobbyActor_C_InitializeSurvivorAccHead_Params params;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.InitializeSurvivorAccBack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::InitializeSurvivorAccBack(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.InitializeSurvivorAccBack");

	AHSURLobbyActor_C_InitializeSurvivorAccBack_Params params;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.FilterPairTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FTransform              DefaultTransform               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TMap<class UClass*, struct FTransform> PairTransform                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform AHSURLobbyActor_C::FilterPairTransform(const struct FPlayerInfoStruct_G& PlayerInfo, const struct FTransform& DefaultTransform, TMap<class UClass*, struct FTransform> PairTransform)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.FilterPairTransform");

	AHSURLobbyActor_C_FilterPairTransform_Params params;
	params.PlayerInfo = PlayerInfo;
	params.DefaultTransform = DefaultTransform;
	params.PairTransform = PairTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURLobbyActor.HSURLobbyActor_C.SetMaterialEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            InLinearColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::SetMaterialEffect(float ParameterValue, const struct FLinearColor& InLinearColor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetMaterialEffect");

	AHSURLobbyActor_C_SetMaterialEffect_Params params;
	params.ParameterValue = ParameterValue;
	params.InLinearColor = InLinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.GetActorPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector AHSURLobbyActor_C::GetActorPosition()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.GetActorPosition");

	AHSURLobbyActor_C_GetActorPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURLobbyActor.HSURLobbyActor_C.GetIsPlayerOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AHSURLobbyActor_C::GetIsPlayerOwner()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.GetIsPlayerOwner");

	AHSURLobbyActor_C_GetIsPlayerOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HSURLobbyActor.HSURLobbyActor_C.IsPlayerIsReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsReady                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyActor_C::IsPlayerIsReady(bool* bIsReady)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.IsPlayerIsReady");

	AHSURLobbyActor_C_IsPlayerIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsReady != nullptr)
		*bIsReady = params.bIsReady;

}


// Function HSURLobbyActor.HSURLobbyActor_C.OnClearLobby
// (Public, BlueprintCallable, BlueprintEvent)
void AHSURLobbyActor_C::OnClearLobby()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.OnClearLobby");

	AHSURLobbyActor_C_OnClearLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.SetUpWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PlayerLobby          PlayerLobby                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyActor_C::SetUpWidget(const struct FS_PlayerLobby& PlayerLobby, bool bIsVisible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetUpWidget");

	AHSURLobbyActor_C_SetUpWidget_Params params;
	params.PlayerLobby = PlayerLobby;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.ClearWidgetStatus
// (Protected, BlueprintCallable, BlueprintEvent)
void AHSURLobbyActor_C::ClearWidgetStatus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.ClearWidgetStatus");

	AHSURLobbyActor_C_ClearWidgetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.UpdateWidgetStatus
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::UpdateWidgetStatus(int PlayerId, const struct FString& Name, bool bIsVisible, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.UpdateWidgetStatus");

	AHSURLobbyActor_C_UpdateWidgetStatus_Params params;
	params.PlayerId = PlayerId;
	params.Name = Name;
	params.bIsVisible = bIsVisible;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.CreateWidgetStatus
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::CreateWidgetStatus(int PlayerId, const struct FString& Name, bool bIsVisible, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.CreateWidgetStatus");

	AHSURLobbyActor_C_CreateWidgetStatus_Params params;
	params.PlayerId = PlayerId;
	params.Name = Name;
	params.bIsVisible = bIsVisible;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.SetCharacterScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::SetCharacterScale(class UClass* Class)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetCharacterScale");

	AHSURLobbyActor_C_SetCharacterScale_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.GetLobbyBoneLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 BoneLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::GetLobbyBoneLocation(struct FVector* BoneLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.GetLobbyBoneLocation");

	AHSURLobbyActor_C_GetLobbyBoneLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BoneLocation != nullptr)
		*BoneLocation = params.BoneLocation;

}


// Function HSURLobbyActor.HSURLobbyActor_C.CharacterTransform__FinishedFunc
// (BlueprintEvent)
void AHSURLobbyActor_C::CharacterTransform__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.CharacterTransform__FinishedFunc");

	AHSURLobbyActor_C_CharacterTransform__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.CharacterTransform__UpdateFunc
// (BlueprintEvent)
void AHSURLobbyActor_C::CharacterTransform__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.CharacterTransform__UpdateFunc");

	AHSURLobbyActor_C_CharacterTransform__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.RefreshWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PlayerLobby          PlayerLobby                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::RefreshWidget(const struct FS_PlayerLobby& PlayerLobby)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.RefreshWidget");

	AHSURLobbyActor_C_RefreshWidget_Params params;
	params.PlayerLobby = PlayerLobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.SetupLobbyActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerOwnerId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::SetupLobbyActor(class USkeletalMesh* NewMesh, int PlayerOwnerId, class UClass* CharacterClass, TEnumAsByte<E_Role_E_Role> Role, bool bIsVisible, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetupLobbyActor");

	AHSURLobbyActor_C_SetupLobbyActor_Params params;
	params.NewMesh = NewMesh;
	params.PlayerOwnerId = PlayerOwnerId;
	params.CharacterClass = CharacterClass;
	params.Role = Role;
	params.bIsVisible = bIsVisible;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.ClearLobbyActor
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyActor_C::ClearLobbyActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.ClearLobbyActor");

	AHSURLobbyActor_C_ClearLobbyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSURLobbyActor_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	AHSURLobbyActor_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.SetupLobbyActorWithPlayerLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PlayerLobby          PlayerLobby                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHSURLobbyActor_C::SetupLobbyActorWithPlayerLobby(const struct FS_PlayerLobby& PlayerLobby, bool bIsVisible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.SetupLobbyActorWithPlayerLobby");

	AHSURLobbyActor_C_SetupLobbyActorWithPlayerLobby_Params params;
	params.PlayerLobby = PlayerLobby;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.UpdateActorPosition
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyActor_C::UpdateActorPosition()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.UpdateActorPosition");

	AHSURLobbyActor_C_UpdateActorPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.OnSetupLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsVisibile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void AHSURLobbyActor_C::OnSetupLobby(class USkeletalMesh* NewMesh, class UClass* Class, TEnumAsByte<E_Role_E_Role> Role, bool IsVisibile, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.OnSetupLobby");

	AHSURLobbyActor_C_OnSetupLobby_Params params;
	params.NewMesh = NewMesh;
	params.Class = Class;
	params.Role = Role;
	params.IsVisibile = IsVisibile;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.ExecuteUbergraph_HSURLobbyActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::ExecuteUbergraph_HSURLobbyActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.ExecuteUbergraph_HSURLobbyActor");

	AHSURLobbyActor_C_ExecuteUbergraph_HSURLobbyActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.OnClear__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHSURLobbyActor_C::OnClear__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.OnClear__DelegateSignature");

	AHSURLobbyActor_C_OnClear__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyActor.HSURLobbyActor_C.OnUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsValid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyActor_C::OnUpdate__DelegateSignature(bool bIsValid, const struct FPlayerInfoStruct_G& PlayerInfo, int PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyActor.HSURLobbyActor_C.OnUpdate__DelegateSignature");

	AHSURLobbyActor_C_OnUpdate__DelegateSignature_Params params;
	params.bIsValid = bIsValid;
	params.PlayerInfo = PlayerInfo;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
