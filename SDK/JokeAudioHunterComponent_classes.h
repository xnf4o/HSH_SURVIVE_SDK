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

// BlueprintGeneratedClass JokeAudioHunterComponent.JokeAudioHunterComponent_C
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UJokeAudioHunterComponent_C : public UJokeAudioComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0170(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass JokeAudioHunterComponent.JokeAudioHunterComponent_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnActionAttack_Event();
	void OnReciveDamaged_Event();
	void OnActionImmuntity_Event();
	void OnActionInteraction_Event();
	void OnEnterInvisible_Event();
	void OnExitInvisible_Event();
	void OnActionActivePerk_Event();
	void ResetIdleEvent();
	void OnScaned_Event();
	void OnRitualDone_Event(int State);
	void OnSeeAnyOneChanged_Event(int Number);
	void OnCheckingEvent(TEnumAsByte<HSHSurvivor_EJokeEvent> Event);
	void ExecuteUbergraph_JokeAudioHunterComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
