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

// Function Ingame_IntroduceScene.Ingame_IntroduceScene_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIngame_IntroduceScene_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_IntroduceScene.Ingame_IntroduceScene_C.Construct");

	UIngame_IntroduceScene_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_IntroduceScene.Ingame_IntroduceScene_C.ExecuteUbergraph_Ingame_IntroduceScene
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_IntroduceScene_C::ExecuteUbergraph_Ingame_IntroduceScene(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_IntroduceScene.Ingame_IntroduceScene_C.ExecuteUbergraph_Ingame_IntroduceScene");

	UIngame_IntroduceScene_C_ExecuteUbergraph_Ingame_IntroduceScene_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_IntroduceScene.Ingame_IntroduceScene_C.OnAnimationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngame_IntroduceScene_C::OnAnimationEnd__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_IntroduceScene.Ingame_IntroduceScene_C.OnAnimationEnd__DelegateSignature");

	UIngame_IntroduceScene_C_OnAnimationEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
