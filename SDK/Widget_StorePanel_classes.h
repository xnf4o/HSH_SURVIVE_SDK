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

// WidgetBlueprintGeneratedClass Widget_StorePanel.Widget_StorePanel_C
// 0x0330 (FullSize[0x0570] - InheritedSize[0x0240])
class UWidget_StorePanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            SetSpacer;                                                 // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Loop;                                                      // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            BeginPanel;                                                // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BlackFade;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_Loadding;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    CanvasPanel_SubContent;                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Header_CrystalStore;                                       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Header_DirectStore;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Header_Discount;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Header_Features;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Header_TokenStore;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_8;                                                   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_9;                                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_162;                                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_201;                                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_203;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_497;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_606;                                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingScreen_C*                            LoadingScreen;                                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Text_Cuztomize;                                            // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_4;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_9;                                               // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_12;                                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_14;                                              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_24;                                              // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_26;                                              // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceTab_C*                   Widget_ButtonChoiceRole_DirectStore;                       // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceTab_C*                   Widget_ButtonChoiceTab_TokenStore;                         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         Widget_CharacterStore;                                     // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         Widget_CrystalStore;                                       // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreDirect_C*                       Widget_DirectStore;                                        // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         Widget_DiscountStore;                                      // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         Widget_FeaturesStore;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreItem_C*                         Widget_StoreItemDeprecate;                                 // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreList_C*                         Widget_StoreList;                                          // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreToken_C*                        Widget_StoreToken;                                         // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_C_2;                                           // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_C_3;                                           // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_C_4;                                           // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Header;                                     // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Subcontent;                                 // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_SubMenu;                                    // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSetting;                                                 // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnExit;                                                    // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFindMatch;                                               // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLootbox;                                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCalling;                                                 // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1H93[0x7];                                     // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 RefActivePanel;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         RefStoreGrid;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSetSpacer;                                               // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_10R4[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_StoreProduct                             CustomizeProduct;                                          // 0x0428(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               NavigateFromCustomize;                                     // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FNEW[0x7];                                     // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_StoreProduct                             PreviewingItem;                                            // 0x04D0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StorePanel.Widget_StorePanel_C");
		return ptr;
	}



	void EndMenuAnimation(float* Duration);
	void BeginMenuAnimation(float* Duration);
	void UpdatePreviewCharacterRole(TEnumAsByte<E_Role_E_Role> Role);
	struct FLinearColor GetColorAndOpacity_2();
	struct FLinearColor GetColorAndOpacity_1();
	void GetWidthAmethystStore(float* Width);
	void NavigatePanel();
	void GetPreferDirectStoreIndex(int* Index, bool* bIsAcc, int* AccIndex);
	struct FText Get_Hours_remains();
	struct FText Get_Days_remains();
	void OnWidgetActive();
	void OnWidgetDisplayed();
	void GetWidth(float* Width);
	void Debug_Grid(class UWidget_StoreGrid_C* Store);
	bool IsSameCurrentPanel(class UObject* Panel);
	void AssignWidgetManager(class AWidgetMainMenuManager_C* WidgetManager);
	void MakeTag(TArray<struct FString>* Tags, class UGameSparksRequestArray** ReturnGSArray);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_0_OnClickToken__DelegateSignature();
	void ShowLoading();
	void ShowMagicBoxStore(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void HideContent();
	void ShowGemStore(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void RefreshStore();
	void TryShowCurrentActive();
	void ShowPerksHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowPerksSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowItemsPanel(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowProfilesPanel(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowStickersPanel(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowCharacterStore(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowCharacterHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowCharacterSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowSkinSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowBundleShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void Direct_SurvivorPerk();
	void Direct_HunterPerk();
	void EnableStore(bool Enable);
	void TryIntializeStore();
	void BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void OnDiscount();
	void OnCrystalStore();
	void OnDirectStore();
	void LoopAnimation();
	void Construct();
	void BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_6_OnClickDiscount__DelegateSignature();
	void BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickDirectStore__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Widget_ButtonChoiceTab_DirectStore_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index);
	void BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChioce__DelegateSignature(int Index);
	void Direct_SurvivorCharacter();
	void Direct_HunterCharacter();
	void OnFeatures();
	void Direct_SurvivorSkin();
	void Direct_HunterSkin();
	void Direct_SurvivorAcc_Head();
	void BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_2_OnClickFeatures__DelegateSignature();
	void BackAction();
	void Token_SurvivorSkin();
	void Token_HunterSkin();
	void Token_SurvivorAcc_Head();
	void Direct_HunterAcc_Head();
	void Token_HunterAcc_Head();
	void OnTokenStore();
	void BndEvt__Widget_ButtonChoiceTab_TokenStore_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(int Index);
	void BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_10_OnChioce__DelegateSignature(int Index);
	void BndEvt__Widget_StoreToken_K2Node_ComponentBoundEvent_0_OnChoice2__DelegateSignature(int Index);
	void OnTokenRefresh(bool IsError, class UGameSparksScriptData* Response);
	void Token_SurvivorAcc_Back();
	void Token_HunterAcc_Back();
	void Direct_SurvivorAcc_Back();
	void Direct_HunterAcc_Back();
	void OnDirectRefresh(bool IsError, TArray<class UGameSparksScriptData*> Response);
	void BndEvt__Widget_DirectStore_K2Node_ComponentBoundEvent_1_OnChoice2__DelegateSignature(int Index);
	void DIrect_Bundle();
	void BndEvt__Widget_StoreList_K2Node_ComponentBoundEvent_1_OnClickCrystal__DelegateSignature();
	void ExecuteUbergraph_Widget_StorePanel(int EntryPoint);
	void OnLootbox__DelegateSignature();
	void OnFindMatch__DelegateSignature();
	void OnExit__DelegateSignature();
	void OnSetting__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
