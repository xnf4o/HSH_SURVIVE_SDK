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

// Function IOutlineInterection.IOutlineInterection_C.RefreshUI
struct UIOutlineInterection_C_RefreshUI_Params
{
};

// Function IOutlineInterection.IOutlineInterection_C.HideIndicator
struct UIOutlineInterection_C_HideIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IOutlineInterection.IOutlineInterection_C.ShowIndicator
struct UIOutlineInterection_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IOutlineInterection.IOutlineInterection_C.DisableUI
struct UIOutlineInterection_C_DisableUI_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IOutlineInterection.IOutlineInterection_C.EnableUI
struct UIOutlineInterection_C_EnableUI_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IOutlineInterection.IOutlineInterection_C.GetInteractSlateBrush
struct UIOutlineInterection_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IOutlineInterection.IOutlineInterection_C.HideOutline
struct UIOutlineInterection_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IOutlineInterection.IOutlineInterection_C.ShowOutline
struct UIOutlineInterection_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
