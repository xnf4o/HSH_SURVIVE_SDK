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

// BlueprintGeneratedClass OptionAudioSaveGame.OptionAudioSaveGame_C
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UOptionAudioSaveGame_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_OptionAudio                              CurrentValue;                                              // 0x0040(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_OptionAudio                              DefualtValue;                                              // 0x0078(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass OptionAudioSaveGame.OptionAudioSaveGame_C");
		return ptr;
	}



	void ResetToDefualt();
	void ExecuteUbergraph_OptionAudioSaveGame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
