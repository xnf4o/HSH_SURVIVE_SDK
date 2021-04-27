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

// AnimBlueprintGeneratedClass Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C
// 0x1690 (FullSize[0x18F8] - InheritedSize[0x0268])
class UPrisoner_Hunter_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_DLXH[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0C7B68904B3009D45693B2A85C942130; // 0x0280(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_168C5B3F4E91266F61145BBEB90A5CA3; // 0x0338(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_63BDCDBD441AAB806AFCD2995C8F5E46; // 0x0360(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D2011A024BFA3BE8FF7B69A726C43C6B; // 0x0388(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_457B2BAD40BFFE01DEDB1E9BD224BD49; // 0x0428(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C968ACB24AD0604A73F0F5B06573B1BA; // 0x0450(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_687081644B29DCABFF605183757DE253; // 0x0508(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_902A9D994A2496B3C2C346A97A51433A; // 0x0528(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_493BCB6D4D64F281784EBFAA5EA2B6E9; // 0x0548(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42F8B65844692D34EBF2D3BD21C12A5A; // 0x0600(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6AB310DB4439980986BB6D92DE56169E;       // 0x0628(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_78CDC91E4D4BF5935121939491ED63B8; // 0x0670(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_Root_4CB1D2304043470DEFA7A3BD9D7ED415;       // 0x0728(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_47D56B96453621B5AC5ECAA2B3404156; // 0x0748(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B5045BA46D2DD491A22D992D30D1A80; // 0x0800(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E5A1AF6149B7A1CC537B94BEDB5AFEAF; // 0x0828(0x0028)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_1A60F74D431628432B813A94E712BD27;  // 0x0850(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_0844211D4645836C883970AC31AE42EB;  // 0x0A30(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50D290A74FF699F27E63C9819F7C358C; // 0x0C10(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B1CEB21446C3FDC1AD1A7D889EB2999A; // 0x0C38(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FE160624DBE8FF0C18E9FB3C9D12468; // 0x0CD8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51AAA6BB42B3FC129D38F189D6B68336; // 0x0D00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_62CBAC6C43F8981E691DAC97F3844097; // 0x0D78(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70AFEAF24F5B158CFA7EE3B9F10407B3; // 0x0D98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C1C9DF8B4C8D25C5821FAA8BE5961A80; // 0x0DC0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_095CCDC2499CC5F819012A979708E579; // 0x0DE8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A670F8D84BA4FF82B291A6B6B9E3BEFF; // 0x0EC8(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1B3A370649842AE33FE88BB93403D96D; // 0x0FA8(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31B933F3418C40343308A9A403126240; // 0x1070(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_E28F63444B8EE4B384B93EBBFCE06CAB; // 0x1090(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E8B2E1F744CA82A21DC02F8502268115; // 0x10F8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F7BB2B940FF0467D9819FB51FB82655; // 0x1118(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1BBF9D634AF650D3BD440BAADC96009D; // 0x11C8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D2131C134AE9DA588A5C3CBC76F50627; // 0x11E8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CAA6EA9F49BDD379CFC1EC9A681F5B10; // 0x1298(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FCA9A1E042310E9FA56F2FB0581AC764; // 0x12B8(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C98250954D4542FBBBC06694FEEB4892; // 0x1368(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C5DC8F044226AFEC04BCDE85F229C218;       // 0x14F0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C4A1F0AB4CDB088EB0FB969BBD67C6DF; // 0x1538(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6E74A19C4990E63209BC7E9645BF36CA; // 0x1558(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F8BEFA894E65336EC5FA53936BAD6E08; // 0x1580(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3875F2E649AE24650EAA798EC205CE17; // 0x1638(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6CA34D6348A194E655E35C8E07DE983D; // 0x1658(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5BCDF0AB4E98FA14B175188205702A97; // 0x1710(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6541543F4CE772C98FFFEC8F72C74247; // 0x17C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F1C0A1864E5E5F913F2858A80667B990; // 0x17F0(0x0028)
	float                                              MoveForward;                                               // 0x1818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x181C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x1820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x1824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x1828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationLastTick;                                          // 0x182C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x1838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAccelerating;                                            // 0x183C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullBody;                                                  // 0x183D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAttackHit;                                               // 0x183E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDie;                                                     // 0x183F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearch;                                                  // 0x1840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5T9U[0x7];                                     // 0x1841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHunterBase_C*                               Hunter_Ref;                                                // 0x1848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootLeftJointLoc;                                          // 0x1850(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootRightJointLoc;                                         // 0x185C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_LeftFoot_Alpha;                                         // 0x1868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_RightFoot_Alpha;                                        // 0x186C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightFootEffectorLoc;                                      // 0x1870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftFootEffectorLoc;                                       // 0x1874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKAdjustOffset;                                            // 0x1878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RightFootRotation;                                         // 0x187C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LeftFootRotation;                                          // 0x1888(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              IKTraceDistance;                                           // 0x1894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFeetInterpSpeed;                                         // 0x1898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x189C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HipsOffest;                                                // 0x18A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKHipsInterpSpeed;                                         // 0x18A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKCapsuleHalfHeight;                                       // 0x18A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightEffectorLoc;                                      // 0x18AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftEffectorLoc;                                       // 0x18B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKLeftHand_Alpha;                                          // 0x18C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKRightHand_Alpha;                                         // 0x18C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEnableIK;                                               // 0x18CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y14P[0x3];                                     // 0x18CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x18D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftJointLoc;                                          // 0x18D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightJointLoc;                                         // 0x18E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableRightHandIK;                                         // 0x18EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EnableLeftHandIK;                                          // 0x18ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Enum_IKInteractType_Enum_IKInteractType> IKInteractType;                                            // 0x18EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E3WS[0x1];                                     // 0x18EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SnapSocket;                                                // 0x18F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Prisoner_Hunter_AnimBP.Prisoner_Hunter_AnimBP_C");
		return ptr;
	}



	struct FRotator GetAimRotator();
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Prisoner_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_A670F8D84BA4FF82B291A6B6B9E3BEFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Prisoner_Hunter_AnimBP_AnimGraphNode_BlendListByBool_D2011A024BFA3BE8FF7B69A726C43C6B();
	void AnimNotify_EndAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Prisoner_Hunter_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
