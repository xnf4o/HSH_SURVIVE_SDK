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

// BlueprintGeneratedClass InteractionSigilScroll.InteractionSigilScroll_C
// 0x0067 (FullSize[0x0730] - InheritedSize[0x06C9])
class AInteractionSigilScroll_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_WA20[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      IndicatorCharacter;                                        // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CacheIndicatorLocation;                                    // 0x06F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B6IK[0x4];                                     // 0x06FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnShowOutline;                                             // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHideOutline;                                             // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDestroyedByHunter;                                       // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass InteractionSigilScroll.InteractionSigilScroll_C");
		return ptr;
	}



	void GetDestructible(bool* Destructable);
	bool IsObjectReverse(class AActor* Actor);
	void InverseXAxis(const struct FVector& Location, struct FVector* Return);
	void SetDestructible(bool Destructible);
	void OnHunterChangeHiddenState(bool InHiddenState);
	void ShowIndicator(class AActor* PlayerCharacter);
	void ReceiveTick(float DeltaSeconds);
	void HideIndicator(class AActor* PlayerCharacter);
	void ReceiveBeginPlay();
	void ShowOutline(class AActor* PlayerCharacter);
	void HideOutline(class AActor* PlayerCharacter);
	void DestroyedByHunter(float Damage, class AHunterBase_C* DestroyedBy);
	void ExecuteUbergraph_InteractionSigilScroll(int EntryPoint);
	void OnDestroyedByHunter__DelegateSignature(float Damage, class AHunterBase_C* DestroyedBy);
	void OnHideOutline__DelegateSignature();
	void OnShowOutline__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
