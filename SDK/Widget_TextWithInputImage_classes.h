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

// WidgetBlueprintGeneratedClass Widget_TextWithInputImage.Widget_TextWithInputImage_C
// 0x0080 (FullSize[0x02C0] - InheritedSize[0x0240])
class UWidget_TextWithInputImage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              HorizontalBox_TextBox;                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_input;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  LeftText;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RightText;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bIsAction;                                                 // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IS7P[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text;                                                      // 0x0278(0x0018) (Edit, BlueprintVisible)
	class UDataTable*                                  DT_InputImage;                                             // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsUpper;                                                  // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CZPC[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     ImagePadding;                                              // 0x029C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       DebugActionInputKey;                                       // 0x02AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImageSize;                                                 // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TextWithInputImage.Widget_TextWithInputImage_C");
		return ptr;
	}



	void LoadImage(const struct FName& Image, struct FSlateBrush* Brush);
	class UUserWidget* CreateImage(const struct FName& Image);
	class UUserWidget* CreateTextBox(const struct FText& Text, int FontSize);
	void ResetTextOrImage();
	void UpdateTextOrImageArray(TArray<struct FS_TextOrImage>* TextOrImage);
	TArray<struct FS_TextOrImage> MakeTextOrImageArray(const struct FText& Text);
	bool IsActionButton();
	void RefreshButton();
	void SetupAndRefreshText(bool bIsAction, const struct FText& Text);
	void FindAction(TArray<struct FInputActionKeyMapping>* Action, struct FKey* Key);
	void UpdateTextAction();
	void UpdateText();
	void SetTextInput(const struct FText& Text);
	void FindImageDefind(const struct FString& SourceString, bool* bIsSuccess, struct FText* TextLeft, struct FName* Image, struct FText* TextRight);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Widget_TextWithInputImage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
