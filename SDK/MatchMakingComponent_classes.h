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

// BlueprintGeneratedClass MatchMakingComponent.MatchMakingComponent_C
// 0x0061 (FullSize[0x0161] - InheritedSize[0x0100])
class UMatchMakingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UHSURGameInstance_C*                         HSURGameInstance_REF;                                      // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     MatchId;                                                   // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ip;                                                        // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Port;                                                      // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsFindingMatch;                                            // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsWaitingForMatch;                                         // 0x0149(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A7CU[0x6];                                     // 0x014A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchMakingCode;                                           // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsMatchFound;                                              // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass MatchMakingComponent.MatchMakingComponent_C");
		return ptr;
	}



	void CreateCustomQueryData(TEnumAsByte<E_Role_E_Role> Role, class UGameSparksScriptData** CustomQueryData);
	void OnResponse_3072F11F410A2548C43A3E974C262053(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_B2EE7D3C4A3A13DBCA7E6C9E85BEAD9E(const struct FGSMatchmakingResponse& MatchmakingResponse, bool hasErrors);
	void OnResponse_1C90D3184118703D08A181ADFC91C881(const struct FGSMatchmakingResponse& MatchmakingResponse, bool hasErrors);
	void OnResponse_081F999943087EFE8EA02E8E24A70967(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void CancelToJoinMatch();
	void CancelMatch();
	void OnScriptMessage(const struct FGSScriptMessage& ScriptMessage);
	void JoinServer();
	void SetIpAndPort(const struct FString& ip, const struct FString& Port);
	void FindMatch();
	void ReceiveBeginPlay();
	void OnMatchNotFoundMessage(const struct FGSMatchNotFoundMessage& MatchNotFoundMessage);
	void SwitchRoleAndFindMatch();
	void ConfirmToJoinMatch();
	void OnMatchFoundMessage(const struct FGSMatchFoundMessage& MatchFoundMessage);
	void ExecuteUbergraph_MatchMakingComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
