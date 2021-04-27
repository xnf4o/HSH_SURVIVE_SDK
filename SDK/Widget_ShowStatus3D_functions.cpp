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

// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_ShowStatus3D_C::Refresh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.Refresh");

	UWidget_ShowStatus3D_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.FillContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ShowStatus3D_C::FillContent(class UPanelWidget* Panel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.FillContent");

	UWidget_ShowStatus3D_C_FillContent_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.UpdateWidgetValue_Icon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Icons                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> Modes                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_TagStatus>    Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UWidget_ShowStatus3D_C::UpdateWidgetValue_Icon(TArray<class UTexture2D*>* Icons, TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>>* Modes, TArray<struct FS_TagStatus>* Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.UpdateWidgetValue_Icon");

	UWidget_ShowStatus3D_C_UpdateWidgetValue_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icons != nullptr)
		*Icons = params.Icons;
	if (Modes != nullptr)
		*Modes = params.Modes;
	if (Data != nullptr)
		*Data = params.Data;

}


// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.UpdateWidgetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ShowStatus3D_C::UpdateWidgetValue(const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.UpdateWidgetValue");

	UWidget_ShowStatus3D_C_UpdateWidgetValue_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ShowStatus3D_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.Tick");

	UWidget_ShowStatus3D_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.ExecuteUbergraph_Widget_ShowStatus3D
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ShowStatus3D_C::ExecuteUbergraph_Widget_ShowStatus3D(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_ShowStatus3D.Widget_ShowStatus3D_C.ExecuteUbergraph_Widget_ShowStatus3D");

	UWidget_ShowStatus3D_C_ExecuteUbergraph_Widget_ShowStatus3D_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
