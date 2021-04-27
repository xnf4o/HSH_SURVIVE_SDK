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

// Function Widget_QuestImage.Widget_QuestImage_C.Change
struct UWidget_QuestImage_C_Change_Params
{
};

// Function Widget_QuestImage.Widget_QuestImage_C.UpdateIcon
struct UWidget_QuestImage_C_UpdateIcon_Params
{
	struct FSlateColor                                 TintColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestImage.Widget_QuestImage_C.UpdateWidget
struct UWidget_QuestImage_C_UpdateWidget_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_QuestImage.Widget_QuestImage_C.PreConstruct
struct UWidget_QuestImage_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_QuestImage.Widget_QuestImage_C.ExecuteUbergraph_Widget_QuestImage
struct UWidget_QuestImage_C_ExecuteUbergraph_Widget_QuestImage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
