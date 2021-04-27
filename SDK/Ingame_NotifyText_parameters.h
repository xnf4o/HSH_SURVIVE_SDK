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

// Function Ingame_NotifyText.Ingame_NotifyText_C.BeginNotify
struct UIngame_NotifyText_C_BeginNotify_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_NotifyText.Ingame_NotifyText_C.ExecuteUbergraph_Ingame_NotifyText
struct UIngame_NotifyText_C_ExecuteUbergraph_Ingame_NotifyText_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
