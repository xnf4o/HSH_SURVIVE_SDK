﻿#pragma once

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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return ptr;
	}



	void STATIC_SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, ProceduralMeshComponent_EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
	void STATIC_GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	void STATIC_CreateGridMeshWelded(int NumX, int NumY, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing);
	void STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);
	void STATIC_CreateGridMeshSplit(int NumX, int NumY, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing);
	void STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void STATIC_ConvertQuadToTriangles(TArray<int>* Triangles, int Vert0, int Vert1, int Vert2, int Vert3);
	void STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0070 (FullSize[0x0610] - InheritedSize[0x05A0])
class UProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_AY0T[0x8];                                     // 0x05A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseComplexAsSimpleCollision;                              // 0x05A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAsyncCooking;                                          // 0x05A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8ZD[0x6];                                     // 0x05AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  ProcMeshBodySetup;                                         // 0x05B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                          // 0x05B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                      // 0x05C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                            LocalBounds;                                               // 0x05D8(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K5H8[0x4];                                     // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                       // 0x05F8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BC4F[0x8];                                     // 0x0608(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}



	void UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	void UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int SectionIndex);
	int GetNumSections();
	void CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	void CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	void ClearMeshSection(int SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
