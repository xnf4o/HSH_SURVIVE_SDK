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

// BlueprintGeneratedClass OptionManagerComponent.OptionManagerComponent_C
// 0x0038 (FullSize[0x0138] - InheritedSize[0x0100])
class UOptionManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USaveGameManager_C*                          SaveGameManager;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnApplyGameSettings;                                       // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<TScriptInterface<class UIOptionSubscriber_C>> Cache;                                                     // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass OptionManagerComponent.OptionManagerComponent_C");
		return ptr;
	}



	void ResetControl();
	void SetSkillcheckType(int SkillcheckType);
	void GetSkillcheckType(int* SkillcheckType);
	void GetChatbox(TEnumAsByte<E_ChatOption_E_ChatOption>* Chatbox);
	void SetChatbox(TEnumAsByte<E_ChatOption_E_ChatOption> Chatbox);
	void SendToSubscriber();
	void NotifySubscriber();
	void Deregister(const TScriptInterface<class UIOptionSubscriber_C>& Member);
	void Register(const TScriptInterface<class UIOptionSubscriber_C>& Member);
	void GetRegion(struct FS_ServerRegion* Regionn);
	void SetToggleCounch(TEnumAsByte<E_ControlType_E_ControlType> ToggleCounch);
	void GetToggleCounch(TEnumAsByte<E_ControlType_E_ControlType>* ToggleSprint);
	void GetToggleSprint(TEnumAsByte<E_ControlType_E_ControlType>* ToggleSprint);
	void SetToggleSprint(TEnumAsByte<E_ControlType_E_ControlType> ToggleSprint);
	void RefreshControl();
	void SetMouseSens(float MouseSens);
	void GetMouseSens(float* MouseSens);
	void SetRegion(const struct FS_ServerRegion& region);
	void ResetSystemToDefualtSetting();
	void ResetSystem();
	void ApplySystem();
	void RefreshSystem();
	void SetLanguage(TEnumAsByte<E_Languages_E_Languages> Index, struct FString* Languages);
	void GetLanguage(struct FString* Languages);
	void ResetAudio();
	void ResetGraphics();
	void ResetDisplay();
	void ResetControlToDefualtSetting();
	void ResetAudioToDefualtSetting();
	void ResetGraphicsToDefualtSetting();
	void GetSubtitle(struct FString* LanguageSubtitle);
	void SetSubtitle(TEnumAsByte<E_Languages_E_Languages> Languages, struct FString* LanguageSubtitle);
	void SetQuality(TEnumAsByte<E_Quality_E_Quality> Quality);
	void GetQuality(TEnumAsByte<E_Quality_E_Quality>* Quality);
	void SetEffect(int Effect);
	void GetEffect(int* Effects);
	void SetTexture(int Texture);
	void GetTexture(int* Texture);
	void SetShadow(int Shadow);
	void GetShadow(int* Shadow);
	void SetPostProcess(int Post_Process);
	void GetPostProcess(int* PostProcess);
	void RefreshGraphics();
	void SetAntiAliasing(int AntiAlias);
	void GetAntiAliasing(int* AntiAlias);
	void ApplyAudio();
	void SetFPSLimitWithNumber(float NewLimit);
	void SetFPSLimit(const struct FText& Text);
	void GetFPSLimit(float* FrameRateLimit);
	void RefreshDisplay();
	void SetUIAudio(float NewVolume, float* UIVolume);
	void SetDialogAudio(float NewVolume, float* DialogVolume);
	void SetMusicAudio(float NewVolume, float* MusicVolume);
	void SetSFXAudio(float NewVolume, float* EffectVolume);
	void GetUIAudio(float* UIVolume);
	void GetDialogAudio(float* DialogVolume);
	void GetMusicAudio(float* MusicVolume);
	void GetSFXAudio(float* EffectVolume);
	void TryGetSaveGameManager(class USaveGameManager_C** SaveGameManager);
	void RefreshAudio();
	void SetMasterAudio(float NewVolume, float* MasterVolume);
	void GetMasterAudio(float* MasterVolume);
	bool SetIsDynamicResolutionEnabled(bool bEnable);
	void SetRenderScale(float Value);
	void SetGamma(float Gamma);
	void SetCurrentWindowMode(TEnumAsByte<Engine_EWindowMode> InFullscreenMode);
	void SetIsVSyncEnable(bool bEnabled);
	void SetResolutionSupport(const struct FText& InText, bool* bSetSuccess);
	void ResetDisplayToDefualtSetting();
	void ApplyAllSetting();
	bool GetIsDynamicResolutionEnabled();
	void GetRenderScale(float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue);
	void GetGamma(float* Gamma);
	TEnumAsByte<Engine_EWindowMode> GetCurrentWindowMode();
	void GetIsVSyncEnable(bool* Enabled);
	void GetResolutionSupport(bool* CanGet, TArray<struct FText>* ReturnText, int* ReturnCurrent);
	void ReceiveBeginPlay();
	void OnInitialize();
	void ExecuteUbergraph_OptionManagerComponent(int EntryPoint);
	void OnApplyGameSettings__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
