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

// BlueprintGeneratedClass TrapActorHolyThread.TrapActorHolyThread_C
// 0x0018 (FullSize[0x0450] - InheritedSize[0x0438])
class ATrapActorHolyThread_C : public ATrapActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0438(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        HolyThreadActor;                                           // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass TrapActorHolyThread.TrapActorHolyThread_C");
		return ptr;
	}



	void InitOverride(TArray<class ATrapTargetActor_C*>* Target);
	void ExecuteUbergraph_TrapActorHolyThread(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
