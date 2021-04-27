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

// Function PingManagerComponent.PingManagerComponent_C.FoundLongTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundLongTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundLongTime");

	UPingManagerComponent_C_FoundLongTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.CreateHunterSpecter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bShowLongTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::CreateHunterSpecter(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CreateHunterSpecter");

	UPingManagerComponent_C_CreateHunterSpecter_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Target = Target;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bShowLongTime = bShowLongTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;

}


// Function PingManagerComponent.PingManagerComponent_C.HunterSpecterTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::HunterSpecterTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.HunterSpecterTime");

	UPingManagerComponent_C_HunterSpecterTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.FindSoundList
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_PingCase_E_PingCase> Case                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PingSoundList> SoundList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           _2D                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingManagerComponent_C::FindSoundList(TEnumAsByte<E_PingCase_E_PingCase> Case, TArray<struct FS_PingSoundList>* SoundList, bool* Found, class USoundBase** Sound, bool* _2D)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FindSoundList");

	UPingManagerComponent_C_FindSoundList_Params params;
	params.Case = Case;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SoundList != nullptr)
		*SoundList = params.SoundList;
	if (Found != nullptr)
		*Found = params.Found;
	if (Sound != nullptr)
		*Sound = params.Sound;
	if (_2D != nullptr)
		*_2D = params._2D;

}


// Function PingManagerComponent.PingManagerComponent_C.FoundRitualTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundRitualTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundRitualTime");

	UPingManagerComponent_C_FoundRitualTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.CreateFoundRitual
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bShowLongTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::CreateFoundRitual(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CreateFoundRitual");

	UPingManagerComponent_C_CreateFoundRitual_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Target = Target;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bShowLongTime = bShowLongTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;

}


// Function PingManagerComponent.PingManagerComponent_C.IsTargetInActive
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                           ForceFind                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UPingManagerComponent_C::IsTargetInActive(class AActor* Target, TArray<struct FS_PingPair>* ActivePair, bool ForceFind, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.IsTargetInActive");

	UPingManagerComponent_C_IsTargetInActive_Params params;
	params.Target = Target;
	params.ForceFind = ForceFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;


	return params.ReturnValue;
}


// Function PingManagerComponent.PingManagerComponent_C.FoundSoulTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundSoulTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundSoulTime");

	UPingManagerComponent_C_FoundSoulTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.CreateFoundSoul
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bShowLongTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::CreateFoundSoul(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CreateFoundSoul");

	UPingManagerComponent_C_CreateFoundSoul_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Target = Target;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bShowLongTime = bShowLongTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;

}


// Function PingManagerComponent.PingManagerComponent_C.CheckOnlyOnePing
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_PingCase_E_PingCase> Case                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bHaveInArray                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingManagerComponent_C::CheckOnlyOnePing(TEnumAsByte<E_PingCase_E_PingCase> Case, bool* bHaveInArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CheckOnlyOnePing");

	UPingManagerComponent_C_CheckOnlyOnePing_Params params;
	params.Case = Case;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHaveInArray != nullptr)
		*bHaveInArray = params.bHaveInArray;

}


// Function PingManagerComponent.PingManagerComponent_C.CreateFoundPortal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bShowLongTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::CreateFoundPortal(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CreateFoundPortal");

	UPingManagerComponent_C_CreateFoundPortal_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Target = Target;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bShowLongTime = bShowLongTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;

}


// Function PingManagerComponent.PingManagerComponent_C.FoundPortalTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundPortalTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundPortalTime");

	UPingManagerComponent_C_FoundPortalTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.CheckPingCondition_Refactor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHSHCharacterBase*       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  PlayerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  EnemyClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           bIsShouldAdded                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingManagerComponent_C::CheckPingCondition_Refactor(const struct FHitResult& HitResult, bool IsHit_, class AHSHCharacterBase* PlayerCharacter, class UClass* PlayerClass, class UClass* EnemyClass, struct FS_PingPair* S_PingPair, bool* bIsShouldAdded)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CheckPingCondition_Refactor");

	UPingManagerComponent_C_CheckPingCondition_Refactor_Params params;
	params.HitResult = HitResult;
	params.IsHit_ = IsHit_;
	params.PlayerCharacter = PlayerCharacter;
	params.PlayerClass = PlayerClass;
	params.EnemyClass = EnemyClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;
	if (bIsShouldAdded != nullptr)
		*bIsShouldAdded = params.bIsShouldAdded;

}


