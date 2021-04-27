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

// WidgetBlueprintGeneratedClass Widget_Mainpanel.Widget_Mainpanel_C
// 0x00A0 (FullSize[0x02E0] - InheritedSize[0x0240])
class UWidget_Mainpanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Loop;                                                      // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            BeginPanel;                                                // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Forground;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Logo;                                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Redrope;                                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnFindMatch;                                               // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLootbox;                                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemStore;                                               // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSetting;                                                 // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnExit;                                                    // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnProfile;                                                 // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Mainpanel.Widget_Mainpanel_C");
		return ptr;
	}



	void EndMenuAnimation(float* Duration);
	void BeginMenuAnimation(float* Duration);
	void RefreshLootbox(int Number);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__Widget_Button_C_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_C_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BackAction();
	void BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_6_OnFindMatch__DelegateSignature();
	void BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_7_OnLootbox__DelegateSignature();
	void BndEvt__Widget_MenuBar_K2Node_ComponentBoundEvent_8_OnProfile__DelegateSignature();
	void LoopAnimation();
	void Construct();
	void ExecuteUbergraph_Widget_Mainpanel(int EntryPoint);
	void OnProfile__DelegateSignature();
	void OnExit__DelegateSignature();
	void OnSetting__DelegateSignature();
	void OnItemStore__DelegateSignature();
	void OnLootbox__DelegateSignature();
	void OnFindMatch__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
