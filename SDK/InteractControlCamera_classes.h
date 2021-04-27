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

// BlueprintGeneratedClass InteractControlCamera.InteractControlCamera_C
// 0x0038 (FullSize[0x03D0] - InheritedSize[0x0398])
class AInteractControlCamera_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchClampMin;                                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchClampMax;                                             // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass InteractControlCamera.InteractControlCamera_C");
		return ptr;
	}



	void UpdateCamera();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void RotateYaw(float Value);
	void RotatePitch(float Value);
	void ExecuteUbergraph_InteractControlCamera(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