// Function PingManagerComponent.PingManagerComponent_C.FoundSurvivorTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundSurvivorTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundSurvivorTime");

	UPingManagerComponent_C_FoundSurvivorTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.CreateFoundSurvivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bShowLongTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::CreateFoundSurvivor(class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* Target, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CreateFoundSurvivor");

	UPingManagerComponent_C_CreateFoundSurvivor_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Target = Target;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bShowLongTime = bShowLongTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;

}


// Function PingManagerComponent.PingManagerComponent_C.AddOrUpdatePingActiveTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FS_PingPair             NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bCanSameTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_PingCase_E_PingCase> Case                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bForceUpdateSameCase           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             Output                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::AddOrUpdatePingActiveTarget(TArray<struct FS_PingPair>* ActivePair, const struct FS_PingPair& NewItem, class AActor* Target, bool bCanSameTarget, TEnumAsByte<E_PingCase_E_PingCase> Case, bool bForceUpdateSameCase, struct FS_PingPair* Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.AddOrUpdatePingActiveTarget");

	UPingManagerComponent_C_AddOrUpdatePingActiveTarget_Params params;
	params.NewItem = NewItem;
	params.Target = Target;
	params.bCanSameTarget = bCanSameTarget;
	params.Case = Case;
	params.bForceUpdateSameCase = bForceUpdateSameCase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function PingManagerComponent.PingManagerComponent_C.FillterPingPair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_PingPair>     Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UPingComponent_C*        PingComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PingPair>     OutputArray                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UPingManagerComponent_C::FillterPingPair(TArray<struct FS_PingPair>* Array, class UPingComponent_C* PingComponent, TArray<struct FS_PingPair>* OutputArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FillterPingPair");

	UPingManagerComponent_C_FillterPingPair_Params params;
	params.PingComponent = PingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (OutputArray != nullptr)
		*OutputArray = params.OutputArray;

}


// Function PingManagerComponent.PingManagerComponent_C.AddPingActiveNotPair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class AHSHCharacterBase*       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_PingPair             Output                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::AddPingActiveNotPair(TArray<struct FS_PingPair>* ActivePair, class AHSHCharacterBase* PlayerCharacter, const struct FS_PingPair& NewItem, struct FS_PingPair* Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.AddPingActiveNotPair");

	UPingManagerComponent_C_AddPingActiveNotPair_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function PingManagerComponent.PingManagerComponent_C.RemovePingActiveWithTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingManagerComponent_C::RemovePingActiveWithTarget(TArray<struct FS_PingPair>* ActivePair, class AActor* Target, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.RemovePingActiveWithTarget");

	UPingManagerComponent_C_RemovePingActiveWithTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.FoundTrapTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundTrapTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundTrapTime");

	UPingManagerComponent_C_FoundTrapTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.FoundChestTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundChestTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundChestTime");

	UPingManagerComponent_C_FoundChestTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.MakeS_PingPair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_PingCase_E_PingCase> PingCase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bShowLongTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::MakeS_PingPair(TEnumAsByte<E_PingCase_E_PingCase> PingCase, class AHSHCharacterBase* Character, const struct FVector& Location, class AActor* HitActor, bool IsUpdateLocation, bool bShowLongTime, struct FS_PingPair* S_PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.MakeS_PingPair");

	UPingManagerComponent_C_MakeS_PingPair_Params params;
	params.PingCase = PingCase;
	params.Character = Character;
	params.Location = Location;
	params.HitActor = HitActor;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bShowLongTime = bShowLongTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;

}


// Function PingManagerComponent.PingManagerComponent_C.GetPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UPingManagerComponent_C::GetPlayerName(class AController* Controller, struct FString* PlayerName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.GetPlayerName");

	UPingManagerComponent_C_GetPlayerName_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;

}


