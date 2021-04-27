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

// UserDefinedStruct STR_EventActivityData.STR_EventActivityData
// 0x005C
struct FSTR_EventActivityData
{
	struct FName                                       RowName_42_EEF74E3E41A9FDE643C042BED6196BF9;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       EventName_32_1CBBE4BE4EF087C4E7A8FFBACF1257C1;             // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SummaryName_38_011A17744DDE6CD0FF84679C1ED3904B;           // 0x0020(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Role_E_Role>                         Role_28_A0FB629F4C18C6F837CB789C864C79FC;                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D95E[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  ActivityIcon_46_5E0855614DDA73D3D32C3FBD477ECA93;          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Coins_16_4710451649F06DC5BEEE51BECCBA123A;                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score_13_9AF7ED454301DBEDBB5062B6DBCA59E3;                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasCap_54_DC430B774CDECC87CDA8F6B0A3D644E1;                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3N9S[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CoinCap_51_62C1477C45DBC1F9D0532BAB92238450;               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreCap_52_715F986C43410024AEE698B98BE7EE0C;              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
