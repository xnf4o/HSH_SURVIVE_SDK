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

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.LoadImage
struct UWidget_TextWithInputImage_C_LoadImage_Params
{
	struct FName                                       Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.CreateImage
struct UWidget_TextWithInputImage_C_CreateImage_Params
{
	struct FName                                       Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.CreateTextBox
struct UWidget_TextWithInputImage_C_CreateTextBox_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.ResetTextOrImage
struct UWidget_TextWithInputImage_C_ResetTextOrImage_Params
{
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateTextOrImageArray
struct UWidget_TextWithInputImage_C_UpdateTextOrImageArray_Params
{
	TArray<struct FS_TextOrImage>                      TextOrImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.MakeTextOrImageArray
struct UWidget_TextWithInputImage_C_MakeTextOrImageArray_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FS_TextOrImage>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.IsActionButton
struct UWidget_TextWithInputImage_C_IsActionButton_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.RefreshButton
struct UWidget_TextWithInputImage_C_RefreshButton_Params
{
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.SetupAndRefreshText
struct UWidget_TextWithInputImage_C_SetupAndRefreshText_Params
{
	bool                                               bIsAction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.FindAction
struct UWidget_TextWithInputImage_C_FindAction_Params
{
	TArray<struct FInputActionKeyMapping>              Action;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FKey                                        Key;                                                       // (Parm, OutParm, HasGetValueTypeHash)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateTextAction
struct UWidget_TextWithInputImage_C_UpdateTextAction_Params
{
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateText
struct UWidget_TextWithInputImage_C_UpdateText_Params
{
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.SetTextInput
struct UWidget_TextWithInputImage_C_SetTextInput_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.FindImageDefind
struct UWidget_TextWithInputImage_C_FindImageDefind_Params
{
	struct FString                                     SourceString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       TextLeft;                                                  // (Parm, OutParm)
	struct FName                                       Image;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TextRight;                                                 // (Parm, OutParm)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.PreConstruct
struct UWidget_TextWithInputImage_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.ExecuteUbergraph_Widget_TextWithInputImage
struct UWidget_TextWithInputImage_C_ExecuteUbergraph_Widget_TextWithInputImage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
