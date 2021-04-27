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

// BlueprintGeneratedClass GA_ImmuneHunterBase.GA_ImmuneHunterBase_C
// 0x0040 (FullSize[0x0490] - InheritedSize[0x0450])
class UGA_ImmuneHunterBase_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  ImmuneSound;                                               // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairSound>                        PairSounds;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_ImmuneHunterBase.GA_ImmuneHunterBase_C");
		return ptr;
	}



	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ImmuneHunterBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
