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

// BlueprintGeneratedClass ProjectileHolyKnife.ProjectileHolyKnife_C
// 0x0027 (FullSize[0x044C] - InheritedSize[0x0425])
class AProjectileHolyKnife_C : public AProjectileBase_C
{
public:
	unsigned char                                      UnknownData_HC4G[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SK_HolyKnifeLv3;                                           // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x0440(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ProjectileHolyKnife.ProjectileHolyKnife_C");
		return ptr;
	}



	void UserConstructionScript();
	void SpawnParticle(class AActor* Actor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnHitCharacter(class AActor* Actor);
	void ExecuteUbergraph_ProjectileHolyKnife(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
