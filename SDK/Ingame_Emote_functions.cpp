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

// Function Ingame_Emote.Ingame_Emote_C.EmoteWidgetLoop
// (Public, BlueprintCallable, BlueprintEvent)
void UIngame_Emote_C::EmoteWidgetLoop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Emote.Ingame_Emote_C.EmoteWidgetLoop");

	UIngame_Emote_C_EmoteWidgetLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Emote.Ingame_Emote_C.SetupEmote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Emotes                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UIngame_Emote_C::SetupEmote(TArray<class UTexture2D*>* Emotes)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Emote.Ingame_Emote_C.SetupEmote");

	UIngame_Emote_C_SetupEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emotes != nullptr)
		*Emotes = params.Emotes;

}


// Function Ingame_Emote.Ingame_Emote_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_Emote_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Emote.Ingame_Emote_C.Construct");

	UIngame_Emote_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Emote.Ingame_Emote_C.ExecuteUbergraph_Ingame_Emote
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Emote_C::ExecuteUbergraph_Ingame_Emote(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Emote.Ingame_Emote_C.ExecuteUbergraph_Ingame_Emote");

	UIngame_Emote_C_ExecuteUbergraph_Ingame_Emote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
