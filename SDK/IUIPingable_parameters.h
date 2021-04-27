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

// Function IUIPingable.IUIPingable_C.UpdatePing
struct UIUIPingable_C_UpdatePing_Params
{
	TArray<struct FS_PingPair>                         ActivePing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function IUIPingable.IUIPingable_C.ShowPing
struct UIUIPingable_C_ShowPing_Params
{
	TArray<struct FS_PingPair>                         ActivePing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function IUIPingable.IUIPingable_C.UpdatePingUI
struct UIUIPingable_C_UpdatePingUI_Params
{
	struct FVector                                     WorldLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IUIPingable.IUIPingable_C.HidePingUI
struct UIUIPingable_C_HidePingUI_Params
{
};

// Function IUIPingable.IUIPingable_C.ShowPingUI
struct UIUIPingable_C_ShowPingUI_Params
{
	struct FText                                       HeadlineText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DataText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     WorldLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
