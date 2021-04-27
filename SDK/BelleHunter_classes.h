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

// BlueprintGeneratedClass BelleHunter.BelleHunter_C
// 0x0060 (FullSize[0x0E7C] - InheritedSize[0x0E1C])
class ABelleHunter_C : public AHunterBase_C
{
public:
	unsigned char                                      UnknownData_7ULW[0x4];                                     // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E20(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Cutter01A;                                              // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             A_BelleIdle01_EN_Cue;                                      // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             A_Belle_Cutter_SlidingLoop_Cue;                            // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTurnRate_1;                                            // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseLookUpRate_1;                                          // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Attacking;                                                 // 0x0E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               SaveAttack;                                                // 0x0E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IT7C[0x3];                                     // 0x0E71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttackCount;                                               // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackDelay;                                               // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BelleHunter.BelleHunter_C");
		return ptr;
	}



	void GetHeavyAtkGE(class UClass** GameplayEffect);
	void UserConstructionScript();
	void ResetCombo();
	void ComboAttackSave();
	void PlayAttackAnimation(int AttackType);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void PlayDestroyItemMontage();
	void OnDisableAttackCollision();
	void ReceiveTick(float DeltaSeconds);
	void OnEnableAttackCollision();
	void SendMeleeDistance(float Distance, float Width);
	void MulticastEnterHiddenEffect();
	void MulticastExitHiddenEffect();
	void SetBodyHalfHeight(float ParameterValue);
	void SetMaterialsAlpha(float ParameterValue);
	void SetMaterialsColor(const struct FLinearColor& InLinearColor);
	void ExecuteUbergraph_BelleHunter(int EntryPoint);
	void Attacking__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
