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

// Function InteractFunctionLibrary.InteractFunctionLibrary_C.FormatDescriptionWeapon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Return                         (Parm, OutParm)
void UInteractFunctionLibrary_C::STATIC_FormatDescriptionWeapon(const struct FText& InText, class UObject* __WorldContext, struct FText* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractFunctionLibrary.InteractFunctionLibrary_C.FormatDescriptionWeapon");

	UInteractFunctionLibrary_C_FormatDescriptionWeapon_Params params;
	params.InText = InText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function InteractFunctionLibrary.InteractFunctionLibrary_C.FormatDescriptionWeaponState
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Return                         (Parm, OutParm)
void UInteractFunctionLibrary_C::STATIC_FormatDescriptionWeaponState(const struct FText& InText, int State, class UObject* __WorldContext, struct FText* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractFunctionLibrary.InteractFunctionLibrary_C.FormatDescriptionWeaponState");

	UInteractFunctionLibrary_C_FormatDescriptionWeaponState_Params params;
	params.InText = InText;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function InteractFunctionLibrary.InteractFunctionLibrary_C.IsCanUseItem
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   NotifyText                     (Parm, OutParm)
void UInteractFunctionLibrary_C::STATIC_IsCanUseItem(class UClass* Condition, class AHSHCharacterBase* hshcharacter, class UObject* __WorldContext, bool* CanUse, struct FText* NotifyText)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function InteractFunctionLibrary.InteractFunctionLibrary_C.IsCanUseItem");

	UInteractFunctionLibrary_C_IsCanUseItem_Params params;
	params.Condition = Condition;
	params.hshcharacter = hshcharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
	if (NotifyText != nullptr)
		*NotifyText = params.NotifyText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
