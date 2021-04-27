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

// Function Ingame_Fade.Ingame_Fade_C.FadeInAnimation
struct UIngame_Fade_C_FadeInAnimation_Params
{
	float                                              Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Fade.Ingame_Fade_C.FadeOutAnimation
struct UIngame_Fade_C_FadeOutAnimation_Params
{
	float                                              Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_Fade.Ingame_Fade_C.SetScreen
struct UIngame_Fade_C_SetScreen_Params
{
	bool                                               bShow;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_Fade.Ingame_Fade_C.ExecuteUbergraph_Ingame_Fade
struct UIngame_Fade_C_ExecuteUbergraph_Ingame_Fade_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
