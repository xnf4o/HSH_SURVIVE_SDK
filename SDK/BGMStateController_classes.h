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

// BlueprintGeneratedClass BGMStateController.BGMStateController_C
// 0x0038 (FullSize[0x0370] - InheritedSize[0x0338])
class ABGMStateController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                          BGMState;                                                  // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ASoundControllerBGM_C*                       SoundControllerMusic;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutDuration;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInDuration;                                            // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BGMStateController.BGMStateController_C");
		return ptr;
	}



	void OnRitualStateChanged(int State);
	void ChangeBGMState(class USoundBase* NewSound);
	void MulticastBGMSD();
	void ServerBGMSD();
	void StopBGM();
	void ExecuteUbergraph_BGMStateController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
