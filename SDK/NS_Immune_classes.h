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

// BlueprintGeneratedClass NS_Immune.NS_Immune_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UNS_Immune_C : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass NS_Immune.NS_Immune_C");
		return ptr;
	}



	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
