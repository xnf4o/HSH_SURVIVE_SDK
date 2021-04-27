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

// Function A_StickerWidget.A_StickerWidget_C.TryGetViewPort
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ViewTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AA_StickerWidget_C::TryGetViewPort(class AActor** ViewTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function A_StickerWidget.A_StickerWidget_C.TryGetViewPort");

	AA_StickerWidget_C_TryGetViewPort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewTarget != nullptr)
		*ViewTarget = params.ViewTarget;

}


// Function A_StickerWidget.A_StickerWidget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AA_StickerWidget_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function A_StickerWidget.A_StickerWidget_C.ReceiveBeginPlay");

	AA_StickerWidget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function A_StickerWidget.A_StickerWidget_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AA_StickerWidget_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function A_StickerWidget.A_StickerWidget_C.ReceiveTick");

	AA_StickerWidget_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function A_StickerWidget.A_StickerWidget_C.ExecuteUbergraph_A_StickerWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AA_StickerWidget_C::ExecuteUbergraph_A_StickerWidget(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function A_StickerWidget.A_StickerWidget_C.ExecuteUbergraph_A_StickerWidget");

	AA_StickerWidget_C_ExecuteUbergraph_A_StickerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
