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

// WidgetBlueprintGeneratedClass Widget_ButtonChoiceTab.Widget_ButtonChoiceTab_C
// 0x06A8 (FullSize[0x08E8] - InheritedSize[0x0240])
class UWidget_ButtonChoiceTab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              HorizontalBox_Choice;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0258(0x0018) (Edit, BlueprintVisible)
	bool                                               AutoSize;                                                  // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUpperCase;                                                // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_77IK[0x6];                                     // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                FontSize;                                                  // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZWOC[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               Choice;                                                    // 0x0290(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              LeftOffset;                                                // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Size_Choice;                                               // 0x02A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     Padding_Choice;                                            // 0x02AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Active_Choice;                                             // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                                Style_ActiveButton;                                        // 0x02C0(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                Style_DeactiveButton;                                      // 0x0538(0x0278) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color_ActiveText;                                          // 0x07B0(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color_DeactiveText;                                        // 0x07D8(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        ButtonHorizontalAlignment;                                 // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          ButtonVerticalAlignment;                                   // 0x0801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_38TQ[0x6];                                     // 0x0802(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       bIsEnable;                                                 // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FMargin                                     PaddingText;                                               // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlimentText;                                     // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlimentText;                                       // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_15TK[0x2];                                     // 0x082A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateChildSize                             InSize;                                                    // 0x082C(0x0008) (Edit, BlueprintVisible, NoDestructor)
	unsigned char                                      UnknownData_YJ2R[0x4];                                     // 0x0834(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Brush;                                                     // 0x0838(0x0088) (Edit, BlueprintVisible)
	struct FVector2D                                   Size;                                                      // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     PaddingImage;                                              // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<bool>                                       bIsCollaspe;                                               // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ButtonChoiceTab.Widget_ButtonChoiceTab_C");
		return ptr;
	}



	void InitButton(const struct FScriptDelegate& Event);
	void InitContructor(class UWidget_ButtonWithIndex_C* WidgetButtonIndex, const struct FText& Text);
	void BndEvt__Button_This_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnClickChioce(int Index);
	void SetActiveChoice(int Index);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Widget_ButtonChoiceTab(int EntryPoint);
	void OnClicked__DelegateSignature(int Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
