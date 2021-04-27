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

// BlueprintGeneratedClass BloodSeekComponent.BloodSeekComponent_C
// 0x00BC (FullSize[0x01FC] - InheritedSize[0x0140])
class UBloodSeekComponent_C : public UBloodSeekComponentNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0140(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Step;                                                      // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StepTimeFrequency;                                         // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StepBloodSpeed;                                            // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BeforeTImeDecrease;                                        // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecreaseRate;                                              // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S3IX[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              TransparentActors;                                         // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AU6Q[0x3];                                     // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SeenAlpha;                                                 // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    EaseFunction;                                              // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_016M[0x3];                                     // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendExp;                                                  // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedSeenAlpha;                                            // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BeforeTimeAlpha;                                           // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               OwnerHunter;                                               // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioChaseCache;                                           // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABloodTrailActor_C*                          BloodTrailActor;                                           // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, class ABloodTrailActor_C*>     TrailList;                                                 // 0x01A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              SurvivorReceiveEyeBound;                                   // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BloodSeekComponent.BloodSeekComponent_C");
		return ptr;
	}



	bool CheckIsHunterSeen(class AHSHCharacterSurvivorBase** survivor);
	void AudioChaseHandle();
	void SetChaseAlpha(float Alpha);
	void GetSeenAlpha(float* Result);
	void DecreaseSeenAlpha(float DeltaTime);
	void IncreaseSeenAlpha(float DeltaTime);
	void FullfilBloodStack();
	bool NearCamera(class AActor* Actor, class USceneComponent* Scene, float Offset);
	void DebugValue();
	void GetNextStepTime(float* Time);
	void OnCharacterCountChange();
	void FindSurvivors();
	void UpdateSeenValue(float DeltaTime);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateUnseenValue(float DeltaTime);
	void MulticastCharacterCountChange();
	void ExecuteUbergraph_BloodSeekComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
