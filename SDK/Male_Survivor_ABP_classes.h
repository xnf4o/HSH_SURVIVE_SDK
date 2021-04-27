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

// AnimBlueprintGeneratedClass Male_Survivor_ABP.Male_Survivor_ABP_C
// 0x2B1C (FullSize[0x2D84] - InheritedSize[0x0268])
class UMale_Survivor_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_QBNL[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_39D0E1F6441DEBFF31320F911088CE96;       // 0x0280(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_079113594F2E9C0C6B91BBAE185D8354; // 0x02A0(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1003331C417405F946B8FA9752BA4533; // 0x0358(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D; // 0x0410(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6AECB70A48ABF9B6536522BF6C2A35B2; // 0x04B0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_03FF911A49A1F388215AE5AAE1D4782B; // 0x04D0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3; // 0x04F0(0x0108)
	unsigned char                                      UnknownData_Y86Y[0x8];                                     // 0x05F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140;  // 0x0600(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3;  // 0x07E0(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_02D9BDA04E7826521F00E483986C014F; // 0x09C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6DB561C846D608A22C09E7990F0BF49F; // 0x0AC8(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13C6E5794CC08152B813EA8750438E72; // 0x0BD0(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E6AB3F74A4A90E3205D5B91226EA831; // 0x0C70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55A03C224BC438A679FA30AFB630AC11; // 0x0C98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EEFD47E1424AE55BA6819FAAD8F8D775; // 0x0CC0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D958AED9464B1A1D531231A43FE585B7; // 0x0CE8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4D1B10AB40934FCF1C993C80460F2876; // 0x0D60(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C574186E4682F2CDE7D0D7A8107F244D; // 0x0D80(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C08CFCF442E0FE2F979E85860CC7CBA1; // 0x0DF8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92C10DF447D3D4A983626C846A58DFD8; // 0x0E18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B751D594B9E8309096E9C87C2FE650E; // 0x0E40(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85123CF146040BA214D532A7226117EB; // 0x0E68(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_899408164B3518F53932F7BB2272BC24; // 0x0EE0(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7435B02A42CF6D688AEFD2AB53FF1D13; // 0x0F98(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AAA79B054017378FADF35FBBDC1E643F; // 0x1078(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9312DC5C4C2D2683D7EEEC88148F7427; // 0x1118(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0D80214C4A5FAA61D3FF2BA7E2DFF836; // 0x11F8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_97765D0545888AA65C144E991BA45AB5; // 0x1298(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_617C49EA4DB477629326E28AAE6F87EB; // 0x1378(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_184381064F43BDE34005BFB17CAFD08A; // 0x1458(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_081FCB23467CEE5852DE1A8B21EC0484; // 0x1538(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_621D6EE2457253EC41E647917D52C0B6; // 0x1618(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50961AFC48E83509B99B4FA148AC1179; // 0x16B8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26FD41C64DED5653F90179BBC211C6F0; // 0x1758(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962; // 0x17F8(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_934117D6458C52E5F4E9A99C53E8D19A; // 0x18D8(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7A87FB3948B1C9022E6E9ABA99B8CC96; // 0x19A0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1D9B94984B5D66441623B4A56E4B7B13; // 0x19C0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3395A39C4E3C9B33DA8369AC6D38B734; // 0x1A60(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_958190F94D73AA04239F01968CF33947; // 0x1AD8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F484C64F4756D32FD69133ABF05CD56B; // 0x1B50(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9B625A3144FD154F685B0AB6BB791B87; // 0x1BC8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0493421F4A9AAD608C8093A1A4CB7D40; // 0x1C68(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8EA94B8488AFD8A6E88689A93408D8E; // 0x1D08(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_67393C8040E78B8071FCCE868A7F098E; // 0x1D80(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E7874362454A00265249E8A027399803; // 0x1DA0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A554668B4706006755A74FA702B7B6EA; // 0x1E50(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BF4220314E7CD0F1BBB004B689142EBA; // 0x1E70(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7116814942BB11E16A8CB4AB0DF1CCC6; // 0x1F20(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CA9E77814ADFB52FE24DC0BAD9108BB2; // 0x1FC0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_547DAA684EE4766FEA6A4380D996266C; // 0x2078(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E0390DF042B87CBA6DD4179C3DCC2422; // 0x20A0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D86968C7487D81229A0C5C8D8A8F351E; // 0x20C8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B832C8B34B731743B825F68C3EEA89F7; // 0x20F0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF597E384BE212914994058CCA83E731; // 0x21A8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_68E4D2094ECB319AECE8768795952BBD;       // 0x21D0(0x0048)
	unsigned char                                      UnknownData_NL8H[0x8];                                     // 0x2218(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4707252D464B072D4580F1B89E72D17C;  // 0x2220(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_D0D2B31B436645F5ABD2FBA0F668F279;  // 0x2400(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C5087B1D4D02FA036EF67294F0BCBA18; // 0x25E0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_8AA4E6104117388B6CA3B68DADFC226C; // 0x2608(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5A24351D4107EDD23C9F25A681AB55DC;       // 0x2790(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9933D25E4F75EEFB37882C8199D4B240; // 0x27D8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FCD9900846F5C1443E37EC942AC417F3; // 0x2800(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EA27B92F47BF58DC33030188AFE41C32; // 0x28B8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40C94F224AA10A3D3CEE979281B77CC1; // 0x28E0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D8B47C4E48B76A851A43DEA0D49EAF7A; // 0x2908(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8E5249CB4DDC3369599D5FB66401B50D; // 0x2928(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F2C1407A41DA32063D809B8905163AA9; // 0x2948(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BA818BFB49179B63D54E06AB7FC9DCC1; // 0x2970(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FB43DB084B03A7AA1E1B44BC28314A6E; // 0x2A28(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CDCAACE04541A567AB075493A9FFCBC6; // 0x2AE0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6BB257DD4C4B43223367D8BA632B1736; // 0x2B08(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1424BFEA4D0168A4CE06578462DF2D82; // 0x2BC0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A; // 0x2BE8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B27084FE4D3A998196F1F388FA568FF4; // 0x2C88(0x0028)
	float                                              MoveForward;                                               // 0x2CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x2CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInAir;                                                   // 0x2CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SPIM[0x3];                                     // 0x2CB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pitch;                                                     // 0x2CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x2CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x2CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationLastTick;                                          // 0x2CC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x2CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAccelerating;                                            // 0x2CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullBody;                                                  // 0x2CD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrouch;                                                  // 0x2CDA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsKnockdown;                                               // 0x2CDB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // 0x2CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearch;                                                  // 0x2CDD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T8C8[0x2];                                     // 0x2CDE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorBase_C*                             Survivor_Ref;                                              // 0x2CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootLeftJointLoc;                                          // 0x2CE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootRightJointLoc;                                         // 0x2CF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_LeftFoot_Alpha;                                         // 0x2D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_RightFoot_Alpha;                                        // 0x2D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightFootEffectorLoc;                                      // 0x2D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftFootEffectorLoc;                                       // 0x2D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKAdjustOffset;                                            // 0x2D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RightFootRotation;                                         // 0x2D14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LeftFootRotation;                                          // 0x2D20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              IKTraceDistance;                                           // 0x2D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFeetInterpSpeed;                                         // 0x2D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x2D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HipsOffest;                                                // 0x2D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKHipsInterpSpeed;                                         // 0x2D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKCapsuleHalfHeight;                                       // 0x2D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightEffectorLoc;                                      // 0x2D44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftEffectorLoc;                                       // 0x2D50(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKLeftHand_Alpha;                                          // 0x2D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKRightHand_Alpha;                                         // 0x2D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEnableIK;                                               // 0x2D64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnableRightHandIK;                                         // 0x2D65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnableLeftHandIK;                                          // 0x2D66(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsGrab;                                                    // 0x2D67(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIKIgnore;                                                 // 0x2D68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsForceUpper;                                             // 0x2D69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Enum_IKInteractType_Enum_IKInteractType> IKInteractType;                                            // 0x2D6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZLU1[0x1];                                     // 0x2D6B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SnapSocket;                                                // 0x2D6C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsLookBack;                                               // 0x2D74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KZBS[0x3];                                     // 0x2D75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x2D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAiming;                                                 // 0x2D7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5LEM[0x3];                                     // 0x2D7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxLeanForward;                                            // 0x2D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Male_Survivor_ABP.Male_Survivor_ABP_C");
		return ptr;
	}



	void OnRep_Yaw();
	void UpdateClothing();
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_B532961C4D9D313A4DFE15BD98BC7CE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendSpacePlayer_E6A071734EC14CBFE80A128CA3CC1962();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_TwoBoneIK_409A31AB44B4A9F6E1DD32BBE6F29140();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_57BEEB624D98F0226604ACA821EAEE8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_ModifyBone_9D5D2CE24D2773A456221287AB087CF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Male_Survivor_ABP_AnimGraphNode_BlendListByBool_2A5391D944071F3EC39CB2952A39EE4D();
	void AnimNotify_EndAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_FreeFall();
	void ExecuteUbergraph_Male_Survivor_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
