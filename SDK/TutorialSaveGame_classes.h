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

// BlueprintGeneratedClass TutorialSaveGame.TutorialSaveGame_C
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTutorialSaveGame_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FS_TutorialSaveGame                         CurrentValue;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_TutorialSaveGame                         DefualtValue;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass TutorialSaveGame.TutorialSaveGame_C");
		return ptr;
	}



	void ResetToDefualt();
	void ExecuteUbergraph_TutorialSaveGame(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
