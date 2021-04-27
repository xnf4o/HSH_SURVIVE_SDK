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

// BlueprintGeneratedClass HolyThreadActor.HolyThreadActor_C
// 0x00BC (FullSize[0x03F4] - InheritedSize[0x0338])
class AHolyThreadActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                            SplineRope;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         SplineMeshes;                                              // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          MaterialRope;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Scale;                                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ESplineMeshAxis>                Axis;                                                      // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CastShadow;                                                // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J8NJ[0x6];                                     // 0x0372(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      LineCurve;                                                 // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumberOfLineCycle;                                         // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                               RandomStream;                                              // 0x038C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn)
	float                                              MinCurve;                                                  // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxCurve;                                                  // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRandom;                                                  // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ODCB[0x3];                                     // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        LineSegment;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Round;                                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JFSJ[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    CacheRedRopeMaterial;                                      // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ARitualRope_C*>                       SplineGenActors;                                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FVector>                             MainPointer;                                               // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<struct FVector>                             GenPointer;                                                // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RandomPointArea;                                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HolyThreadActor.HolyThreadActor_C");
		return ptr;
	}



	void InitialPosition();
	void SetMesh();
	void GetEndPosition(int LineIndex, struct FVector* EndPosition, int* DebugPosition);
	void GetStartPosition(int LineIndex, struct FVector* StartPosition, int* DebugPosition);
	void InitialCuve(bool IsRandom);
	void CreateCuve(int LineIndex);
	void UserConstructionScript();
	void OnTracerInteract(class APawn* Pawn, class UPrimitiveComponent* HitComponent);
	void OnTracerEnter(class APawn* Pawn, class UPrimitiveComponent* HitComponent);
	void OnTracerLeave(class APawn* Pawn, class UPrimitiveComponent* HitComponent);
	void OnTracerChangeHitComponent(class APawn* Pawn, class UPrimitiveComponent* PreviousComponent, class UPrimitiveComponent* CurrentComponent);
	void GenerateCurve();
	void GenerateThread(TArray<struct FVector> MainPointer, const struct FRandomStream& RandomStream);
	void ExecuteUbergraph_HolyThreadActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
