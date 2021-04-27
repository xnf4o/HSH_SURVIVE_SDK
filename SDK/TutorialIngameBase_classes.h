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

// BlueprintGeneratedClass TutorialIngameBase.TutorialIngameBase_C
// 0x0099 (FullSize[0x00C9] - InheritedSize[0x0030])
class UTutorialIngameBase_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               PreviousTutorialEvent;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               CurrentTutorialEvent;                                      // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Timer;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TMYU[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_TutorialEvent                            TutorialEvent;                                             // 0x0068(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QYGU[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  DataTable;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimerEndTime;                                              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WI73[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnShowTutorial;                                            // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHideTutorial;                                            // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<ETutorialEventState_ETutorialEventState> State;                                                     // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass TutorialIngameBase.TutorialIngameBase_C");
		return ptr;
	}



	void IsDeprecate(const struct FName& EventName, bool* bDeprecate);
	void DebugList();
	void ShowTutorial();
	void NextTutorialEvent(bool* bIsNext);
	void UpdateCurrentEvent();
	void UpdateTutorialEvent(float DeltaTime);
	void AssignTutorialEvent(const struct FName& EventName, bool* Success);
	void CheckTutorialEvent(const struct FName& EventName, bool* bSuccess);
	void Tick(float DeltaTime);
	void ExecuteUbergraph_TutorialIngameBase(int EntryPoint);
	void OnHideTutorial__DelegateSignature();
	void OnShowTutorial__DelegateSignature(const struct FText& Header, const struct FText& Description, float Duration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
