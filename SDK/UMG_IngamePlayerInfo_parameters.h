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
// Parameters
//---------------------------------------------------------------------------

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.IsSomePlayerHaveWeaknessDetector
struct UUMG_IngamePlayerInfo_C_IsSomePlayerHaveWeaknessDetector_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.IsHaveWeaknessDetector
struct UUMG_IngamePlayerInfo_C_IsHaveWeaknessDetector_Params
{
	class APlayerState*                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_TotalCoin_Text_1
struct UUMG_IngamePlayerInfo_C_Get_TotalCoin_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_TotalScore_Text_1
struct UUMG_IngamePlayerInfo_C_Get_TotalScore_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Get_Ping_Text_1
struct UUMG_IngamePlayerInfo_C_Get_Ping_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.UpdatePing
struct UUMG_IngamePlayerInfo_C_UpdatePing_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Active
struct UUMG_IngamePlayerInfo_C_Active_Params
{
	class AHSURPlayerState_C*                          PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         OwnerInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.Tick
struct UUMG_IngamePlayerInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UMG_IngamePlayerInfo.UMG_IngamePlayerInfo_C.ExecuteUbergraph_UMG_IngamePlayerInfo
struct UUMG_IngamePlayerInfo_C_ExecuteUbergraph_UMG_IngamePlayerInfo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
