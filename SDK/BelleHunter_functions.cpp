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

// Function BelleHunter.BelleHunter_C.GetHeavyAtkGE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  GameplayEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::GetHeavyAtkGE(class UClass** GameplayEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.GetHeavyAtkGE");

	ABelleHunter_C_GetHeavyAtkGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayEffect != nullptr)
		*GameplayEffect = params.GameplayEffect;

}


// Function BelleHunter.BelleHunter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.UserConstructionScript");

	ABelleHunter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.ResetCombo
// (BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::ResetCombo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.ResetCombo");

	ABelleHunter_C_ResetCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.ComboAttackSave
// (BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::ComboAttackSave()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.ComboAttackSave");

	ABelleHunter_C_ComboAttackSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.PlayAttackAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::PlayAttackAnimation(int AttackType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.PlayAttackAnimation");

	ABelleHunter_C_PlayAttackAnimation_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABelleHunter_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABelleHunter_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABelleHunter_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.ReceiveBeginPlay");

	ABelleHunter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.PlayDestroyItemMontage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::PlayDestroyItemMontage()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.PlayDestroyItemMontage");

	ABelleHunter_C_PlayDestroyItemMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.OnDisableAttackCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::OnDisableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.OnDisableAttackCollision");

	ABelleHunter_C_OnDisableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.ReceiveTick");

	ABelleHunter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.OnEnableAttackCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::OnEnableAttackCollision()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.OnEnableAttackCollision");

	ABelleHunter_C_OnEnableAttackCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.SendMeleeDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::SendMeleeDistance(float Distance, float Width)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.SendMeleeDistance");

	ABelleHunter_C_SendMeleeDistance_Params params;
	params.Distance = Distance;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.MulticastEnterHiddenEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::MulticastEnterHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.MulticastEnterHiddenEffect");

	ABelleHunter_C_MulticastEnterHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.MulticastExitHiddenEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::MulticastExitHiddenEffect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.MulticastExitHiddenEffect");

	ABelleHunter_C_MulticastExitHiddenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.SetBodyHalfHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::SetBodyHalfHeight(float ParameterValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.SetBodyHalfHeight");

	ABelleHunter_C_SetBodyHalfHeight_Params params;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.SetMaterialsAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::SetMaterialsAlpha(float ParameterValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.SetMaterialsAlpha");

	ABelleHunter_C_SetMaterialsAlpha_Params params;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.SetMaterialsColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InLinearColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::SetMaterialsColor(const struct FLinearColor& InLinearColor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.SetMaterialsColor");

	ABelleHunter_C_SetMaterialsColor_Params params;
	params.InLinearColor = InLinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.ExecuteUbergraph_BelleHunter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABelleHunter_C::ExecuteUbergraph_BelleHunter(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.ExecuteUbergraph_BelleHunter");

	ABelleHunter_C_ExecuteUbergraph_BelleHunter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BelleHunter.BelleHunter_C.Attacking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABelleHunter_C::Attacking__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BelleHunter.BelleHunter_C.Attacking__DelegateSignature");

	ABelleHunter_C_Attacking__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
