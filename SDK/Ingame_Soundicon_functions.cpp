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

// Function Ingame_Soundicon.Ingame_Soundicon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_Soundicon_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Soundicon.Ingame_Soundicon_C.Construct");

	UIngame_Soundicon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Soundicon.Ingame_Soundicon_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DataText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_PingPair             S_PingPair                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           IsInScreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Soundicon_C::UpdateWidget(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& InColorAndOpacity, const struct FS_PingPair& S_PingPair, bool IsInScreen, float Angle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Soundicon.Ingame_Soundicon_C.UpdateWidget");

	UIngame_Soundicon_C_UpdateWidget_Params params;
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


// Function Ingame_Soundicon.Ingame_Soundicon_C.ExecuteUbergraph_Ingame_Soundicon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Soundicon_C::ExecuteUbergraph_Ingame_Soundicon(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Soundicon.Ingame_Soundicon_C.ExecuteUbergraph_Ingame_Soundicon");

	UIngame_Soundicon_C_ExecuteUbergraph_Ingame_Soundicon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
