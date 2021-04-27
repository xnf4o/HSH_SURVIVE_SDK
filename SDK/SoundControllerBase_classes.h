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

// BlueprintGeneratedClass SoundControllerBase.SoundControllerBase_C
// 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
class ASoundControllerBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SoundControllerBase.SoundControllerBase_C");
		return ptr;
	}



	void UserConstructionScript();
	void StopSound();
	void MulticastPlaySound();
	void PauseSound();
	void PlaySound();
	void MulticastPauseSound();
	void MulticastStopSound();
	void ClientStopSound();
	void ExecuteUbergraph_SoundControllerBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
