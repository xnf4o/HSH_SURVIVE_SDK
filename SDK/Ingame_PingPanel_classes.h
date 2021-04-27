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

// WidgetBlueprintGeneratedClass Ingame_PingPanel.Ingame_PingPanel_C
// 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
class UIngame_PingPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              CanCancelDegrees;                                          // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G0FT[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                MainCanvas;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                         ActivePing;                                                // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   ScreenSize;                                                // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PingWidget;                                                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Ingame_PingPanel.Ingame_PingPanel_C");
		return ptr;
	}



	void GetUserDisplayResolution(struct FVector2D* Display);
	void IsCanCancel_(class AHSHCharacterBase* Character, const struct FVector& Location, bool* Cancel_);
	void MakeTextDistance(bool IsCantCancel, TEnumAsByte<E_PingCase_E_PingCase>* Case, struct FVector* Location, struct FText* DataText, class AHSHCharacterBase* Character, struct FText* Return);
	void UpdateWidget(class UUserWidget* PingWidget, const struct FS_PingPair& PingData, bool IsInScreen, float Angle);
	void GetScreenEdgeCrood(const struct FVector& PingLocation, float Margin, float* CoordX, float* CoordY, float* Angle);
	void GetTargetLocation(class AActor* Target, const struct FVector& DefualtLocation, bool IsUpdateLocation, struct FVector* Location);
	void UpdateActivePing(TArray<class UUserWidget*> ActivePing, TArray<struct FS_PingPair> ActivePingData);
	void Construct();
	void ShowPing(TArray<struct FS_PingPair> ActivePing);
	void UpdatePing(TArray<struct FS_PingPair> ActivePing);
	void UpdatePingUI(const struct FVector& WorldLocation, int Index);
	void HidePingUI();
	void ShowPingUI(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& Color, const struct FVector& WorldLocation);
	void ExecuteUbergraph_Ingame_PingPanel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
