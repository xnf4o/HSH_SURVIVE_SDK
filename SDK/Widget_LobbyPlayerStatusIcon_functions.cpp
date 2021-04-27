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

// Function Widget_LobbyPlayerStatusIcon.Widget_LobbyPlayerStatusIcon_C.Get_PlayerStatusIcon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidget_LobbyPlayerStatusIcon_C::Get_PlayerStatusIcon_Brush_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyPlayerStatusIcon.Widget_LobbyPlayerStatusIcon_C.Get_PlayerStatusIcon_Brush_1");

	UWidget_LobbyPlayerStatusIcon_C_Get_PlayerStatusIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_LobbyPlayerStatusIcon.Widget_LobbyPlayerStatusIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_LobbyPlayerStatusIcon_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyPlayerStatusIcon.Widget_LobbyPlayerStatusIcon_C.Construct");

	UWidget_LobbyPlayerStatusIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LobbyPlayerStatusIcon.Widget_LobbyPlayerStatusIcon_C.ExecuteUbergraph_Widget_LobbyPlayerStatusIcon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LobbyPlayerStatusIcon_C::ExecuteUbergraph_Widget_LobbyPlayerStatusIcon(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LobbyPlayerStatusIcon.Widget_LobbyPlayerStatusIcon_C.ExecuteUbergraph_Widget_LobbyPlayerStatusIcon");

	UWidget_LobbyPlayerStatusIcon_C_ExecuteUbergraph_Widget_LobbyPlayerStatusIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
