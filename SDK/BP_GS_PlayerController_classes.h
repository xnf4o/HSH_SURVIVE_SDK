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

// BlueprintGeneratedClass BP_GS_PlayerController.BP_GS_PlayerController_C
// 0x0030 (FullSize[0x06C0] - InheritedSize[0x0690])
class ABP_GS_PlayerController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UHSURGameInstance_C*                         HSURGameInstance_REF;                                      // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSend;                                                   // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IH30[0x7];                                     // 0x06A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             MatchMaker;                                                // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_GS_PlayerController.BP_GS_PlayerController_C");
		return ptr;
	}



	void GetWidgetManager(class AWidgetMainMenuManager_C** Array_Element);
	void ToggleGameplayInput(bool Enable);
	void ReceiveBeginPlay();
	void OnGameSparksAvailable(bool available);
	void ToggleGamePlayInputEvent(bool Enable);
	void ExecuteUbergraph_BP_GS_PlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
