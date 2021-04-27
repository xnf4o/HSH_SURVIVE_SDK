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

// BlueprintGeneratedClass Telephone.Telephone_C
// 0x0037 (FullSize[0x0700] - InheritedSize[0x06C9])
class ATelephone_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_H0YK[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio;                                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCanInteract;                                            // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BNAC[0x7];                                     // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerOnEnd;                                                // 0x06F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass Telephone.Telephone_C");
		return ptr;
	}



	void EnableInteraction();
	void DisableInteraction();
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void OnHunterScan();
	void Interaction(class AHSHCharacterBase* Character);
	void ReceiveBeginPlay();
	void OnTimerEnd();
	void MulticastOnScan();
	void MulticastOnTimerEnd();
	void ShowHunter(class ACharacter* hunter);
	void ExecuteUbergraph_Telephone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
