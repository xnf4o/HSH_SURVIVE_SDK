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

// UserDefinedStruct S_OptionControl.S_OptionControl
// 0x0030
struct FS_OptionControl
{
	float                                              Sensitivity_91_215800B54E80A607E3CB548977E00DFF;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleSprint_94_BA3DEA8D4C0E52F26862CC859EE6BFF7;          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleCounch_97_EEFE5C45475C3FC7D0D22B8A61C0374C;          // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IPVF[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_OptionControlKeyMap>              SurvivorKeyNames_87_6A3757A54CF12B7E06E2C7B08171904D;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_OptionControlKeyMap>              HunterKeyNames_88_72599D99469E52E94DB838BAC4877262;        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               addforRecomplierOnly_101_D339EC3443B8F38EBEBD10A5FA9D8190; // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UF5V[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillcheckType_104_F65AAA6E4D0CF27CDC1F79A7FF3DBD1A;       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
