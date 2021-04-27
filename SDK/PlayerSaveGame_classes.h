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

// BlueprintGeneratedClass PlayerSaveGame.PlayerSaveGame_C
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UPlayerSaveGame_C : public USaveGame
{
public:
	struct FPlayerInfoStruct_G                         S_PlayerInfo;                                              // 0x0030(0x0110) (Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PlayerSaveGame.PlayerSaveGame_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
