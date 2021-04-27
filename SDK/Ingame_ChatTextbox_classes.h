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

// WidgetBlueprintGeneratedClass Ingame_ChatTextbox.Ingame_ChatTextbox_C
// 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
class UIngame_ChatTextbox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOut;                                                   // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Chat;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<E_ChatType_E_ChatType>                 ChatType;                                                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Timeout;                                                   // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D2U4[0x6];                                     // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIngame_ChatBox_C*                           Ingame_ChatBox;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Ingame_ChatTextbox.Ingame_ChatTextbox_C");
		return ptr;
	}



	void InitializeChatAlert(const struct FS_ChatData& S_ChatData, class UIngame_ChatBox_C* Widget);
	void ForceToggleVisibility(bool bIsVisible);
	void InitializeChatText(const struct FS_ChatData& S_ChatData, class UIngame_ChatBox_C* Widget);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void ExecuteUbergraph_Ingame_ChatTextbox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
