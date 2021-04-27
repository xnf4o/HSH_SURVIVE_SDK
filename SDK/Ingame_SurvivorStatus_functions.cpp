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

// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_Img_DeadIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_SurvivorStatus_C::Get_Img_DeadIcon_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_Img_DeadIcon_Visibility_1");

	UIngame_SurvivorStatus_C_Get_Img_DeadIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UIngame_SurvivorStatus_C::Get_TextBlock_Time_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_Visibility_1");

	UIngame_SurvivorStatus_C_Get_TextBlock_Time_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UIngame_SurvivorStatus_C::Get_TextBlock_Time_ColorAndOpacity_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_ColorAndOpacity_1");

	UIngame_SurvivorStatus_C_Get_TextBlock_Time_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UIngame_SurvivorStatus_C::Get_TextBlock_Time_Text()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_TextBlock_Time_Text");

	UIngame_SurvivorStatus_C_Get_TextBlock_Time_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.RefreshSoulTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SurvivorStatus_C::RefreshSoulTime(bool bIsShow, float Seconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.RefreshSoulTime");

	UIngame_SurvivorStatus_C_RefreshSoulTime_Params params;
	params.bIsShow = bIsShow;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_FrameIMG_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UIngame_SurvivorStatus_C::Get_FrameIMG_Brush_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_FrameIMG_Brush_1");

	UIngame_SurvivorStatus_C_Get_FrameIMG_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_StatusIMG_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UIngame_SurvivorStatus_C::Get_StatusIMG_Brush_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Get_StatusIMG_Brush_1");

	UIngame_SurvivorStatus_C_Get_StatusIMG_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_SurvivorStatus_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.Construct");

	UIngame_SurvivorStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.SetPlayerStatusIMG
// (BlueprintCallable, BlueprintEvent)
void UIngame_SurvivorStatus_C::SetPlayerStatusIMG()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.SetPlayerStatusIMG");

	UIngame_SurvivorStatus_C_SetPlayerStatusIMG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.RunStickerImg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SurvivorStatus_C::RunStickerImg(class UTexture2D* Texture)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.RunStickerImg");

	UIngame_SurvivorStatus_C_RunStickerImg_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.ExecuteUbergraph_Ingame_SurvivorStatus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SurvivorStatus_C::ExecuteUbergraph_Ingame_SurvivorStatus(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SurvivorStatus.Ingame_SurvivorStatus_C.ExecuteUbergraph_Ingame_SurvivorStatus");

	UIngame_SurvivorStatus_C_ExecuteUbergraph_Ingame_SurvivorStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
