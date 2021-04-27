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

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Sort
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSelectorNew_C::Sort()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Sort");

	UWidget_CharacterSelectorNew_C_Sort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.UpdateCharacterList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UHSHCharacterItem*> CacheCharacterList             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_CharacterSelectorNew_C::UpdateCharacterList(TArray<class UHSHCharacterItem*>* CacheCharacterList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.UpdateCharacterList");

	UWidget_CharacterSelectorNew_C_UpdateCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CacheCharacterList != nullptr)
		*CacheCharacterList = params.CacheCharacterList;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSelectorNew_C::Refresh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Refresh");

	UWidget_CharacterSelectorNew_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.FillContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSelectorNew_C::FillContent(class UPanelWidget* Panel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.FillContent");

	UWidget_CharacterSelectorNew_C_FillContent_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.CheckCharacterList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UHSHCharacterItem*> Return_CacheCharacterList      (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSelectorNew_C::CheckCharacterList(TArray<class UHSHCharacterItem*>* Return_CacheCharacterList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.CheckCharacterList");

	UWidget_CharacterSelectorNew_C_CheckCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_CacheCharacterList != nullptr)
		*Return_CacheCharacterList = params.Return_CacheCharacterList;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHCharacterItem*       characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSelectorNew_C::AssignOnClick(class UHSHCharacterItem* characteritem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnClick");

	UWidget_CharacterSelectorNew_C_AssignOnClick_Params params;
	params.characteritem = characteritem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.RefreshCharactList
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSelectorNew_C::RefreshCharactList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.RefreshCharactList");

	UWidget_CharacterSelectorNew_C_RefreshCharactList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_CharacterSelectorNew_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Construct");

	UWidget_CharacterSelectorNew_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHCharacterItem*       characteritem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSelectorNew_C::AssignOnHover(class UHSHCharacterItem* characteritem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnHover");

	UWidget_CharacterSelectorNew_C_AssignOnHover_Params params;
	params.characteritem = characteritem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnUnhover
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSelectorNew_C::AssignOnUnhover()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnUnhover");

	UWidget_CharacterSelectorNew_C_AssignOnUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.ExecuteUbergraph_Widget_CharacterSelectorNew
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSelectorNew_C::ExecuteUbergraph_Widget_CharacterSelectorNew(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.ExecuteUbergraph_Widget_CharacterSelectorNew");

	UWidget_CharacterSelectorNew_C_ExecuteUbergraph_Widget_CharacterSelectorNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnUnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSelectorNew_C::OnUnHover__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnUnHover__DelegateSignature");

	UWidget_CharacterSelectorNew_C_OnUnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHCharacterItem*       HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSelectorNew_C::OnHover__DelegateSignature(class UHSHCharacterItem* HSHItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnHover__DelegateSignature");

	UWidget_CharacterSelectorNew_C_OnHover__DelegateSignature_Params params;
	params.HSHItem = HSHItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnClickButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSelectorNew_C::OnClickButton__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnClickButton__DelegateSignature");

	UWidget_CharacterSelectorNew_C_OnClickButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
