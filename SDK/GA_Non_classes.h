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

// BlueprintGeneratedClass GA_Non.GA_Non_C
// 0x002C (FullSize[0x047C] - InheritedSize[0x0450])
class UGA_Non_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PairAnimation>                    PairAnimation;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Cost;                                                      // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_Non.GA_Non_C");
		return ptr;
	}



	void CalculateMagnitude(float Durability, float Max, float* Magnitude);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Non(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
