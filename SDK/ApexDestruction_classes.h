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

// Class ApexDestruction.DestructibleActor
// 0x0020 (FullSize[0x0358] - InheritedSize[0x0338])
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                     // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAffectNavigation : 1;                                     // 0x0340(0x0001) BIT_FIELD (Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7QYH[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnActorFracture;                                           // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return ptr;
	}



};

// Class ApexDestruction.DestructibleComponent
// 0x00E0 (FullSize[0x07E0] - InheritedSize[0x0700])
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData_MOZN[0x8];                                     // 0x0700(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFractureEffectOverride : 1;                               // 0x0708(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRFW[0x7];                                     // 0x0709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFractureEffect>                     FractureEffects;                                           // 0x0710(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bEnableHardSleeping;                                       // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IMGF[0x3];                                     // 0x0721(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LargeChunkThreshold;                                       // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ST7[0x10];                                    // 0x0728(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnComponentFracture;                                       // 0x0738(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y5SJ[0x98];                                    // 0x0748(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}



	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};

// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFractureMaterial                           FractureMaterialDesc;                                      // 0x0034(0x0024) (Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ECFP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             VoronoiSites;                                              // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OriginalSubmeshCount;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A0WT[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                           // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWWE[0x28];                                    // 0x0098(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}



};

// Class ApexDestruction.DestructibleMesh
// 0x00A0 (FullSize[0x03F8] - InheritedSize[0x0358])
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                             // 0x0358(0x0088) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>                     FractureEffects;                                           // 0x03E0(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YNQ[0x8];                                     // 0x03F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
