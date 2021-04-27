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

// Function Ingame_Ping.Ingame_Ping_C.GetOffScreenData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Return_Data                    (Parm, OutParm)
void UIngame_Ping_C::GetOffScreenData(const struct FText& Data, struct FText* Return_Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.GetOffScreenData");

	UIngame_Ping_C_GetOffScreenData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Data != nullptr)
		*Return_Data = params.Return_Data;

}


// Function Ingame_Ping.Ingame_Ping_C.GetVisibility_Ping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_Ping_C::GetVisibility_Ping()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.GetVisibility_Ping");

	UIngame_Ping_C_GetVisibility_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_Ping.Ingame_Ping_C.UpdatedScale&VisibiltyOnDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsInScreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             SPingPair                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UIngame_Ping_C::UpdatedScale_VisibiltyOnDistance(const struct FText& Data, bool IsInScreen, const struct FS_PingPair& SPingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.UpdatedScale&VisibiltyOnDistance");

	UIngame_Ping_C_UpdatedScale_VisibiltyOnDistance_Params params;
	params.Data = Data;
	params.IsInScreen = IsInScreen;
	params.SPingPair = SPingPair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Ping.Ingame_Ping_C.UpdateImageByCase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             SPingPair                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UIngame_Ping_C::UpdateImageByCase(class UImage* Image, const struct FS_PingPair& SPingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.UpdateImageByCase");

	UIngame_Ping_C_UpdateImageByCase_Params params;
	params.Image = Image;
	params.SPingPair = SPingPair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Ping.Ingame_Ping_C.UpdatedWidgetColorByCase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             SPingPair                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UIngame_Ping_C::UpdatedWidgetColorByCase(class UWidget* Widget, const struct FS_PingPair& SPingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.UpdatedWidgetColorByCase");

	UIngame_Ping_C_UpdatedWidgetColorByCase_Params params;
	params.Widget = Widget;
	params.SPingPair = SPingPair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Ping.Ingame_Ping_C.UpdateTextAndColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm)
void UIngame_Ping_C::UpdateTextAndColor(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.UpdateTextAndColor");

	UIngame_Ping_C_UpdateTextAndColor_Params params;
	params.HeadlineText = HeadlineText;
	params.DataText = DataText;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Ping.Ingame_Ping_C.PlayBeginAnimation
// (BlueprintCallable, BlueprintEvent)
void UIngame_Ping_C::PlayBeginAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.PlayBeginAnimation");

	UIngame_Ping_C_PlayBeginAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Ping.Ingame_Ping_C.LoopAnim
// (BlueprintCallable, BlueprintEvent)
void UIngame_Ping_C::LoopAnim()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.LoopAnim");

	UIngame_Ping_C_LoopAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Ping.Ingame_Ping_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_PingPair             S_PingPair                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           IsInScreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Ping_C::UpdateWidget(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& InColorAndOpacity, const struct FS_PingPair& S_PingPair, bool IsInScreen, float Angle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.UpdateWidget");

	UIngame_Ping_C_UpdateWidget_Params params;
	params.HeadlineText = HeadlineText;
	params.DataText = DataText;
	params.InColorAndOpacity = InColorAndOpacity;
	params.S_PingPair = S_PingPair;
	params.IsInScreen = IsInScreen;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Ping.Ingame_Ping_C.ExecuteUbergraph_Ingame_Ping
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Ping_C::ExecuteUbergraph_Ingame_Ping(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Ping.Ingame_Ping_C.ExecuteUbergraph_Ingame_Ping");

	UIngame_Ping_C_ExecuteUbergraph_Ingame_Ping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
