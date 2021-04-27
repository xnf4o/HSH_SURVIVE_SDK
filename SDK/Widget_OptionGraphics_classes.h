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

// WidgetBlueprintGeneratedClass Widget_OptionGraphics.Widget_OptionGraphics_C
// 0x0058 (FullSize[0x0298] - InheritedSize[0x0240])
class UWidget_OptionGraphics_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_Button_C*                            Widget_Button_Active;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Default;                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_AA;                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_Effect;                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_Postprocess;                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_Quality;                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_Shadow;                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_Texture;                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionManagerComponent_C*                   OptionManager;                                             // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionGraphics.Widget_OptionGraphics_C");
		return ptr;
	}



	void IsCustomQuality(int Input1, int Input2);
	void SetQuality(TEnumAsByte<E_Quality_E_Quality> Quality);
	void ApplySetting();
	void ResetToDeafaultSetting();
	void UpdateValue();
	void AssignOptionManager(class UOptionManagerComponent_C* OptionManager);
	void BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__Widget_ButtonChoiceArrow_Quality_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonChoiceArrow_Shadow_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonChoiceArrow_Texture_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonChoiceArrow_Postprocess_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonChoiceArrow_AA_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonChoiceArrow_Effect_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void ExecuteUbergraph_Widget_OptionGraphics(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
