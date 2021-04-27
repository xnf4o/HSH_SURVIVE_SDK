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

// AnimBlueprintGeneratedClass Survivor_Male_AnimBP.Survivor_Male_AnimBP_C
// 0x32B5 (FullSize[0x351D] - InheritedSize[0x0268])
class USurvivor_Male_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_WVAO[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2DBF0F6340DA59AA0AA8C4B5BEB2802F;       // 0x0280(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D03152B7441591A95777328C1FEE3089; // 0x02A0(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A0D51D7D41A6ECAE762DD7A0345AE36A; // 0x0358(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B17B6824245D8B090620286F4C8B1D4; // 0x0410(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DE774A11440A94A10A1605B3C30568D4; // 0x04B0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6C31B5AB4F9027CE59225EABF49BBE35; // 0x04D0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ACFB84CC4CC7370FD976379F0B9CFB2A; // 0x04F0(0x0108)
	unsigned char                                      UnknownData_QDGR[0x8];                                     // 0x05F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_73DA3A334758D1409BB187BFDB843AC6;  // 0x0600(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4C8ADD6A4251032C5C8A5BA92CF5D69A;  // 0x07E0(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AABC65784257623CCC539A9FA105ECEA; // 0x09C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DF9BD796450BC42CD504B9BAA62D3A95; // 0x0AC8(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17EB1DD5400C280B16E765809E317984; // 0x0BD0(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A029FD754B40E582DFFA92987EBA5973; // 0x0C70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4364D2F9437D80A9CEE6519F0B7B0BB3; // 0x0C98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_041F57874DD7495C66D4D4A94A640DF6; // 0x0CC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32021F124FAC7D40FA69568BF3460489; // 0x0CE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A788C8914454292968614CA592BBEF14; // 0x0D10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3680CA50478211914540C18F3351A3F5; // 0x0D38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BCEE5AFB48D2AD40620AE1BF2A06718F; // 0x0DB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_437544924B0785192AAAE6B3E05CE7E7; // 0x0DD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7C227D7F447A3F4BB2F3E5873F5E4F95; // 0x0E48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5797AB224B6D3CE261A0E0B0E2F56377; // 0x0E68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A2D0016A4955C1AC93A7EC85FD703CE2; // 0x0EE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6EFD5EF46423E8125795AB64BC92811; // 0x0F00(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BE53F15646608232EF5BB5AAECA4B045; // 0x0F78(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19A9F77049B86ED5ED85F6AC11A3F12D; // 0x1030(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_07DBB3084E940730D1EDF387849CB65C; // 0x1058(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64C023C0401DFC28E811F2AB59DDC5AC; // 0x1080(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6E264F834825A9F8A1098A9556E82592; // 0x1120(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5E394E534181B7E7A09C74A2A058CF70; // 0x11C0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F28425724DF5B68DCB07F496DE70D2ED; // 0x1260(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E59335964A3E9A645A64EBA60BE9A528; // 0x1300(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A711A4014F2661167712E4A962EF0808; // 0x13E0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_799B4D2A40AD434FBDDCE0922A4D0489; // 0x14C0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FC8BEC1140877EDEAE8717A86DDA6707; // 0x15A0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16D55C224F6E5BF6C5503DA38EC06497; // 0x1680(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3A068D34DF8387E007BFC908D7F4E32; // 0x16F8(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0E4117334DF7A994EE9641B1ED96798B; // 0x1770(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5237D27E44928761848FF4B86BF2CFF6; // 0x1850(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D159158D41487F1793DA808263C57F28; // 0x18F0(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0AB9CC0C42CA81BEC9FC64BF6F7FA0DD; // 0x19A8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9B52F5B84E66AED8A1FF8BA9B18544BF; // 0x1A88(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C210D8F14B9D9FC9C36186A0155D16B8; // 0x1B28(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D25A952F4657EE178B5627AD38E25AB5; // 0x1BE0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_796F716B477B57AB1A7DE6B7C73C8EEB; // 0x1CC0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ABB9317A4E29F9E3C4ABAAB4D550C733; // 0x1D60(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EF7EB08B428E72E42BABBB944FC9FD1C; // 0x1E40(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BF63D7B947B023E3915C9FABEE5CB236; // 0x1F20(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7DE12827486268393EE7D78BBE4DC1F5; // 0x1FE8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F827063D44F5C3C3335734896EC35883; // 0x2008(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_08B10CE6453A36687F3B1B87F5FAF24A; // 0x2030(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9B48AD945133ED42EF6B189EF4A8DEE; // 0x2058(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C7FEFAD4D901EC00E2ECDAA7AF0C38E; // 0x2080(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_43FEED8240BD1022FB8979AD52AC67A4; // 0x20A8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5F789033416E958D8F9AC7A9D3D3EB07; // 0x20C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25C84D9749E6ADD91FB6AB96F8F816A9; // 0x2168(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_213B85DF4D56B9284BCC939D0BAD0CBE; // 0x21E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B23DA69F4ACE881FF0B351B617D9919B; // 0x2258(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9BADEF904EA276174D2F56897970C02B; // 0x2278(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_84CE6049452D605E3DD31C9A564CABE4; // 0x22F0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D5B933F042313A814ED15280032D82D5; // 0x2390(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BC1E82EB4666744F1142B4878F45E38D; // 0x2408(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_64994CAF4DD1301E492F14BEB347A6E4; // 0x2428(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_296F15354E98D7A37F8291BAE8EC90B9; // 0x24D8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7B4791DF48247A3B60B0A28B9C05C151; // 0x24F8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1665FCD844F8FC90F1886BB2357FAB06; // 0x25A8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8449C44940A29F7D852F5D8323F9C63C; // 0x25C8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_40D07E264E4E01A162E95E8C035443D2; // 0x2678(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E7D588004AD89D7F43D454812AA9587F; // 0x2718(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3692DD6F41507C247AB69C82ED07E42C; // 0x27D0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_03FA763848F54F23585168B55D7404E2; // 0x27F8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A82049384C1ACD060E0956A7AD536225; // 0x2820(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_24413DEF4F703782472785B77A35C2F4; // 0x2848(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EFE36F374E95BBA05A118CB253942DE9; // 0x2900(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08D61DBD4FA7984B50174B913E8130BC;       // 0x2928(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_AC57102C4BC1F29A0FA7D98BDABB41D5;  // 0x2970(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_E6CA502448E07C07E13AFD903543F562;  // 0x2B50(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C90D5AD04CD589DAF437D39F7D3069D8; // 0x2D30(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CC650866461558F0E425F4B08929F4A5; // 0x2D58(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_714FB5554A3FD10D398A39ACF8F3376E;       // 0x2EE0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E1DCC12F484E2DC182E064BB4FE9FEED; // 0x2F28(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9E71C90B40880734D3F01C915C153D56; // 0x2F50(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AC3DDB944BECA94679A71FBE030C997C; // 0x3008(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C3F69B614EC4D377D7431F9F1B4FC3F2; // 0x3030(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A182A7CE480AAB3E28874A8D6EADF331; // 0x3058(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E04EE56B4AC73C36B7E841A081C1C406; // 0x3078(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CCC26E3442EEBFE2FA66169465018209; // 0x3098(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3F926D5A4162FBEF1D33F39C1E50A98F; // 0x30C0(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_627F32DB4E2509EB71102D9BAF36A40D; // 0x3178(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3A2A0C7745C72E741137B29BC9CFDE07; // 0x3230(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59929E1A418A8A4ABA55BBA271C8F5BE; // 0x3258(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C96C68014A8E9269162E39B0D3C0A69C; // 0x32F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_140463E24FCD53D8D4433299E8FDE838; // 0x33B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97E8773F4B572EA795B24EB55A9E77FF; // 0x33D8(0x0078)
	float                                              MoveForward;                                               // 0x3450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x3454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInAir;                                                   // 0x3458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GI1J[0x3];                                     // 0x3459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pitch;                                                     // 0x345C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x3460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x3464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationLastTick;                                          // 0x3468(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x3474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAccelerating;                                            // 0x3478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullBody;                                                  // 0x3479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrouch;                                                  // 0x347A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsKnockdown;                                               // 0x347B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // 0x347C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearch;                                                  // 0x347D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AJA6[0x2];                                     // 0x347E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorBase_C*                             Survivor_Ref;                                              // 0x3480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootLeftJointLoc;                                          // 0x3488(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FootRightJointLoc;                                         // 0x3494(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_LeftFoot_Alpha;                                         // 0x34A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IK_RightFoot_Alpha;                                        // 0x34A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightFootEffectorLoc;                                      // 0x34A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftFootEffectorLoc;                                       // 0x34AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKAdjustOffset;                                            // 0x34B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RightFootRotation;                                         // 0x34B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LeftFootRotation;                                          // 0x34C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              IKTraceDistance;                                           // 0x34CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFeetInterpSpeed;                                         // 0x34D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x34D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HipsOffest;                                                // 0x34D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKHipsInterpSpeed;                                         // 0x34DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKCapsuleHalfHeight;                                       // 0x34E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandRightEffectorLoc;                                      // 0x34E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HandLeftEffectorLoc;                                       // 0x34F0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKLeftHand_Alpha;                                          // 0x34FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKRightHand_Alpha;                                         // 0x3500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEnableIK;                                               // 0x3504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnableRightHandIK;                                         // 0x3505(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnableLeftHandIK;                                          // 0x3506(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsGrab;                                                    // 0x3507(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIKIgnore;                                                 // 0x3508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsForceUpper;                                             // 0x3509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Enum_IKInteractType_Enum_IKInteractType> IKInteractType;                                            // 0x350A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FV6M[0x1];                                     // 0x350B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SnapSocket;                                                // 0x350C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsLookBack;                                               // 0x3514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GS6V[0x3];                                     // 0x3515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x3518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsCameraLock;                                             // 0x351C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Survivor_Male_AnimBP.Survivor_Male_AnimBP_C");
		return ptr;
	}



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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_LayeredBoneBlend_BE53F15646608232EF5BB5AAECA4B045();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_BlendSpacePlayer_EF7EB08B428E72E42BABBB944FC9FD1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TwoBoneIK_4C8ADD6A4251032C5C8A5BA92CF5D69A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TwoBoneIK_73DA3A334758D1409BB187BFDB843AC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_ModifyBone_ACFB84CC4CC7370FD976379F0B9CFB2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_BlendListByBool_1B17B6824245D8B090620286F4C8B1D4();
	void AnimNotify_EndAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TransitionResult_1C7FEFAD4D901EC00E2ECDAA7AF0C38E();
	void AnimNotify_FreeFall();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Survivor_Male_AnimBP_AnimGraphNode_TransitionResult_E9B48AD945133ED42EF6B189EF4A8DEE();
	void ExecuteUbergraph_Survivor_Male_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
