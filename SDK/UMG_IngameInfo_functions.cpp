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

// Function UMG_IngameInfo.UMG_IngameInfo_C.GetOwnerRole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_IngameInfo_C::GetOwnerRole(TEnumAsByte<E_Role_E_Role>* Role)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngameInfo.UMG_IngameInfo_C.GetOwnerRole");

	UUMG_IngameInfo_C_GetOwnerRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Role != nullptr)
		*Role = params.Role;

}


// Function UMG_IngameInfo.UMG_IngameInfo_C.Active
// (BlueprintCallable, BlueprintEvent)
void UUMG_IngameInfo_C::Active()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngameInfo.UMG_IngameInfo_C.Active");

	UUMG_IngameInfo_C_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IngameInfo.UMG_IngameInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_IngameInfo_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngameInfo.UMG_IngameInfo_C.PreConstruct");

	UUMG_IngameInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IngameInfo.UMG_IngameInfo_C.Deactive
// (BlueprintCallable, BlueprintEvent)
void UUMG_IngameInfo_C::Deactive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngameInfo.UMG_IngameInfo_C.Deactive");

	UUMG_IngameInfo_C_Deactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IngameInfo.UMG_IngameInfo_C.ExecuteUbergraph_UMG_IngameInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_IngameInfo_C::ExecuteUbergraph_UMG_IngameInfo(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMG_IngameInfo.UMG_IngameInfo_C.ExecuteUbergraph_UMG_IngameInfo");

	UUMG_IngameInfo_C_ExecuteUbergraph_UMG_IngameInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
