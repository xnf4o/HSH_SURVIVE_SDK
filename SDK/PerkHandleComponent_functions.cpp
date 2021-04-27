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

// Function PerkHandleComponent.PerkHandleComponent_C.ResetCountTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
void UPerkHandleComponent_C::ResetCountTag(const struct FGameplayTag& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.ResetCountTag");

	UPerkHandleComponent_C_ResetCountTag_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.AddedCountTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
void UPerkHandleComponent_C::AddedCountTag(const struct FGameplayTag& Key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.AddedCountTag");

	UPerkHandleComponent_C_AddedCountTag_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.GetCountTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UPerkHandleComponent_C::GetCountTag(const struct FGameplayTag& Key, int* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.GetCountTag");

	UPerkHandleComponent_C_GetCountTag_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function PerkHandleComponent.PerkHandleComponent_C.TryApplyAura
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AuraData             S_AuraData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleComponent_C::TryApplyAura(class AHSHCharacterBase* Owner, class AHSHCharacterBase* Target, const struct FS_AuraData& S_AuraData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.TryApplyAura");

	UPerkHandleComponent_C_TryApplyAura_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.S_AuraData = S_AuraData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterHasTagContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   Owning_Tag_Container           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleComponent_C::IsCharacterHasTagContainer(class AHSHCharacterBase* hshcharacter, const struct FGameplayTagContainer& Owning_Tag_Container, bool* Has)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterHasTagContainer");

	UPerkHandleComponent_C_IsCharacterHasTagContainer_Params params;
	params.hshcharacter = hshcharacter;
	params.Owning_Tag_Container = Owning_Tag_Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;

}


// Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterInDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleComponent_C::IsCharacterInDistance(class AHSHCharacterBase* Owner, class AHSHCharacterBase* Target, float Distance, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterInDistance");

	UPerkHandleComponent_C_IsCharacterInDistance_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterHasTagQuery
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       hshcharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery       Owning_Tag_Query               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FActiveGameplayEffectHandle> UPerkHandleComponent_C::IsCharacterHasTagQuery(class AHSHCharacterBase* hshcharacter, const struct FGameplayTagQuery& Owning_Tag_Query, bool* Has)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterHasTagQuery");

	UPerkHandleComponent_C_IsCharacterHasTagQuery_Params params;
	params.hshcharacter = hshcharacter;
	params.Owning_Tag_Query = Owning_Tag_Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;


	return params.ReturnValue;
}


// Function PerkHandleComponent.PerkHandleComponent_C.GetCharactersWithTag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<class AHSHCharacterBase*> CharactersWithTag              (Parm, OutParm, ZeroConstructor)
void UPerkHandleComponent_C::GetCharactersWithTag(const struct FGameplayTag& Tag, TArray<class AHSHCharacterBase*>* CharactersWithTag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.GetCharactersWithTag");

	UPerkHandleComponent_C_GetCharactersWithTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharactersWithTag != nullptr)
		*CharactersWithTag = params.CharactersWithTag;

}


// Function PerkHandleComponent.PerkHandleComponent_C.CheckPerkAura
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleComponent_C::CheckPerkAura()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.CheckPerkAura");

	UPerkHandleComponent_C_CheckPerkAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.CheckPerkHandleTag
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FPerkHandleData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkHandleComponent_C::CheckPerkHandleTag(const struct FGameplayTag& Tag, const struct FPerkHandleData& Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.CheckPerkHandleTag");

	UPerkHandleComponent_C_CheckPerkHandleTag_Params params;
	params.Tag = Tag;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.OnFindCharactersWithTag
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FPerkHandleData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AHSHCharacterBase*> Characters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UPerkHandleComponent_C::OnFindCharactersWithTag(const struct FGameplayTag& Tag, const struct FPerkHandleData& Data, TArray<class AHSHCharacterBase*> Characters)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.OnFindCharactersWithTag");

	UPerkHandleComponent_C_OnFindCharactersWithTag_Params params;
	params.Tag = Tag;
	params.Data = Data;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.ReceiveTick");

	UPerkHandleComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UPerkHandleComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.ReceiveBeginPlay");

	UPerkHandleComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.FindAllCharacter
// (BlueprintCallable, BlueprintEvent)
void UPerkHandleComponent_C::FindAllCharacter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.FindAllCharacter");

	UPerkHandleComponent_C_FindAllCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PerkHandleComponent.PerkHandleComponent_C.ExecuteUbergraph_PerkHandleComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkHandleComponent_C::ExecuteUbergraph_PerkHandleComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PerkHandleComponent.PerkHandleComponent_C.ExecuteUbergraph_PerkHandleComponent");

	UPerkHandleComponent_C_ExecuteUbergraph_PerkHandleComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
