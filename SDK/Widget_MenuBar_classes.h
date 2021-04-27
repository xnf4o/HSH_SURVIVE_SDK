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

// WidgetBlueprintGeneratedClass Widget_MenuBar.Widget_MenuBar_C
// 0x0168 (FullSize[0x03A8] - InheritedSize[0x0240])
class UWidget_MenuBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG;                                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_3;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Slash;                                                     // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Slash2;                                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Slash3;                                                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Slash4;                                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Customize;                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonImageNumber_C*                 Widget_Button_Lootbox;                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Profile;                                     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Store;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_Switchrole_C*                 Widget_Button_Switchrole;                                  // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_Menubarlist_E_Menubarlist>, bool> MenuList;                                                  // 0x02A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<TEnumAsByte<E_Menubarlist_E_Menubarlist>, bool> MenuActive;                                                // 0x02F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FMargin                                     ChildPadding;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    OnCustomize;                                               // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSwitchRole;                                              // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLootbox;                                                 // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnProfile;                                                 // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnStore;                                                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MenuBar.Widget_MenuBar_C");
		return ptr;
	}



	void EnableSelectMenuActive(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList);
	void DisableSelectMenuActive(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList);
	void ShowSelectMenuList(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList);
	void HideSelectMenuList(TEnumAsByte<E_Menubarlist_E_Menubarlist> MenuList);
	void InitializeButton();
	void RefreshRole(const struct FPlayerInfoStruct_G& PlayerInfo);
	void RefreshLootbox(int Number);
	class UWidget* GetSlash(class UWidget* ItemToFind);
	void SetWidget(class UWidget* WidgetObject, bool bIsActive);
	void BndEvt__Widget_Button_Findmatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Profile_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Store_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Widget_MenuBar(int EntryPoint);
	void OnStore__DelegateSignature();
	void OnProfile__DelegateSignature();
	void OnLootbox__DelegateSignature();
	void OnSwitchRole__DelegateSignature();
	void OnCustomize__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
