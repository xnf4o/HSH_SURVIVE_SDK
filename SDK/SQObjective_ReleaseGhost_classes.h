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

// BlueprintGeneratedClass SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class USQObjective_ReleaseGhost_C : public UQuestObjective_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0038(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FS_PlaceItemSuccess>                 PrimaryAssetIDs;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSuccess;                                                 // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WXJU[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ARitualBase_C*>                       Ceremony;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                SuccessCount;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CKKS[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               RitualState;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SQObjective_ReleaseGhost.SQObjective_ReleaseGhost_C");
		return ptr;
	}



	void MakeDetailArrayHunter(TArray<struct FText>* State, TArray<struct FS_QuestDetail>* Detail);
	void MakeDetailArray(TArray<struct FText>* State, TArray<struct FS_QuestDetail>* Detail);
	void GetQuestDetialsNew(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FS_QuestDetail>* Return);
	void TryGetCeremonyActor(class UGameStatisticComponent_C* GameStatistic, TArray<class ARitualBase_C*>* Ceremony);
	void GetQuestDetails(struct FString* QuestStr);
	void IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess);
	void InitQuest();
	void ExecuteUbergraph_SQObjective_ReleaseGhost(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
