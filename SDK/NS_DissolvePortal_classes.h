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

// BlueprintGeneratedClass NS_DissolvePortal.NS_DissolvePortal_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UNS_DissolvePortal_C : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass NS_DissolvePortal.NS_DissolvePortal_C");
		return ptr;
	}



	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
