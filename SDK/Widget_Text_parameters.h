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

// Function Widget_Text.Widget_Text_C.SetSize
struct UWidget_Text_C_SetSize_Params
{
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Text.Widget_Text_C.SetText
struct UWidget_Text_C_SetText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Text.Widget_Text_C.PreConstruct
struct UWidget_Text_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Text.Widget_Text_C.ExecuteUbergraph_Widget_Text
struct UWidget_Text_C_ExecuteUbergraph_Widget_Text_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
