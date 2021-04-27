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

// BlueprintGeneratedClass BP_MainMenuPawn.BP_MainMenuPawn_C
// 0x0029 (FullSize[0x03C1] - InheritedSize[0x0398])
class ABP_MainMenuPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AWidgetMainMenuManager_C*                    WidgetMainMenuManager;                                     // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockKey;                                                  // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_MainMenuPawn.BP_MainMenuPawn_C");
		return ptr;
	}



	void OnResponse_E6B110DB4700C67DD9702A90885225E8(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void PressAnyKeys();
	void ReceiveBeginPlay();
	void OnConfirmServerOffline();
	void OnConfirmVersion();
	void TryAgainCheckVersionAgain();
	void ExecuteUbergraph_BP_MainMenuPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
