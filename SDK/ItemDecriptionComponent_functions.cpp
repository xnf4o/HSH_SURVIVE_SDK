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

// Function ItemDecriptionComponent.ItemDecriptionComponent_C.SetUpDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UItemDecriptionComponent_C::SetUpDescription(const struct FText& Header, const struct FText& Description)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemDecriptionComponent.ItemDecriptionComponent_C.SetUpDescription");

	UItemDecriptionComponent_C_SetUpDescription_Params params;
	params.Header = Header;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemDecriptionComponent.ItemDecriptionComponent_C.GetDescription
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (Parm, OutParm)
// struct FText                   Description                    (Parm, OutParm)
void UItemDecriptionComponent_C::GetDescription(struct FText* Header, struct FText* Description)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemDecriptionComponent.ItemDecriptionComponent_C.GetDescription");

	UItemDecriptionComponent_C_GetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Header != nullptr)
		*Header = params.Header;
	if (Description != nullptr)
		*Description = params.Description;

}


// Function ItemDecriptionComponent.ItemDecriptionComponent_C.TryToCreateWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItemDecriptionComponent_C::TryToCreateWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemDecriptionComponent.ItemDecriptionComponent_C.TryToCreateWidget");

	UItemDecriptionComponent_C_TryToCreateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemDecriptionComponent.ItemDecriptionComponent_C.ActiveWidget
// (BlueprintCallable, BlueprintEvent)
void UItemDecriptionComponent_C::ActiveWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemDecriptionComponent.ItemDecriptionComponent_C.ActiveWidget");

	UItemDecriptionComponent_C_ActiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemDecriptionComponent.ItemDecriptionComponent_C.DeactiveWidget
// (BlueprintCallable, BlueprintEvent)
void UItemDecriptionComponent_C::DeactiveWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemDecriptionComponent.ItemDecriptionComponent_C.DeactiveWidget");

	UItemDecriptionComponent_C_DeactiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemDecriptionComponent.ItemDecriptionComponent_C.ExecuteUbergraph_ItemDecriptionComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemDecriptionComponent_C::ExecuteUbergraph_ItemDecriptionComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ItemDecriptionComponent.ItemDecriptionComponent_C.ExecuteUbergraph_ItemDecriptionComponent");

	UItemDecriptionComponent_C_ExecuteUbergraph_ItemDecriptionComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
