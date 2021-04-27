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

// Function Ingame_PingPanel.Ingame_PingPanel_C.GetUserDisplayResolution
struct UIngame_PingPanel_C_GetUserDisplayResolution_Params
{
	struct FVector2D                                   Display;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.IsCanCancel?
struct UIngame_PingPanel_C_IsCanCancel__Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Cancel_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.MakeTextDistance
struct UIngame_PingPanel_C_MakeTextDistance_Params
{
	bool                                               IsCantCancel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_PingCase_E_PingCase>                 Case;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       DataText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Return;                                                    // (Parm, OutParm)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdateWidget
struct UIngame_PingPanel_C_UpdateWidget_Params
{
	class UUserWidget*                                 PingWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 PingData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               IsInScreen;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.GetScreenEdgeCrood
struct UIngame_PingPanel_C_GetScreenEdgeCrood_Params
{
	struct FVector                                     PingLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Margin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CoordX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CoordY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Angle;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.GetTargetLocation
struct UIngame_PingPanel_C_GetTargetLocation_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DefualtLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdateActivePing
struct UIngame_PingPanel_C_UpdateActivePing_Params
{
	TArray<class UUserWidget*>                         ActivePing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_PingPair>                         ActivePingData;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.Construct
struct UIngame_PingPanel_C_Construct_Params
{
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.ShowPing
struct UIngame_PingPanel_C_ShowPing_Params
{
	TArray<struct FS_PingPair>                         ActivePing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdatePing
struct UIngame_PingPanel_C_UpdatePing_Params
{
	TArray<struct FS_PingPair>                         ActivePing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdatePingUI
struct UIngame_PingPanel_C_UpdatePingUI_Params
{
	struct FVector                                     WorldLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.HidePingUI
struct UIngame_PingPanel_C_HidePingUI_Params
{
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.ShowPingUI
struct UIngame_PingPanel_C_ShowPingUI_Params
{
	struct FText                                       HeadlineText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DataText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     WorldLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_PingPanel.Ingame_PingPanel_C.ExecuteUbergraph_Ingame_PingPanel
struct UIngame_PingPanel_C_ExecuteUbergraph_Ingame_PingPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
