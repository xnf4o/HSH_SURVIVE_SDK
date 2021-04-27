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

// BlueprintGeneratedClass SQObjective_LastManStand.SQObjective_LastManStand_C
// 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
class USQObjective_LastManStand_C : public UQuestObjective_C
{
public:
	bool                                               IsSuccess;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SQObjective_LastManStand.SQObjective_LastManStand_C");
		return ptr;
	}



	void GetQuestDetails(struct FString* QuestStr);
	void IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
