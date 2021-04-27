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

// WidgetBlueprintGeneratedClass Widget_OptionSound.Widget_OptionSound_C
// 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
class UWidget_OptionSound_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_Button_C*                            Widget_Button_Active;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Default;                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_BGM;                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_Master;                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_SFX;                                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonSlider_C*                      Widget_ButtonSlider_Voice;                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionManagerComponent_C*                   OptionManager;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionSound.Widget_OptionSound_C");
		return ptr;
	}



	void Default();
	void Apply();
	void RefreshValue();
	void AssignOptionManager(class UOptionManagerComponent_C* OptionManager);
	void BndEvt__Widget_ButtonSlider_102_K2Node_ComponentBoundEvent_2_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_ButtonChoice_Subtitle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index);
	void BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__Widget_ButtonSlider_BGM_K2Node_ComponentBoundEvent_0_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_ButtonSlider_SFX_K2Node_ComponentBoundEvent_5_OnSlideValue__DelegateSignature(float Value);
	void BndEvt__Widget_ButtonSlider_Voice_K2Node_ComponentBoundEvent_6_OnSlideValue__DelegateSignature(float Value);
	void ExecuteUbergraph_Widget_OptionSound(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
