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

// BlueprintGeneratedClass GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C
// 0x0019 (FullSize[0x04D5] - InheritedSize[0x04BC])
class UGA_WeaponSurvivorBase_C : public UGA_WeaponBase_C
{
public:
	unsigned char                                      UnknownData_ECWE[0x4];                                     // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DistanceAtk;                                               // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlagIsLockLuckyShot;                                       // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_WeaponSurvivorBase.GA_WeaponSurvivorBase_C");
		return ptr;
	}



	void Change(float Percent, bool* Return);
	void SendMeleeDistance();
	void UpdateItem();
	void ExecuteUbergraph_GA_WeaponSurvivorBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
