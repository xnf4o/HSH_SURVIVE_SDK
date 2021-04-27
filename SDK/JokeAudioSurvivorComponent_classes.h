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

// BlueprintGeneratedClass JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UJokeAudioSurvivorComponent_C : public UJokeAudioComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0170(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass JokeAudioSurvivorComponent.JokeAudioSurvivorComponent_C");
		return ptr;
	}



	void OnCheckingEvent(TEnumAsByte<HSHSurvivor_EJokeEvent> Event);
	void ResetIdleEvent();
	void ReceiveBeginPlay();
	void OnTakeDamage_Event();
	void OnActionUseItem_Event();
	void OnChasingEnable_Event();
	void OnFailResult_Event();
	void OnHunterScaned_Event();
	void OnRitaulSuccess_Event(int State);
	void OnActionAttack_Event();
	void OnSeeAnyOneChanged_Event(int Number);
	void OnInteractionStart_Event(bool bIsProgress);
	void OnInteractionDone_Event();
	void ExecuteUbergraph_JokeAudioSurvivorComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