// Function PingManagerComponent.PingManagerComponent_C.RemovePingActiveWithCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingManagerComponent_C::RemovePingActiveWithCharacter(TArray<struct FS_PingPair>* ActivePair, class AHSHCharacterBase* Character, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.RemovePingActiveWithCharacter");

	UPingManagerComponent_C_RemovePingActiveWithCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.IsCancel?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                           Cancel_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingManagerComponent_C::IsCancel_(class AHSHCharacterBase* Character, TArray<struct FS_PingPair>* ActivePair, bool* Cancel_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.IsCancel?");

	UPingManagerComponent_C_IsCancel__Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Cancel_ != nullptr)
		*Cancel_ = params.Cancel_;

}


// Function PingManagerComponent.PingManagerComponent_C.FoundItemTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundItemTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundItemTime");

	UPingManagerComponent_C_FoundItemTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.FoundEnemyTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::FoundEnemyTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.FoundEnemyTime");

	UPingManagerComponent_C_FoundEnemyTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.UpdatePair
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PingPair             Pair                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             Return                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::UpdatePair(const struct FS_PingPair& Pair, float DeltaTime, struct FS_PingPair* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.UpdatePair");

	UPingManagerComponent_C_UpdatePair_Params params;
	params.Pair = Pair;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.GotoLocationTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::GotoLocationTime(float* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.GotoLocationTime");

	UPingManagerComponent_C_GotoLocationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function PingManagerComponent.PingManagerComponent_C.TryGetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AHSURPlayerController_C*> ReturnPlayerController         (Parm, OutParm, ZeroConstructor)
void UPingManagerComponent_C::TryGetPlayerController(TArray<class AHSURPlayerController_C*>* ReturnPlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.TryGetPlayerController");

	UPingManagerComponent_C_TryGetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReturnPlayerController != nullptr)
		*ReturnPlayerController = params.ReturnPlayerController;

}


// Function PingManagerComponent.PingManagerComponent_C.NotifyUpdatePing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePing                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void UPingManagerComponent_C::NotifyUpdatePing(TArray<struct FS_PingPair>* ActivePing)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.NotifyUpdatePing");

	UPingManagerComponent_C_NotifyUpdatePing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePing != nullptr)
		*ActivePing = params.ActivePing;

}


// Function PingManagerComponent.PingManagerComponent_C.RemovePingActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FS_PingPair             PingPair                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::RemovePingActive(TArray<struct FS_PingPair>* ActivePair, const struct FS_PingPair& PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.RemovePingActive");

	UPingManagerComponent_C_RemovePingActive_Params params;
	params.PingPair = PingPair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;

}


// Function PingManagerComponent.PingManagerComponent_C.AddPingActive
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class AHSHCharacterBase*       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_PingPair             Output                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::AddPingActive(TArray<struct FS_PingPair>* ActivePair, class AHSHCharacterBase* PlayerCharacter, const struct FS_PingPair& NewItem, struct FS_PingPair* Output)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.AddPingActive");

	UPingManagerComponent_C_AddPingActive_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function PingManagerComponent.PingManagerComponent_C.CheckPingCondition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHSHCharacterBase*       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  PlayerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  EnemyClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PingPair             S_PingPair                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPingManagerComponent_C::CheckPingCondition(const struct FHitResult& HitResult, bool IsHit_, class AHSHCharacterBase* PlayerCharacter, class UClass* PlayerClass, class UClass* EnemyClass, struct FS_PingPair* S_PingPair)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.CheckPingCondition");

	UPingManagerComponent_C_CheckPingCondition_Params params;
	params.HitResult = HitResult;
	params.IsHit_ = IsHit_;
	params.PlayerCharacter = PlayerCharacter;
	params.PlayerClass = PlayerClass;
	params.EnemyClass = EnemyClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (S_PingPair != nullptr)
		*S_PingPair = params.S_PingPair;

}


