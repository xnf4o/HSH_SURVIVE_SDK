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

// BlueprintGeneratedClass Pickable_SigilScroll.Pickable_SigilScroll_C
// 0x0020 (FullSize[0x07A8] - InheritedSize[0x0788])
class APickable_SigilScroll_C : public APickableItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0788(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASurvivorBase_C*                             Target;                                                    // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass Pickable_SigilScroll.Pickable_SigilScroll_C");
		return ptr;
	}



	void Interaction(class AHSHCharacterBase* Character);
	void SetCollisionResponseInteract(bool IsResponse);
	void ExecuteUbergraph_Pickable_SigilScroll(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
