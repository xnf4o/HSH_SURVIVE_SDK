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

// Function Ingame_PingPanel.Ingame_PingPanel_C.GetUserDisplayResolution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Display                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_PingPanel_C::GetUserDisplayResolution(struct FVector2D* Display)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.GetUserDisplayResolution");

	UIngame_PingPanel_C_GetUserDisplayResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Display != nullptr)
		*Display = params.Display;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.IsCanCancel?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Cancel_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngame_PingPanel_C::IsCanCancel_(class AHSHCharacterBase* Character, const struct FVector& Location, bool* Cancel_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.IsCanCancel?");

	UIngame_PingPanel_C_IsCanCancel__Params params;
	params.Character = Character;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cancel_ != nullptr)
		*Cancel_ = params.Cancel_;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.MakeTextDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsCantCancel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_PingCase_E_PingCase> Case                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Return                         (Parm, OutParm)
void UIngame_PingPanel_C::MakeTextDistance(bool IsCantCancel, TEnumAsByte<E_PingCase_E_PingCase>* Case, struct FVector* Location, struct FText* DataText, class AHSHCharacterBase* Character, struct FText* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.MakeTextDistance");

	UIngame_PingPanel_C_MakeTextDistance_Params params;
	params.IsCantCancel = IsCantCancel;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Case != nullptr)
		*Case = params.Case;
	if (Location != nullptr)
		*Location = params.Location;
	if (DataText != nullptr)
		*DataText = params.DataText;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdateWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             PingWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             PingData                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           IsInScreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_PingPanel_C::UpdateWidget(class UUserWidget* PingWidget, const struct FS_PingPair& PingData, bool IsInScreen, float Angle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.UpdateWidget");

	UIngame_PingPanel_C_UpdateWidget_Params params;
	params.PingWidget = PingWidget;
	params.PingData = PingData;
	params.IsInScreen = IsInScreen;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.GetScreenEdgeCrood
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PingLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CoordX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CoordY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_PingPanel_C::GetScreenEdgeCrood(const struct FVector& PingLocation, float Margin, float* CoordX, float* CoordY, float* Angle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.GetScreenEdgeCrood");

	UIngame_PingPanel_C_GetScreenEdgeCrood_Params params;
	params.PingLocation = PingLocation;
	params.Margin = Margin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CoordX != nullptr)
		*CoordX = params.CoordX;
	if (CoordY != nullptr)
		*CoordY = params.CoordY;
	if (Angle != nullptr)
		*Angle = params.Angle;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.GetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DefualtLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_PingPanel_C::GetTargetLocation(class AActor* Target, const struct FVector& DefualtLocation, bool IsUpdateLocation, struct FVector* Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.GetTargetLocation");

	UIngame_PingPanel_C_GetTargetLocation_Params params;
	params.Target = Target;
	params.DefualtLocation = DefualtLocation;
	params.IsUpdateLocation = IsUpdateLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdateActivePing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_PingPair>     ActivePingData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIngame_PingPanel_C::UpdateActivePing(TArray<class UUserWidget*> ActivePing, TArray<struct FS_PingPair> ActivePingData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.UpdateActivePing");

	UIngame_PingPanel_C_UpdateActivePing_Params params;
	params.ActivePing = ActivePing;
	params.ActivePingData = ActivePingData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_PingPanel_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.Construct");

	UIngame_PingPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.ShowPing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIngame_PingPanel_C::ShowPing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.ShowPing");

	UIngame_PingPanel_C_ShowPing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdatePing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UIngame_PingPanel_C::UpdatePing(TArray<struct FS_PingPair> ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.UpdatePing");

	UIngame_PingPanel_C_UpdatePing_Params params;
	params.ActivePing = ActivePing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.UpdatePingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_PingPanel_C::UpdatePingUI(const struct FVector& WorldLocation, int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.UpdatePingUI");

	UIngame_PingPanel_C_UpdatePingUI_Params params;
	params.WorldLocation = WorldLocation;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.HidePingUI
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_PingPanel_C::HidePingUI()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.HidePingUI");

	UIngame_PingPanel_C_HidePingUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.ShowPingUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_PingPanel_C::ShowPingUI(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& Color, const struct FVector& WorldLocation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.ShowPingUI");

	UIngame_PingPanel_C_ShowPingUI_Params params;
	params.HeadlineText = HeadlineText;
	params.DataText = DataText;
	params.Color = Color;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_PingPanel.Ingame_PingPanel_C.ExecuteUbergraph_Ingame_PingPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_PingPanel_C::ExecuteUbergraph_Ingame_PingPanel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_PingPanel.Ingame_PingPanel_C.ExecuteUbergraph_Ingame_PingPanel");

	UIngame_PingPanel_C_ExecuteUbergraph_Ingame_PingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
