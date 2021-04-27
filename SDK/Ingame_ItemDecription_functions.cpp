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

// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UIngame_ItemDecription_C::Refresh(const struct FText& Header, const struct FText& Description)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ItemDecription.Ingame_ItemDecription_C.Refresh");

	UIngame_ItemDecription_C_Refresh_Params params;
	params.Header = Header;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ItemDecription_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ItemDecription.Ingame_ItemDecription_C.Tick");

	UIngame_ItemDecription_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Activate
// (BlueprintCallable, BlueprintEvent)
void UIngame_ItemDecription_C::Activate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ItemDecription.Ingame_ItemDecription_C.Activate");

	UIngame_ItemDecription_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
void UIngame_ItemDecription_C::Deactivate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ItemDecription.Ingame_ItemDecription_C.Deactivate");

	UIngame_ItemDecription_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_ItemDecription_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ItemDecription.Ingame_ItemDecription_C.Construct");

	UIngame_ItemDecription_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_ItemDecription.Ingame_ItemDecription_C.ExecuteUbergraph_Ingame_ItemDecription
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_ItemDecription_C::ExecuteUbergraph_Ingame_ItemDecription(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_ItemDecription.Ingame_ItemDecription_C.ExecuteUbergraph_Ingame_ItemDecription");

	UIngame_ItemDecription_C_ExecuteUbergraph_Ingame_ItemDecription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
