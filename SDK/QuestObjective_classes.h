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

// BlueprintGeneratedClass QuestObjective.QuestObjective_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UQuestObjective_C : public UQuestObjectiveBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass QuestObjective.QuestObjective_C");
		return ptr;
	}



	void InitQuest();
	void GetQuestDetialsNew(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FS_QuestDetail>* Return);
	void GetQuestDetails(struct FString* QuestStr);
	void IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
