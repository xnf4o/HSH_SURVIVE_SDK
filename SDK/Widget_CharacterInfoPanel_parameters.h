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

// Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.SetImageBrush
struct UWidget_CharacterInfoPanel_C_SetImageBrush_Params
{
	class UHSHItem*                                    HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.HideInfo
struct UWidget_CharacterInfoPanel_C_HideInfo_Params
{
};

// Function Widget_CharacterInfoPanel.Widget_CharacterInfoPanel_C.RefreshInfo
struct UWidget_CharacterInfoPanel_C_RefreshInfo_Params
{
	class UHSHCharacterItem*                           hshcharacter;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
