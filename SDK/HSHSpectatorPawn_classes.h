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

// BlueprintGeneratedClass HSHSpectatorPawn.HSHSpectatorPawn_C
// 0x0090 (FullSize[0x0428] - InheritedSize[0x0398])
class AHSHSpectatorPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFloatingPawnMovement*                       FloatingPawnMovement;                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                   // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsPressUp;                                                // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsPressDown;                                              // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LESR[0x6];                                     // 0x03CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AHSHCharacterBase*>                   hshcharacter;                                              // 0x03D0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                SpectorIndex;                                              // 0x03E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFreeMode;                                               // 0x03E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5P53[0x3];                                     // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayOnChangeSpectator;                                    // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockChange;                                               // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QNGK[0x3];                                     // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIngame_SpectatorRole_C*                     WidgetSpectator;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetUpdate;                                                 // 0x03F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8S9C[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       LookPawn;                                                  // 0x0400(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AimLocation;                                               // 0x0408(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    AimRotation;                                               // 0x0414(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AlphaArmLength;                                            // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CacheArmLength;                                            // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSHSpectatorPawn.HSHSpectatorPawn_C");
		return ptr;
	}



	void GetterViewTarget(class APawn** Target);
	void FilterSurvivor(TArray<class AHSHCharacterBase*>* Characters, TArray<class AHSHCharacterBase*>* Return);
	void RefreshCharacterList();
	void OnRep_NetUpdate();
	void UpdateLocation(float DeltaTime);
	void EnterSpectator(int Index);
	void UpdateButton();
	void InpActEvt_E_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InitSpectator();
	void NextSpectator();
	void PreviousSpectator();
	void ToggleChangeMode();
	void EnterFreeMode();
	void EnterSpectatorMode();
	void QuitGame();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void EnableClientInput();
	void DisableClientInput();
	void OnCharacterChange();
	void ExecuteUbergraph_HSHSpectatorPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
