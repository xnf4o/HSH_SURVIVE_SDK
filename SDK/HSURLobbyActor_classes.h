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

// BlueprintGeneratedClass HSURLobbyActor.HSURLobbyActor_C
// 0x01B0 (FullSize[0x04E8] - InheritedSize[0x0338])
class AHSURLobbyActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMeshCat;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterTransform_LightAlpha_81FB908D4263C2F94476C18F4FD6D6DC; // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterTransform_Alpha_81FB908D4263C2F94476C18F4FD6D6DC; // 0x036C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             CharacterTransform__Direction_81FB908D4263C2F94476C18F4FD6D6DC; // 0x0370(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EEPH[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CharacterTransform;                                        // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHasPlayer;                                               // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPlayerOwning;                                            // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NKB7[0x2];                                     // 0x0382(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerOwnerId;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLobbyPoseStruct>                    PairAnimation;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	bool                                               IsReady;                                                   // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_LobbyPose_E_LobbyPose>               LobbyPose;                                                 // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RAIJ[0x2];                                     // 0x039A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scale;                                                     // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnUpdate;                                                  // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget_LobbyPlayerInfo_C*                   WidgetLobbyPreview;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClear;                                                   // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                      PreviewBack;                                               // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PreviewHead;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerOwnerInfo;                                           // 0x03D8(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURLobbyActor.HSURLobbyActor_C");
		return ptr;
	}



	void SetupShowPet(class UClass* Character);
	void ToggleVisiblePet(bool bNewVisibility);
	bool GetIsOtherSameRole();
	void ClearAccessories(class UObject* InputObject);
	void UpdateAccessories(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G, bool NewVisibility);
	void SetAccMaterialsEffect(float ParameterValue, const struct FLinearColor& InLinearColor);
	void SetAccPreviewMeshVisible(bool NewVisibility);
	void PreviewAccBack(class UHSHBackItem* HSHBackItem, const struct FPlayerInfoStruct_G& PlayerInfo);
	void PreviewAccHead(class UHSHHeadItem* InputPin, const struct FPlayerInfoStruct_G& InputPin2);
	void GetBackPreviewMesh(class USkeletalMeshComponent** SkeletalMesh, bool* bIsAsBackSK);
	void GetHeadPreviewMesh(class UMeshComponent** Mesh);
	void InitializeHunterAccHead(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G);
	void InitializeHunterAccBack(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G);
	void InitializeSurvivorAccHead(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G);
	void InitializeSurvivorAccBack(const struct FPlayerInfoStruct_G& PlayerInfoStruct_G);
	struct FTransform FilterPairTransform(const struct FPlayerInfoStruct_G& PlayerInfo, const struct FTransform& DefaultTransform, TMap<class UClass*, struct FTransform> PairTransform);
	void SetMaterialEffect(float ParameterValue, const struct FLinearColor& InLinearColor);
	struct FVector GetActorPosition();
	bool GetIsPlayerOwner();
	void IsPlayerIsReady(bool* bIsReady);
	void OnClearLobby();
	void SetUpWidget(const struct FS_PlayerLobby& PlayerLobby, bool bIsVisible);
	void ClearWidgetStatus();
	void UpdateWidgetStatus(int PlayerId, const struct FString& Name, bool bIsVisible, const struct FPlayerInfoStruct_G& PlayerInfo);
	void CreateWidgetStatus(int PlayerId, const struct FString& Name, bool bIsVisible, const struct FPlayerInfoStruct_G& PlayerInfo);
	void SetCharacterScale(class UClass* Class);
	void GetLobbyBoneLocation(struct FVector* BoneLocation);
	void CharacterTransform__FinishedFunc();
	void CharacterTransform__UpdateFunc();
	void RefreshWidget(const struct FS_PlayerLobby& PlayerLobby);
	void SetupLobbyActor(class USkeletalMesh* NewMesh, int PlayerOwnerId, class UClass* CharacterClass, TEnumAsByte<E_Role_E_Role> Role, bool bIsVisible, const struct FPlayerInfoStruct_G& PlayerInfo);
	void ClearLobbyActor();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void SetupLobbyActorWithPlayerLobby(const struct FS_PlayerLobby& PlayerLobby, bool bIsVisible);
	void UpdateActorPosition();
	void OnSetupLobby(class USkeletalMesh* NewMesh, class UClass* Class, TEnumAsByte<E_Role_E_Role> Role, bool IsVisibile, const struct FPlayerInfoStruct_G& PlayerInfo);
	void ExecuteUbergraph_HSURLobbyActor(int EntryPoint);
	void OnClear__DelegateSignature();
	void OnUpdate__DelegateSignature(bool bIsValid, const struct FPlayerInfoStruct_G& PlayerInfo, int PlayerId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
