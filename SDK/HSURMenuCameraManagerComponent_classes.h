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

// BlueprintGeneratedClass HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C
// 0x0050 (FullSize[0x0150] - InheritedSize[0x0100])
class UHSURMenuCameraManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class ACameraActor*                                Camera_Login;                                              // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Mainmenu;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Lobby;                                              // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_CharacterSetting;                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Current;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MenuState_E_MenuState>               State;                                                     // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NPKD[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSMenuCameraState>                   CameraConfiguration;                                       // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C");
		return ptr;
	}



	void AssignLootDropCamera(TEnumAsByte<E_MenuState_E_MenuState> State);
	void FindCameraState(TArray<struct FSMenuCameraState>* Array, TEnumAsByte<E_MenuState_E_MenuState> State, bool* bFindSuccess, int* Array_Index);
	void OnLoaded_0E2CC129418781613D53ADA3F4D9C9F5(class UObject* Loaded);
	void ReceiveBeginPlay();
	void BlendCamera(TEnumAsByte<E_MenuState_E_MenuState> Move_to_Camera, float BlendTime, TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void ExecuteUbergraph_HSURMenuCameraManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
