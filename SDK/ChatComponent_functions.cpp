// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ChatComponent.ChatComponent_C.FilterChat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatData             Chat                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_ChatData             ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
struct FS_ChatData UChatComponent_C::FilterChat(const struct FS_ChatData& Chat)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChatComponent.ChatComponent_C.FilterChat");

	UChatComponent_C_FilterChat_Params params;
	params.Chat = Chat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatComponent.ChatComponent_C.OnRep_Chat
// (BlueprintCallable, BlueprintEvent)
void UChatComponent_C::OnRep_Chat()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChatComponent.ChatComponent_C.OnRep_Chat");

	UChatComponent_C_OnRep_Chat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatComponent.ChatComponent_C.CommitText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatData             Chat                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChatComponent_C::CommitText(const struct FS_ChatData& Chat)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChatComponent.ChatComponent_C.CommitText");

	UChatComponent_C_CommitText_Params params;
	params.Chat = Chat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatComponent.ChatComponent_C.AddChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatData             Chat                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UChatComponent_C::AddChat(const struct FS_ChatData& Chat)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChatComponent.ChatComponent_C.AddChat");

	UChatComponent_C_AddChat_Params params;
	params.Chat = Chat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatComponent.ChatComponent_C.ExecuteUbergraph_ChatComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatComponent_C::ExecuteUbergraph_ChatComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChatComponent.ChatComponent_C.ExecuteUbergraph_ChatComponent");

	UChatComponent_C_ExecuteUbergraph_ChatComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatComponent.ChatComponent_C.OnChatUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UChatComponent_C::OnChatUpdate__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ChatComponent.ChatComponent_C.OnChatUpdate__DelegateSignature");

	UChatComponent_C_OnChatUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
