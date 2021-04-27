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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_PlayerLobby.S_PlayerLobby
// 0x0118
struct FS_PlayerLobby
{
	int                                                PlayerID_4_9D80046847CD593283318A999847C62F;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8YVT[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerInfoStruct_G                         PlayerInfo_5_51BBCD964988D1C25E47A4AEC0E9132A;             // 0x0008(0x0110) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
