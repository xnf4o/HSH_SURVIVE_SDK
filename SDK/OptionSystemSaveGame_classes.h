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

// BlueprintGeneratedClass OptionSystemSaveGame.OptionSystemSaveGame_C
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UOptionSystemSaveGame_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_OptionSystem                             CurrentValue;                                              // 0x0040(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_OptionSystem                             DefualtValue;                                              // 0x0088(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass OptionSystemSaveGame.OptionSystemSaveGame_C");
		return ptr;
	}



	void ResetToDefualt();
	void ExecuteUbergraph_OptionSystemSaveGame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