// Function PingManagerComponent.PingManagerComponent_C.IsInActive
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSHCharacterBase*       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_PingPair>     ActivePair                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UPingManagerComponent_C::IsInActive(class AHSHCharacterBase* PlayerCharacter, TArray<struct FS_PingPair>* ActivePair, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.IsInActive");

	UPingManagerComponent_C_IsInActive_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePair != nullptr)
		*ActivePair = params.ActivePair;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;


	return params.ReturnValue;
}


// Function PingManagerComponent.PingManagerComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
void UPingManagerComponent_C::Initialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.Initialize");

	UPingManagerComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingManagerComponent.PingManagerComponent_C.RequestPing
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           IsHit_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHSHCharacterBase*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  PlayerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  EnemyClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::RequestPing(const struct FHitResult& OutHit, bool IsHit_, class AHSHCharacterBase* Player, class UClass* PlayerClass, class UClass* EnemyClass)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.RequestPing");

	UPingManagerComponent_C_RequestPing_Params params;
	params.OutHit = OutHit;
	params.IsHit_ = IsHit_;
	params.Player = Player;
	params.PlayerClass = PlayerClass;
	params.EnemyClass = EnemyClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingManagerComponent.PingManagerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.ReceiveTick");

	UPingManagerComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingManagerComponent.PingManagerComponent_C.ForceRequestPing
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_PingCase_E_PingCase> PingCase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpdateLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCanSameTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bForceUpdateSameCase           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bPlaySound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bShowLongTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPingManagerComponent_C::ForceRequestPing(class AHSHCharacterBase* Character, TEnumAsByte<E_PingCase_E_PingCase> PingCase, const struct FVector& Location, class AActor* HitActor, float Distance, bool IsUpdateLocation, bool bCanSameTarget, bool bForceUpdateSameCase, bool bPlaySound, bool bShowLongTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.ForceRequestPing");

	UPingManagerComponent_C_ForceRequestPing_Params params;
	params.Character = Character;
	params.PingCase = PingCase;
	params.Location = Location;
	params.HitActor = HitActor;
	params.Distance = Distance;
	params.IsUpdateLocation = IsUpdateLocation;
	params.bCanSameTarget = bCanSameTarget;
	params.bForceUpdateSameCase = bForceUpdateSameCase;
	params.bPlaySound = bPlaySound;
	params.bShowLongTime = bShowLongTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingManagerComponent.PingManagerComponent_C.ServerPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_PingCase_E_PingCase> Case                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::ServerPlaySound(class UClass* CharacterClass, TEnumAsByte<E_PingCase_E_PingCase> Case, const struct FVector& Location)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.ServerPlaySound");

	UPingManagerComponent_C_ServerPlaySound_Params params;
	params.CharacterClass = CharacterClass;
	params.Case = Case;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingManagerComponent.PingManagerComponent_C.ForceRemovePingByTarget
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::ForceRemovePingByTarget(class AActor* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.ForceRemovePingByTarget");

	UPingManagerComponent_C_ForceRemovePingByTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingManagerComponent.PingManagerComponent_C.ForceRemovePingByCharacter
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::ForceRemovePingByCharacter(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.ForceRemovePingByCharacter");

	UPingManagerComponent_C_ForceRemovePingByCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PingManagerComponent.PingManagerComponent_C.ExecuteUbergraph_PingManagerComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPingManagerComponent_C::ExecuteUbergraph_PingManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PingManagerComponent.PingManagerComponent_C.ExecuteUbergraph_PingManagerComponent");

	UPingManagerComponent_C_ExecuteUbergraph_PingManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
