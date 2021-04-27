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

// Function HSURLobbyGS.HSURLobbyGS_C.OnRep_UnloadMapName
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyGS_C::OnRep_UnloadMapName()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.OnRep_UnloadMapName");

	AHSURLobbyGS_C_OnRep_UnloadMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyGS.HSURLobbyGS_C.OnRep_LoadMapName
// (BlueprintCallable, BlueprintEvent)
void AHSURLobbyGS_C::OnRep_LoadMapName()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.OnRep_LoadMapName");

	AHSURLobbyGS_C_OnRep_LoadMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyGS.HSURLobbyGS_C.LoadMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyGS_C::LoadMap(const struct FName& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.LoadMap");

	AHSURLobbyGS_C_LoadMap_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyGS.HSURLobbyGS_C.UnloadMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyGS_C::UnloadMap(const struct FName& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.UnloadMap");

	AHSURLobbyGS_C_UnloadMap_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyGS.HSURLobbyGS_C.ServerLoadMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyGS_C::ServerLoadMap(const struct FName& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.ServerLoadMap");

	AHSURLobbyGS_C_ServerLoadMap_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyGS.HSURLobbyGS_C.ServerUnloadMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyGS_C::ServerUnloadMap(const struct FName& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.ServerUnloadMap");

	AHSURLobbyGS_C_ServerUnloadMap_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyGS.HSURLobbyGS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSURLobbyGS_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.ReceiveBeginPlay");

	AHSURLobbyGS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSURLobbyGS.HSURLobbyGS_C.ExecuteUbergraph_HSURLobbyGS
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSURLobbyGS_C::ExecuteUbergraph_HSURLobbyGS(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSURLobbyGS.HSURLobbyGS_C.ExecuteUbergraph_HSURLobbyGS");

	AHSURLobbyGS_C_ExecuteUbergraph_HSURLobbyGS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
