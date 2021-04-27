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

// BlueprintGeneratedClass TrapActorSigilScroll.TrapActorSigilScroll_C
// 0x0020 (FullSize[0x0458] - InheritedSize[0x0438])
class ATrapActorSigilScroll_C : public ATrapActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0438(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Center;                                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BarrierParticle;                                           // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass TrapActorSigilScroll.TrapActorSigilScroll_C");
		return ptr;
	}



	struct FVector FindLaunchDirection(class AActor* Character);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InitOverride(TArray<class ATrapTargetActor_C*>* Target);
	void AddedItemSuccess();
	void TalismanDestroy();
	void BlockSurvivor();
	void ExecuteUbergraph_TrapActorSigilScroll(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
