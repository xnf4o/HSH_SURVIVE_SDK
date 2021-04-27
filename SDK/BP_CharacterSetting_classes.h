#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterSetting.BP_CharacterSetting_C
// 0x0190 (FullSize[0x04C8] - InheritedSize[0x0338])
class ABP_CharacterSetting_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              EndTransfomr_LightAlpha_889803D04E2CEECC5BF25FAC416D19D6;  // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndTransfomr_Alpha_889803D04E2CEECC5BF25FAC416D19D6;       // 0x0374(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             EndTransfomr__Direction_889803D04E2CEECC5BF25FAC416D19D6;  // 0x0378(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LDZM[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          EndTransfomr;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnClick;                                                   // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FE3N[0x3];                                     // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Delta;                                                     // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LFUW[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APreviewMeshActor_C*                         RightPreviewMesh;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APreviewMeshActor_C*                         LeftPreviewMesh;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PreviewBack;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PreviewHead;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         Info;                                                      // 0x03B8(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_CharacterSetting.BP_CharacterSetting_C");
		return ptr;
	}



	struct FTransform FilterPairTrasform(const struct FPlayerInfoStruct_G& PlayerInfo, const struct FTransform& DefaultTransform, TMap<class UClass*, struct FTransform> PairTransform);
	void ClearAccessories(class UObject* InputObject);
	void GetHeadPreviewMesh(class UMeshComponent** Mesh);
	void SetAccMaterialsEffect(float ParameterValue, const struct FLinearColor& InLinearColor);
	void SetAccPreviewMeshVisible(bool bNewVisibility);
	void GetBackPreviewMesh(class USkeletalMeshComponent** SkeletalMesh, bool* bIsAsBackSK);
	void PreviewAccBack(class UHSHBackItem* HSHBackItem, const struct FPlayerInfoStruct_G& Player_Info);
	void PreviewAccHead(class UHSHHeadItem* HSHHeadItem, const struct FPlayerInfoStruct_G& PlayerInfo);
	void UpdateAccesories();
	void InitializeHunterAccHead(const struct FPlayerInfoStruct_G& Player_Info);
	void InitializeSurvivorAccHead(const struct FPlayerInfoStruct_G& Player_Info);
	void InitializeHunterAccBack(const struct FPlayerInfoStruct_G& Player_Info);
	void InitializeSurvivorAccBack(const struct FPlayerInfoStruct_G& Player_Info);
	void FilterIgnoreSimulate(class UClass* Class, class USkeletalMeshComponent* Target);
	void InitializeSkeletalMesh(class USkeletalMeshComponent* SkeletalMesh);
	void SetMaterialEffect(float ParameterValue, const struct FLinearColor& InLinearColor);
	void InitializePreviewMesh(class APreviewMeshActor_C** RightPreviewMesh, class APreviewMeshActor_C** LeftPreviewMesh);
	void GetItemSocketName(class UClass* ActorClass, struct FName* SocketName);
	void SetCharacterScale(class UClass* Class, class USceneComponent* SkeletalMesh);
	void EndTransfomr__FinishedFunc();
	void EndTransfomr__UpdateFunc();
	void ReceiveNotifyPlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void ReceiveNotifyPlayerSkins(TArray<struct FString> Skins);
	void ReceiveNotifyPlayerPerks(TArray<struct FString>* Perks);
	void ReceiveNotifyPlayerProfiles(TArray<struct FString> Profiles);
	void ReceiveNotifyPlayerStickers(TArray<struct FString>* Stickers);
	void ReceiveNotifyPlayerCharacters(TArray<struct FString> Characters);
	void ReceiveNotifyPlayerHeads(TArray<struct FString> Head);
	void ReceiveNotifyPlayerBacks(TArray<struct FString>* Back);
	void OnUnhoverEvent(class UPrimitiveComponent* TouchedComponent);
	void OnHoverEvent(class UPrimitiveComponent* TouchedComponent);
	void OnClickedEvent(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void OnReleaseEvent(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void ReceiveBeginPlay();
	void SetupCharacterSettingActor(class USkeletalMesh* NewMesh, class UAnimationAsset* NewAnimToPlay, class UClass* CharacterClass);
	void ReceiveNotifyPlayerInfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void UpdateMeshRotate();
	void ReceiveTick(float DeltaSeconds);
	void ResetRotation();
	void SpawnInGameItem(const struct FPlayerInfoStruct_G& PlayerInfo, TEnumAsByte<E_Role_E_Role> Role);
	void UpdateCharacter(const struct FPlayerInfoStruct_G& Info);
	void ExecuteUbergraph_BP_CharacterSetting(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
