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

// WidgetBlueprintGeneratedClass Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C
// 0x0360 (FullSize[0x05A0] - InheritedSize[0x0240])
class UWidget_CharacterSettingNewV2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowPerkContent;                                           // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowContent;                                               // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Loop;                                                      // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Begin;                                                     // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      _1;                                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      _2;                                                        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      _3;                                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              AccPanel;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BlackFade;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CharactersSelect;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FG;                                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_606;                                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                InventoryPanel;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Line;                                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Line1;                                                     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Line2;                                                     // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                PassiveUniquePanel;                                        // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              PerkPanel;                                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Redrope;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Text_Cuztomize;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonItemIcon_C*                    Widget_Button_Back;                                        // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonItemIcon_C*                    Widget_Button_Head;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonItemIcon_C*                    Widget_Button_MainPerk;                                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonItemIcon_C*                    Widget_Button_Perk1;                                       // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonItemIcon_C*                    Widget_Button_Perk2;                                       // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonItemIcon_C*                    Widget_Button_PPUnique;                                    // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_StatusInfo;                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CharacterInfoPanel_C*                Widget_CharacterInfoPanel;                                 // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CharacterSelectorNew_C*              Widget_CharacterSelector;                                  // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CustomizeList_C*                     Widget_CustomizeList;                                      // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ItemInventory_C*                     Widget_ItemInventory;                                      // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_Back;                                          // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_C_1;                                           // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_ContentHeader;                                 // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_Head;                                          // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_MainPerk;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_Perk1;                                         // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_Perk2;                                         // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Selected;                                   // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcherContentPanel;                                // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                     DebugAssets;                                               // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugSet;                                                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TT3B[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSettingChanged;                                         // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JJ5D[0x3];                                     // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChangeTimer;                                               // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SaveInTime;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UHKR[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Timer;                                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClickSuccess;                                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                                OnClickColor;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x03F0(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FString>                             PlayerItems;                                               // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Number;                                                    // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PlayerPerks;                                               // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PlayerSkins;                                               // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_CustomizeList_E_CustomizeList>       EnumCustomizeList;                                         // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OCHK[0x3];                                     // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SelectedColor;                                             // 0x0544(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UnSelectColor;                                             // 0x0554(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_237G[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget_TooltipNew_C*                        Tooltip;                                                   // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ItemInventory>                    ItemInventory;                                             // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PlayerHeads;                                               // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             PlayerBacks;                                               // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C");
		return ptr;
	}



	void BeginMenuAnimation(float* Duration);
	void EndMenuAnimation(float* Duration);
	void DebugMakeInventory(TArray<struct FString>* OwnedItem, TArray<struct FPrimaryAssetId>* Array, TArray<struct FS_ItemInventory>* Items);
	void DebugFindProduct(const struct FPrimaryAssetId& PrimaryAssetId, struct FS_StoreProduct* Product);
	void DebugMakeOwnedItems(TArray<struct FPrimaryAssetId>* Asset_IDs, TArray<struct FString>* OwnedItem);
	void IsInMainMenu(bool* IsInMainMenu);
	void GetCharacterPreviewLobby(class AHSURLobbyActor_C** LobbyPreview, int* PlayerOwnerId, struct FPlayerInfoStruct_G* PlayerInfo);
	void GetCharacterPreview(class ABP_CharacterSetting_C** CharacterPreview);
	void FilterBack(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin);
	void MakeDebugInventory(TArray<struct FString>* OwnedItem, TArray<struct FPrimaryAssetId>* Array, TArray<struct FS_ItemInventory>* Items);
	void FilterHead(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin);
	void MakeAccBackAssetID(TArray<struct FS_StoreProduct>* Products, TArray<struct FPrimaryAssetId>* Return);
	void MakeAccHeadAssetID(TArray<struct FS_StoreProduct>* Products, TArray<struct FPrimaryAssetId>* Return);
	void MakeSkinAssetID_New(TArray<struct FS_StoreProduct>* Products, TArray<struct FPrimaryAssetId>* Return);
	UMG_ESlateVisibility Get_PassiveUniquePanel_Visibility_1();
	struct FLinearColor GetColorIsPassiveUnique(class UHSHPassivePerkItem* Target);
	void BeginShowPerkContent();
	void BeginShowContent();
	void RefreshStatusInfo();
	UMG_ESlateVisibility Get_Widget_Button_StatusInfo_Visibility_1();
	void IsWidgetActive(bool* IsActive);
	void RefreshContent();
	void RefreshHeaderEmoteVO(const struct FPlayerInfoStruct_G& PlayerInfo);
	void RefreshCharacterList();
	void MakeCharacterAssetID(TArray<struct FPrimaryAssetId>* Return);
	UMG_ESlateVisibility Get_PerkPanel_Visibility_1();
	struct FText GetSpecterSkinText();
	struct FText GetSpecterActivePerkText();
	struct FText GetText_1();
	void MakeSkinAssetID(TArray<struct FPrimaryAssetId>* Return);
	void MakePerkAssetID(TArray<struct FPrimaryAssetId>* Return);
	void SetImageBrush(class UHSHItem* HSHItem, class UImage* icon);
	void SetToolTipWidget(class UWidget* Target, const struct FText& TooltipTxtHeader, const struct FText& TooltipTxtDesc, const struct FLinearColor& InColorAndOpacity);
	void FilterItems(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, TArray<struct FString>* Items, TArray<int>* Number, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FS_ItemInventory>* Return);
	void CheckChangeTime();
	void StartTrackChangeTime();
	void FilterCosmetic(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin);
	void FilterPassivePerk(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin);
	void DebugPrint();
	void IsCharacterHunterEqual(class UHSHCharacterItem* Character, TArray<struct FS_HunterSlot>* Inventory, bool* IsEqual, struct FS_HunterSlot* Array_Element, int* Array_Index);
	void IsCharacterSurvivorEqual(class UHSHCharacterItem* Character, TArray<struct FS_SurvivorSlot>* Inventory, bool* IsEqual, struct FS_SurvivorSlot* Array_Element, int* Array_Index);
	void SetItemAsSurvivor(const struct FString& Header, const struct FPrimaryAssetId& AssetsID, const struct FPlayerInfoStruct_G& PlayerInfoStruct_G, struct FPlayerInfoStruct_G* PlayerInfo);
	void SetItemAsHunter(const struct FString& Header, const struct FPrimaryAssetId& AssetsID, const struct FPlayerInfoStruct_G& PlayerInfoStruct_G, struct FPlayerInfoStruct_G* PlayerInfo);
	void RefreshIconAsHunter(const struct FPlayerInfoStruct_G& PlayerInfo);
	void RefreshIconAsSurvivor(const struct FPlayerInfoStruct_G& PlayerInfo);
	void RefreshIcon(const struct FPlayerInfoStruct_G& PlayerInfo);
	void SetSwitcherContent(int Index);
	void MakeInventory(TArray<struct FString>* OwnedItem, TArray<struct FPrimaryAssetId>* Array, TArray<struct FS_ItemInventory>* Items);
	struct FText GetCharacterName();
	void OnResponse_B6890D1941820439D13FCF831FBDCBFC(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_1E31C845450C26A20A60E1B57FAA7519(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_966DF74D4879098923528F81108F8B58(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnSkin();
	void OnPerk2();
	void OnPerk1();
	void OnPerk();
	void OnEmoteVO();
	void OnAccessories();
	void OnAccHead();
	void OnAccBack();
	void OnClick(const struct FText& Header, const struct FS_ItemInventory& SelectItem, bool SelectNull);
	void BndEvt__Widget_Button_Perk1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Perk2_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
	void BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_3_OnClickCharacters__DelegateSignature();
	void BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_4_OnClickPerk__DelegateSignature();
	void BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_6_OnClickSkin__DelegateSignature();
	void BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_31_OnClickEmoteVO__DelegateSignature();
	void BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature(class UHSHCharacterItem* HSHItem);
	void BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_12_OnUnHover__DelegateSignature();
	void OnPreview(const struct FS_ItemInventory& Item);
	void BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_0_OnClickAcces__DelegateSignature();
	void BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Head_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void Construct();
	void UpdatePlayerCharacter(const struct FPlayerInfoStruct_G& PlayerInfo);
	void OnCharacters();
	void OnChangeCharacter();
	void SaveChangeSetting();
	void UpdatePlayerItems(TArray<struct FString> Items, TArray<int> Number);
	void BackAction();
	void UpdatePlayerPerks(TArray<struct FString>* PlayerPerks);
	void UpdatePlayerSkins(TArray<struct FString>* PlayerSkins);
	void OnInitialized();
	void LoopAnimation();
	void UpdatePlayerHeads(TArray<struct FString> PlayerHeads);
	void UpdatePlayerBacks(TArray<struct FString>* PlayerBacks);
	void ExecuteUbergraph_Widget_CharacterSettingNewV2(int EntryPoint);
	void OnClickSuccess__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
