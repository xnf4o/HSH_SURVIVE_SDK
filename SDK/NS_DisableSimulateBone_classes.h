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

// BlueprintGeneratedClass NS_DisableSimulateBone.NS_DisableSimulateBone_C
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UNS_DisableSimulateBone_C : public UAnimNotifyState
{
public:
	bool                                               SimulateAfterEndNotify;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseBelowBoneSimulate;                                      // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L0GW[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               BoneName;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass NS_DisableSimulateBone.NS_DisableSimulateBone_C");
		return ptr;
	}



	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
