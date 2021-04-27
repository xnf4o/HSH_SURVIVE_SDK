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

// BlueprintGeneratedClass OutlineManagerComponent.OutlineManagerComponent_C
// 0x0031 (FullSize[0x0131] - InheritedSize[0x0100])
class UOutlineManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bInitialize;                                               // 0x0110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_52L7[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AuraHunterTimer;                                           // 0x0114(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               hunter;                                                    // 0x0118(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_OutlineScanInfo>                  AuraInfo;                                                  // 0x0120(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	bool                                               bForceUpdate;                                              // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass OutlineManagerComponent.OutlineManagerComponent_C");
		return ptr;
	}



	void OnUpdateReplicate();
	void IsPlayerHavePerkClairvoyant(bool* bHave);
	void OnRep_AuraInfo();
	void FindCharacter(class AHSHCharacterBase* hshcharacter, bool* bIsFindSuccess, int* Index);
	void OnRemoveAurainfo(class AHSHCharacterBase* hshcharacter);
	void UpdateAura();
	void RequestShowSurvivorAura(class ASurvivorBase_C* survivor, float Timer, bool bIsCanHide);
	void HideSurvivorAura(class ASurvivorBase_C* survivor);
	void RefreshSurvivorAura();
	void ShowSurvivorAura(class ASurvivorBase_C* survivor);
	void RequestHideSurvivorAura(class ASurvivorBase_C* survivor);
	void ShowHunterAura(class AHunterBase_C* hunter);
	void MulticastHunterAura(bool bShow, class AHunterBase_C* hunter);
	void RefreshHunterAura(class AHunterBase_C* hunter);
	void ShowHunterAuraWithTime(class AHunterBase_C* hunter, float Time);
	void Initialize();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_OutlineManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
