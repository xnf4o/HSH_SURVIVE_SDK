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

// WidgetBlueprintGeneratedClass Widget_ShowStatus3D.Widget_ShowStatus3D_C
// 0x0068 (FullSize[0x02A8] - InheritedSize[0x0240])
class UWidget_ShowStatus3D_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              HorizontalBox_1;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Status;                                          // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTexture2D*>                          CacheIcons;                                                // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> CacheModes;                                                // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS_TagStatus>                        CacheData;                                                 // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ShowStatus3D.Widget_ShowStatus3D_C");
		return ptr;
	}



	void Refresh();
	void FillContent(class UPanelWidget* Panel);
	void UpdateWidgetValue_Icon(TArray<class UTexture2D*>* Icons, TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>>* Modes, TArray<struct FS_TagStatus>* Data);
	void UpdateWidgetValue(const struct FText& Text);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Widget_ShowStatus3D(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
