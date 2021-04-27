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

// AnimBlueprintGeneratedClass Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C
// 0x15DC (FullSize[0x1844] - InheritedSize[0x0268])
class UBelle_Hunter_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_3EM7[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F; // 0x0280(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28E0CCE74665EFDFD717F8BA513F3FD1; // 0x0320(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AF5FE1504CC6DC9E4742BF847D398729; // 0x0348(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4D405A3741116A079C6AAD9BBBC9F2BE; // 0x0400(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_55E51CAF4B6C9732B9021C9501B3C37B; // 0x0420(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_75D9C6E4484B106092FFD99C08C1EB54; // 0x0448(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4EFFB95F40D3681F9D4F7A99DF02C717; // 0x0468(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1DECF1424FF69B06B9A277845B308396; // 0x0520(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D438B89B4A0875F7B37BD5ADBADF3591;       // 0x05D8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7D40EB25439CEE7D5F8898BE93E4EB86; // 0x0620(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_Root_C0F0F9AA4CE631E20B76CCAE37C01274;       // 0x06D8(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4DF98DC747158023C0C615BB2B980F46; // 0x06F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3D5EE4C74DA1486D9CD7E7B87DAC95FF; // 0x07B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2C894A074E297E2FC84A5C99956FF3D3; // 0x07D8(0x0028)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_A096625341E9B49D2CB8A0BF15521A60;  // 0x0800(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6F8E9C584DE8DD6C610B529871404FB8;  // 0x09E0(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5CEF1E6C4ACB1C1C2F12E0BA3DF5F1A3; // 0x0BC0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C5AA838A4746C4F585C89A941132E87D; // 0x0BE8(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55A9B33944A87DDE311B3CA80A7B1DCB; // 0x0C88(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1E73AC5F4F6811583F25B2B71EC8B4A3; // 0x0CB0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B80E91CE42BEE84902D901865E977A1C; // 0x0D28(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E07C013482DFF0542A2C3A91F161313; // 0x0D48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA4029094738B47BC683A0A903239386; // 0x0D70(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_80D961A44A9C8429A72981AC59B7A18E; // 0x0D98(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74; // 0x0E78(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_512AB4234B4B437B9F5F499595FBA452; // 0x0F58(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E2734B714C7160F679FBB5B03632E3BB; // 0x1020(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F50AF15F46F19AAB34803A8B5CE4CE17; // 0x1040(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31B6976D489C6E4CEB976C809FF7DDED; // 0x10B8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_26B5896547A867B79304EFB2D78A08B9; // 0x10D8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_85117EA3458D019EEA8A6B946E850C2B; // 0x1188(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0D7ED17A4646E3D2296AF0B3DB048680; // 0x11A8(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5DFEDE1148A01E4DF1573190DC5AA6BA; // 0x1258(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DABAB5D8453DF5FC4CC2B8BDC54D6F86;       // 0x13E0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_17B5E6DC4CC270874C51DCA906185788; // 0x1428(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_59FBEA4046B3D078BF4F67872AF23FE2; // 0x14E0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A55883F145F3952704F79E86B01385EE; // 0x1598(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7C6A219046C9FA960DB65B9578EBA627; // 0x15C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_47892A0E4B45FDDC298CE1B81D077D7B; // 0x15E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_354AA99843520411524C9B92581BBF86; // 0x1610(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9354B82846FBF308145BB99400C5F7C6; // 0x1638(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CC072BDB4F8C32F9FD1D12AB27BA6E67; // 0x16F0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DC3E5B694C8439DB2C4DE0BA0F87D971; // 0x1710(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9C7DAFB04D73D99414AE01B7F549F5B1; // 0x1730(0x0028)
	float                                              MoveForward;                                               // 0x1758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x175C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x1760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x1764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x1768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationLastTick;                                          // 0x176C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x1778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAccelerating;                                            // 0x177C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullBody;                                                  // 0x177D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAttackHit;                                               // 0x177E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDie;                                                     // 0x177F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearch;                                                  // 0x1780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JENO[0x7];                                     // 0x1781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHunterBase_C*                               Hunter_Ref;                                                // 0x1788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootLeftJointLoc;                                          // 0x1790(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootRightJointLoc;                                         // 0x179C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_LeftFoot_Alpha;                                         // 0x17A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_RightFoot_Alpha;                                        // 0x17AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightFootEffectorLoc;                                      // 0x17B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftFootEffectorLoc;                                       // 0x17B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKAdjustOffset;                                            // 0x17B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RightFootRotation;                                         // 0x17BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LeftFootRotation;                                          // 0x17C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              IKTraceDistance;                                           // 0x17D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFeetInterpSpeed;                                         // 0x17D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x17DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HipsOffest;                                                // 0x17E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKHipsInterpSpeed;                                         // 0x17E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKCapsuleHalfHeight;                                       // 0x17E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightEffectorLoc;                                      // 0x17EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftEffectorLoc;                                       // 0x17F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKLeftHand_Alpha;                                          // 0x1804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKRightHand_Alpha;                                         // 0x1808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEnableIK;                                               // 0x180C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BH6Q[0x3];                                     // 0x180D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x1810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftJointLoc;                                          // 0x1814(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightJointLoc;                                         // 0x1820(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableRightHandIK;                                         // 0x182C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Enum_IKInteractType_Enum_IKInteractType> IKInteractType;                                            // 0x182D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_00SG[0x2];                                     // 0x182E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RightSnapSocket;                                           // 0x1830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableLeftHandIK;                                          // 0x1838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RQW1[0x3];                                     // 0x1839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LeftSnapSocket;                                            // 0x183C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Belle_Hunter_AnimBP.Belle_Hunter_AnimBP_C");
		return ptr;
	}



	void GetAimRotator(struct FRotator* Return);
	void IKUpdateHandLeft();
	void IKUpdateHandRight();
	void IKHandUpdate();
	void IKReset_Vars();
	bool IsMoving();
	void UpdateCapsuleHalfHeight(float Hips_Shifts, bool Reset_Defualt);
	void IKUpdateFootOffset(float targetValue, float* Effector_Var, float Interp_Speed);
	void IKUpdateFootRotation(const struct FRotator& Target, struct FRotator* Rotation_Var, float InterpSpeed);
	void NormalToRotator(const struct FVector& Normal, struct FRotator* Rotator);
	void IKUpdate();
	void IKFootTrace(float Trace_Distance, const struct FName& InputPin, float* Offest, struct FVector* Impact);
	void Set_MoveAxis_From_Transform_Direction(class AActor* Pawn_, class USceneComponent* Camera, float* MoveForward, float* MoveRight);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendListByBool_C60257A04F85BCEBB3CAF2AD53AAA70F();
	void AnimNotify_EndAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_31B499C24302AC1FE3F8A1AB70DC6F74();
	void ExecuteUbergraph_Belle_Hunter_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
