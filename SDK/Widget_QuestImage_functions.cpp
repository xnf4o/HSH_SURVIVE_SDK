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

// Function Widget_QuestImage.Widget_QuestImage_C.Change
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_QuestImage_C::Change()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_QuestImage.Widget_QuestImage_C.Change");

	UWidget_QuestImage_C_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestImage.Widget_QuestImage_C.UpdateIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             TintColor                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestImage_C::UpdateIcon(const struct FSlateColor& TintColor, class UTexture2D* Texture)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_QuestImage.Widget_QuestImage_C.UpdateIcon");

	UWidget_QuestImage_C_UpdateIcon_Params params;
	params.TintColor = TintColor;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestImage.Widget_QuestImage_C.UpdateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestImage_C::UpdateWidget(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_QuestImage.Widget_QuestImage_C.UpdateWidget");

	UWidget_QuestImage_C_UpdateWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestImage.Widget_QuestImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestImage_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_QuestImage.Widget_QuestImage_C.PreConstruct");

	UWidget_QuestImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestImage.Widget_QuestImage_C.ExecuteUbergraph_Widget_QuestImage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestImage_C::ExecuteUbergraph_Widget_QuestImage(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_QuestImage.Widget_QuestImage_C.ExecuteUbergraph_Widget_QuestImage");

	UWidget_QuestImage_C_ExecuteUbergraph_Widget_QuestImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
