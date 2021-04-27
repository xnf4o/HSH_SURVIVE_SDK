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

// Function HSURHUD.HSURHUD_C.ShowHunterWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURHUD_C::ShowHunterWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.ShowHunterWidget");

	AHSURHUD_C_ShowHunterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.ShowSurvivorWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURHUD_C::ShowSurvivorWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.ShowSurvivorWidget");

	AHSURHUD_C_ShowSurvivorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.ShowGeneralWidget
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURHUD_C::ShowGeneralWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.ShowGeneralWidget");

	AHSURHUD_C_ShowGeneralWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.HideWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURHUD_C::HideWidget(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.HideWidget");

	AHSURHUD_C_HideWidget_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.CreateUISpectator
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURHUD_C::CreateUISpectator(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.CreateUISpectator");

	AHSURHUD_C_CreateUISpectator_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.RemoveUISpectator
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURHUD_C::RemoveUISpectator(TEnumAsByte<E_Role_E_Role> Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.RemoveUISpectator");

	AHSURHUD_C_RemoveUISpectator_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.UpdateUISpectator
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UISpectator          Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURHUD_C::UpdateUISpectator(TEnumAsByte<E_Role_E_Role> Role, const struct FS_UISpectator& Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.UpdateUISpectator");

	AHSURHUD_C_UpdateUISpectator_Params params;
	params.Role = Role;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.InitializeWidgetIngameWidget
// (BlueprintCallable, BlueprintEvent)
void AHSURHUD_C::InitializeWidgetIngameWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.InitializeWidgetIngameWidget");

	AHSURHUD_C_InitializeWidgetIngameWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.HideGeneralWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSURHUD_C::HideGeneralWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.HideGeneralWidget");

	AHSURHUD_C_HideGeneralWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURHUD.HSURHUD_C.ExecuteUbergraph_HSURHUD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURHUD_C::ExecuteUbergraph_HSURHUD(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURHUD.HSURHUD_C.ExecuteUbergraph_HSURHUD");

	AHSURHUD_C_ExecuteUbergraph_HSURHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
