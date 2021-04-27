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

// BlueprintGeneratedClass OptionControlSaveGame.OptionControlSaveGame_C
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UOptionControlSaveGame_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_OptionControl                            CurrentValue;                                              // 0x0040(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_OptionControl                            DefualtValue;                                              // 0x0070(0x0030) (Edit, BlueprintVisible, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass OptionControlSaveGame.OptionControlSaveGame_C");
		return ptr;
	}



	void ResetToDefualt();
	void ExecuteUbergraph_OptionControlSaveGame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
