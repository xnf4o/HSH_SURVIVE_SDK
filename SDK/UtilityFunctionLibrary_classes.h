#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UtilityFunctionLibrary.UtilityFunctionLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUtilityFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass UtilityFunctionLibrary.UtilityFunctionLibrary_C");
		return ptr;
	}



	float STATIC_FindDotProduct(class USceneComponent* RootPoint, class USceneComponent* TargetPoint, class UObject* __WorldContext);
	void STATIC_DebugingPrintWithTag(class UObject* WorldContextObject, TEnumAsByte<E_DebugTag_E_DebugTag> Tag, const struct FString& inString, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext);
	void STATIC_DebugingResultHSURGamemode(class AController* Controller, class UObject* __WorldContext);
	void STATIC_DebugingPrint(class UObject* WorldContextObject, const struct FString& Tag, const struct FString& inString, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext);
	void STATIC_GetSaveManager(class UObject* __WorldContext, class USaveGameManager_C** SaveManager, bool* IsValid);
	void STATIC_IsChance(float Percent, class UObject* __WorldContext, bool* Return);
	void STATIC_StringArrayToPrimaryAsset(const struct FPrimaryAssetType& Primary_Asset_Type, TArray<struct FString>* StringArray, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* Return);
	void STATIC_PrimaryAssetsToStringArray(TArray<struct FPrimaryAssetId>* PrimaryAssetsID, class UObject* __WorldContext, TArray<struct FString>* Return);
	void STATIC_IsBehideWall_Location(const struct FVector& Start, class AActor* Target, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, class UObject* __WorldContext, bool* IsHitWall, struct FHitResult* OutHit);
	void STATIC_IsBehideWall(class AActor* Owner, class AActor* Target, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, class UObject* __WorldContext, bool* IsHitWall, struct FHitResult* OutHit);
	void STATIC_SettingPostprocess(class UCameraComponent* Camera, TArray<struct FWeightedBlendable>* Array, class UObject* __WorldContext);
	void STATIC_GetTouchState(TEnumAsByte<InputCore_ETouchIndex> FingerIndex, class APawn* Pawn, class UObject* __WorldContext, struct FVector2D* Location2D, bool* bIsCurrentlyPressed);
	int STATIC_RandomIntegerExclude(int Min, int Max, TArray<int>* ExcludeNumbers, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
