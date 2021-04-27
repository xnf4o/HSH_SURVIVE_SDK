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

// BlueprintGeneratedClass GA_Camera.GA_Camera_C
// 0x0018 (FullSize[0x0468] - InheritedSize[0x0450])
class UGA_Camera_C : public UHSHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass GA_Camera.GA_Camera_C");
		return ptr;
	}



	void UpdateItem();
	void EventReceived_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_7A287AA14C8797A7DF3155A6F43A3133(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Camera(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
