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

// WidgetBlueprintGeneratedClass Widget_OptionDisplay.Widget_OptionDisplay_C
// 0x0060 (FullSize[0x02A0] - InheritedSize[0x0240])
class UWidget_OptionDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_Button_C*                            Widget_Button_Active;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Default;                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_Gamma;                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_ResScale;                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_DisplayMode;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_DynamicScale;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_FPSLImit;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_Resolution;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_VSync;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionManagerComponent_C*                   OptionManager;                                             // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionDisplay.Widget_OptionDisplay_C");
		return ptr;
	}



	void AssignOptionManager(class UOptionManagerComponent_C* OptionManager);
	void ResetToDefualtSetting();
	void ApplySetting();
	void RefreshResolution();
	void UpdateValue();
	void BndEvt__Widget_ButtonChoiceArrow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonSlider_Gamma_K2Node_ComponentBoundEvent_4_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_ButtonSlider_K2Node_ComponentBoundEvent_7_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__Widget_FPSLImit_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_VSync_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_DynamicScale_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_DisplayMode_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void ExecuteUbergraph_Widget_OptionDisplay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
