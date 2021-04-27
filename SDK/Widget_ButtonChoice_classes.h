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

// WidgetBlueprintGeneratedClass Widget_ButtonChoice.Widget_ButtonChoice_C
// 0x0602 (FullSize[0x0842] - InheritedSize[0x0240])
class UWidget_ButtonChoice_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_This;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_Choice;                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0268(0x0018) (Edit, BlueprintVisible)
	bool                                               AutoSize;                                                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUpperCase;                                                // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AS1S[0x2];                                     // 0x0282(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Size;                                                      // 0x0284(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K0O9[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                FontSize;                                                  // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9RJY[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               Choice;                                                    // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              LeftOffset;                                                // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Size_Choice;                                               // 0x02BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     Padding_Choice;                                            // 0x02C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Active_Choice;                                             // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                                Style_ActiveButton;                                        // 0x02D8(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                Style_DeactiveButton;                                      // 0x0550(0x0278) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color_ActiveText;                                          // 0x07C8(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color_DeactiveText;                                        // 0x07F0(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        ButtonHorizontalAlignment;                                 // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          ButtonVerticalAlignment;                                   // 0x0819(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q9W7[0x6];                                     // 0x081A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       bIsEnable;                                                 // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FMargin                                     PaddingText;                                               // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlimentText;                                     // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlimentText;                                       // 0x0841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ButtonChoice.Widget_ButtonChoice_C");
		return ptr;
	}



	void InitButton(const struct FScriptDelegate& Event);
	void InitContructor(class UWidget_ButtonWithIndex_C* WidgetButtonIndex, const struct FText& Text);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_This_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnClickChioce(int Index);
	void SetActiveChoice(int Index);
	void Construct();
	void ExecuteUbergraph_Widget_ButtonChoice(int EntryPoint);
	void OnClicked__DelegateSignature(int Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
