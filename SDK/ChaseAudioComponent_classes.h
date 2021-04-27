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

// BlueprintGeneratedClass ChaseAudioComponent.ChaseAudioComponent_C
// 0x0064 (FullSize[0x019C] - InheritedSize[0x0138])
class UChaseAudioComponent_C : public UChaseAudioComponentNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0138(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AudioChase_Loop_Cache;                                     // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioChase_Begin_Cache;                                    // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeIn;                                                    // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOut;                                                   // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioChase_Heart_Cache;                                    // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHeartBeatVol;                                           // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EyeLenght;                                                 // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EyeBound;                                                  // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeartBeatVol;                                           // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTriggerChasing;                                          // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTriggerEscape;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              ChaseTime;                                                 // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ChaseAudioComponent.ChaseAudioComponent_C");
		return ptr;
	}



	void CheckEyeBoundRate(float* Value);
	void AddDecoyActivity();
	void IsCharacterValid(bool* Return);
	bool IsHunterSeen();
	void CheckHeartEnd();
	void Debug();
	void OnChasing();
	void OnEscape();
	void ChasingHandle();
	void EscapeHandle();
	void ReceiveTick(float DeltaSeconds);
	void OnInitialize();
	void ExecuteUbergraph_ChaseAudioComponent(int EntryPoint);
	void OnTriggerEscape__DelegateSignature();
	void OnTriggerChasing__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
