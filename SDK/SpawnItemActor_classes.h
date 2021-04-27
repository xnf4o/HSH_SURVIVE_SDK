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

// BlueprintGeneratedClass SpawnItemActor.SpawnItemActor_C
// 0x0049 (FullSize[0x0381] - InheritedSize[0x0338])
class ASpawnItemActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      SpawnClass;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsDone;                                                   // 0x0360(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_ZCRT[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text;                                                      // 0x0368(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TEnumAsByte<E_SpawnType_E_SpawnType>               SpawnType;                                                 // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SpawnItemActor.SpawnItemActor_C");
		return ptr;
	}



	void DestroySelf();
	void OnRep_bIsDone();
	void OnRep_Text();
	void OnRep_SpawnClass();
	void UserConstructionScript();
	void NoneItem();
	void SpawnItem(class UClass* Class);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpawnItemActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
