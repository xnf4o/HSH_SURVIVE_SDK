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

// Function ItemDecriptionComponent.ItemDecriptionComponent_C.SetUpDescription
struct UItemDecriptionComponent_C_SetUpDescription_Params
{
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemDecriptionComponent.ItemDecriptionComponent_C.GetDescription
struct UItemDecriptionComponent_C_GetDescription_Params
{
	struct FText                                       Header;                                                    // (Parm, OutParm)
	struct FText                                       Description;                                               // (Parm, OutParm)
};

// Function ItemDecriptionComponent.ItemDecriptionComponent_C.TryToCreateWidget
struct UItemDecriptionComponent_C_TryToCreateWidget_Params
{
};

// Function ItemDecriptionComponent.ItemDecriptionComponent_C.ActiveWidget
struct UItemDecriptionComponent_C_ActiveWidget_Params
{
};

// Function ItemDecriptionComponent.ItemDecriptionComponent_C.DeactiveWidget
struct UItemDecriptionComponent_C_DeactiveWidget_Params
{
};

// Function ItemDecriptionComponent.ItemDecriptionComponent_C.ExecuteUbergraph_ItemDecriptionComponent
struct UItemDecriptionComponent_C_ExecuteUbergraph_ItemDecriptionComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
