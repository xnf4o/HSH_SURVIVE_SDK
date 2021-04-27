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

// BlueprintGeneratedClass SwitchActorBase.SwitchActorBase_C
// 0x0027 (FullSize[0x06F0] - InheritedSize[0x06C9])
class ASwitchActorBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_P258[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADoorBase_C*                                 Door;                                                      // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SwitchActorBase.SwitchActorBase_C");
		return ptr;
	}



	void Interaction(class AHSHCharacterBase* Character);
	void BndEvt__Door_K2Node_ComponentBoundEvent_1_OnDestroy__DelegateSignature();
	void DisableInteraction();
	void ExecuteUbergraph_SwitchActorBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
