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

// Function ChatComponent.ChatComponent_C.FilterChat
struct UChatComponent_C_FilterChat_Params
{
	struct FS_ChatData                                 Chat;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ChatData                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function ChatComponent.ChatComponent_C.OnRep_Chat
struct UChatComponent_C_OnRep_Chat_Params
{
};

// Function ChatComponent.ChatComponent_C.CommitText
struct UChatComponent_C_CommitText_Params
{
	struct FS_ChatData                                 Chat;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChatComponent.ChatComponent_C.AddChat
struct UChatComponent_C_AddChat_Params
{
	struct FS_ChatData                                 Chat;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ChatComponent.ChatComponent_C.ExecuteUbergraph_ChatComponent
struct UChatComponent_C_ExecuteUbergraph_ChatComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatComponent.ChatComponent_C.OnChatUpdate__DelegateSignature
struct UChatComponent_C_OnChatUpdate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
