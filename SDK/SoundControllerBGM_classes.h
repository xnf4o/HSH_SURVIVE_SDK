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

// BlueprintGeneratedClass SoundControllerBGM.SoundControllerBGM_C
// 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
class ASoundControllerBGM_C : public ASoundControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AAmbientSound*                               BGMSound;                                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SoundControllerBGM.SoundControllerBGM_C");
		return ptr;
	}



	void MulticastPlaySound();
	void ExecuteUbergraph_SoundControllerBGM(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
