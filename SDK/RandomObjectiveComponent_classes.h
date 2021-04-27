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

// BlueprintGeneratedClass RandomObjectiveComponent.RandomObjectiveComponent_C
// 0x0058 (FullSize[0x0158] - InheritedSize[0x0100])
class URandomObjectiveComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bActive;                                                   // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CKPA[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_RandomObject>                     randomObjectList;                                          // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS_RandomList>                       RandomList;                                                // 0x0128(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	bool                                               bInitialize;                                               // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C4YB[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ARandomObjectiveActor_C*                     RandomPatternActor;                                        // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        RandomPattern;                                             // 0x0148(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass RandomObjectiveComponent.RandomObjectiveComponent_C");
		return ptr;
	}



	TArray<int> StartRandomPattern();
	void OnRep_RandomPattern();
	void SameClass(TArray<class AActor*>* ListA, TArray<struct FS_RandomObject>* randomObjectList, bool* Return);
	void ActiveRandomPattern();
	void TryGetRandomObjectiveActor(class ARandomObjectiveActor_C** Output);
	void ActiveRandomList();
	void OnRep_RandomList();
	void SetupList(TArray<struct FS_RandomObject>* randomObjectList, TArray<struct FS_RandomList>* Return);
	void Initialize();
	void ExecuteUbergraph_RandomObjectiveComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
