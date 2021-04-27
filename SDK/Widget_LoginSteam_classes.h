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

// WidgetBlueprintGeneratedClass Widget_LoginSteam.Widget_LoginSteam_C
// 0x0190 (FullSize[0x03D0] - InheritedSize[0x0240])
class UWidget_LoginSteam_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                           CircularThrobber_Loading;                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Status;                                          // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Button_C*                            Widget_Button;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoginBase_C*                                LoginObject;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGSAuthenticationResponse                   CacheRequest;                                              // 0x0270(0x0130) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     AnnouncementVersion;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     AnnouncementOnline;                                        // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     AnnouncementOffline;                                       // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_LoginSteam.Widget_LoginSteam_C");
		return ptr;
	}



	bool ShouldCheckVersion();
	void OnResponse_8E90C40F4C5961FA26C4188F05159A0C(const struct FGSAuthenticationResponse& AuthenticationResponse, bool hasErrors);
	void OnResponse_26AFAFD14B880C0E83DDAB8171C82F7A(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors);
	void ShowTryAgain(const struct FText& Status);
	void BndEvt__Widget_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void AutoLogin();
	void AssignLoginObject(class ULoginBase_C* LoginObject);
	void CheckVersion();
	void CheckNetwork();
	void CheckSteam();
	void BeginFocus();
	void Login();
	void OnConfirmServerOffline();
	void OnConfirmServerOnline();
	void OnConfirmVersion();
	void ExecuteUbergraph_Widget_LoginSteam(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
