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

// BlueprintGeneratedClass ProjectileHrkActive.ProjectileHrkActive_C
// 0x0023 (FullSize[0x0448] - InheritedSize[0x0425])
class AProjectileHrkActive_C : public AProjectileBase_C
{
public:
	unsigned char                                      UnknownData_9P38[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                Timer;                                                     // 0x0438(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bDebug;                                                    // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z8GN[0x3];                                     // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Radius_CheckDestroy;                                       // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ProjectileHrkActive.ProjectileHrkActive_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void HitWall();
	void SpawnParticle();
	void OnHitCharacter(class AActor* Actor);
	void OnHitConstruct();
	void ExecuteUbergraph_ProjectileHrkActive(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
