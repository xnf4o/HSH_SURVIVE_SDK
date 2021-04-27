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

// BlueprintGeneratedClass zBingSurvivor.zBingSurvivor_C
// 0x0071 (FullSize[0x0FF1] - InheritedSize[0x0F80])
class AzBingSurvivor_C : public ASurvivorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F80(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             _Setter_CatLocation;                                       // 0x0F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm_Cat;                                             // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box2;                                                      // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0FB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AZBingCat_C*                                 RefCat;                                                    // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReady;                                                   // 0x0FC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9G5F[0x7];                                     // 0x0FC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_Pickable                                 CacheCurrentItem;                                          // 0x0FC8(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               NewVar_1;                                                  // 0x0FF0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass zBingSurvivor.zBingSurvivor_C");
		return ptr;
	}



	void CanGiveItemToCat(bool* CanGiveItemToCat);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnEnableAttackCollision();
	void OnDisableAttackCollision();
	void SendMeleeDistance(float Distance, float Width);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void SpawnCat();
	void S_Survivor_ActiveSkill();
	void WaitSSReady();
	void Test(bool NewParam);
	void Test2(bool NewParam);
	void GiveNewItemToCat(const struct FS_Pickable& ItemToGive);
	void ExecuteUbergraph_zBingSurvivor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
