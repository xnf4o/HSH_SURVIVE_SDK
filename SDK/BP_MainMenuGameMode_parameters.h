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

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay
struct ABP_MainMenuGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveEndPlay
struct ABP_MainMenuGameMode_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode
struct ABP_MainMenuGameMode_C_ExecuteUbergraph_BP_MainMenuGameMode_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
