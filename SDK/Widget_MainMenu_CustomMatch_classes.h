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

// WidgetBlueprintGeneratedClass Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C
// 0x0100 (FullSize[0x0340] - InheritedSize[0x0240])
class UWidget_MainMenu_CustomMatch_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_92;                                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            MatchIDTextbox;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonImage_C*                       Widget_Button_Cancel;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_CreateRoom;                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button_JoinByID;                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Text_C*                              Widget_Text;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsCreatingRoom;                                            // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsJoiningMatch;                                            // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDescribing;                                              // 0x0292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0YKP[0x5];                                     // 0x0293(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTextBlock*>                          ButtonTextCache;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsLocal;                                                   // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L8L7[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     gameSessionId;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UGameLiftClientObject*                       GameLiftObjectCreate;                                      // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameLiftClientObject*                       GameLiftObjectJoin;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     AliasName;                                                 // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CustomMatchConfig;                                         // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     ticketId;                                                  // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWidget_LoadingPopup_C*                      CacheCreateRoomUI;                                         // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Region_Name;                                               // 0x0308(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     Region_Code;                                               // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MainMenu_CustomMatch.Widget_MainMenu_CustomMatch_C");
		return ptr;
	}



	bool Get_Widget_Button_JoinByID_bIsEnabled_1();
	bool Get_Widget_Button_CreateRoom_bIsEnabled_1();
	void GetRegionBySessionID(const struct FString& SessionId, struct FString* RegionCode);
	void GetPlayerID(struct FString* Return);
	void RefreshGameliftObject();
	void BndEvt__MatchIDTextbox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__Widget_Button_CreateRoom_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Widget_Button_JoinByID_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void JoinCustomMatch();
	void CreateCustommatchGS();
	void CreateCustomMatch();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Widget_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Widget_ButtonImage_52_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void Construct();
	void DescribeCustomMatch();
	void ExecuteUbergraph_Widget_MainMenu_CustomMatch(int EntryPoint);
	void OnCancel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
