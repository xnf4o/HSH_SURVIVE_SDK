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

// BlueprintGeneratedClass SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USQObjective_DebugAlwaySuccess_C : public UQuestObjective_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SQObjective_DebugAlwaySuccess.SQObjective_DebugAlwaySuccess_C");
		return ptr;
	}



	void GetQuestDetialsNew(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FS_QuestDetail>* Return);
	void GetQuestDetails(struct FString* QuestStr);
	void IsQuestComplete(class UGameStatisticComponent_C* GameStatisticComponent, class AController* Controller, bool* IsSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
