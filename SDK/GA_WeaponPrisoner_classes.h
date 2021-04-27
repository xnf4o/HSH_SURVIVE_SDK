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

// BlueprintGeneratedClass GA_WeaponPrisoner.GA_WeaponPrisoner_C
// 0x0010 (FullSize[0x04F0] - InheritedSize[0x04E0])
class UGA_WeaponPrisoner_C : public UGA_WeaponHunterBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_WeaponPrisoner.GA_WeaponPrisoner_C");
		return ptr;
	}



	void OnPlayMontage();
	void ExecuteUbergraph_GA_WeaponPrisoner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
