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

// Function GameplayAbilityLibrary.GameplayAbilityLibrary_C.HavePunkPerk
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bHave                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayAbilityLibrary_C::STATIC_HavePunkPerk(class AHSHCharacterBase* Character, class UObject* __WorldContext, bool* bHave)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayAbilityLibrary.GameplayAbilityLibrary_C.HavePunkPerk");

	UGameplayAbilityLibrary_C_HavePunkPerk_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHave != nullptr)
		*bHave = params.bHave;

}


// Function GameplayAbilityLibrary.GameplayAbilityLibrary_C.IsHaveTagQuery
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery       Owning_Tag_Query               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbilityLibrary_C::STATIC_IsHaveTagQuery(class AActor* Actor, const struct FGameplayTagQuery& Owning_Tag_Query, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayAbilityLibrary.GameplayAbilityLibrary_C.IsHaveTagQuery");

	UGameplayAbilityLibrary_C_IsHaveTagQuery_Params params;
	params.Actor = Actor;
	params.Owning_Tag_Query = Owning_Tag_Query;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
