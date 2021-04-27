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

// UserDefinedStruct S_GameStatistic.S_GameStatistic
// 0x00D4
struct FS_GameStatistic
{
	int                                                PlayerID_66_E0CF65A84854CE61137E73AA3EC52BA1;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RJMI[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GamesparkID_69_6E07DBB84E2FD52B903035B37B43B7E7;           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         Role_89_376EC68D4FEF5E49B775D8ACB2CF7FD2;                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IP7U[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_PrimaryAssetsIDCount>             ItemsUsed_16_B3144A6A4F992F1C81909AA1C355A7A4;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_PrimaryAssetsIDCount>             ItemsSuccess_17_38ECAAF8479A3D6B73AE4EAA525F8C62;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_PrimaryAssetsIDCount>             ItemsEmpty_30_7F76044A4751BF1EAD3F8BAA1B837258;            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FS_PrimaryAssetsIDCount                     CarryItem_42_ED5FCFD04E5D45A1521653BD38F20C69;             // 0x0050(0x0014) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int                                                PingEnemyCount_20_024C649E4A6441EFD62BDB976704F121;        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OpenChestCount_34_455259694953152D07D8C58DFCA8ACED;        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReviveCount_37_AB45317C426105C95BF59986F8998BE4;           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Resurrect_53_395DE0BE4161AD1EC8113794157D6F38;             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloseEnemyTime_23_F09A451B43A91869301BEA953C3FCF6F;        // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FullHPTime_25_531C698545489EAF89ED1195B6CEDA33;            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageDone_45_56D7C60C45BEEB4C80CEED9F5E2AEB0B;            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageDoneCount_56_72CB5E3840ED7DC72CF8DAB3CE7A0016;       // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageReceive_47_9DCF64714681797C645EC4A7355652D5;         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageReceiveCount_57_DC72316042D5725041DCF7A07D451699;    // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerfectSuccess_50_9B1E826D427656766FF5BA9A6827E917;        // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DestroyedEnvir_62_CA0E133A4EBE54F7E4DB2D8A0A2ED9C6;        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DestroyedEnvirWithSur_63_250B1C9C405B70E12EA2279AD43173CD; // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DeathCount_72_B9F5C4434956E171A9FFC3A6862F3D99;            // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillCount_105_7BDB78F04281B12CA90382A3AE273D35;            // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageTrapDone_79_33B5856846AE701E8F45BFA8DEFA154D;        // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageTrapDoneCount_81_5DBF4B3644429467E0E50BBABB9E572C;   // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageTrapReceive_86_2D49A55D4D6EE969001DA382725C36E0;     // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageTrapReceiveCount_85_BB813BF5498D4714D16756AF468F49D3; // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHunterTerminated_94_F146C93842D29BEBCD91969E680C9739;    // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MEB5[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RemainingHP_99_9839729146FDA37EFFF45EB974B8E5CE;           // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RemainingHPTotal_125_BD683DA54B9F49FFDD9EE0ACBA12A33C;     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLeaveGame_102_02ECB9D94D586777E8DCA5A155700797;          // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsWin_108_30052F734E0A1B5EF3E1888C8B384596;                // 0x00BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C572[0x2];                                     // 0x00BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FirstDieTime_112_FF1D855D412B7A09C1FEC29AA69EEADC;         // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondDieTime_119_B8C4910741D7076714FD1B938C935994;        // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RitualComplete_116_9C89686347255BA627159F8868627987;       // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RitualContribution_128_7E9E9AA6432C56C9C5C1F187B9D3FEB8;   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UseActivePerk_122_60240B6F414A9AA3223E0695ADE43285;        // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
