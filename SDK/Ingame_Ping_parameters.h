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

// Function Ingame_Ping.Ingame_Ping_C.GetOffScreenData
struct UIngame_Ping_C_GetOffScreenData_Params
{
	struct FText                                       Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Return_Data;                                               // (Parm, OutParm)
};

// Function Ingame_Ping.Ingame_Ping_C.GetVisibility_Ping
struct UIngame_Ping_C_GetVisibility_Ping_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Ping.Ingame_Ping_C.UpdatedScale&VisibiltyOnDistance
struct UIngame_Ping_C_UpdatedScale_VisibiltyOnDistance_Params
{
	struct FText                                       Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsInScreen;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 SPingPair;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Ingame_Ping.Ingame_Ping_C.UpdateImageByCase
struct UIngame_Ping_C_UpdateImageByCase_Params
{
	class UImage*                                      Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 SPingPair;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Ingame_Ping.Ingame_Ping_C.UpdatedWidgetColorByCase
struct UIngame_Ping_C_UpdatedWidgetColorByCase_Params
{
	class UWidget*                                     Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 SPingPair;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function Ingame_Ping.Ingame_Ping_C.UpdateTextAndColor
struct UIngame_Ping_C_UpdateTextAndColor_Params
{
	struct FText                                       HeadlineText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DataText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ingame_Ping.Ingame_Ping_C.PlayBeginAnimation
struct UIngame_Ping_C_PlayBeginAnimation_Params
{
};

// Function Ingame_Ping.Ingame_Ping_C.LoopAnim
struct UIngame_Ping_C_LoopAnim_Params
{
};

// Function Ingame_Ping.Ingame_Ping_C.UpdateWidget
struct UIngame_Ping_C_UpdateWidget_Params
{
	struct FText                                       HeadlineText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DataText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_PingPair                                 S_PingPair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               IsInScreen;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Ping.Ingame_Ping_C.ExecuteUbergraph_Ingame_Ping
struct UIngame_Ping_C_ExecuteUbergraph_Ingame_Ping_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
