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

// BlueprintGeneratedClass GA_WeaponHunterBase.GA_WeaponHunterBase_C
// 0x0024 (FullSize[0x04E0] - InheritedSize[0x04BC])
class UGA_WeaponHunterBase_C : public UGA_WeaponBase_C
{
public:
	unsigned char                                      UnknownData_3RWM[0x4];                                     // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DistanceAtkLight;                                          // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceAtkHeavy;                                          // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WidthAtkHeavy;                                             // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WidthAtkLight;                                             // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_WeaponHunterBase.GA_WeaponHunterBase_C");
		return ptr;
	}



	void SendMeleeDistance();
	void OnPlayMontage();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_WeaponHunterBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
