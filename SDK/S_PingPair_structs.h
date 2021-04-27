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

// UserDefinedStruct S_PingPair.S_PingPair
// 0x0080
struct FS_PingPair
{
	class AHSHCharacterBase*                           Character_4_B396189544587E63E13202A62CA97E2C;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target_30_C5F3F15A47ADB6CC77D0279D3B23EAE8;                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation_33_7BC2202A4B032ECE060F62825CF79EFA;      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCantCancel_36_C4DFACCA44B2F9CCD1D5DDAF07317441;          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GVT5[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Location_5_446FC3FE42502ECB3BF4B78AE2F91322;               // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time_14_49DDDD164CF006EC2B449386E0F93168;                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PingCase_E_PingCase>                 Case_17_2DE365684600D9E8AF786D841F3373B4;                  // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E29G[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       HeadlineText_23_8F4EDAC9497162B7C7530BA9CC722193;          // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DataText_24_BDC9DFB848C380AF6BFC43B7E225E12E;              // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color_27_B57F2B6848B455B106B60EA5019E61A1;                 // 0x0058(0x0028) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
