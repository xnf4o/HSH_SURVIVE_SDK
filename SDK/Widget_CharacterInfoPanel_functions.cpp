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

// Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.SetImageBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHItem*                HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterInfoPanel_C::SetImageBrush(class UHSHItem* HSHItem, class UImage* icon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.SetImageBrush");

	UWidget_CharacterInfoPanel_C_SetImageBrush_Params params;
	params.HSHItem = HSHItem;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.HideInfo
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterInfoPanel_C::HideInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.HideInfo");

	UWidget_CharacterInfoPanel_C_HideInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.RefreshInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHCharacterItem*       hshcharacter                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterInfoPanel_C::RefreshInfo(class UHSHCharacterItem* hshcharacter, const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.RefreshInfo");

	UWidget_CharacterInfoPanel_C_RefreshInfo_Params params;
	params.hshcharacter = hshcharacter;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
