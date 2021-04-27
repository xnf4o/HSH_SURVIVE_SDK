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

// BlueprintGeneratedClass AIFunctionLibrary.AIFunctionLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass AIFunctionLibrary.AIFunctionLibrary_C");
		return ptr;
	}



	void STATIC_ShouldOpenDoor_(class ADoorBase_C* Door, class APawn* Pawn, class UObject* __WorldContext, bool* ShouldOpen_);
	struct FVector STATIC_GetForwardLocation(class AActor* Actor, float Distance, class UObject* __WorldContext);
	bool STATIC_AISurvivorFindInteract_SphereOverlap(class AActor* Owner, float SphereRadius, class UObject* __WorldContext, TArray<class AActor*>* OutActors);
	bool STATIC_IsAISurvivorCanOpenDoorMulti(bool IsHit, TArray<class AActor*>* Object, class APawn* Pawn, class UObject* __WorldContext, class ADoorBase_C** HitActor);
	bool STATIC_AISurvivorFindDoorOverlap(class AActor* Owner, class UObject* __WorldContext, TArray<class AActor*>* OutHit);
	bool STATIC_IsAISurvivorCanRitualActor(bool IsHit, class AActor* Result, class UObject* __WorldContext, class ARitual_ReleaseGhost_C** HitActor);
	bool STATIC_AISurvivorFindRitualOverlap(class AActor* Owner, class UObject* __WorldContext, TArray<class AActor*>* OutHit);
	void STATIC_AdjustLocationToFloor(class ACharacter* Character, class UObject* __WorldContext);
	bool STATIC_AISurvivorFindInteractMulti(class AActor* Owner, class UObject* __WorldContext, TArray<struct FHitResult>* OutHit);
	bool STATIC_IsAISurvivorCanRitual(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class ARitual_ReleaseGhost_C** HitActor);
	bool STATIC_IsAISurvivorCanOpenDoor(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class ADoorBase_C** HitActor);
	bool STATIC_IsAISurvivorCanInteraction(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class AActor** HitActor);
	bool STATIC_AISurvivorFindInteract(class AActor* Owner, class UObject* __WorldContext, struct FHitResult* OutHit);
	bool STATIC_IsAIHunterCanInteraction(bool IsHit, const struct FHitResult& Result, class UObject* __WorldContext, class AActor** HitActor);
	bool STATIC_AIHunterFindInteract(class APawn* Owner, class UObject* __WorldContext, struct FHitResult* OutHit);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
