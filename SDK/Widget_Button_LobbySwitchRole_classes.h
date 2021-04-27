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

// WidgetBlueprintGeneratedClass Widget_Button_LobbySwitchRole.Widget_Button_LobbySwitchRole_C
// 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
class UWidget_Button_LobbySwitchRole_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Close;                                                     // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Open;                                                      // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidget_ButtonImage_C*                       Widget_Button_Switchrole;                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_RoleSelector_C*                      Widget_RoleSelector;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClickedToHunter;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              UnHoverAlpha;                                              // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HoverAlpha;                                                // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsOpen;                                                   // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7QMS[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClickedToSurvivor;                                       // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClickedToSpectator;                                      // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Button_LobbySwitchRole.Widget_Button_LobbySwitchRole_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void BndEvt__Widget_Button_SwitchRole_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Widget_RoleSelector_K2Node_ComponentBoundEvent_3_OnClickedToHunter__DelegateSignature();
	void BndEvt__Widget_RoleSelector_K2Node_ComponentBoundEvent_4_OnClickedToSurvivor__DelegateSignature();
	void BndEvt__Widget_RoleSelector_K2Node_ComponentBoundEvent_5_OnClickedToSpectator__DelegateSignature();
	void ExecuteUbergraph_Widget_Button_LobbySwitchRole(int EntryPoint);
	void OnClickedToSpectator__DelegateSignature();
	void OnClickedToSurvivor__DelegateSignature();
	void OnClickedToHunter__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
