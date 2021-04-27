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

// BlueprintGeneratedClass UMGLibrary.UMGLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUMGLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass UMGLibrary.UMGLibrary_C");
		return ptr;
	}



	void STATIC_GetKeyImage(TArray<struct FInputActionKeyMapping>* ActionMapping, const struct FSlateBrush& DefualtBrush, class UObject* __WorldContext, struct FSlateBrush* Brush);
	void STATIC_GetSineFrequency(float Seed, float Speed, class UObject* __WorldContext, float* Float);
	void STATIC_IsWorldLocationOffScreen(class APlayerController* Controller, const struct FVector& Location, float EdgePercent, class UObject* __WorldContext, bool* IsOffscreen);
	void STATIC_CalculateWorldLocationToEdgeScreenPosition(class APlayerController* Controller, const struct FVector& WorldLocation, float EdgePercent, class UObject* __WorldContext, bool* IsOffscreen, struct FVector2D* ScreenLocation, float* Rotation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
