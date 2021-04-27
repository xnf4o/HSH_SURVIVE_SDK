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

// BlueprintGeneratedClass PickableItemBase.PickableItemBase_C
// 0x00BF (FullSize[0x0788] - InheritedSize[0x06C9])
class APickableItemBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_XDQM[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ItemAura;                                                  // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Pivot;                                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropMovementComponent_C*                    DropMovementComponent;                                     // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              RotateLoop_Yaw_4805CDE647D6FCD7D1808AA805CF4358;           // 0x06F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             RotateLoop__Direction_4805CDE647D6FCD7D1808AA805CF4358;    // 0x06FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IWEJ[0x3];                                     // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RotateLoop;                                                // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_ZValue_0558725A4D51AF9F905587ABA1712E12;        // 0x0708(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_1_0558725A4D51AF9F905587ABA1712E12;           // 0x070C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_0558725A4D51AF9F905587ABA1712E12;    // 0x0710(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q19A[0x7];                                     // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Durability;                                                // 0x0720(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FPrimaryAssetId                             ItemId;                                                    // 0x0724(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N4MS[0x4];                                     // 0x0734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Condition;                                                 // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDropFromSurvivor_;                                       // 0x0740(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_YO4I[0x7];                                     // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          MI_HunterMat;                                              // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          MI_SurvivorMat;                                            // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOnWater;                                                 // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5R96[0x7];                                     // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActorComponent*                             WaterComponent;                                            // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBusy;                                                    // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S3F2[0x3];                                     // 0x0769(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MatIndex;                                                  // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsShouldNotMove;                                          // 0x0770(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_EMNA[0x7];                                     // 0x0771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCollected;                                               // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PickableItemBase.PickableItemBase_C");
		return ptr;
	}



	void SetCollisionResponseInteract(bool IsResponse);
	void OnRitualStateUpdate(int State);
	void SetUpItemDescription();
	void GetMainCameraComponent(class UCameraComponent** CameraComponent);
	void GetCurrentItemID(struct FPrimaryAssetId* AssetID);
	void NotifyFootStep(class USoundBase** Sound, float* VolumeMultiplier, class USoundAttenuation** AttenuationSettings);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void GetInteractSlateBrush(class AActor* Owner, struct FSlateBrush* SlateBrushNormal, struct FSlateBrush* SlateBrushHover, struct FSlateBrush* SlateBrushInteract, struct FText* SlateText, bool* NotShowButton);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void RotateLoop__FinishedFunc();
	void RotateLoop__UpdateFunc();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnLoadItem();
	void InitHIlightMaterial();
	void PlayFloating();
	void ReceiveBeginPlay();
	void SelfRotate();
	void Interaction(class AHSHCharacterBase* Character);
	void HighlightItemMaterial(bool IsHunter);
	void ExecuteUbergraph_PickableItemBase(int EntryPoint);
	void OnCollected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
