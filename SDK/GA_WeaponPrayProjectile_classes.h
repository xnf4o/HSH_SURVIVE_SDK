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

// BlueprintGeneratedClass GA_WeaponPrayProjectile.GA_WeaponPrayProjectile_C
// 0x0017 (FullSize[0x04E8] - InheritedSize[0x04D1])
class UGA_WeaponPrayProjectile_C : public UGA_ProjectileBase_C
{
public:
	unsigned char                                      UnknownData_KWPD[0x7];                                     // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_WeaponPrayProjectile.GA_WeaponPrayProjectile_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_WeaponPrayProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
