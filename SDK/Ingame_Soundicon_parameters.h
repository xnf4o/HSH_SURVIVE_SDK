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

// Function Ingame_Soundicon.Ingame_Soundicon_C.Construct
struct UIngame_Soundicon_C_Construct_Params
{
};

// Function Ingame_Soundicon.Ingame_Soundicon_C.UpdateWidget
struct UIngame_Soundicon_C_UpdateWidget_Params
{
	struct FText                                       HeadlineText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DataText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 InColorAndOpacity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_PingPair                                 S_PingPair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               IsInScreen;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Soundicon.Ingame_Soundicon_C.ExecuteUbergraph_Ingame_Soundicon
struct UIngame_Soundicon_C_ExecuteUbergraph_Ingame_Soundicon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
