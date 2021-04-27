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

// BlueprintGeneratedClass NS_AbilityComponent.NS_AbilityComponent_C
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UNS_AbilityComponent_C : public UAnimNotifyState
{
public:
	struct FGameplayTagContainer                       Tag;                                                       // 0x0038(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass NS_AbilityComponent.NS_AbilityComponent_C");
		return ptr;
	}



	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
