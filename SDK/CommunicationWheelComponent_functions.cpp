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

// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunEmote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            emote                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::RunEmote(int* emote)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunEmote");

	UCommunicationWheelComponent_C_RunEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (emote != nullptr)
		*emote = params.emote;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetSelectedEmote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentSelect                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::GetSelectedEmote(int* CurrentSelect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetSelectedEmote");

	UCommunicationWheelComponent_C_GetSelectedEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentSelect != nullptr)
		*CurrentSelect = params.CurrentSelect;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.HideEmoteWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UCommunicationWheelComponent_C::HideEmoteWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.HideEmoteWidget");

	UCommunicationWheelComponent_C_HideEmoteWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ShowEmoteWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UCommunicationWheelComponent_C::ShowEmoteWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.ShowEmoteWidget");

	UCommunicationWheelComponent_C_ShowEmoteWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.InitializeEmote
// (Protected, BlueprintCallable, BlueprintEvent)
void UCommunicationWheelComponent_C::InitializeEmote()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.InitializeEmote");

	UCommunicationWheelComponent_C_InitializeEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.SetCurrentSticker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::SetCurrentSticker(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.SetCurrentSticker");

	UCommunicationWheelComponent_C_SetCurrentSticker_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.IsLocallyControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCommunicationWheelComponent_C::IsLocallyControlled(bool* IsLocal)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.IsLocallyControlled");

	UCommunicationWheelComponent_C_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocal != nullptr)
		*IsLocal = params.IsLocal;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.IsClientSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSurvivor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCommunicationWheelComponent_C::IsClientSurvivor(bool* IsSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.IsClientSurvivor");

	UCommunicationWheelComponent_C_IsClientSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSurvivor != nullptr)
		*IsSurvivor = params.IsSurvivor;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetPlayerIndexByID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::GetPlayerIndexByID(int PlayerId, int* Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetPlayerIndexByID");

	UCommunicationWheelComponent_C_GetPlayerIndexByID_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Sticker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::RunSticker(int PlayerIndex, class UTexture2D* Sticker)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker");

	UCommunicationWheelComponent_C_RunSticker_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Sticker = Sticker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetSelectedSticker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentSelect                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::GetSelectedSticker(int* CurrentSelect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.GetSelectedSticker");

	UCommunicationWheelComponent_C_GetSelectedSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentSelect != nullptr)
		*CurrentSelect = params.CurrentSelect;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.InitializeSticker
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UCommunicationWheelComponent_C::InitializeSticker()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.InitializeSticker");

	UCommunicationWheelComponent_C_InitializeSticker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.HideStickerWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UCommunicationWheelComponent_C::HideStickerWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.HideStickerWidget");

	UCommunicationWheelComponent_C_HideStickerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ShowStickerWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UCommunicationWheelComponent_C::ShowStickerWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.ShowStickerWidget");

	UCommunicationWheelComponent_C_ShowStickerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UCommunicationWheelComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.ReceiveBeginPlay");

	UCommunicationWheelComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Multicast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Sticker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::RunSticker_Multicast(int PlayerIndex, class UTexture2D* Sticker)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Multicast");

	UCommunicationWheelComponent_C_RunSticker_Multicast_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Sticker = Sticker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.ReceiveTick");

	UCommunicationWheelComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Sticker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::RunSticker_Server(int PlayerIndex, class UTexture2D* Sticker)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Server");

	UCommunicationWheelComponent_C_RunSticker_Server_Params params;
	params.PlayerIndex = PlayerIndex;
	params.Sticker = Sticker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Owner
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentSelected                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::RunSticker_Owner(int CurrentSelected, int PlayerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.RunSticker_Owner");

	UCommunicationWheelComponent_C_RunSticker_Owner_Params params;
	params.CurrentSelected = CurrentSelected;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommunicationWheelComponent.CommunicationWheelComponent_C.ExecuteUbergraph_CommunicationWheelComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCommunicationWheelComponent_C::ExecuteUbergraph_CommunicationWheelComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CommunicationWheelComponent.CommunicationWheelComponent_C.ExecuteUbergraph_CommunicationWheelComponent");

	UCommunicationWheelComponent_C_ExecuteUbergraph_CommunicationWheelComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
