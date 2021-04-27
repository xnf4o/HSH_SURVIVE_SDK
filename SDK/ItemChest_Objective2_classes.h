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

// BlueprintGeneratedClass ItemChest_Objective2.ItemChest_Objective2_C
// 0x0048 (FullSize[0x0800] - InheritedSize[0x07B8])
class AItemChest_Objective2_C : public AItemChest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Aura;                                                      // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_MERGED_HolyRopeCustom;                                  // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Plane1;                                                    // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Plane;                                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cube;                                                      // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Plane2;                                                    // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ItemChest_Objective2.ItemChest_Objective2_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void MulticastOpenChest();
	void OpenChest();
	void MulticastCloseChest();
	void CloseChest();
	void ExecuteUbergraph_ItemChest_Objective2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
