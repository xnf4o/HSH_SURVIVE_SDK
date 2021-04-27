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

// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.Refresh
struct UWidget_ShowStatus3D_C_Refresh_Params
{
};

// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.FillContent
struct UWidget_ShowStatus3D_C_FillContent_Params
{
	class UPanelWidget*                                Panel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.UpdateWidgetValue_Icon
struct UWidget_ShowStatus3D_C_UpdateWidgetValue_Icon_Params
{
	TArray<class UTexture2D*>                          Icons;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> Modes;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_TagStatus>                        Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.UpdateWidgetValue
struct UWidget_ShowStatus3D_C_UpdateWidgetValue_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.Tick
struct UWidget_ShowStatus3D_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.ExecuteUbergraph_Widget_ShowStatus3D
struct UWidget_ShowStatus3D_C_ExecuteUbergraph_Widget_ShowStatus3D_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
