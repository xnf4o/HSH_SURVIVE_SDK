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

// BlueprintGeneratedClass GA_PA_HunterPrayPhaseShift.GA_PA_HunterPrayPhaseShift_C
// 0x0018 (FullSize[0x0468] - InheritedSize[0x0450])
class UGA_PA_HunterPrayPhaseShift_C : public UGA_PA_HunterBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_PA_HunterPrayPhaseShift.GA_PA_HunterPrayPhaseShift_C");
		return ptr;
	}



	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_PA_HunterPrayPhaseShift(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
