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

// WidgetBlueprintGeneratedClass Widget_FindMatchPanel.Widget_FindMatchPanel_C
// 0x0098 (FullSize[0x02D8] - InheritedSize[0x0240])
class UWidget_FindMatchPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_CharacterSettingNewV2_C*             Widget_CharacterSetting;                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnBack;                                                    // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSetting;                                                 // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSwitchRole;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPlayNow;                                                 // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLootbox;                                                 // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnShowTutorial;                                            // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnStore;                                                   // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnProfile;                                                 // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FindMatchPanel.Widget_FindMatchPanel_C");
		return ptr;
	}



	void BeginMenuAnimation(float* Duration);
	void EndMenuAnimation(float* Duration);
	void OnWidgetActive();
	void RefreshCharacterList();
	void RefreshContent();
	void RefreshHeaderWithRole(const struct FPlayerInfoStruct_G& PlayerInfo);
	void RefreshLootbox(int Number);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void RefreshValue(const struct FPlayerInfoStruct_G& PlayerInfo);
	void RefreshItems(TArray<struct FString> Items, TArray<int> Number);
	void BndEvt__Widget_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void RefreshPerks(TArray<struct FString>* PlayerPerks);
	void RefreshSkins(TArray<struct FString>* PlayerSkins);
	void BackAction();
	void RefreshHeads(TArray<struct FString> PlayerHeads);
	void RefreshBacks(TArray<struct FString> PlayerBacks);
	void ExecuteUbergraph_Widget_FindMatchPanel(int EntryPoint);
	void OnProfile__DelegateSignature();
	void OnStore__DelegateSignature();
	void OnShowTutorial__DelegateSignature();
	void OnLootbox__DelegateSignature();
	void OnPlayNow__DelegateSignature();
	void OnSwitchRole__DelegateSignature();
	void OnSetting__DelegateSignature();
	void OnBack__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
