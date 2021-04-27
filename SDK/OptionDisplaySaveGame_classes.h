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

// BlueprintGeneratedClass OptionDisplaySaveGame.OptionDisplaySaveGame_C
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UOptionDisplaySaveGame_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_OptionDisplay                            CurrentValue;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_OptionDisplay                            DefualtValue;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass OptionDisplaySaveGame.OptionDisplaySaveGame_C");
		return ptr;
	}



	void ChangeResolution();
	void ResetToDefualt();
	void ExecuteUbergraph_OptionDisplaySaveGame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
