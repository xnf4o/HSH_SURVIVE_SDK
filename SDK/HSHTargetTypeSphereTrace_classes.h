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

// BlueprintGeneratedClass HSHTargetTypeSphereTrace.HSHTargetTypeSphereTrace_C
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UHSHTargetTypeSphereTrace_C : public UHSHTargetType
{
public:
	struct FVector                                     OffsetFromActor;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SphereRadius;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceLength;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4NCL[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ObjectTypes;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CheckZOffset;                                              // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CULA[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IgnoreActorZoffset;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSHTargetTypeSphereTrace.HSHTargetTypeSphereTrace_C");
		return ptr;
	}



	void GetTargets(class AHSHCharacterBase* TargetingCharacter, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
