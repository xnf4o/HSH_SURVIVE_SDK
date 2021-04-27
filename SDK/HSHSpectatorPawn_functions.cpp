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

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.GetterViewTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::GetterViewTarget(class APawn** Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.GetterViewTarget");

	AHSHSpectatorPawn_C_GetterViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.FilterSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AHSHCharacterBase*> Characters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AHSHCharacterBase*> Return                         (Parm, OutParm, ZeroConstructor)
void AHSHSpectatorPawn_C::FilterSurvivor(TArray<class AHSHCharacterBase*>* Characters, TArray<class AHSHCharacterBase*>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.FilterSurvivor");

	AHSHSpectatorPawn_C_FilterSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.RefreshCharacterList
// (Public, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::RefreshCharacterList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.RefreshCharacterList");

	AHSHSpectatorPawn_C_RefreshCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.OnRep_NetUpdate
// (BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::OnRep_NetUpdate()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.OnRep_NetUpdate");

	AHSHSpectatorPawn_C_OnRep_NetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.UpdateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::UpdateLocation(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.UpdateLocation");

	AHSHSpectatorPawn_C_UpdateLocation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterSpectator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::EnterSpectator(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterSpectator");

	AHSHSpectatorPawn_C_EnterSpectator_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::UpdateButton()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.UpdateButton");

	AHSHSpectatorPawn_C_UpdateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_E_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpActEvt_E_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_E_K2Node_InputKeyEvent_5");

	AHSHSpectatorPawn_C_InpActEvt_E_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_E_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpActEvt_E_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_E_K2Node_InputKeyEvent_4");

	AHSHSpectatorPawn_C_InpActEvt_E_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpActEvt_Q_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_3");

	AHSHSpectatorPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpActEvt_Q_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_2");

	AHSHSpectatorPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_2");

	AHSHSpectatorPawn_C_InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_1");

	AHSHSpectatorPawn_C_InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1");

	AHSHSpectatorPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InitSpectator
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::InitSpectator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InitSpectator");

	AHSHSpectatorPawn_C_InitSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.NextSpectator
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::NextSpectator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.NextSpectator");

	AHSHSpectatorPawn_C_NextSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.PreviousSpectator
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::PreviousSpectator()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.PreviousSpectator");

	AHSHSpectatorPawn_C_PreviousSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ToggleChangeMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::ToggleChangeMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.ToggleChangeMode");

	AHSHSpectatorPawn_C_ToggleChangeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterFreeMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::EnterFreeMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterFreeMode");

	AHSHSpectatorPawn_C_EnterFreeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterSpectatorMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::EnterSpectatorMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterSpectatorMode");

	AHSHSpectatorPawn_C_EnterSpectatorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.QuitGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::QuitGame()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.QuitGame");

	AHSHSpectatorPawn_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	AHSHSpectatorPawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	AHSHSpectatorPawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	AHSHSpectatorPawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");

	AHSHSpectatorPawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveTick");

	AHSHSpectatorPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHSHSpectatorPawn_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveBeginPlay");

	AHSHSpectatorPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceivePossessed");

	AHSHSpectatorPawn_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveUnpossessed");

	AHSHSpectatorPawn_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnableClientInput
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::EnableClientInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnableClientInput");

	AHSHSpectatorPawn_C_EnableClientInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.DisableClientInput
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::DisableClientInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.DisableClientInput");

	AHSHSpectatorPawn_C_DisableClientInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.OnCharacterChange
// (BlueprintCallable, BlueprintEvent)
void AHSHSpectatorPawn_C::OnCharacterChange()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.OnCharacterChange");

	AHSHSpectatorPawn_C_OnCharacterChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ExecuteUbergraph_HSHSpectatorPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHSHSpectatorPawn_C::ExecuteUbergraph_HSHSpectatorPawn(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHSpectatorPawn.HSHSpectatorPawn_C.ExecuteUbergraph_HSHSpectatorPawn");

	AHSHSpectatorPawn_C_ExecuteUbergraph_HSHSpectatorPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
