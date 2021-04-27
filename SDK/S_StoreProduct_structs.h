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

// UserDefinedStruct S_StoreProduct.S_StoreProduct
// 0x00A0
struct FS_StoreProduct
{
	struct FText                                       ProductName_2_773C1026455B7626A498BF9ECC09137A;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Shotcode_23_CA9DE30D4361CABB99B4DAB8EEA29FD9;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_StorePrice>                       BasePrice_53_4EB5DDDA467BBC30128644BF7142B50A;             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_StorePrice>                       Price_11_4BD7BAB44D42E84F67F74A813242552A;                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Current_19_0B457FB04241207550688E98E0B569E7;               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxQuantity_49_63E4F50D491EDFFEA95F83951D1174AF;           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Tags_32_CB6F66B8433C8A6A5E20C0952617972B;                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FPrimaryAssetType                           ItemType_36_91905FC648DE8B96B416D6ADB6177EAC;              // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                LevelCap_41_3689715F400EC97676083DAAF4C0286C;              // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5QJQ[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SteamProductID_44_D856667242250AECE80DF5908316C7C2;        // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AndroidProductID_47_8DE4B0DB417C9B6929F5829D7BE2111F;      // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     IOSProductID_48_B665C85E41D25F4839A3CFB030161BA8;          // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
