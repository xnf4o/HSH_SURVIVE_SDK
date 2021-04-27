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

// AnimBlueprintGeneratedClass Chen_AnimBlueprint.Chen_AnimBlueprint_C
// 0x1A50 (FullSize[0x1CB8] - InheritedSize[0x0268])
class UChen_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_UYHY[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5738E3E3482EC856F408D986069D7376; // 0x0280(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56FF48AD41057B5BC486C988B1394FCF; // 0x0338(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0D5E17B2447C49E738044C8111170D43; // 0x0360(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0000A6E64D8B1BD128A1B1921B6D4C72; // 0x0418(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_28F9895840CABF61947DCA8B0C8AFA17; // 0x0440(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5269E7F642B4CE25B0A7DA8507C10BC6;       // 0x04F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7EEC496945A4F8E90F153E89C19F5928; // 0x0540(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0DEA3AEB44EBAE73736F7C8615182CFF; // 0x0568(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1635A973435613C96788949E064DA2FB; // 0x0590(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1864121E44888CD7F9D517A3418997F3; // 0x05B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B9B889945662391EE833CBC8AF30A81; // 0x05E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81ACD704400296202608FB91ECFDC68F; // 0x0608(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1931460840C9CDEF3848988B447974FC; // 0x0630(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2CE234D943C5B2C46AA69BAD60B11C7F; // 0x0658(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_096A078B44F087685F44C991F0A11C3B; // 0x0680(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28CD33EC469F9EDBF2F19AA95E173BDA; // 0x06A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD91792042DD1B1C119432A4308C38A3; // 0x06D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C3E4B284319F41E1230AC981600770A; // 0x06F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_170EED65488EFC3BC0CE6490872C68AB; // 0x0720(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E5E9EF1742C051042AE2E3823625F3E1; // 0x0748(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF1EDFA44FF2EDE06C20E98BCA709A92; // 0x0770(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E034612544E7D447BCF780945379B27B; // 0x0798(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_616A5AC44BC7232339603F929EB0A05E; // 0x07C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A1AFCF9946E4EADB34C1ECAA31A1AC69; // 0x07E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3429B2AA43DE33F347C410BBE5E7DB0D; // 0x0810(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70D9B3FD41AA39EB99F8AC98BE415BE9; // 0x0838(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFCFBE694E29ED2B732F579AD1F55AA4; // 0x0860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65F524624D693FB04703FE85BA0BCE0B; // 0x0888(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A6EF0A1C4DDBD00CB691D3B5577BE0F0; // 0x08B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22EF402140883419981272AB27EECBB4; // 0x08D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F48DACB24FF2AF345109A68248E6CAC4; // 0x0900(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6BFA847C4A2E84CBB90EECA4CC754A07; // 0x0928(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC1AD4734B3C72F6B93C4D81DCB1BCB9; // 0x0950(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E095B3A24C85A05FAA30EEBA05791CF0; // 0x0978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A43A73144C9067DFE3D34D830C1E26EA; // 0x09A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DE44F57E450FF2F4B24B3CB20BF27566; // 0x09C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4FE091554DECD9A03768B8ACCC50E7EF; // 0x09F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5806D7C245A5BCA8DBE449B8A88C4FDA; // 0x0A18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF322CD04FD859636CA0378FC2B949CB; // 0x0A40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0B751A349212B49D0F235A7D1B6AB92; // 0x0A68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E92027349EC1365B896588F9B0960A5; // 0x0A90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_312C2275475FF87017D708A435B72CE4; // 0x0AB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E543124B40C7D9A9B822D08A7DD3CC06; // 0x0AE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0CCF0D3D44BB2E76F8387C98010FF9BB; // 0x0B08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1893802C4F82B14134ECDB8835015A67; // 0x0B30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C68F585430B6F5675ED48AC00C2ABE8; // 0x0B58(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D75442EF4C41C09C6EE85183EA1D4A47; // 0x0B80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EEF5AFFA43A7E8AC36584AA8D22D3B62; // 0x0BA8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4A443144B7EA2B43A9D40979CF3F441; // 0x0BD0(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_25DF227F47CCC1798BA6C2AB077E9F48; // 0x0C48(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD7B50684C9907494EAFF489D3C3DF8E; // 0x0D00(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_556BADFC4049646A5580CCABA434A5C7; // 0x0DE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27107F7F430F9D553BB5DB87F0AA726E; // 0x0E00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3CF312AE4F88AA7E4C540CAF5887C2A1; // 0x0E78(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCAAF4AB4EE3B9FF128278BD582B3FB4; // 0x0E98(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_52CD9E2A415CA373783507AA53EEAF65; // 0x0F10(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B45F07A74551FD4DF67213923F57ACB6; // 0x0F30(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_561383C5445B00F8F03A8881EB22CEB8; // 0x0FA8(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B07C31184CD1822137EB149DB5539773; // 0x1060(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BF2D8F724CB720F345BB7A9B308DD0D8; // 0x1140(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D9001165490F6338E0673B95D50980A0; // 0x1160(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E355150C434D5EFF1FF0C1AA6C3E1254; // 0x11D8(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F334FF2440D2EBA3CEB88695B9D941B8; // 0x11F8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3FC14FDE48413EF44369489DC4D3C5E5; // 0x12D8(0x0020)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_CE381E8C495A9161796F89A79BE42E23; // 0x12F8(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BEAF712E42F3E39CF849DBA83D9C31E1; // 0x13C0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3DCAAAFB4820E3AC2B5F91A1E0D690BF; // 0x14A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7B9813454CE8B2C2D792AC991CEBE2F1; // 0x1518(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F046C17F4F09B7A37530CBBC0D70FB7B; // 0x1538(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74D30F044CEDD98C38FDE6BCB15D9795; // 0x1560(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A4F0FFA4F04B765AC9AA4993D44D22C; // 0x1588(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23A149B34E41FFA6D549F3A4E6DA1DC9; // 0x1600(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03C836A84A662943FE4DE98F9763C3DA; // 0x1620(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7581AA5B40A4E0ED645995BB724BAF07; // 0x1698(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82AB9C784F2B37AD1FAB169EBFEB9799; // 0x16B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C66224AE4BB9EF71C6E44987D3833365; // 0x1730(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_40A2B9AF46D49641327745A4FBA663C1; // 0x1750(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11A871E64781F3512A6E2293F51A4B8A; // 0x1800(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1D846F04419CABABB814C88256E480FB; // 0x1820(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F8B0347744997F1D3CB8C8804409690C; // 0x1900(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4DCD37734BF1654C582C23922993D7DC; // 0x1920(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_D0988FC141B7E0B9AB33B8800E198F30;       // 0x19D0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66B6066D4638F9EEDA9E6AB3C6836BB7; // 0x19F0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_261C1C22453C1BC9DACC0C998F21AB15;       // 0x1A18(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_651F8F4B4FEE8D2D82C73B97DAC36CB3; // 0x1A60(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CC13FFB24D8DF46B1CD57398C88F1C2B; // 0x1B18(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_374199EA40D2F7147DB2E6B316088077; // 0x1BD0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0E6F34294EA4784175A0DFB5C701100E; // 0x1BF8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_654765814EB504F54418DF8D33E225F2;       // 0x1C20(0x0048)
	float                                              MoveForward;                                               // 0x1C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveRight;                                                 // 0x1C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInAir;                                                   // 0x1C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HF3Q[0x3];                                     // 0x1C71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pitch;                                                     // 0x1C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x1C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Yaw;                                                       // 0x1C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    RotationLastTick;                                          // 0x1C80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x1C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAccelerating;                                            // 0x1C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L0G7[0x7];                                     // 0x1C91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Character;                                                 // 0x1C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAttacking;                                               // 0x1CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U34K[0x3];                                     // 0x1CA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentAttack;                                             // 0x1CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FullBody;                                                  // 0x1CA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrouch;                                                  // 0x1CA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsKnockdown;                                               // 0x1CAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // 0x1CAB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsWorship;                                                 // 0x1CAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSearch;                                                  // 0x1CAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_67ZY[0x2];                                     // 0x1CAE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivorBase_C*                             Survivor_Ref;                                              // 0x1CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Chen_AnimBlueprint.Chen_AnimBlueprint_C");
		return ptr;
	}



	void Set_MoveAxis_From_Transform_Direction(class AActor* Pawn_, class USceneComponent* Camera, float* MoveForward, float* MoveRight);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_4FE091554DECD9A03768B8ACCC50E7EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_E095B3A24C85A05FAA30EEBA05791CF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_4C3E4B284319F41E1230AC981600770A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_E543124B40C7D9A9B822D08A7DD3CC06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_1931460840C9CDEF3848988B447974FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_F48DACB24FF2AF345109A68248E6CAC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_7B9B889945662391EE833CBC8AF30A81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_1864121E44888CD7F9D517A3418997F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_A6EF0A1C4DDBD00CB691D3B5577BE0F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_1635A973435613C96788949E064DA2FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_0DEA3AEB44EBAE73736F7C8615182CFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_7EEC496945A4F8E90F153E89C19F5928();
	void AnimNotify_EndAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_AFCFBE694E29ED2B732F579AD1F55AA4();
	void AnimNotify_FreeFall();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chen_AnimBlueprint_AnimGraphNode_TransitionResult_616A5AC44BC7232339603F929EB0A05E();
	void ExecuteUbergraph_Chen_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
