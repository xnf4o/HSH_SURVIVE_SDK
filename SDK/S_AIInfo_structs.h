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

// UserDefinedStruct S_AIInfo.S_AiInfo
// 0x0118
struct FS_AiInfo
{
	TEnumAsByte<E_CharacterHunter_E_CharacterHunter>   CharacterHunter_10_6E99EDBC4EEA0DF6EC0E2489A6DB5ED5;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterSurvivor_E_CharacterSurvivor> CharacterSurvivor_12_7D1AD2AF4F42B26E852C099BF173DE53;     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KD5E[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerInfoStruct_G                         PlayerInfo_8_A5F985B04EC719B457EFE3893C1187C4;             // 0x0008(0x0110) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
