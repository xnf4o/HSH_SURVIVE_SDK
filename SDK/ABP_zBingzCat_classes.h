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

// AnimBlueprintGeneratedClass ABP_zBingzCat.ABP_zBingzCat_C
// 0x0C47 (FullSize[0x0EAF] - InheritedSize[0x0268])
class UABP_zBingzCat_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_I1G1[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_865A64CA4D02463768992DAF7DC83C38;       // 0x0280(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB93244F404DD862AAACA89879D900DF; // 0x02A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4710C50648D0DB8A95D1DA9AAAB8EFF8; // 0x02C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB62BFDE4BF73B0EC8616FAF164B6CB8; // 0x02F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE641DA741415E593EB200BF76945ABA; // 0x0318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40D8EE46477663C681B8A299C05FAC87; // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8502824440E0BDB2AE69BBAA5F280775; // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8285B64F442D4FD1FD3D07B3F81FF8AF; // 0x0390(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23419318405473182B33D6AC144EDAD4; // 0x03B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6F5AD27E4FAD730D1DA548B641B4347D; // 0x0430(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF7B6B894A2F03084E9333A62C2BDBB5; // 0x0450(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8EE826BA47BEF8A98C9A8AA8F1A1DAD8; // 0x04C8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE2FCF0A4E3BA23FAC967F82D33FF194; // 0x04E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B3E2612048DC3F3399F83EBF83CEA411; // 0x0560(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22DC62F64796CB776550D7BBE4D1D6EC; // 0x0580(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_733F4191441200ECEA8AEEB224E928A0; // 0x05A8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2C31BBB549CDF7BBD260429B7791196C; // 0x05D0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8D6DF36B47450CA6FB9BE89F677ABA7D; // 0x06B0(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_6939770B477B06A138E08AA2D733BFDD; // 0x06D0(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58E4628E4CEEE68EA7FF73B3C332E8C9; // 0x0738(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_573D0F7041682C9B655248B0ADF8C017; // 0x0758(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_928885E346F7332BA287B693AFA92F34; // 0x0808(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BDBD632A44B47E03C027A59FC0740E07; // 0x0828(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B55CBF3B4642E973686BF0AA55D6B610; // 0x0908(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_3417A2E841BF4B587912608DA590427A; // 0x0928(0x0068)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FD9320874B444913B3FD35B6FD2522F0; // 0x0990(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7ACE1DB845B5930661FC57B89F5F68BF; // 0x09B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A6593294E6BEE22FBD36FB5A09C4314;       // 0x0A60(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_275A63E64D2AF54B08F6A69616261F31; // 0x0AA8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EF23FB9A485E66E250715D8477A3A363; // 0x0B60(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_83560F62464FEA9C33B275ACA4EABBD4; // 0x0B88(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E55C399549634297C770198EF213EFC0; // 0x0C28(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5E7BAA9946AC3FFAF56E47B4E9CEFD81; // 0x0CA0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9A4801F943442F04EE841E9D33D17B7B; // 0x0D40(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_222D5ACD458605A23BFE73BC51266F81; // 0x0DF8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D5F7DB1146F7898C04A4E98CB3952888; // 0x0E20(0x0078)
	class AZBingCat_C*                                 refZBingzCat;                                              // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendIdle0;                                                // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAiming;                                                  // 0x0EAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFalling;                                                 // 0x0EAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInProgress;                                              // 0x0EAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass ABP_zBingzCat.ABP_zBingzCat_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_zBingzCat_AnimGraphNode_TransitionResult_733F4191441200ECEA8AEEB224E928A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_zBingzCat_AnimGraphNode_TransitionResult_4710C50648D0DB8A95D1DA9AAAB8EFF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_zBingzCat_AnimGraphNode_TransitionResult_22DC62F64796CB776550D7BBE4D1D6EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_zBingzCat_AnimGraphNode_TransitionResult_CB62BFDE4BF73B0EC8616FAF164B6CB8();
	void PlayGiveMontage();
	void PlayFadeInMontage();
	void PlayFadeOutMontage();
	void PlayReceiveMontage();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_zBingzCat_AnimGraphNode_TransitionResult_8502824440E0BDB2AE69BBAA5F280775();
	void SetOptionIdle();
	void Reset();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_zBingzCat_AnimGraphNode_TransitionResult_CE641DA741415E593EB200BF76945ABA();
	void CustomEvent_1();
	void CustomEvent_2();
	void ExecuteUbergraph_ABP_zBingzCat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
