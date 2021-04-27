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

// WidgetBlueprintGeneratedClass Widget_StoreList.Widget_StoreList_C
// 0x01B8 (FullSize[0x03F8] - InheritedSize[0x0240])
class UWidget_StoreList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_103;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Line_Down;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Line_Up;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ListPanel;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CustomizeHeaderButtonActive_C*       Widget_Header_CrystalStore;                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CustomizeHeaderButtonActive_C*       Widget_Header_DirectStore;                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CustomizeHeaderButtonActive_C*       Widget_Header_Discount;                                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CustomizeHeaderButtonActive_C*       Widget_Header_Features;                                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_CustomizeHeaderButtonActive_C*       Widget_Header_TokenStore;                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x0298(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClickDiscount;                                           // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClickCrystal;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClickToken;                                              // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClickDirectStore;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClickFeatures;                                           // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StoreList.Widget_StoreList_C");
		return ptr;
	}



	void SetLineCosmetic(int Selection);
	void SetPlayerinfo(const struct FPlayerInfoStruct_G& PlayerInfo);
	void BndEvt__Widget_Header_Emote_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Widget_Header_Perk_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_Header_Skin_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__Widget_Header_Accessories_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Widget_Header_Features_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnDiscount();
	void OnToken();
	void OnCrystal();
	void OnDirectStore();
	void LineOrder(class UWidget* ChildWidget);
	void EnableStoreButton(bool bInIsEnabled);
	void OnFeatures();
	void ExecuteUbergraph_Widget_StoreList(int EntryPoint);
	void OnClickFeatures__DelegateSignature();
	void OnClickDirectStore__DelegateSignature();
	void OnClickToken__DelegateSignature();
	void OnClickCrystal__DelegateSignature();
	void OnClickDiscount__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
