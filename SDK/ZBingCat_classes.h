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

// BlueprintGeneratedClass ZBingCat.ZBingCat_C
// 0x00E8 (FullSize[0x0420] - InheritedSize[0x0338])
class AZBingCat_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PreviewLight;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh_Cat;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              BlendIdlePostTimeline_Alpha_30D3F53941C2176539189287DCA01B78; // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BlendIdlePostTimeline__Direction_30D3F53941C2176539189287DCA01B78; // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WRCL[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BlendIdlePostTimeline;                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Pickable                                 CachePickable;                                             // 0x0378(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCatReady;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DG31[0x7];                                     // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZBingCat_PreviewItemBase_C*                 refCatItem;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendIdleAlpha;                                            // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K48W[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnBlendForwardFinishe;                                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnBlendBackwardFinishe;                                    // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAnimMontage*                                TakeItem;                                                  // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                GiveItem;                                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CatRot;                                                    // 0x03E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Speed;                                                     // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAiming;                                                  // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFalling;                                                 // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6NCO[0x6];                                     // 0x03FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CatDisappear;                                              // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                CatAppear;                                                 // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInProgress;                                              // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8XWM[0x7];                                     // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AzBingSurvivor_C*                            ZbingzRef;                                                 // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ZBingCat.ZBingCat_C");
		return ptr;
	}



	void SetCatItemByClass(class UClass* ItemClass);
	void BlendIdlePostTimeline__FinishedFunc();
	void BlendIdlePostTimeline__UpdateFunc();
	void OnNotifyEnd_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName);
	void OnNotifyBegin_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName);
	void OnInterrupted_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName);
	void OnBlendOut_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName);
	void OnCompleted_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName);
	void OnNotifyEnd_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName);
	void OnNotifyBegin_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName);
	void OnInterrupted_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName);
	void OnBlendOut_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName);
	void OnCompleted_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName);
	void OnNotifyEnd_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName);
	void OnNotifyBegin_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName);
	void OnInterrupted_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName);
	void OnBlendOut_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName);
	void OnCompleted_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName);
	void OnNotifyEnd_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName);
	void OnNotifyBegin_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName);
	void OnInterrupted_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName);
	void OnBlendOut_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName);
	void OnCompleted_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName);
	void OnNotifyEnd_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName);
	void OnNotifyBegin_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName);
	void OnInterrupted_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName);
	void OnBlendOut_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName);
	void OnCompleted_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName);
	void ReceiveTick(float DeltaSeconds);
	void AddCatItem(const struct FS_Pickable& CachePickable);
	void RemoveCatItem();
	void ReceiveBeginPlay();
	void Blend0To1();
	void Blend1To0();
	void M_CatTakeItem();
	void M_CatGiveItem();
	void OnOwnerHidden(bool IsHidden);
	void OwnerInteractStart(bool bIsProgress);
	void OwnerInteractDone();
	void OwnerInteractStop(class ASurvivorBase_C* survivor);
	void OnOwnerDead(class AActor* DestroyedActor);
	void ExecuteUbergraph_ZBingCat(int EntryPoint);
	void OnBlendBackwardFinishe__DelegateSignature();
	void OnBlendForwardFinishe__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
