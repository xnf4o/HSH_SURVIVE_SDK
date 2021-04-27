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

// Function HSURHUD.HSURHUD_C.ShowHunterWidget
struct AHSURHUD_C_ShowHunterWidget_Params
{
};

// Function HSURHUD.HSURHUD_C.ShowSurvivorWidget
struct AHSURHUD_C_ShowSurvivorWidget_Params
{
};

// Function HSURHUD.HSURHUD_C.ShowGeneralWidget
struct AHSURHUD_C_ShowGeneralWidget_Params
{
};

// Function HSURHUD.HSURHUD_C.HideWidget
struct AHSURHUD_C_HideWidget_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURHUD.HSURHUD_C.CreateUISpectator
struct AHSURHUD_C_CreateUISpectator_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURHUD.HSURHUD_C.RemoveUISpectator
struct AHSURHUD_C_RemoveUISpectator_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURHUD.HSURHUD_C.UpdateUISpectator
struct AHSURHUD_C_UpdateUISpectator_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UISpectator                              Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURHUD.HSURHUD_C.InitializeWidgetIngameWidget
struct AHSURHUD_C_InitializeWidgetIngameWidget_Params
{
};

// Function HSURHUD.HSURHUD_C.HideGeneralWidget
struct AHSURHUD_C_HideGeneralWidget_Params
{
};

// Function HSURHUD.HSURHUD_C.ExecuteUbergraph_HSURHUD
struct AHSURHUD_C_ExecuteUbergraph_HSURHUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
