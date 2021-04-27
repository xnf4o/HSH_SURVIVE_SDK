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

// Function Widget_BuyLevelSelection.Widget_BuyLevelSelection_C.InitializeBackgroundImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_BuyLevelSelection_C::InitializeBackgroundImage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_BuyLevelSelection.Widget_BuyLevelSelection_C.InitializeBackgroundImage");

	UWidget_BuyLevelSelection_C_InitializeBackgroundImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BuyLevelSelection.Widget_BuyLevelSelection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_BuyLevelSelection_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_BuyLevelSelection.Widget_BuyLevelSelection_C.PreConstruct");

	UWidget_BuyLevelSelection_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BuyLevelSelection.Widget_BuyLevelSelection_C.ExecuteUbergraph_Widget_BuyLevelSelection
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BuyLevelSelection_C::ExecuteUbergraph_Widget_BuyLevelSelection(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_BuyLevelSelection.Widget_BuyLevelSelection_C.ExecuteUbergraph_Widget_BuyLevelSelection");

	UWidget_BuyLevelSelection_C_ExecuteUbergraph_Widget_BuyLevelSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
