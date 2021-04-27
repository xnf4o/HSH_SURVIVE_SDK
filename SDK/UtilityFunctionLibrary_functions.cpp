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

// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.FindDotProduct
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         RootPoint                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         TargetPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UUtilityFunctionLibrary_C::STATIC_FindDotProduct(class USceneComponent* RootPoint, class USceneComponent* TargetPoint, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.FindDotProduct");

	UUtilityFunctionLibrary_C_FindDotProduct_Params params;
	params.RootPoint = RootPoint;
	params.TargetPoint = TargetPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.DebugingPrintWithTag
// (Static, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_DebugTag_E_DebugTag> Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUtilityFunctionLibrary_C::STATIC_DebugingPrintWithTag(class UObject* WorldContextObject, TEnumAsByte<E_DebugTag_E_DebugTag> Tag, const struct FString& inString, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.DebugingPrintWithTag");

	UUtilityFunctionLibrary_C_DebugingPrintWithTag_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.inString = inString;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.DebugingResultHSURGamemode
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUtilityFunctionLibrary_C::STATIC_DebugingResultHSURGamemode(class AController* Controller, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.DebugingResultHSURGamemode");

	UUtilityFunctionLibrary_C_DebugingResultHSURGamemode_Params params;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.DebugingPrint
// (Static, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUtilityFunctionLibrary_C::STATIC_DebugingPrint(class UObject* WorldContextObject, const struct FString& Tag, const struct FString& inString, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.DebugingPrint");

	UUtilityFunctionLibrary_C_DebugingPrint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.inString = inString;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.GetSaveManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGameManager_C*      SaveManager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUtilityFunctionLibrary_C::STATIC_GetSaveManager(class UObject* __WorldContext, class USaveGameManager_C** SaveManager, bool* IsValid)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.GetSaveManager");

	UUtilityFunctionLibrary_C_GetSaveManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveManager != nullptr)
		*SaveManager = params.SaveManager;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.IsChance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUtilityFunctionLibrary_C::STATIC_IsChance(float Percent, class UObject* __WorldContext, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.IsChance");

	UUtilityFunctionLibrary_C_IsChance_Params params;
	params.Percent = Percent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.StringArrayToPrimaryAsset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetType       Primary_Asset_Type             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         StringArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> Return                         (Parm, OutParm, ZeroConstructor)
void UUtilityFunctionLibrary_C::STATIC_StringArrayToPrimaryAsset(const struct FPrimaryAssetType& Primary_Asset_Type, TArray<struct FString>* StringArray, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.StringArrayToPrimaryAsset");

	UUtilityFunctionLibrary_C_StringArrayToPrimaryAsset_Params params;
	params.Primary_Asset_Type = Primary_Asset_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.PrimaryAssetsToStringArray
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPrimaryAssetId> PrimaryAssetsID                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         Return                         (Parm, OutParm, ZeroConstructor)
void UUtilityFunctionLibrary_C::STATIC_PrimaryAssetsToStringArray(TArray<struct FPrimaryAssetId>* PrimaryAssetsID, class UObject* __WorldContext, TArray<struct FString>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.PrimaryAssetsToStringArray");

	UUtilityFunctionLibrary_C_PrimaryAssetsToStringArray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrimaryAssetsID != nullptr)
		*PrimaryAssetsID = params.PrimaryAssetsID;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.IsBehideWall_Location
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHitWall                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UUtilityFunctionLibrary_C::STATIC_IsBehideWall_Location(const struct FVector& Start, class AActor* Target, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, class UObject* __WorldContext, bool* IsHitWall, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.IsBehideWall_Location");

	UUtilityFunctionLibrary_C_IsBehideWall_Location_Params params;
	params.Start = Start;
	params.Target = Target;
	params.DrawDebugType = DrawDebugType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHitWall != nullptr)
		*IsHitWall = params.IsHitWall;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.IsBehideWall
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHitWall                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UUtilityFunctionLibrary_C::STATIC_IsBehideWall(class AActor* Owner, class AActor* Target, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, class UObject* __WorldContext, bool* IsHitWall, struct FHitResult* OutHit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.IsBehideWall");

	UUtilityFunctionLibrary_C_IsBehideWall_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.DrawDebugType = DrawDebugType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHitWall != nullptr)
		*IsHitWall = params.IsHitWall;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.SettingPostprocess
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUtilityFunctionLibrary_C::STATIC_SettingPostprocess(class UCameraComponent* Camera, TArray<struct FWeightedBlendable>* Array, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.SettingPostprocess");

	UUtilityFunctionLibrary_C_SettingPostprocess_Params params;
	params.Camera = Camera;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.GetTouchState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<InputCore_ETouchIndex> FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Location2D                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsCurrentlyPressed            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUtilityFunctionLibrary_C::STATIC_GetTouchState(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, class APawn* Pawn, class UObject* __WorldContext, struct FVector2D* Location2D, bool* bIsCurrentlyPressed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.GetTouchState");

	UUtilityFunctionLibrary_C_GetTouchState_Params params;
	params.FingerIndex = FingerIndex;
	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location2D != nullptr)
		*Location2D = params.Location2D;
	if (bIsCurrentlyPressed != nullptr)
		*bIsCurrentlyPressed = params.bIsCurrentlyPressed;

}


// Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.RandomIntegerExclude
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int>                    ExcludeNumbers                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UUtilityFunctionLibrary_C::STATIC_RandomIntegerExclude(int Min, int Max, TArray<int>* ExcludeNumbers, class UObject* __WorldContext)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UtilityFunctionLibrary.UtilityFunctionLibrary_C.RandomIntegerExclude");

	UUtilityFunctionLibrary_C_RandomIntegerExclude_Params params;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExcludeNumbers != nullptr)
		*ExcludeNumbers = params.ExcludeNumbers;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
