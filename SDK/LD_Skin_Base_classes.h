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

// BlueprintGeneratedClass LD_Skin_Base.LD_Skin_Base_C
// 0x0031 (FullSize[0x0532] - InheritedSize[0x0501])
class ALD_Skin_Base_C : public ALD_Base_C
{
public:
	unsigned char                                      UnknownData_WC4O[0x7];                                     // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0508(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               SkinMesh;                                                  // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               AnimationPreview;                                          // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnClickMesh;                                               // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsOnFocus;                                                // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LD_Skin_Base.LD_Skin_Base_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void UpdateMeshRotate();
	void ResetRotation();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnReleasedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonReleased);
	void ExecuteUbergraph_LD_Skin_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
