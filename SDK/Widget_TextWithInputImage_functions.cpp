// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.LoadImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             Brush                          (Parm, OutParm)
void UWidget_TextWithInputImage_C::LoadImage(const struct FName& Image, struct FSlateBrush* Brush)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.LoadImage");

	UWidget_TextWithInputImage_C_LoadImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.CreateImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UWidget_TextWithInputImage_C::CreateImage(const struct FName& Image)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.CreateImage");

	UWidget_TextWithInputImage_C_CreateImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.CreateTextBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UWidget_TextWithInputImage_C::CreateTextBox(const struct FText& Text, int FontSize)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.CreateTextBox");

	UWidget_TextWithInputImage_C_CreateTextBox_Params params;
	params.Text = Text;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.ResetTextOrImage
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TextWithInputImage_C::ResetTextOrImage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.ResetTextOrImage");

	UWidget_TextWithInputImage_C_ResetTextOrImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateTextOrImageArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_TextOrImage>  TextOrImage                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_TextWithInputImage_C::UpdateTextOrImageArray(TArray<struct FS_TextOrImage>* TextOrImage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateTextOrImageArray");

	UWidget_TextWithInputImage_C_UpdateTextOrImageArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextOrImage != nullptr)
		*TextOrImage = params.TextOrImage;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.MakeTextOrImageArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FS_TextOrImage>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FS_TextOrImage> UWidget_TextWithInputImage_C::MakeTextOrImageArray(const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.MakeTextOrImageArray");

	UWidget_TextWithInputImage_C_MakeTextOrImageArray_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.IsActionButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWidget_TextWithInputImage_C::IsActionButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.IsActionButton");

	UWidget_TextWithInputImage_C_IsActionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.RefreshButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TextWithInputImage_C::RefreshButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.RefreshButton");

	UWidget_TextWithInputImage_C_RefreshButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.SetupAndRefreshText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsAction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_TextWithInputImage_C::SetupAndRefreshText(bool bIsAction, const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.SetupAndRefreshText");

	UWidget_TextWithInputImage_C_SetupAndRefreshText_Params params;
	params.bIsAction = bIsAction;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.FindAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FInputActionKeyMapping> Action                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FKey                    Key                            (Parm, OutParm, HasGetValueTypeHash)
void UWidget_TextWithInputImage_C::FindAction(TArray<struct FInputActionKeyMapping>* Action, struct FKey* Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.FindAction");

	UWidget_TextWithInputImage_C_FindAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
	if (Key != nullptr)
		*Key = params.Key;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateTextAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_TextWithInputImage_C::UpdateTextAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateTextAction");

	UWidget_TextWithInputImage_C_UpdateTextAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TextWithInputImage_C::UpdateText()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.UpdateText");

	UWidget_TextWithInputImage_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.SetTextInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_TextWithInputImage_C::SetTextInput(const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.SetTextInput");

	UWidget_TextWithInputImage_C_SetTextInput_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.FindImageDefind
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SourceString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bIsSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   TextLeft                       (Parm, OutParm)
// struct FName                   Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   TextRight                      (Parm, OutParm)
void UWidget_TextWithInputImage_C::FindImageDefind(const struct FString& SourceString, bool* bIsSuccess, struct FText* TextLeft, struct FName* Image, struct FText* TextRight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.FindImageDefind");

	UWidget_TextWithInputImage_C_FindImageDefind_Params params;
	params.SourceString = SourceString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSuccess != nullptr)
		*bIsSuccess = params.bIsSuccess;
	if (TextLeft != nullptr)
		*TextLeft = params.TextLeft;
	if (Image != nullptr)
		*Image = params.Image;
	if (TextRight != nullptr)
		*TextRight = params.TextRight;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TextWithInputImage_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.PreConstruct");

	UWidget_TextWithInputImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.ExecuteUbergraph_Widget_TextWithInputImage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TextWithInputImage_C::ExecuteUbergraph_Widget_TextWithInputImage(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_TextWithInputImage.Widget_TextWithInputImage_C.ExecuteUbergraph_Widget_TextWithInputImage");

	UWidget_TextWithInputImage_C_ExecuteUbergraph_Widget_TextWithInputImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
