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

// BlueprintGeneratedClass LootBoxManagerComponent.LootBoxManagerComponent_C
// 0x0058 (FullSize[0x0158] - InheritedSize[0x0100])
class ULootBoxManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     lootBoxType;                                               // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ULootBoxPreviewManagerComponent_C*           lootBoxPreviewManagerComponent_REF;                        // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGameSparksScriptData*>               lootDropList;                                              // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnReceiveLootBox;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnOpenLootBoxFailed;                                       // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LootBoxManagerComponent.LootBoxManagerComponent_C");
		return ptr;
	}



	void OnResponse_6B96793E4578C2C68AFC6BA562F20912(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void OnResponse_227CDFC24CDE00312CDD8F8C9460FA1D(const struct FGSBuyVirtualGoodResponse& BuyVirtualGoodResponse, bool hasErrors);
	void OnResponse_959AF35B4441BE736CB9D3816BFE23B6(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void GrantCurrency(int Value, TEnumAsByte<E_GameCurrency_E_GameCurrency> CurrencyType);
	void BuyLootbox(int Quantity);
	void ClearLootDropPreview();
	void OpenLootBox(int Amount);
	void OpenLootBoxWithName(const struct FString& lootBoxType);
	void OpenLootBoxAmountWithName(const struct FString& lootBoxType, int Amount);
	void ExecuteUbergraph_LootBoxManagerComponent(int EntryPoint);
	void OnOpenLootBoxFailed__DelegateSignature();
	void OnReceiveLootBox__DelegateSignature(class UGameSparksScriptData* LootDropData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
