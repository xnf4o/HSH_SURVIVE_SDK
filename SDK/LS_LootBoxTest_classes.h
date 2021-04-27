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

// BlueprintGeneratedClass LS_LootBoxTest.SequenceDirector_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USequenceDirector_C : public ULevelSequenceDirector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LS_LootBoxTest.SequenceDirector_C");
		return ptr;
	}



	void SpawnExplodeParticle(class ALootBoxObject_C* Target);
	void SpawnBeginParticle(class ALootBoxObject_C* Target);
	void SetJarAlpha(class ALootBoxObject_C* Target);
	void ResetPose(class ALootBoxObject_C* Target);
	void PlayLootBoxAnim(class ALootBoxObject_C* Target);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
