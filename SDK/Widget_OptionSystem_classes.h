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

// WidgetBlueprintGeneratedClass Widget_OptionSystem.Widget_OptionSystem_C
// 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
class UWidget_OptionSystem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_Button_C*                            Widget_Button_Active;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_Default;                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_Chatbox;                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_culture;                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceArrow_C*                 Widget_ButtonChoiceArrow_Region;                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionManagerComponent_C*                   OptionManager;                                             // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionSystem.Widget_OptionSystem_C");
		return ptr;
	}



	void Default();
	void Apply();
	void RefreshValue();
	void AssignOptionManager(class UOptionManagerComponent_C* OptionManager);
	void BndEvt__Widget_Button_Active_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_Default_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_ButtonChoiceArrow_culture_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonChoiceArrow_Region_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void BndEvt__Widget_ButtonChoiceArrow_Chatbox_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index, const struct FText& Text);
	void ExecuteUbergraph_Widget_OptionSystem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
