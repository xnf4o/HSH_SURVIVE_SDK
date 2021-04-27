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

// AnimBlueprintGeneratedClass Survivor_Lobby_ABP.Survivor_Lobby_ABP_C
// 0x07B2 (FullSize[0x0A1A] - InheritedSize[0x0268])
class USurvivor_Lobby_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_A3CD[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B053721C43E540D58CBA8482DEA106CC;       // 0x0280(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C405EC8245F24BE1D88EB2947BCB305B; // 0x02A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B723B46744DE734B904D94BB3449774E; // 0x02C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CA45B684FBAFB37F30AF4B5EFAC1E1A; // 0x02F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_020E82714EE2DD6D1BB370A00284E8C7; // 0x0318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3DA266C41833897732426BB3B1D88F3; // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B0C4490245DBDF5A202D0C8FB1D8D0E6; // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B9641C644F8BE3D687BF988C04894C2; // 0x0390(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DE9A0C1406508ADBE0F95872A8EADC2; // 0x03B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6409AF5643A9764DA5040AA0245EA662; // 0x0430(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBD51B7F44F1AAD38F4392B693DD5CFC; // 0x0450(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5AB7D433427176139E4461B8C75822B8; // 0x04C8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_86186DA1468C4F9A9961CC8A22693B1A; // 0x04E8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1E55934A4A8EC92A70E29FA51242AF91; // 0x0598(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F70A79B4E1FA5D669F17A91A14E83A4; // 0x05B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3A93E4024AA7CFB01CC52388B283483F; // 0x0630(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7787E18C4E3E57A76B50699E8B4E0449; // 0x0650(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E490C55E4B7B28A3C75839BE00137695; // 0x0678(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CBDEE7F446CAC086F4DFF89B488C42F; // 0x06A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_49655CCC4718C4C580BE51A0B6ACEAD3; // 0x0718(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D6E3BC243F5D5A6DA4F3BAC07424010; // 0x0738(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_53C918654E2A4826B412A882B0F7C12D; // 0x07B0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_01E804EC4F6EA9A7073BBAA8979D58DD; // 0x07D0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CFAB117F4032E6FAB4272EB0CC50F028; // 0x0880(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C0637B74E0E3DED24E53388E74AB932; // 0x08A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_42A0B82B4CFDAC5A53DAC68B5F8DE22F; // 0x0918(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_86DBBB5B46A1AC2DB9B1598D7ED5B47A; // 0x0938(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6150CC3C43D8AEE12BDDFAA59174FBD9; // 0x0958(0x00B0)
	bool                                               IsReady;                                                   // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WG1U[0x7];                                     // 0x0A09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSURLobbyActor_C*                           LobbyActor;                                                // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReadyDebug;                                              // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ActState;                                                  // 0x0A19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Survivor_Lobby_ABP.Survivor_Lobby_ABP_C");
		return ptr;
	}



	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Survivor_Lobby_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
