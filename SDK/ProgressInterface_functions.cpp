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

// Function ProgressInterface.ProgressInterface_C.IsLockCameraOnFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressInterface_C::IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.IsLockCameraOnFinish");

	UProgressInterface_C_IsLockCameraOnFinish_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ProgressInterface.ProgressInterface_C.GetFinishSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::GetFinishSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.GetFinishSection");

	UProgressInterface_C_GetFinishSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ProgressInterface.ProgressInterface_C.GetSkilcheckFailedSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::GetSkilcheckFailedSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.GetSkilcheckFailedSection");

	UProgressInterface_C_GetSkilcheckFailedSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ProgressInterface.ProgressInterface_C.GetSkilcheckGreatSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::GetSkilcheckGreatSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.GetSkilcheckGreatSection");

	UProgressInterface_C_GetSkilcheckGreatSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ProgressInterface.ProgressInterface_C.GetSkilcheckPerfectSection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::GetSkilcheckPerfectSection(struct FName* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.GetSkilcheckPerfectSection");

	UProgressInterface_C_GetSkilcheckPerfectSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function ProgressInterface.ProgressInterface_C.OnStartProgressAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::OnStartProgressAction(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.OnStartProgressAction");

	UProgressInterface_C_OnStartProgressAction_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressInterface.ProgressInterface_C.OnCommitSkillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.OnCommitSkillCheck");

	UProgressInterface_C_OnCommitSkillCheck_Params params;
	params.Result = Result;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressInterface.ProgressInterface_C.IsForceSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceSkillCheck               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressInterface_C::IsForceSkillCheck_(bool* bForceSkillCheck)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.IsForceSkillCheck?");

	UProgressInterface_C_IsForceSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bForceSkillCheck != nullptr)
		*bForceSkillCheck = params.bForceSkillCheck;

}


// Function ProgressInterface.ProgressInterface_C.IsNotCancelProgressonMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNotCancel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressInterface_C::IsNotCancelProgressonMove(bool* IsNotCancel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.IsNotCancelProgressonMove");

	UProgressInterface_C_IsNotCancelProgressonMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsNotCancel != nullptr)
		*IsNotCancel = params.IsNotCancel;

}


// Function ProgressInterface.ProgressInterface_C.OnCannotProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::OnCannotProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.OnCannotProgress");

	UProgressInterface_C_OnCannotProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressInterface.ProgressInterface_C.CanUseProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseProgress                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressInterface_C::CanUseProgress(bool* UseProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.CanUseProgress");

	UProgressInterface_C_CanUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseProgress != nullptr)
		*UseProgress = params.UseProgress;

}


// Function ProgressInterface.ProgressInterface_C.GetSpeedSkillCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::GetSpeedSkillCheck(float* Speed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.GetSpeedSkillCheck");

	UProgressInterface_C_GetSpeedSkillCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;

}


// Function ProgressInterface.ProgressInterface_C.IsResetResult?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReset                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressInterface_C::IsResetResult_(bool* IsReset)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.IsResetResult?");

	UProgressInterface_C_IsResetResult__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReset != nullptr)
		*IsReset = params.IsReset;

}


// Function ProgressInterface.ProgressInterface_C.OnStopProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::OnStopProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.OnStopProgress");

	UProgressInterface_C_OnStopProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressInterface.ProgressInterface_C.OnFinishProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::OnFinishProgress(class AHSHCharacterBase* hshcharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.OnFinishProgress");

	UProgressInterface_C_OnFinishProgress_Params params;
	params.hshcharacter = hshcharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProgressInterface.ProgressInterface_C.IsCanSkillCheck?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsImprement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressInterface_C::IsCanSkillCheck_(bool* IsImprement, bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.IsCanSkillCheck?");

	UProgressInterface_C_IsCanSkillCheck__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImprement != nullptr)
		*IsImprement = params.IsImprement;
	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function ProgressInterface.ProgressInterface_C.IsCanHelp?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsCan                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProgressInterface_C::IsCanHelp_(bool* IsCan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.IsCanHelp?");

	UProgressInterface_C_IsCanHelp__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCan != nullptr)
		*IsCan = params.IsCan;

}


// Function ProgressInterface.ProgressInterface_C.GetProgressTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReturnSuccess                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          progressTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProgressInterface_C::GetProgressTime(bool* IsReturnSuccess, float* progressTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProgressInterface.ProgressInterface_C.GetProgressTime");

	UProgressInterface_C_GetProgressTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsReturnSuccess != nullptr)
		*IsReturnSuccess = params.IsReturnSuccess;
	if (progressTime != nullptr)
		*progressTime = params.progressTime;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
