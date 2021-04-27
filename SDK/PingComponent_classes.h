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

// BlueprintGeneratedClass PingComponent.PingComponent_C
// 0x0068 (FullSize[0x0168] - InheritedSize[0x0100])
class UPingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      PlayerClass;                                               // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EnemyClass;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDrawDebugTrace>                DebugDrawType;                                             // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CQV6[0x2];                                     // 0x0126(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSURHUD_C*                                  HUD;                                                       // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PingPair>                         PingReplicate;                                             // 0x0130(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	bool                                               CanSendSound;                                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7TPZ[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerHandle_EnableSendSound;                               // 0x0148(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsPossess;                                                // 0x0150(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B790[0x7];                                     // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPingUpdated;                                             // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PingComponent.PingComponent_C");
		return ptr;
	}



	void OnRep_PingReplicate();
	void FillterArray(TArray<struct FS_PingPair>* Array, TArray<struct FS_PingPair>* OutArray);
	void TryGetHUD(class AHSURHUD_C** HUD);
	bool LineTrace(class USceneComponent* Scene, float Distance, struct FHitResult* OutHit);
	void RequestPing();
	void ServerRequestPing(const struct FHitResult& OutHit, bool IsHit_);
	void ReceiveTick(float DeltaSeconds);
	void ForceRequestPing(class AHSHCharacterBase* Character, TEnumAsByte<E_PingCase_E_PingCase> PingCase, const struct FVector& Location, class AActor* HitActor, float Distance, bool IsUpdateLocation, bool bCanSameTarget, bool bForceUpdateSameCase, bool bPlaySound);
	void PlaySound(class UClass* CharacterClass, class USoundBase* Sound, const struct FVector& Location, bool _2D);
	void EnbleSendSound();
	void SendSound();
	void ExecuteUbergraph_PingComponent(int EntryPoint);
	void OnPingUpdated__DelegateSignature(TArray<struct FS_PingPair>* Pings);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
