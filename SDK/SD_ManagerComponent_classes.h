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

// BlueprintGeneratedClass SD_ManagerComponent.SD_ManagerComponent_C
// 0x0022 (FullSize[0x0122] - InheritedSize[0x0100])
class USD_ManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AHSURGameState_C*                            GameState;                                                 // 0x0110(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInSuddenDeathMode;                                        // 0x0118(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CBX6[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerOffset;                                               // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInitialize;                                               // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsSuddenDeathActive;                                      // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SD_ManagerComponent.SD_ManagerComponent_C");
		return ptr;
	}



	bool IsRitualCompleteAll();
	void OpenAllGate(bool AutoActive);
	void OpenAllChest();
	void Buff();
	void SpawnSuddenDeathEffect(class AActor* Target);
	void PlayBGM();
	void Initialize();
	void ReceiveTick(float DeltaSeconds);
	void EnterSuddenMode();
	void OnCharacterChanged();
	void EnterSuddenModeOnePersonLeft();
	void ExecuteUbergraph_SD_ManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
