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

// UserDefinedStruct S_IsProgress.S_IsProgress
// 0x0040
struct FS_IsProgress
{
	bool                                               bIsProgress_2_2FB81DB847685C24E9F6E79F10E1B02B;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsLockCamera_3_62E244AA46F186586F96DAABDA1C1665;          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HHRF[0xE];                                     // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InteractLocation_7_86F74003402C9FDD47B252A46282D5B8;       // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
