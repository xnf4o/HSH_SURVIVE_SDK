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

// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.InitializeChatAlert
struct UIngame_ChatTextbox_C_InitializeChatAlert_Params
{
	struct FS_ChatData                                 S_ChatData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UIngame_ChatBox_C*                           Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.ForceToggleVisibility
struct UIngame_ChatTextbox_C_ForceToggleVisibility_Params
{
	bool                                               bIsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.InitializeChatText
struct UIngame_ChatTextbox_C_InitializeChatText_Params
{
	struct FS_ChatData                                 S_ChatData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UIngame_ChatBox_C*                           Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.PreConstruct
struct UIngame_ChatTextbox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.OnInitialized
struct UIngame_ChatTextbox_C_OnInitialized_Params
{
};

// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.ExecuteUbergraph_Ingame_ChatTextbox
struct UIngame_ChatTextbox_C_ExecuteUbergraph_Ingame_ChatTextbox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
