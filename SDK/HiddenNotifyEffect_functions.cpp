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

// Function HiddenNotifyEffect.HiddenNotifyEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHiddenNotifyEffect_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddenNotifyEffect.HiddenNotifyEffect_C.UserConstructionScript");

	AHiddenNotifyEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddenNotifyEffect.HiddenNotifyEffect_C.Timeline_Alpha__FinishedFunc
// (BlueprintEvent)
void AHiddenNotifyEffect_C::Timeline_Alpha__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddenNotifyEffect.HiddenNotifyEffect_C.Timeline_Alpha__FinishedFunc");

	AHiddenNotifyEffect_C_Timeline_Alpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddenNotifyEffect.HiddenNotifyEffect_C.Timeline_Alpha__UpdateFunc
// (BlueprintEvent)
void AHiddenNotifyEffect_C::Timeline_Alpha__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddenNotifyEffect.HiddenNotifyEffect_C.Timeline_Alpha__UpdateFunc");

	AHiddenNotifyEffect_C_Timeline_Alpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddenNotifyEffect.HiddenNotifyEffect_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*              Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddenNotifyEffect_C::Initialize(float Distance, class ACharacter* Parent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddenNotifyEffect.HiddenNotifyEffect_C.Initialize");

	AHiddenNotifyEffect_C_Initialize_Params params;
	params.Distance = Distance;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddenNotifyEffect.HiddenNotifyEffect_C.PlayAnimation
// (BlueprintCallable, BlueprintEvent)
void AHiddenNotifyEffect_C::PlayAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddenNotifyEffect.HiddenNotifyEffect_C.PlayAnimation");

	AHiddenNotifyEffect_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HiddenNotifyEffect.HiddenNotifyEffect_C.ExecuteUbergraph_HiddenNotifyEffect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHiddenNotifyEffect_C::ExecuteUbergraph_HiddenNotifyEffect(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HiddenNotifyEffect.HiddenNotifyEffect_C.ExecuteUbergraph_HiddenNotifyEffect");

	AHiddenNotifyEffect_C_ExecuteUbergraph_HiddenNotifyEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
