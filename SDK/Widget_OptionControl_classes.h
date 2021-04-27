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

// WidgetBlueprintGeneratedClass Widget_OptionControl.Widget_OptionControl_C
// 0x0090 (FullSize[0x02D0] - InheritedSize[0x0240])
class UWidget_OptionControl_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                HunterVBox;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                SurvivorVBox;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceDropdown_C*              ToggleCounch;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceDropdown_C*              ToggleSprint;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Active;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceTab_C*                   Widget_Button_ChoiceControl;                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Default;                                     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_ResScale;                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_SkillcheckType;                                     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_210;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionManagerComponent_C*                   OptionManager;                                             // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionControlSaveGame_C*                    OptionControl;                                             // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget_ControlSelect_C*>             SurvivorControlWidgets;                                    // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWidget_ControlSelect_C*>             HunterControlWidgets;                                      // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionControl.Widget_OptionControl_C");
		return ptr;
	}



	void SetSkillcheckControl();
	struct FText Get_Hunter();
	struct FText Get_Survivor();
	void ChangeStyle(class UButton* Button, bool bActive);
	void FindMapIndexByName(const struct FName& Name, bool IsSurvivor, int* Index);
	void UpdateValues();
	void ResetToDeafaultSetting();
	void ApplySetting();
	void AssignOptionManager(class UOptionManagerComponent_C* OptionManager);
	void BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void Initialize();
	void OnSurvivorKeySelected(int Index, const struct FName& Name, const struct FInputChord& InputChord);
	void OnHunterKeySelected(int Index, const struct FName& Name, const struct FInputChord& InputChord);
	void BndEvt__Widget_ButtonSlider_ResScale_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ESelectInfo> Selection);
	void BndEvt__ToggleCounch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ESelectInfo> Selection);
	void BndEvt__Widget_Button_ChoiceControl_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(int Index);
	void BndEvt__Widget_SkillcheckType_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void ExecuteUbergraph_Widget_OptionControl(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
