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

// AnimBlueprintGeneratedClass Belle_AnimBP.Belle_AnimBP_C
// 0x13D0 (FullSize[0x1638] - InheritedSize[0x0268])
class UBelle_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_AUVB[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C497F5674144B3B8FEFCDBBD0DD79C61; // 0x0280(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2D31CF1F4A6A4F5732E76D9E78F22207; // 0x0338(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D2A43C944A728F54E9802AB1AC0B8E5A; // 0x0360(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B479A0794239D157CE4CA5AA3ADCE210; // 0x0440(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D2DCFD4649B8F6E30234B98425FB3429; // 0x04E0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_325FD20A4E47A1C86DFBE2A9D1459739; // 0x05C0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3C194FC444681FCDC91B01A17310D209; // 0x05E0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9AC5ABB4495249A617C2FE8350524900; // 0x0690(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E7B91FBD42C81B96F627A5A5CB59BBC6; // 0x0748(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5961BA95499771152A3E60957BE8E3AC; // 0x0800(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DEDC63E4403667232AF1B2A7D5E78048; // 0x08B8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2F8C94194091228577BED8A73DEEFDF6;       // 0x08E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A20CF4024DA9EA9BCD2C07955BA27D31; // 0x0928(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_569B50004642C0773B88BDB13F81B16E; // 0x0950(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA25D5424B67FCCBBD8821AEF2AAD83C; // 0x0978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_653AC20D4540FEE499F445BCF1D0CE26; // 0x09A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D1EB73245F417A4150D429780E01FC7; // 0x09C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D114ECFC45CD6C3879EFF684026BFDE0; // 0x09F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BDB2E124475E8278F9230A557EF059E; // 0x0A18(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_891D6888419C91EE105C53A0E384B831; // 0x0A40(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_60DD545C428E0784194E2E8677089C02; // 0x0AB8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_206DAB7643AEFCF29DAEA79F4C39BADE; // 0x0AD8(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E2D01BF245AE7572A716C881349918F5; // 0x0B50(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5E6CD9824A64628254B670825ACEA91F; // 0x0B78(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2B29F3D443DE6D72551940B4F5ED7736; // 0x0C40(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3B3856843239C29A0E6CC9C08CC193E; // 0x0C60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0620FD794784033543949DA9CF9ACA4C; // 0x0C88(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CEA76E84498F5C1AFA8719363A72C5D; // 0x0CB0(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8CCE5F204D1D206CCBAD6A867561FF09; // 0x0D28(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_92EAADC54E452AFF3BE7ABA9ED7389F4; // 0x0D50(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9F5B05D3488148D6E7F50C834B0DADE6; // 0x0E18(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52668C914862A3C6B803479133377ECC; // 0x0E38(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_02F3824944010D5380BC76BFC6C8D4BF; // 0x0E60(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F3F01D2473F4121BD4951982CA420D0; // 0x0F28(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EEC3B1CA456CECD94E76F09E081A44A7; // 0x0FA0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B27D4FE647718AD1C30ABD97C2AB7BD0; // 0x0FC0(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_45584E68482FA03642E3C2AA70782D20; // 0x0FE8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5801A8764CD91AD5B1FFBFA3E1D60D15; // 0x10B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_02C0B7A4430FC55E9E9ADDBCB50C6078; // 0x1128(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_07CCF1D24A0A699FDF2F35B325BF2B5C; // 0x1148(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B90EAC364EFC7F252567C4B1A6EF4107; // 0x11F8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_68576BB849A84B764B37A4A32DCF5DCD; // 0x1218(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A48326864773B0613512C0A83ACF277C; // 0x1240(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C1DF78CA4FD2ABEA08A655A73C727D5F; // 0x1260(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_4B17CC674FE6AE64E35240A521575808;       // 0x1310(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F356147249F9261336EC9A957C9853C5; // 0x1330(0x00B8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_7EF5237B41FB38F7EDB2DB800C253EFF; // 0x13E8(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6AA714614EB47A937124C29D338C5048; // 0x1570(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BA4332A3417603AAA7DA1F9E6F2EA0A7;       // 0x1598(0x0048)
	float                                              WalkForward;                                               // 0x15E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkRight;                                                 // 0x15E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInAir;                                                   // 0x15E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W6ML[0x3];                                     // 0x15E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pitch;                                                     // 0x15EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x15F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x15F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationLastTick;                                          // 0x15F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x1604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAccelerating;                                            // 0x1608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9WPV[0x7];                                     // 0x1609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Character;                                                 // 0x1610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAttacking;                                               // 0x1618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5HUC[0x3];                                     // 0x1619(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentAttack;                                             // 0x161C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FullBody;                                                  // 0x1620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Atk_Hit;                                                // 0x1621(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               is_Die;                                                    // 0x1622(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AMSS[0x5];                                     // 0x1623(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHunterBase_C*                               Hunter_Ref;                                                // 0x1628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x1630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CameraMode;                                                // 0x1634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Belle_AnimBP.Belle_AnimBP_C");
		return ptr;
	}



	void Set_MoveAxis_From_Transform_Direction(class AActor* Pawn, class USceneComponent* Camera, float* MoveForward, float* MoveRight);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Belle_AnimBP_AnimGraphNode_BlendListByBool_B479A0794239D157CE4CA5AA3ADCE210();
	void AnimNotify_EndAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_Belle_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
