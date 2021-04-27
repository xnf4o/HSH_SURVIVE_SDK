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

// BlueprintGeneratedClass Ventilator.Ventilator_C
// 0x0077 (FullSize[0x0740] - InheritedSize[0x06C9])
class AVentilator_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_FD9P[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow1;                                                    // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LookAtPoint;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ChildActor;                                                // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Plane;                                                     // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             TargetPoint;                                               // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AVentilatorManager_C*                        Mechanic;                                                  // 0x0718(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StaticMeshLocation;                                        // 0x0720(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanInteract;                                              // 0x072C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsLift;                                                   // 0x072D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AG9O[0x2];                                     // 0x072E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnUseVentilator;                                           // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass Ventilator.Ventilator_C");
		return ptr;
	}



	void GetDelayBeforeTeleport(float* Return);
	void GetCooldown(float* Return);
	void GetDelayCloseAnimation(float* Duration);
	void GetDelayOpenAnimation(float* Duration);
	void OnFinishTeleport();
	void OnStartTeleport();
	void OnDeactiveInteract();
	void OnActiveInteract();
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void GetDelayCallAnimation(float* Duration);
	struct FTransform GetTargetTranform();
	void UserConstructionScript();
	void VentilatorActive();
	void VentilatorDeactive();
	void UseVentilator(class ASurvivorBase_C* survivor);
	void Interaction(class AHSHCharacterBase* Character);
	void MulticastPlayOpenAnimation();
	void MulticastPlayCloseAnimation();
	void DisableUIOnRole(TEnumAsByte<E_Role_E_Role> Role);
	void EnableUIOnRole(TEnumAsByte<E_Role_E_Role> Role);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Ventilator(int EntryPoint);
	void OnUseVentilator__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
