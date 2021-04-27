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

// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Sticker_Character_C::SetImage(class UTexture2D* Texture)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.SetImage");

	UIngame_Sticker_Character_C_SetImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_Sticker_Character_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.Construct");

	UIngame_Sticker_Character_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.RunSticker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Sticker_Character_C::RunSticker(class UTexture2D* Texture, float DisplayTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.RunSticker");

	UIngame_Sticker_Character_C_RunSticker_Params params;
	params.Texture = Texture;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.ExecuteUbergraph_Ingame_Sticker_Character
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_Sticker_Character_C::ExecuteUbergraph_Ingame_Sticker_Character(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_Sticker_Character.Ingame_Sticker_Character_C.ExecuteUbergraph_Ingame_Sticker_Character");

	UIngame_Sticker_Character_C_ExecuteUbergraph_Ingame_Sticker_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
