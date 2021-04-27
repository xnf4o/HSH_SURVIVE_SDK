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

// WidgetBlueprintGeneratedClass Widget_OptionDisplayMobile.Widget_OptionDisplayMobile_C
// 0x0058 (FullSize[0x0298] - InheritedSize[0x0240])
class UWidget_OptionDisplayMobile_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_Button_C*                            Widget_Button_Active;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Default;                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoice_C*                      Widget_ButtonChoice_AimAssist;                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoice_C*                      Widget_ButtonChoice_DisplayQuality;                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoice_C*                      Widget_ButtonChoice_HighFPS;                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceDropdown_C*              Widget_ButtonChoiceDropdown;                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_CameraSensitivity;                     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_ParticleQuality;                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionManagerComponent_C*                   OptionManager;                                             // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionDisplayMobile.Widget_OptionDisplayMobile_C");
		return ptr;
	}



	void AssignOptionManager(class UOptionManagerComponent_C* OptionManager);
	void ResetToDefualtSetting();
	void ApplySetting();
	void RefreshResolution();
	void UpdateValue();
	void BndEvt__Widget_ButtonChoice_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index);
	void BndEvt__Widget_ButtonChoice_C_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index);
	void BndEvt__Widget_ButtonChoiceArrow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonSlider_Gamma_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_ButtonChoiceDropdown_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ESelectInfo> Selection);
	void BndEvt__Widget_ButtonSlider_K2Node_ComponentBoundEvent_7_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_ButtonChoice_DynamicScale_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(int Index);
	void BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void ExecuteUbergraph_Widget_OptionDisplayMobile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
