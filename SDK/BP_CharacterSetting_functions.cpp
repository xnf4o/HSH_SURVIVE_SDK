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

// Function BP_CharacterSetting.BP_CharacterSetting_C.FilterPairTrasform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FTransform              DefaultTransform               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TMap<class UClass*, struct FTransform> PairTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform ABP_CharacterSetting_C::FilterPairTrasform(const struct FPlayerInfoStruct_G& PlayerInfo, const struct FTransform& DefaultTransform, TMap<class UClass*, struct FTransform> PairTransform)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.FilterPairTrasform");

	ABP_CharacterSetting_C_FilterPairTrasform_Params params;
	params.PlayerInfo = PlayerInfo;
	params.DefaultTransform = DefaultTransform;
	params.PairTransform = PairTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ClearAccessories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InputObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::ClearAccessories(class UObject* InputObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ClearAccessories");

	ABP_CharacterSetting_C_ClearAccessories_Params params;
	params.InputObject = InputObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.GetHeadPreviewMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::GetHeadPreviewMesh(class UMeshComponent** Mesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.GetHeadPreviewMesh");

	ABP_CharacterSetting_C_GetHeadPreviewMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.SetAccMaterialsEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            InLinearColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::SetAccMaterialsEffect(float ParameterValue, const struct FLinearColor& InLinearColor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.SetAccMaterialsEffect");

	ABP_CharacterSetting_C_SetAccMaterialsEffect_Params params;
	params.ParameterValue = ParameterValue;
	params.InLinearColor = InLinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.SetAccPreviewMeshVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CharacterSetting_C::SetAccPreviewMeshVisible(bool bNewVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.SetAccPreviewMeshVisible");

	ABP_CharacterSetting_C_SetAccPreviewMeshVisible_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.GetBackPreviewMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsAsBackSK                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CharacterSetting_C::GetBackPreviewMesh(class USkeletalMeshComponent** SkeletalMesh, bool* bIsAsBackSK)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.GetBackPreviewMesh");

	ABP_CharacterSetting_C_GetBackPreviewMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (bIsAsBackSK != nullptr)
		*bIsAsBackSK = params.bIsAsBackSK;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.PreviewAccBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHBackItem*            HSHBackItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::PreviewAccBack(class UHSHBackItem* HSHBackItem, const struct FPlayerInfoStruct_G& Player_Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.PreviewAccBack");

	ABP_CharacterSetting_C_PreviewAccBack_Params params;
	params.HSHBackItem = HSHBackItem;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.PreviewAccHead
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHHeadItem*            HSHHeadItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::PreviewAccHead(class UHSHHeadItem* HSHHeadItem, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.PreviewAccHead");

	ABP_CharacterSetting_C_PreviewAccHead_Params params;
	params.HSHHeadItem = HSHHeadItem;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateAccesories
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_CharacterSetting_C::UpdateAccesories()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateAccesories");

	ABP_CharacterSetting_C_UpdateAccesories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeHunterAccHead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::InitializeHunterAccHead(const struct FPlayerInfoStruct_G& Player_Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeHunterAccHead");

	ABP_CharacterSetting_C_InitializeHunterAccHead_Params params;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSurvivorAccHead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::InitializeSurvivorAccHead(const struct FPlayerInfoStruct_G& Player_Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSurvivorAccHead");

	ABP_CharacterSetting_C_InitializeSurvivorAccHead_Params params;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeHunterAccBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::InitializeHunterAccBack(const struct FPlayerInfoStruct_G& Player_Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeHunterAccBack");

	ABP_CharacterSetting_C_InitializeHunterAccBack_Params params;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSurvivorAccBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::InitializeSurvivorAccBack(const struct FPlayerInfoStruct_G& Player_Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSurvivorAccBack");

	ABP_CharacterSetting_C_InitializeSurvivorAccBack_Params params;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.FilterIgnoreSimulate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::FilterIgnoreSimulate(class UClass* Class, class USkeletalMeshComponent* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.FilterIgnoreSimulate");

	ABP_CharacterSetting_C_FilterIgnoreSimulate_Params params;
	params.Class = Class;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::InitializeSkeletalMesh(class USkeletalMeshComponent* SkeletalMesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.InitializeSkeletalMesh");

	ABP_CharacterSetting_C_InitializeSkeletalMesh_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.SetMaterialEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            InLinearColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::SetMaterialEffect(float ParameterValue, const struct FLinearColor& InLinearColor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.SetMaterialEffect");

	ABP_CharacterSetting_C_SetMaterialEffect_Params params;
	params.ParameterValue = ParameterValue;
	params.InLinearColor = InLinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.InitializePreviewMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APreviewMeshActor_C*     RightPreviewMesh               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APreviewMeshActor_C*     LeftPreviewMesh                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::InitializePreviewMesh(class APreviewMeshActor_C** RightPreviewMesh, class APreviewMeshActor_C** LeftPreviewMesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.InitializePreviewMesh");

	ABP_CharacterSetting_C_InitializePreviewMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RightPreviewMesh != nullptr)
		*RightPreviewMesh = params.RightPreviewMesh;
	if (LeftPreviewMesh != nullptr)
		*LeftPreviewMesh = params.LeftPreviewMesh;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.GetItemSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::GetItemSocketName(class UClass* ActorClass, struct FName* SocketName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.GetItemSocketName");

	ABP_CharacterSetting_C_GetItemSocketName_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.SetCharacterScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::SetCharacterScale(class UClass* Class, class USceneComponent* SkeletalMesh)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.SetCharacterScale");

	ABP_CharacterSetting_C_SetCharacterScale_Params params;
	params.Class = Class;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.EndTransfomr__FinishedFunc
// (BlueprintEvent)
void ABP_CharacterSetting_C::EndTransfomr__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.EndTransfomr__FinishedFunc");

	ABP_CharacterSetting_C_EndTransfomr__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.EndTransfomr__UpdateFunc
// (BlueprintEvent)
void ABP_CharacterSetting_C::EndTransfomr__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.EndTransfomr__UpdateFunc");

	ABP_CharacterSetting_C_EndTransfomr__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerItems");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerSkins
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Skins                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerSkins(TArray<struct FString> Skins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerSkins");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerSkins_Params params;
	params.Skins = Skins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Perks                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerPerks");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Profiles                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerProfiles");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerProfiles_Params params;
	params.Profiles = Profiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerStickers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Stickers                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerStickers");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerStickers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stickers != nullptr)
		*Stickers = params.Stickers;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerCharacters");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerCharacters_Params params;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerHeads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Head                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerHeads(TArray<struct FString> Head)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerHeads");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerHeads_Params params;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerBacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Back                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerBacks(TArray<struct FString>* Back)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerBacks");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.OnUnhoverEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::OnUnhoverEvent(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.OnUnhoverEvent");

	ABP_CharacterSetting_C_OnUnhoverEvent_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.OnHoverEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::OnHoverEvent(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.OnHoverEvent");

	ABP_CharacterSetting_C_OnHoverEvent_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.OnClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_CharacterSetting_C::OnClickedEvent(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.OnClickedEvent");

	ABP_CharacterSetting_C_OnClickedEvent_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.OnReleaseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_CharacterSetting_C::OnReleaseEvent(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.OnReleaseEvent");

	ABP_CharacterSetting_C_OnReleaseEvent_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CharacterSetting_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveBeginPlay");

	ABP_CharacterSetting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.SetupCharacterSettingActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimationAsset*         NewAnimToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::SetupCharacterSettingActor(class USkeletalMesh* NewMesh, class UAnimationAsset* NewAnimToPlay, class UClass* CharacterClass)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.SetupCharacterSettingActor");

	ABP_CharacterSetting_C_SetupCharacterSettingActor_Params params;
	params.NewMesh = NewMesh;
	params.NewAnimToPlay = NewAnimToPlay;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveNotifyPlayerInfo");

	ABP_CharacterSetting_C_ReceiveNotifyPlayerInfo_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateMeshRotate
// (BlueprintCallable, BlueprintEvent)
void ABP_CharacterSetting_C::UpdateMeshRotate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateMeshRotate");

	ABP_CharacterSetting_C_UpdateMeshRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ReceiveTick");

	ABP_CharacterSetting_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ResetRotation
// (BlueprintCallable, BlueprintEvent)
void ABP_CharacterSetting_C::ResetRotation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ResetRotation");

	ABP_CharacterSetting_C_ResetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.SpawnInGameItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::SpawnInGameItem(const struct FPlayerInfoStruct_G& PlayerInfo, TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.SpawnInGameItem");

	ABP_CharacterSetting_C_SpawnInGameItem_Params params;
	params.PlayerInfo = PlayerInfo;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_CharacterSetting_C::UpdateCharacter(const struct FPlayerInfoStruct_G& Info)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.UpdateCharacter");

	ABP_CharacterSetting_C_UpdateCharacter_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterSetting.BP_CharacterSetting_C.ExecuteUbergraph_BP_CharacterSetting
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterSetting_C::ExecuteUbergraph_BP_CharacterSetting(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_CharacterSetting.BP_CharacterSetting_C.ExecuteUbergraph_BP_CharacterSetting");

	ABP_CharacterSetting_C_ExecuteUbergraph_BP_CharacterSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
