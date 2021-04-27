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

// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.InitializeChatAlert
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatData             S_ChatData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UIngame_ChatBox_C*       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatTextbox_C::InitializeChatAlert(const struct FS_ChatData& S_ChatData, class UIngame_ChatBox_C* Widget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.InitializeChatAlert");

	UIngame_ChatTextbox_C_InitializeChatAlert_Params params;
	params.S_ChatData = S_ChatData;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.ForceToggleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_ChatTextbox_C::ForceToggleVisibility(bool bIsVisible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.ForceToggleVisibility");

	UIngame_ChatTextbox_C_ForceToggleVisibility_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.InitializeChatText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatData             S_ChatData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UIngame_ChatBox_C*       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatTextbox_C::InitializeChatText(const struct FS_ChatData& S_ChatData, class UIngame_ChatBox_C* Widget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.InitializeChatText");

	UIngame_ChatTextbox_C_InitializeChatText_Params params;
	params.S_ChatData = S_ChatData;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_ChatTextbox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.PreConstruct");

	UIngame_ChatTextbox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_ChatTextbox_C::OnInitialized()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.OnInitialized");

	UIngame_ChatTextbox_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.ExecuteUbergraph_Ingame_ChatTextbox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ChatTextbox_C::ExecuteUbergraph_Ingame_ChatTextbox(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ChatTextbox.Ingame_ChatTextbox_C.ExecuteUbergraph_Ingame_ChatTextbox");

	UIngame_ChatTextbox_C_ExecuteUbergraph_Ingame_ChatTextbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
