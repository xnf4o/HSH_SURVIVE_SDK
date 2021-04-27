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

// BlueprintGeneratedClass InteractComponent.InteractComponent_C
// 0x0069 (FullSize[0x0169] - InheritedSize[0x0100])
class UInteractComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DistanceMobile;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DotValueRange;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HalfSize;                                                  // 0x0118(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_17WB[0x2];                                     // 0x0126(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DrawTime;                                                  // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F50U[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             RootComponent;                                             // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             CameraComponent;                                           // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCanInteract_;                                            // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UQCH[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AInteractionBase_C*                          InteractionActor;                                          // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistancePC;                                                // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_InteractState_E_InteractState>       State;                                                     // 0x0154(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QUVV[0x3];                                     // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStateChanged;                                            // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass InteractComponent.InteractComponent_C");
		return ptr;
	}



	void ChangeComponent(class USceneComponent* RootComponent, class USceneComponent* CameraComponent);
	void GetSnapLocation(class AActor** Actor);
	bool LineTrace(class USceneComponent* Root, class USceneComponent* Camera, float Distance, struct FHitResult* OutHit);
	void ChangeState(TEnumAsByte<E_InteractState_E_InteractState> State);
	void IsNotBehideConstruct(const struct FVector& Start, class USceneComponent* Target, TArray<class AActor*> ActorsToIgnore, bool* Value);
	void FindDistanceComponent(class USceneComponent* Start, class USceneComponent* Target, float* Distance);
	float FindDotProductComponent(class USceneComponent* RootPoint, class USceneComponent* TargetPoint);
	void FindInteractionActorNearCenterOfCamera(class USceneComponent* Root, class USceneComponent* Camera, class AInteractionBase_C** InteractionActor, bool* IsCanInteract_);
	void GetInteractionActor(class AInteractionBase_C** InteractionActor, bool* IsCanInteract_);
	float FindDotProduct(class USceneComponent* RootPoint, class AActor* TargetActor);
	void FindInteractionActor(class USceneComponent* Root, class USceneComponent* Camera, class AInteractionBase_C** InteractionActor, bool* IsCanInteract_);
	void Initialize(class UUserWidget* HUD, class USceneComponent* RootComponent, class USceneComponent* CameraComponent);
	void Deinitialize();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_InteractComponent(int EntryPoint);
	void OnStateChanged__DelegateSignature(TEnumAsByte<E_InteractState_E_InteractState> OldState, TEnumAsByte<E_InteractState_E_InteractState> NewState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
