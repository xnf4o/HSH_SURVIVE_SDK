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

// Function UMGLibrary.UMGLibrary_C.GetKeyImage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FInputActionKeyMapping> ActionMapping                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FSlateBrush             DefualtBrush                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             Brush                          (Parm, OutParm)
void UUMGLibrary_C::STATIC_GetKeyImage(TArray<struct FInputActionKeyMapping>* ActionMapping, const struct FSlateBrush& DefualtBrush, class UObject* __WorldContext, struct FSlateBrush* Brush)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMGLibrary.UMGLibrary_C.GetKeyImage");

	UUMGLibrary_C_GetKeyImage_Params params;
	params.DefualtBrush = DefualtBrush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionMapping != nullptr)
		*ActionMapping = params.ActionMapping;
	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function UMGLibrary.UMGLibrary_C.GetSineFrequency
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Seed                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Float                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMGLibrary_C::STATIC_GetSineFrequency(float Seed, float Speed, class UObject* __WorldContext, float* Float)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMGLibrary.UMGLibrary_C.GetSineFrequency");

	UUMGLibrary_C_GetSineFrequency_Params params;
	params.Seed = Seed;
	params.Speed = Speed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;

}


// Function UMGLibrary.UMGLibrary_C.IsWorldLocationOffScreen
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EdgePercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOffscreen                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMGLibrary_C::STATIC_IsWorldLocationOffScreen(class APlayerController* Controller, const struct FVector& Location, float EdgePercent, class UObject* __WorldContext, bool* IsOffscreen)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMGLibrary.UMGLibrary_C.IsWorldLocationOffScreen");

	UUMGLibrary_C_IsWorldLocationOffScreen_Params params;
	params.Controller = Controller;
	params.Location = Location;
	params.EdgePercent = EdgePercent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOffscreen != nullptr)
		*IsOffscreen = params.IsOffscreen;

}


// Function UMGLibrary.UMGLibrary_C.CalculateWorldLocationToEdgeScreenPosition
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EdgePercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOffscreen                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               ScreenLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMGLibrary_C::STATIC_CalculateWorldLocationToEdgeScreenPosition(class APlayerController* Controller, const struct FVector& WorldLocation, float EdgePercent, class UObject* __WorldContext, bool* IsOffscreen, struct FVector2D* ScreenLocation, float* Rotation)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function UMGLibrary.UMGLibrary_C.CalculateWorldLocationToEdgeScreenPosition");

	UUMGLibrary_C_CalculateWorldLocationToEdgeScreenPosition_Params params;
	params.Controller = Controller;
	params.WorldLocation = WorldLocation;
	params.EdgePercent = EdgePercent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOffscreen != nullptr)
		*IsOffscreen = params.IsOffscreen;
	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
