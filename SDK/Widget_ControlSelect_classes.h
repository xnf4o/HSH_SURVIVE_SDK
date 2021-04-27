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

// WidgetBlueprintGeneratedClass Widget_ControlSelect.Widget_ControlSelect_C
// 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
class UWidget_ControlSelect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG;                                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                           InputKeySelector_1;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                           InputKeySelector_2;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text_Description;                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FName                                       MyActionName;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnKeySelected_1;                                           // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnKeySelected_2;                                           // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       MyActionDisplayName;                                       // 0x0298(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ControlSelect.Widget_ControlSelect_C");
		return ptr;
	}



	void SetInputSelectValues(const struct FName& Name, const struct FText& MyActionDisplayName, TArray<struct FInputActionKeyMapping>* ActionKeyMap);
	void BndEvt__InputKeySelector_410_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Widget_ControlSelect(int EntryPoint);
	void OnKeySelected_1__DelegateSignature(int Index, const struct FName& Name, const struct FInputChord& InputChord);
	void OnKeySelected_0__DelegateSignature(int Index, const struct FName& Name, const struct FInputChord& InputChord);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
