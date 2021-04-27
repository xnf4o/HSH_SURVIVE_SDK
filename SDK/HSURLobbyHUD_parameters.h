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

// Function HSURLobbyHUD.HSURLobbyHUD_C.Refresh
struct AHSURLobbyHUD_C_Refresh_Params
{
	TArray<struct FS_PlayerLobby>                      PlayerInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.AddPlayerInfoHUD
struct AHSURLobbyHUD_C_AddPlayerInfoHUD_Params
{
	struct FVector                                     ActorLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.RemovePlayerInfoHUD
struct AHSURLobbyHUD_C_RemovePlayerInfoHUD_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.ClearAllPlayerInfoHUD
struct AHSURLobbyHUD_C_ClearAllPlayerInfoHUD_Params
{
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.RefreshWidget
struct AHSURLobbyHUD_C_RefreshWidget_Params
{
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.ReceiveTick
struct AHSURLobbyHUD_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.HideWidget
struct AHSURLobbyHUD_C_HideWidget_Params
{
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.ShowWidget
struct AHSURLobbyHUD_C_ShowWidget_Params
{
};

// Function HSURLobbyHUD.HSURLobbyHUD_C.ExecuteUbergraph_HSURLobbyHUD
struct AHSURLobbyHUD_C_ExecuteUbergraph_HSURLobbyHUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
