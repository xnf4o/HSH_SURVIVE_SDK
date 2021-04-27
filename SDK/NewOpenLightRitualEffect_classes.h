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

// BlueprintGeneratedClass NewOpenLightRitualEffect.NewOpenLightRitualEffect_C
// 0x0560 (FullSize[0x08D0] - InheritedSize[0x0370])
class ANewOpenLightRitualEffect_C : public ARitualEffectBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     Timeline_0_IncScale_EA0D80B94F7A9153BA02D3A8DA91CD48;      // 0x0380(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_FadeOutBlendWeight_EA0D80B94F7A9153BA02D3A8DA91CD48; // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_EA0D80B94F7A9153BA02D3A8DA91CD48;    // 0x0390(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RSDK[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                        SurvivorPostprocess;                                       // 0x03A0(0x0530) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass NewOpenLightRitualEffect.NewOpenLightRitualEffect_C");
		return ptr;
	}



	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SpawnEffect();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NewOpenLightRitualEffect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
