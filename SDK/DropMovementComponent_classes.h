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

// BlueprintGeneratedClass DropMovementComponent.DropMovementComponent_C
// 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
class UDropMovementComponent_C : public UDropMovementComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0108(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AProjectileDropItemActor_C*                  ParentActor;                                               // 0x0118(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Safe_Zone;                                                 // 0x0120(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L04G[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          NewVar_1;                                                  // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass DropMovementComponent.DropMovementComponent_C");
		return ptr;
	}



	void ActorFloatingLoop(float Alpha, float ZValue, class UActorComponent* WaterComponent);
	void SetActorMovementActive(bool Active);
	void OnRep_ParentActor();
	void Initialize(bool bIsShouldNotMove);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Init();
	void ExecuteUbergraph_DropMovementComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
