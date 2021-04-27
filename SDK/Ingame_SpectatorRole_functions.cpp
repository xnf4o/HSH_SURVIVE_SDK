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

// Function Ingame_SpectatorRole.Ingame_SpectatorRole_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UIngame_SpectatorRole_C::GetText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SpectatorRole.Ingame_SpectatorRole_C.GetText_1");

	UIngame_SpectatorRole_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Ingame_SpectatorRole.Ingame_SpectatorRole_C.UpdateUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UISpectator          Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SpectatorRole_C::UpdateUI(const struct FS_UISpectator& Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SpectatorRole.Ingame_SpectatorRole_C.UpdateUI");

	UIngame_SpectatorRole_C_UpdateUI_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_SpectatorRole.Ingame_SpectatorRole_C.ExecuteUbergraph_Ingame_SpectatorRole
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_SpectatorRole_C::ExecuteUbergraph_Ingame_SpectatorRole(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_SpectatorRole.Ingame_SpectatorRole_C.ExecuteUbergraph_Ingame_SpectatorRole");

	UIngame_SpectatorRole_C_ExecuteUbergraph_Ingame_SpectatorRole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
