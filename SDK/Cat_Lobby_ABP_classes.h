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

// AnimBlueprintGeneratedClass Cat_Lobby_ABP.Cat_Lobby_ABP_C
// 0x07B2 (FullSize[0x0A1A] - InheritedSize[0x0268])
class UCat_Lobby_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_VNKX[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FBDF7BE0412C6D9531DF75A4B81D85B9;       // 0x0280(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3C0D14F48175ABC89E667ADDB7B8F9E; // 0x02A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F7EA8B24AF5E0D0C4A552BDFF88D33A; // 0x02C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_754E03A1454F97288B9C7A84F63F27AD; // 0x02F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C1E5A9BC417D7EA2E0DF55A9C70ED55D; // 0x0318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_613BDF97404CCE46096D7E8004B6EA21; // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8C167735420DE6A7379B85A788C70EF3; // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BE61E05D4E8447049CAC2CB06E7551FE; // 0x0390(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_01B27FFE49B09ADD960B168716C5C54F; // 0x03B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D3FD67DB4EF5EDA52C69F0A5BCA99E91; // 0x0430(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2DF38C04CADC5891F8ABAB5E982E2D1; // 0x0450(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BF461EA9432418954F4A11A73E30852C; // 0x04C8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_649687AF405312D78248BD9E37274468; // 0x04E8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3DCD75864896A8778D5E6789D2067824; // 0x0598(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3184C4F3490FC2E7547A8E9237627EBE; // 0x05B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FD7920A643E17A18E6D2E3B27DE26852; // 0x0630(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF4095BD436915EF9B24A5B95AA1EACE; // 0x0650(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_404E2C884A790E5BBE55C797993C45F1; // 0x0678(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F8C92CD44935CC1270F65BB1326F606; // 0x06A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0EEB6B5E4456DDD5B0A708972B40E505; // 0x0718(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1FE5838449734523A609228B78D6663C; // 0x0738(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8F5B6993467047C41C10E59FE66045F1; // 0x07B0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3036B513451B2CC85569FBAD8EEC68CA; // 0x07D0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D72B8AA54CCD80E7FF5819A6D925CA0B; // 0x0880(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A3E088F49655297AECD3E96A54062AE; // 0x08A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_54570CBB4BE5FBC2B072549C9B0028AC; // 0x0918(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7BBA09C9419F5D9190836AB550007D8B; // 0x0938(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8CAFBAD847FFA38EC267BFAC6B0A3BFD; // 0x0958(0x00B0)
	bool                                               IsReady;                                                   // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KIG4[0x7];                                     // 0x0A09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHSURLobbyActor_C*                           LobbyActor;                                                // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReadyDebug;                                              // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ActState;                                                  // 0x0A19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass Cat_Lobby_ABP.Cat_Lobby_ABP_C");
		return ptr;
	}



	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Cat_Lobby_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
