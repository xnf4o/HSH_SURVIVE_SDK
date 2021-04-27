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

// BlueprintGeneratedClass SoundControllerAmbient.SoundControllerAmbient_C
// 0x0040 (FullSize[0x0390] - InheritedSize[0x0350])
class ASoundControllerAmbient_C : public ASoundControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AAmbientSound*>                       AmbientSounds;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class USoundAttenuation*                           AttenuationSetting;                                        // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                               MainAmbientSounds;                                         // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SeletedAmbientSound;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               bActive;                                                   // 0x0384(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_OUYN[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDelayVariant;                                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDelayVariant;                                           // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SoundControllerAmbient.SoundControllerAmbient_C");
		return ptr;
	}



	void OnRep_bActive();
	float GetRandomVariant(float MainValue);
	void OnRep_SeletedAmbientSound();
	void PlaySound();
	void RandomAmbientSound();
	void MulticastPauseSound();
	void MulticastStopSound();
	void StopSound();
	void MulticastPlaySound();
	void ClientStopSound();
	void ExecuteUbergraph_SoundControllerAmbient(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
