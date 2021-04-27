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

// BlueprintGeneratedClass MathLibrary.MathLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMathLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass MathLibrary.MathLibrary_C");
		return ptr;
	}



	void STATIC_IsPointInCanvas(const struct FVector2D& Location, const struct FVector2D& Canvas, class UObject* __WorldContext, bool* Return);
	bool STATIC_IsPointInBox2D(const struct FVector2D& Point, const struct FVector2D& Origin, const struct FVector2D& BoxExtent, class UObject* __WorldContext);
	float STATIC_OffsetDegrees_360_(float Degrees, float Offset, class UObject* __WorldContext);
	void STATIC_Convert180to360(float Degrees, class UObject* __WorldContext, float* Return);
	void STATIC_FindRadians(const struct FVector& From, const struct FVector& To, class UObject* __WorldContext, float* Radians);
	void STATIC_FindRadians2D(const struct FVector2D& From, const struct FVector2D& To, class UObject* __WorldContext, float* Radians);
	bool STATIC_IsPointInRectangle2D(const struct FVector2D& Point, const struct FVector2D& Origin, const struct FVector2D& Bound, class UObject* __WorldContext);
	void STATIC_FindEdgeLocationRadians(float xRadius, float yRadius, float Radians, class UObject* __WorldContext, struct FVector2D* Intersect);
	void STATIC_FindEdgeLocationDegrees(float xRadius, float yRadius, float Degrees, class UObject* __WorldContext, struct FVector2D* Intersect);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
