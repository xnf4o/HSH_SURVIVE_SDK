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

// BlueprintGeneratedClass Pickable_CameraPerk.Pickable_CameraPerk_C
// 0x0010 (FullSize[0x07B0] - InheritedSize[0x07A0])
class APickable_CameraPerk_C : public APickable_WeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass Pickable_CameraPerk.Pickable_CameraPerk_C");
		return ptr;
	}



	void Interaction(class AHSHCharacterBase* Character);
	void ExecuteUbergraph_Pickable_CameraPerk(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
