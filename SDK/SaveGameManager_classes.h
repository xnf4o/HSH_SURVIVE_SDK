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

// BlueprintGeneratedClass SaveGameManager.SaveGameManager_C
// 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
class USaveGameManager_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     SlotName;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UOptionDisplaySaveGame_C*                    OptionDisplay;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DisplaySlot;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UOptionAudioSaveGame_C*                      OptionAudio;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     AudioSlot;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnInitialize;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOptionGraphicsSaveGame_C*                   OptionGraphics;                                            // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     GraphicsSlot;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UOptionControlSaveGame_C*                    OptionControl;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ControlSlot;                                               // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UTutorialSaveGame_C*                         Tutorial;                                                  // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     TutorialSlot;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UOptionSystemSaveGame_C*                     OptionSystem;                                              // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SystemSlot;                                                // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAnnouncementSaveGame_C*                     Announcement;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     AnnouncementSlot;                                          // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SaveGameManager.SaveGameManager_C");
		return ptr;
	}



	void GetOptionGraphics(class UOptionGraphicsSaveGame_C** OptionGraphics);
	class USaveGame* LoadGame(const struct FString& SlotName, const struct FString& ExtraName, class UClass* SaveGameClass, bool* CreateNew);
	void SaveGame(const struct FString& SlotName, const struct FString& ExtraName, class USaveGame* SaveGameObject, bool* SaveSuccess, bool* CreateNew);
	void GetOptionDisplay(class UOptionDisplaySaveGame_C** OptionDisplay);
	void DefaultOptionDisplay();
	void SaveOptionAudio();
	void LoadOptionAudio();
	void DefaultOptionAudio();
	void SaveOptionGraphics();
	void LoadOptionGraphics();
	void DefaultOptionGraphics();
	void LoadOptionDisplay();
	void SaveOptionControl();
	void LoadOptionControl();
	void DefaultOptionControl();
	void SaveOptionDisplay();
	void SaveTutorial();
	void LoadTutorial();
	void DefualtTutorial();
	void SaveOptionSystem();
	void LoadOptionSystem();
	void DefaultOptionSystem();
	void Initialize(const struct FString& SlotName);
	void SaveAnnouncement();
	void LoadAnnouncement();
	void DefaultAnnouncement();
	void ExecuteUbergraph_SaveGameManager(int EntryPoint);
	void OnInitialize__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
