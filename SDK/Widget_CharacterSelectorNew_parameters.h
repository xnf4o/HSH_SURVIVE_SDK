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

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Sort
struct UWidget_CharacterSelectorNew_C_Sort_Params
{
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.UpdateCharacterList
struct UWidget_CharacterSelectorNew_C_UpdateCharacterList_Params
{
	TArray<class UHSHCharacterItem*>                   CacheCharacterList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Refresh
struct UWidget_CharacterSelectorNew_C_Refresh_Params
{
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.FillContent
struct UWidget_CharacterSelectorNew_C_FillContent_Params
{
	class UPanelWidget*                                Panel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.CheckCharacterList
struct UWidget_CharacterSelectorNew_C_CheckCharacterList_Params
{
	TArray<class UHSHCharacterItem*>                   Return_CacheCharacterList;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnClick
struct UWidget_CharacterSelectorNew_C_AssignOnClick_Params
{
	class UHSHCharacterItem*                           characteritem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.RefreshCharactList
struct UWidget_CharacterSelectorNew_C_RefreshCharactList_Params
{
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.Construct
struct UWidget_CharacterSelectorNew_C_Construct_Params
{
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnHover
struct UWidget_CharacterSelectorNew_C_AssignOnHover_Params
{
	class UHSHCharacterItem*                           characteritem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.AssignOnUnhover
struct UWidget_CharacterSelectorNew_C_AssignOnUnhover_Params
{
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.ExecuteUbergraph_Widget_CharacterSelectorNew
struct UWidget_CharacterSelectorNew_C_ExecuteUbergraph_Widget_CharacterSelectorNew_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnUnHover__DelegateSignature
struct UWidget_CharacterSelectorNew_C_OnUnHover__DelegateSignature_Params
{
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnHover__DelegateSignature
struct UWidget_CharacterSelectorNew_C_OnHover__DelegateSignature_Params
{
	class UHSHCharacterItem*                           HSHItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CharacterSelectorNew.Widget_CharacterSelectorNew_C.OnClickButton__DelegateSignature
struct UWidget_CharacterSelectorNew_C_OnClickButton__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
