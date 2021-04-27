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

// WidgetBlueprintGeneratedClass Widget_SettingGame.Widget_SettingGame_C
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class UWidget_SettingGame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_SettingPanelInGame_C*                Widget_SettingPanelInGame;                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnExitWidget;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SettingGame.Widget_SettingGame_C");
		return ptr;
	}



	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void BndEvt__Widget_SettingPanelInGame_K2Node_ComponentBoundEvent_1_OnExit__DelegateSignature();
	void ExecuteUbergraph_Widget_SettingGame(int EntryPoint);
	void OnExitWidget__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
