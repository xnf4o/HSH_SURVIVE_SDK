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

// BlueprintGeneratedClass JaneSurvivor.JaneSurvivor_C
// 0x0038 (FullSize[0x0FB8] - InheritedSize[0x0F80])
class AJaneSurvivor_C : public ASurvivorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F80(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box2;                                                      // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Attacking;                                                 // 0x0FA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass JaneSurvivor.JaneSurvivor_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnEnableAttackCollision();
	void OnDisableAttackCollision();
	void SendMeleeDistance(float Distance, float Width);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_JaneSurvivor(int EntryPoint);
	void Attacking__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
