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

// Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.UpdateButtonRole
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Button_LobbyPlayerRole_C::UpdateButtonRole(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.UpdateButtonRole");

	UWidget_Button_LobbyPlayerRole_C_UpdateButtonRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Button_LobbyPlayerRole_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.PreConstruct");

	UWidget_Button_LobbyPlayerRole_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.ExecuteUbergraph_Widget_Button_LobbyPlayerRole
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Button_LobbyPlayerRole_C::ExecuteUbergraph_Widget_Button_LobbyPlayerRole(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.ExecuteUbergraph_Widget_Button_LobbyPlayerRole");

	UWidget_Button_LobbyPlayerRole_C_ExecuteUbergraph_Widget_Button_LobbyPlayerRole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Button_LobbyPlayerRole_C::OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_Button_LobbyPlayerRole.Widget_Button_LobbyPlayerRole_C.OnClicked__DelegateSignature");

	UWidget_Button_LobbyPlayerRole_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
