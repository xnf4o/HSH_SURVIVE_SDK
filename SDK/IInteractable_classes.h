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

// BlueprintGeneratedClass IInteractable.IInteractable_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIInteractable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IInteractable.IInteractable_C");
		return ptr;
	}



	void GetSnapIKLocation(bool* bIsSnap, TEnumAsByte<Enum_IKHand_Enum_IKHand>* IKTarget, struct FVector* IKRight, struct FVector* IKLeft);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void InteractSnapLocation(class AHSHCharacterBase* hshcharacter, bool* bIsSnapLocation, struct FVector* Location, struct FRotator* Rotation, struct FVector* LookAtLocation, bool* bIsNotAutoCalculateHeight);
	void GetInteractMontage(class ACharacter* Character, class UAnimMontage** Montage, float* PlayRate, struct FName* StartSectionName);
	void Interaction(class AHSHCharacterBase* Character);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
