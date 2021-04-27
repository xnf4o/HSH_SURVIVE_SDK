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

// WidgetBlueprintGeneratedClass Widget_StoreDirect.Widget_StoreDirect_C
// 0x00A0 (FullSize[0x02E0] - InheritedSize[0x0240])
class UWidget_StoreDirect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_97;                                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceTab_C*                   Widget_ButtonChoiceAccPart;                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonChoiceTab_C*                   Widget_ButtonChoiceType;                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         Widget_StoreGrid_All;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   Widget_StoreGrid_AllPanel;                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         Widget_StoreGrid_Hunter;                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   Widget_StoreGrid_Hunter_Panel;                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_StoreGrid_C*                         Widget_StoreGrid_Survivor;                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   Widget_StoreGrid_Survivor_Panel;                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Panel;                                      // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CacheIsError;                                              // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KIN1[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameSparksScriptData*>               CacheResponse;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnChioce;                                                  // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnChoice2;                                                 // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StoreDirect.Widget_StoreDirect_C");
		return ptr;
	}



	void SetActiveNavigation(int Index, bool bIsAcc, int AccIndex);
	void GetWidth(float* GetWidth);
	void ShowPerksHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowPerksSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void Construct();
	void BndEvt__Widget_ButtonChoiceTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index);
	void ShowCharacterSurvivorShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowCharacterHunterShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ShowSkinHunterShop();
	void ShowSkinSurvivorShop();
	void ShowAccHunterShop_Head();
	void ShowAccSurvivorShop_Head();
	void ShowAccHunterShop_Back();
	void ShowAccSurvivorShop_Back();
	void BndEvt__Widget_ButtonChoiceTab_2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index);
	void ShowBundleShop(bool IsError, const struct FGSListVirtualGoodsResponse& Response);
	void ExecuteUbergraph_Widget_StoreDirect(int EntryPoint);
	void OnChoice2__DelegateSignature(int Index);
	void OnChioce__DelegateSignature(int Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
