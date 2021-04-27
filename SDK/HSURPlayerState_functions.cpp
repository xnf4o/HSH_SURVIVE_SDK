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

// Function HSURPlayerState.HSURPlayerState_C.GetCharacterIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             CharacterIcon                  (Parm, OutParm)
void AHSURPlayerState_C::GetCharacterIcon(struct FSlateBrush* CharacterIcon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerState.HSURPlayerState_C.GetCharacterIcon");

	AHSURPlayerState_C_GetCharacterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterIcon != nullptr)
		*CharacterIcon = params.CharacterIcon;

}


// Function HSURPlayerState.HSURPlayerState_C.OnRep_PlayerCharacterClass
// (BlueprintCallable, BlueprintEvent)
void AHSURPlayerState_C::OnRep_PlayerCharacterClass()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerState.HSURPlayerState_C.OnRep_PlayerCharacterClass");

	AHSURPlayerState_C_OnRep_PlayerCharacterClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerState.HSURPlayerState_C.GetStatusImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              NormalStatusImage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              SoulStatusImage                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerState_C::GetStatusImage(class UTexture2D** NormalStatusImage, class UTexture2D** SoulStatusImage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerState.HSURPlayerState_C.GetStatusImage");

	AHSURPlayerState_C_GetStatusImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NormalStatusImage != nullptr)
		*NormalStatusImage = params.NormalStatusImage;
	if (SoulStatusImage != nullptr)
		*SoulStatusImage = params.SoulStatusImage;

}


// Function HSURPlayerState.HSURPlayerState_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void AHSURPlayerState_C::ReceiveDestroyed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerState.HSURPlayerState_C.ReceiveDestroyed");

	AHSURPlayerState_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerState.HSURPlayerState_C.SettingStatusImage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             CharacterIcon                  (BlueprintVisible, BlueprintReadOnly, Parm)
void AHSURPlayerState_C::SettingStatusImage(class UClass* Class, const struct FSlateBrush& CharacterIcon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerState.HSURPlayerState_C.SettingStatusImage");

	AHSURPlayerState_C_SettingStatusImage_Params params;
	params.Class = Class;
	params.CharacterIcon = CharacterIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURPlayerState.HSURPlayerState_C.ExecuteUbergraph_HSURPlayerState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURPlayerState_C::ExecuteUbergraph_HSURPlayerState(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURPlayerState.HSURPlayerState_C.ExecuteUbergraph_HSURPlayerState");

	AHSURPlayerState_C_ExecuteUbergraph_HSURPlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
