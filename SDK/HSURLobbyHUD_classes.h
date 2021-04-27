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

// BlueprintGeneratedClass HSURLobbyHUD.HSURLobbyHUD_C
// 0x0068 (FullSize[0x0490] - InheritedSize[0x0428])
class AHSURLobbyHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<int, class UWidget_LobbyPlayerInfo_C*>        PlayerInfoWidgetMap;                                       // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURLobbyHUD.HSURLobbyHUD_C");
		return ptr;
	}



	void Refresh(TArray<struct FS_PlayerLobby> PlayerInfo);
	void AddPlayerInfoHUD(const struct FVector& ActorLocation, const struct FString& Name, int PlayerId);
	void RemovePlayerInfoHUD(int PlayerId);
	void ClearAllPlayerInfoHUD();
	void RefreshWidget();
	void ReceiveTick(float DeltaSeconds);
	void HideWidget();
	void ShowWidget();
	void ExecuteUbergraph_HSURLobbyHUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
