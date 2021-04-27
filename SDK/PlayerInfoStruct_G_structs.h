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

// UserDefinedStruct PlayerInfoStruct_G.PlayerInfoStruct_G
// 0x0109
struct FPlayerInfoStruct_G
{
	struct FString                                     PlayerId_93_DEC0ABB84A19ED2F6EB5DEB84A850C2B;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PlayerSessionID_98_15DDAA8E49E50C86EC11EB9BB4F6568A;       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Name_52_1195DD0743F4EC99DA3972B6A922A6CE;                  // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FString                                     CSteamID_132_17A313AD4AB132A37AB763AA4FF65A70;             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             Image_129_26C9FAE246989CA093F5CF84334AF47D;                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                Level_54_FEF032C444EC1AC1CB276FBD3B863E00;                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Exp_61_382163244B0ECEBF0B5CD3B3C7BFF5E2;                   // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMRSurvivor_142_823CA6444A1F7E443D6607A75E39AF80;          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMRHunter_144_F804603140A1FE5FEFD7419BA7222CBE;            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Coin_72_BE58177F442424AA84500D8E8AE04F88;                  // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Gem_102_4FEFD783479C0F828716C7A1B5A3B738;                  // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Token_139_2DF15B484D23B9F6F83CED8525AF113F;                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootBoxAmount_73_72EE5BF245BBC1E65FB4BCAECA3A852E;         // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PlayerRecordHunter                       PlayerRecordHunter_119_64CBCB644AD5FEC3A8123493DADCDE15;   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PlayerRecordSurvivor                     PlayerRecordSurvivor_120_22E008384BA9CC0BAC902F92ED0EEB17; // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PlayerTeam_E_PlayerTeam>             Team_24_4AD1C1EF4E9A7468AB82AEA1E18FD54C;                  // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role_55_BE08913A4D5B66756128058DFB9044ED;                  // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RUTK[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             CharacterList_71_90F839E343B3000C82E223B27AF076C3;         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DefaultCharacter_58_A0FB71274BD1A1149454D5BA5844F62D;      // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UHSHCharacterItem*                           CharacterItem_92_4D600D7B4AA8AEF823F8EABF937B8163;         // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHSHCharacterItem*                           CharacterHunterItem_79_E7DF4A37453201890FFBE1A8CAAA4870;   // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StickerPreset_128_50948BB14FFC563D32896EB7F8AF9FCB;        // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_47V4[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_SurvivorSlot>                     SurvivorSlots_90_07CE3003426039B5002958BE668DA7BE;         // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_HunterSlot>                       HunterSlots_91_2927702B499D1DEBE923E0935011AA35;           // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_StickerAssets>                    StickerAssets_121_E781DF3A46715283D73953966AA1F1BC;        // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsAIInfo_136_79903CC0418119BAD83BD88549A1F0E5;             // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
