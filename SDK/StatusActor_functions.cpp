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

// Function StatusActor.StatusActor_C.TryGetViewPort
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ViewTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStatusActor_C::TryGetViewPort(class AActor** ViewTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusActor.StatusActor_C.TryGetViewPort");

	AStatusActor_C_TryGetViewPort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewTarget != nullptr)
		*ViewTarget = params.ViewTarget;

}


// Function StatusActor.StatusActor_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AStatusActor_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusActor.StatusActor_C.Timeline_0__FinishedFunc");

	AStatusActor_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusActor.StatusActor_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AStatusActor_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusActor.StatusActor_C.Timeline_0__UpdateFunc");

	AStatusActor_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusActor.StatusActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AStatusActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusActor.StatusActor_C.ReceiveBeginPlay");

	AStatusActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusActor.StatusActor_C.UpdateWidget
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UTexture2D*>      Icons                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> Modes                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_TagStatus>    Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AStatusActor_C::UpdateWidget(const struct FText& Text, TArray<class UTexture2D*> Icons, TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> Modes, TArray<struct FS_TagStatus> Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusActor.StatusActor_C.UpdateWidget");

	AStatusActor_C_UpdateWidget_Params params;
	params.Text = Text;
	params.Icons = Icons;
	params.Modes = Modes;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusActor.StatusActor_C.UpdateParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   TagEffect                      (BlueprintVisible, BlueprintReadOnly, Parm)
void AStatusActor_C::UpdateParticle(class UParticleSystem* Particle, const struct FName& Socket, class AHSHCharacterBase* Character, const struct FGameplayTagContainer& TagEffect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusActor.StatusActor_C.UpdateParticle");

	AStatusActor_C_UpdateParticle_Params params;
	params.Particle = Particle;
	params.Socket = Socket;
	params.Character = Character;
	params.TagEffect = TagEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusActor.StatusActor_C.ExecuteUbergraph_StatusActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStatusActor_C::ExecuteUbergraph_StatusActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StatusActor.StatusActor_C.ExecuteUbergraph_StatusActor");

	AStatusActor_C_ExecuteUbergraph_StatusActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
