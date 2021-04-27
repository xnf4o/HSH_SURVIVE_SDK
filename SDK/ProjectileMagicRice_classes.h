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

// BlueprintGeneratedClass ProjectileMagicRice.ProjectileMagicRice_C
// 0x001B (FullSize[0x0440] - InheritedSize[0x0425])
class AProjectileMagicRice_C : public AProjectileBase_C
{
public:
	unsigned char                                      UnknownData_87S3[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ProjectileMagicRice.ProjectileMagicRice_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnHitCharacter(class AActor* Actor);
	void ExecuteUbergraph_ProjectileMagicRice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
