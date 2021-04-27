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

// UserDefinedStruct S_ServerRegion.S_ServerRegion
// 0x0030
struct FS_ServerRegion
{
	int                                                TableIndex_12_B8CA6AFC4FEE7D9C9C68A0A4C95C77AC;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DEEC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RegionName_3_9877ECD54315FAA49EB9A4A696512BC2;             // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FString                                     RegionCode_6_60142DE64294FB2CC01A8AB28300E2E4;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
