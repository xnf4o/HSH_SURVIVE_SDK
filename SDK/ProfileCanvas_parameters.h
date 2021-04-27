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

// Function ProfileCanvas.ProfileCanvas_C.RefreshRowColumn
struct UProfileCanvas_C_RefreshRowColumn_Params
{
};

// Function ProfileCanvas.ProfileCanvas_C.OnRecieveNotifyProfiles
struct UProfileCanvas_C_OnRecieveNotifyProfiles_Params
{
	TArray<struct FString>                             Profiles;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProfileCanvas.ProfileCanvas_C.SetWidgetStateBusy
struct UProfileCanvas_C_SetWidgetStateBusy_Params
{
	bool                                               IsBusy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProfileCanvas.ProfileCanvas_C.UpdateValue
struct UProfileCanvas_C_UpdateValue_Params
{
};

// Function ProfileCanvas.ProfileCanvas_C.SetPlayerInfoImage
struct UProfileCanvas_C_SetPlayerInfoImage_Params
{
	struct FPrimaryAssetId                             Profile;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileCanvas.ProfileCanvas_C.AssignWidgetManager
struct UProfileCanvas_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileCanvas.ProfileCanvas_C.OnProfileImageClick
struct UProfileCanvas_C_OnProfileImageClick_Params
{
	struct FS_ItemInventory                            InventoryData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ProfileCanvas.ProfileCanvas_C.Initialize
struct UProfileCanvas_C_Initialize_Params
{
};

// Function ProfileCanvas.ProfileCanvas_C.OnResponse_D08D8C9E424796A9FD5FD49B4A3DC460
struct UProfileCanvas_C_OnResponse_D08D8C9E424796A9FD5FD49B4A3DC460_Params
{
	struct FGSLogEventResponse                         LogEventResponse;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               hasErrors;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProfileCanvas.ProfileCanvas_C.SaveProfile
struct UProfileCanvas_C_SaveProfile_Params
{
	struct FS_ItemInventory                            InventoryData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ProfileCanvas.ProfileCanvas_C.ExecuteUbergraph_ProfileCanvas
struct UProfileCanvas_C_ExecuteUbergraph_ProfileCanvas_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
