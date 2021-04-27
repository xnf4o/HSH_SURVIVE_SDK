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

// BlueprintGeneratedClass BGMManagerComponent.BGMManagerComponent_C
// 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
class UBGMManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bInitailize;                                               // 0x0110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TPWC[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASoundControllerBase_C*                      AmbientController;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASoundControllerBase_C*                      MusicController;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BGMManagerComponent.BGMManagerComponent_C");
		return ptr;
	}



	void TryGetSoundController(class UClass* Class, class ASoundControllerBase_C** SoundController);
	void Initialize();
	void ExecuteUbergraph_BGMManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
