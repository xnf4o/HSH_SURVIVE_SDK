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

// Function LootDropPreviewActor.LootDropPreviewActor_C.FocusOnPreviewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LD_Base                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewActor_C::FocusOnPreviewItem(class AActor* LD_Base)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.FocusOnPreviewItem");

	ALootDropPreviewActor_C_FocusOnPreviewItem_Params params;
	params.LD_Base = LD_Base;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.CheckIsOnFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsOnLootdropFocus             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootDropPreviewActor_C::CheckIsOnFocus(bool* bIsOnLootdropFocus)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.CheckIsOnFocus");

	ALootDropPreviewActor_C_CheckIsOnFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsOnLootdropFocus != nullptr)
		*bIsOnLootdropFocus = params.bIsOnLootdropFocus;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SetVisibleLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootDropPreviewActor_C::SetVisibleLabel(bool bNewVisibility)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SetVisibleLabel");

	ALootDropPreviewActor_C_SetVisibleLabel_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewSkin
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::PreviewSkin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewSkin");

	ALootDropPreviewActor_C_PreviewSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewSticker
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::PreviewSticker()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewSticker");

	ALootDropPreviewActor_C_PreviewSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewProfile
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::PreviewProfile()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewProfile");

	ALootDropPreviewActor_C_PreviewProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewHead
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::PreviewHead()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewHead");

	ALootDropPreviewActor_C_PreviewHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewBack
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::PreviewBack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.PreviewBack");

	ALootDropPreviewActor_C_PreviewBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SpawnSoundLootdrop
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::SpawnSoundLootdrop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SpawnSoundLootdrop");

	ALootDropPreviewActor_C_SpawnSoundLootdrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALootDropPreviewActor_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ALootDropPreviewActor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SetupAmulet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsNewItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootDropPreviewActor_C::SetupAmulet(bool bIsNewItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SetupAmulet");

	ALootDropPreviewActor_C_SetupAmulet_Params params;
	params.bIsNewItem = bIsNewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SetUpSkin
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::SetUpSkin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SetUpSkin");

	ALootDropPreviewActor_C_SetUpSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SetupSticker
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::SetupSticker()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SetupSticker");

	ALootDropPreviewActor_C_SetupSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SetUpProfile
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::SetUpProfile()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SetUpProfile");

	ALootDropPreviewActor_C_SetUpProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SetupAccHead
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::SetupAccHead()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SetupAccHead");

	ALootDropPreviewActor_C_SetupAccHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.SetupAccBack
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::SetupAccBack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.SetupAccBack");

	ALootDropPreviewActor_C_SetupAccBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALootDropPreviewActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.ReceiveBeginPlay");

	ALootDropPreviewActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void ALootDropPreviewActor_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.Initialize");

	ALootDropPreviewActor_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootDropPreviewActor.LootDropPreviewActor_C.ExecuteUbergraph_LootDropPreviewActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootDropPreviewActor_C::ExecuteUbergraph_LootDropPreviewActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootDropPreviewActor.LootDropPreviewActor_C.ExecuteUbergraph_LootDropPreviewActor");

	ALootDropPreviewActor_C_ExecuteUbergraph_LootDropPreviewActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
