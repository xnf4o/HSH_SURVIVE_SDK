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

// AnimBlueprintGeneratedClass Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C
// 0x2648 (FullSize[0x28B0] - InheritedSize[0x0268])
class UPhray_Hunter_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_NZ87[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FD45762141C4386A432274AC07F7DD8A; // 0x0280(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AECDFC974CA669BD518B01B5626F35F1;       // 0x0338(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D72F1DAC46E1D8FA1A28D8AE5BB0B7E0; // 0x0380(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CB78D15F4B39189FC0D0059846643B13; // 0x03A8(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BE9E37024B9C5AF513BC4180A6D4A54E; // 0x0460(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6DF6BCAA4060111C6E36989D1F7CA3D3; // 0x0518(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C3610C874DAE63C6099A31A3D05E56AD; // 0x0540(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8; // 0x0568(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BDDEB4574D6C3FA7ADD5C086942629D7; // 0x0608(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_69132C534F16D065F08EE093A6DF03D2; // 0x0630(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AB8FFF6C43ED058B70DD38A7C9FE3D5D; // 0x06E8(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_F235C72F46E4DC06B3A3D8AD3FCA3A19;       // 0x0708(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_02845C0F49291C114C32578F9F496C28; // 0x0728(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114; // 0x0748(0x0108)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC;  // 0x0850(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6;  // 0x0A30(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F3ECB4114AB5B4594D3315BE11422E59; // 0x0C10(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_323EE0694BA0ECEC5A154F89905C98E7; // 0x0D18(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_682361B94A6ADCE45F325A8F910DB68B; // 0x0E20(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B39C8984EAA0D72C3D89C9490857571; // 0x0ED8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BC11DD8D4FDC85DC451161AE5CA703E1; // 0x0F00(0x0028)
	unsigned char                                      UnknownData_W5Q2[0x8];                                     // 0x0F28(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_9492B3684707F82F2CF516B64866FAAF;  // 0x0F30(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_A08466CB481DBEA6CB491FA1377359BA;  // 0x1110(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E30045374702B2F5B9E4FCA1859AFDD9; // 0x12F0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_330F2C3B45214EBECD3EF7947A3BBFAB; // 0x1318(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_037511374EAFF27AF9ED6896758A2A73; // 0x13B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B79600DD4F7037E419440994F9E181C3; // 0x13E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C37877C94E443B282C1554A6DAA0612D; // 0x1458(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A302ECA3459686C7E914C4A5A24675BA; // 0x1478(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B8EC88B40BC171C1F5CD79F08EBBDDE; // 0x14A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1F596B72499BAB824B5B799DDEF0689E; // 0x14C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08; // 0x14F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0; // 0x1518(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EC73BCE42F2CAC2DD0FBCAEAF2A58F1; // 0x1540(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78; // 0x1568(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5; // 0x1590(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B6DC7BA440E3B6F908D02AC8A4E0CFE; // 0x15B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9E97908D425E487293D05D810201D9A5; // 0x1630(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87E81C584813953DDC8553B3B073E65F; // 0x1650(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11A9E8C54D7ABDD95A9506AA59C3A588; // 0x16C8(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_93731A3341C41491BD49C1BA99968BD4; // 0x16E8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EBEABB2A42B00350E7478A85DA490C5C; // 0x1708(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28D66CF74EE19CF08DEEBFA43C501CD9; // 0x1730(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0B4128BB44A3587949E28585E769D41D; // 0x1758(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA; // 0x1838(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_46761BB64FC505BD1884A4BB79EE608D; // 0x1918(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1C9FA3354DBA6CA2579B41822D1B078A; // 0x19E0(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_53A9E5DD442F937DB93205A4B0870338; // 0x1A00(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BF80B19547B75C45962C7492EAB425BA; // 0x1A68(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F19D86404B66368766487DA4685AA73A; // 0x1A88(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_86832B8F42C70D6E352FC294FC98FAC2; // 0x1B38(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_550AEA2F4961A201F2EC50ABDD3BB35D; // 0x1B58(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D6626C664EBE98F17B643E9376075369; // 0x1C08(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65B09EA94874A11EE237AF8F7966C1B8; // 0x1C28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D6398E7F430163D195B55DB4CA6F7C57; // 0x1C50(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6BBB957B443406521CF227B2F8BC4394; // 0x1C78(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B3B9E682438D0CE1D22CE78ED55ECF55; // 0x1D58(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_362CC1394F53F230A7C5B891E10B83EA; // 0x1DF8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A; // 0x1ED8(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B5660FB64A2ED9A8385DBD9FD1DA7D87; // 0x1FB8(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_060C9A16413AC97F47423D85484A8258; // 0x2080(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_E8C698174441BF16129D7D8F640A7EB8; // 0x20A0(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0ACD7B8F4004410150814EAB1BE391CD; // 0x2108(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9733288347E4B144B3A288BEBEE75E6F; // 0x2128(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_549C85D044DA0D1EE0B539B4BB9E2501; // 0x21D8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DF7708184A7F901C788794B67102659B; // 0x21F8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7EFDB07349AF896607F6638D69A6AAA5; // 0x22A8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7E0BF18B4A91146663F36590AB128212; // 0x22C8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2865A78D4C0C0F9EC070DDA3BCE10CFC; // 0x2378(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_85C79BA2446AAB14A42D14A8AC5B790E; // 0x2398(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C76FC50247889C92074F8AA0AD32E85B; // 0x2448(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6589DB0449FD86E3AAC208973CCDFD2B;       // 0x25D0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FCCEC03848325A84797E97A1AA11F31A; // 0x2618(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5D4A35EB4A80832591F80A9F933F4743; // 0x26D0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8EC10B784BAB761B66E40C8254142AF7; // 0x26F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52261C6F46BCE4DB43FDC79BDD9023CE; // 0x27B0(0x0028)
	float                                              MoveForward;                                               // 0x27D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x27DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x27E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x27E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x27E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationLastTick;                                          // 0x27EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x27F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAccelerating;                                            // 0x27FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullBody;                                                  // 0x27FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAttackHit;                                               // 0x27FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDie;                                                     // 0x27FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearch;                                                  // 0x2800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XUKS[0x7];                                     // 0x2801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHunterBase_C*                               Hunter_Ref;                                                // 0x2808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootLeftJointLoc;                                          // 0x2810(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootRightJointLoc;                                         // 0x281C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_LeftFoot_Alpha;                                         // 0x2828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_RightFoot_Alpha;                                        // 0x282C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightFootEffectorLoc;                                      // 0x2830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftFootEffectorLoc;                                       // 0x2834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKAdjustOffset;                                            // 0x2838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RightFootRotation;                                         // 0x283C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LeftFootRotation;                                          // 0x2848(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              IKTraceDistance;                                           // 0x2854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFeetInterpSpeed;                                         // 0x2858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x285C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HipsOffest;                                                // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKHipsInterpSpeed;                                         // 0x2864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKCapsuleHalfHeight;                                       // 0x2868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightEffectorLoc;                                      // 0x286C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftEffectorLoc;                                       // 0x2878(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKLeftHand_Alpha;                                          // 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKRightHand_Alpha;                                         // 0x2888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEnableIK;                                               // 0x288C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6STF[0x3];                                     // 0x288D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x2890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftJointLoc;                                          // 0x2894(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightJointLoc;                                         // 0x28A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableRightHankIK;                                         // 0x28AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OnStateChanged;                                            // 0x28AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsChangeStateRecently;                                    // 0x28AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsAiming;                                                 // 0x28AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Phray_Hunter_AnimBP.Phray_Hunter_AnimBP_C");
		return ptr;
	}



	struct FRotator GetAimRotator();
	void SetOnStateChanged();
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_B34A96DA4B212763E0E62D923EFD3D08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_0BD766FF4F96FAC1B7C334817E8ADDA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TwoBoneIK_159F49514B8AAA768C9875AF6A0047AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_ModifyBone_82B679CA47DF46E85CC3FA98BB700114();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_71890C714E8DBB46CC244C91464E1A78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendListByBool_34BA70A54722507782D742990E51FFD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_FD1660014603CD97A56A6AA75FECA30A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_FE758EDE4A9C0B29C24C399592D2BBD5();
	void AnimNotify_EndAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_BlendSpacePlayer_BCD79D1B4C225AC0DA7B2FAF8CAE26CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Phray_Hunter_AnimBP_AnimGraphNode_TransitionResult_16CEC9C64C79ECD0D3E553A84A615ED0();
	void ExecuteUbergraph_Phray_Hunter_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
