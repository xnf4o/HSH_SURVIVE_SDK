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

// UserDefinedStruct S_ItemInventory.S_ItemInventory
// 0x00D5
struct FS_ItemInventory
{
	struct FText                                       ItemName_6_97998A8D41B86075A7A5B0843ADCC52B;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FPrimaryAssetId                             AssetID_9_F502F16A49AB4F7759280AA75757B98D;                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_StoreProduct                             Product_17_E367F3AE4A076E4B6E5487AAE8D3CC1A;               // 0x0028(0x00A0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                Current_12_68F918434327CBAC7EF2419678521607;               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOwned_14_99F3DF52486656F4D490CEB9D158E38A;               // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEquipped_19_9F59693644C8831E420A08801D95F534;            // 0x00CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_160B[0x2];                                     // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PerkSlot_22_DECFADD3406E74E3ECD001808528E72D;              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPreviewing_24_93D3770A4D48E5164EADC2BAEE086223;          // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
