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

// BlueprintGeneratedClass HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C
// 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
class UHSURLobbyCameraManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class ACameraActor*                                Camera_Survivor;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Survivor_CharacterSetting;                          // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Hunter_CharacterSetting;                            // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Hunter;                                             // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Current;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                Camera_Spectator;                                          // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BlendCamera(bool IsOnCharacterSetting_, TEnumAsByte<E_Role_E_Role> Move_to_Camera_Role, float BlendTime, TEnumAsByte<Engine_EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void ExecuteUbergraph_HSURLobbyCameraManagerComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
