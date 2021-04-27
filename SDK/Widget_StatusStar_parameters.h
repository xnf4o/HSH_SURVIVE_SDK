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

// Function Widget_StatusStar.Widget_StatusStar_C.RefreshValidStar
struct UWidget_StatusStar_C_RefreshValidStar_Params
{
};

// Function Widget_StatusStar.Widget_StatusStar_C.Refresh
struct UWidget_StatusStar_C_Refresh_Params
{
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Level;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
