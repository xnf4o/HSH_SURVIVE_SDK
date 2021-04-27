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

// BlueprintGeneratedClass OutlineComponent.OutlineComponent_C
// 0x0061 (FullSize[0x0161] - InheritedSize[0x0100])
class UOutlineComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              actorslist;                                                // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UCameraComponent*                            Camera;                                                    // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              FillterListClass;                                          // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Distance;                                                  // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isInit;                                                    // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WZTL[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             pointRoot;                                                 // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              degree;                                                    // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HalfHeight;                                                // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractComponent_C*                        InteractComponent;                                         // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInteractionBase_C*                          InteractionActor;                                          // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsUseOutlineForInteraction_;                              // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass OutlineComponent.OutlineComponent_C");
		return ptr;
	}



	void IsChildClassOfArray_(class UObject* TestActor, TArray<class UClass*>* ClassFillter, bool* IsChildClass);
	void IsIsUseOutlineForInteraction_(bool* bIsUseOutlineForInteraction_);
	void CheckInteractActor();
	void FillterClass(class UClass* ClassTarget, class UClass* ClassFillter, bool* IsPass_);
	void GetOverlapActors(class USphereComponent* Collision);
	void RemoveFromArray(class AActor* Actor);
	void FillterHideOutline(class AActor* Actor);
	void FillterShowOutline(class AActor* Actor);
	void RefreshActorsList();
	void AddedToArray(class AActor* Actor);
	bool FindInHeightRange(class USceneComponent* Target, class USceneComponent* Root);
	void CheckMethodNearCharacter();
	void FillterActorsArray(TArray<class AActor*>* In, TArray<class AActor*>* Out);
	void GetNearCenterOfViewport(class UCameraComponent* Camera, class AActor* Actor, float* NearValue);
	void FindLenght(class USceneComponent* ActorA, class USceneComponent* ActorB, float* Lenght);
	void Uninitialized();
	void EnableUIOnObject(class UObject* Object);
	void DisableUIOnObject(class UObject* Object);
	void VisibleIndicator(bool IsShow_, class UObject* Target);
	void VisibleOutline(bool IsShow_, class AActor* Target);
	void CheckingInterectionInCamera();
	void Initialize(class UCameraComponent* Camera, class USceneComponent* pointRoot, class USphereComponent* Collision);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_OutlineComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
