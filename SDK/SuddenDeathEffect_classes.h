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

// BlueprintGeneratedClass SuddenDeathEffect.SuddenDeathEffect_C
// 0x0030 (FullSize[0x03A0] - InheritedSize[0x0370])
class ASuddenDeathEffect_C : public ARitualEffectBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     Timeline_0_IncScale_CB55BC2147E2EE1793B0568300AA1CEC;      // 0x0380(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_FadeOutBlendWeight_CB55BC2147E2EE1793B0568300AA1CEC; // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_CB55BC2147E2EE1793B0568300AA1CEC;    // 0x0390(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZUPU[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SuddenDeathEffect.SuddenDeathEffect_C");
		return ptr;
	}



	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SuddenDeathEffect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
