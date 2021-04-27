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
// Parameters
//---------------------------------------------------------------------------

// Function OptionManagerComponent.OptionManagerComponent_C.ResetControl
struct UOptionManagerComponent_C_ResetControl_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetSkillcheckType
struct UOptionManagerComponent_C_SetSkillcheckType_Params
{
	int                                                SkillcheckType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetSkillcheckType
struct UOptionManagerComponent_C_GetSkillcheckType_Params
{
	int                                                SkillcheckType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetChatbox
struct UOptionManagerComponent_C_GetChatbox_Params
{
	TEnumAsByte<E_ChatOption_E_ChatOption>             Chatbox;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetChatbox
struct UOptionManagerComponent_C_SetChatbox_Params
{
	TEnumAsByte<E_ChatOption_E_ChatOption>             Chatbox;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SendToSubscriber
struct UOptionManagerComponent_C_SendToSubscriber_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.NotifySubscriber
struct UOptionManagerComponent_C_NotifySubscriber_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.Deregister
struct UOptionManagerComponent_C_Deregister_Params
{
	TScriptInterface<class UIOptionSubscriber_C>       Member;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionManagerComponent.OptionManagerComponent_C.Register
struct UOptionManagerComponent_C_Register_Params
{
	TScriptInterface<class UIOptionSubscriber_C>       Member;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetRegion
struct UOptionManagerComponent_C_GetRegion_Params
{
	struct FS_ServerRegion                             Regionn;                                                   // (Parm, OutParm, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetToggleCounch
struct UOptionManagerComponent_C_SetToggleCounch_Params
{
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleCounch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetToggleCounch
struct UOptionManagerComponent_C_GetToggleCounch_Params
{
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetToggleSprint
struct UOptionManagerComponent_C_GetToggleSprint_Params
{
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetToggleSprint
struct UOptionManagerComponent_C_SetToggleSprint_Params
{
	TEnumAsByte<E_ControlType_E_ControlType>           ToggleSprint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.RefreshControl
struct UOptionManagerComponent_C_RefreshControl_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetMouseSens
struct UOptionManagerComponent_C_SetMouseSens_Params
{
	float                                              MouseSens;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetMouseSens
struct UOptionManagerComponent_C_GetMouseSens_Params
{
	float                                              MouseSens;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetRegion
struct UOptionManagerComponent_C_SetRegion_Params
{
	struct FS_ServerRegion                             region;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetSystemToDefualtSetting
struct UOptionManagerComponent_C_ResetSystemToDefualtSetting_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetSystem
struct UOptionManagerComponent_C_ResetSystem_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ApplySystem
struct UOptionManagerComponent_C_ApplySystem_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.RefreshSystem
struct UOptionManagerComponent_C_RefreshSystem_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetLanguage
struct UOptionManagerComponent_C_SetLanguage_Params
{
	TEnumAsByte<E_Languages_E_Languages>               Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Languages;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetLanguage
struct UOptionManagerComponent_C_GetLanguage_Params
{
	struct FString                                     Languages;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetAudio
struct UOptionManagerComponent_C_ResetAudio_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetGraphics
struct UOptionManagerComponent_C_ResetGraphics_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetDisplay
struct UOptionManagerComponent_C_ResetDisplay_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetControlToDefualtSetting
struct UOptionManagerComponent_C_ResetControlToDefualtSetting_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetAudioToDefualtSetting
struct UOptionManagerComponent_C_ResetAudioToDefualtSetting_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetGraphicsToDefualtSetting
struct UOptionManagerComponent_C_ResetGraphicsToDefualtSetting_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetSubtitle
struct UOptionManagerComponent_C_GetSubtitle_Params
{
	struct FString                                     LanguageSubtitle;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetSubtitle
struct UOptionManagerComponent_C_SetSubtitle_Params
{
	TEnumAsByte<E_Languages_E_Languages>               Languages;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     LanguageSubtitle;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetQuality
struct UOptionManagerComponent_C_SetQuality_Params
{
	TEnumAsByte<E_Quality_E_Quality>                   Quality;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetQuality
struct UOptionManagerComponent_C_GetQuality_Params
{
	TEnumAsByte<E_Quality_E_Quality>                   Quality;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetEffect
struct UOptionManagerComponent_C_SetEffect_Params
{
	int                                                Effect;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetEffect
struct UOptionManagerComponent_C_GetEffect_Params
{
	int                                                Effects;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetTexture
struct UOptionManagerComponent_C_SetTexture_Params
{
	int                                                Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetTexture
struct UOptionManagerComponent_C_GetTexture_Params
{
	int                                                Texture;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetShadow
struct UOptionManagerComponent_C_SetShadow_Params
{
	int                                                Shadow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetShadow
struct UOptionManagerComponent_C_GetShadow_Params
{
	int                                                Shadow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetPostProcess
struct UOptionManagerComponent_C_SetPostProcess_Params
{
	int                                                Post_Process;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetPostProcess
struct UOptionManagerComponent_C_GetPostProcess_Params
{
	int                                                PostProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.RefreshGraphics
struct UOptionManagerComponent_C_RefreshGraphics_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetAntiAliasing
struct UOptionManagerComponent_C_SetAntiAliasing_Params
{
	int                                                AntiAlias;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetAntiAliasing
struct UOptionManagerComponent_C_GetAntiAliasing_Params
{
	int                                                AntiAlias;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.ApplyAudio
struct UOptionManagerComponent_C_ApplyAudio_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetFPSLimitWithNumber
struct UOptionManagerComponent_C_SetFPSLimitWithNumber_Params
{
	float                                              NewLimit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetFPSLimit
struct UOptionManagerComponent_C_SetFPSLimit_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetFPSLimit
struct UOptionManagerComponent_C_GetFPSLimit_Params
{
	float                                              FrameRateLimit;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.RefreshDisplay
struct UOptionManagerComponent_C_RefreshDisplay_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetUIAudio
struct UOptionManagerComponent_C_SetUIAudio_Params
{
	float                                              NewVolume;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UIVolume;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetDialogAudio
struct UOptionManagerComponent_C_SetDialogAudio_Params
{
	float                                              NewVolume;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DialogVolume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetMusicAudio
struct UOptionManagerComponent_C_SetMusicAudio_Params
{
	float                                              NewVolume;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MusicVolume;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetSFXAudio
struct UOptionManagerComponent_C_SetSFXAudio_Params
{
	float                                              NewVolume;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EffectVolume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetUIAudio
struct UOptionManagerComponent_C_GetUIAudio_Params
{
	float                                              UIVolume;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetDialogAudio
struct UOptionManagerComponent_C_GetDialogAudio_Params
{
	float                                              DialogVolume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetMusicAudio
struct UOptionManagerComponent_C_GetMusicAudio_Params
{
	float                                              MusicVolume;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetSFXAudio
struct UOptionManagerComponent_C_GetSFXAudio_Params
{
	float                                              EffectVolume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.TryGetSaveGameManager
struct UOptionManagerComponent_C_TryGetSaveGameManager_Params
{
	class USaveGameManager_C*                          SaveGameManager;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.RefreshAudio
struct UOptionManagerComponent_C_RefreshAudio_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetMasterAudio
struct UOptionManagerComponent_C_SetMasterAudio_Params
{
	float                                              NewVolume;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MasterVolume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetMasterAudio
struct UOptionManagerComponent_C_GetMasterAudio_Params
{
	float                                              MasterVolume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetIsDynamicResolutionEnabled
struct UOptionManagerComponent_C_SetIsDynamicResolutionEnabled_Params
{
	bool                                               bEnable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetRenderScale
struct UOptionManagerComponent_C_SetRenderScale_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetGamma
struct UOptionManagerComponent_C_SetGamma_Params
{
	float                                              Gamma;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetCurrentWindowMode
struct UOptionManagerComponent_C_SetCurrentWindowMode_Params
{
	TEnumAsByte<Engine_EWindowMode>                    InFullscreenMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetIsVSyncEnable
struct UOptionManagerComponent_C_SetIsVSyncEnable_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionManagerComponent.OptionManagerComponent_C.SetResolutionSupport
struct UOptionManagerComponent_C_SetResolutionSupport_Params
{
	struct FText                                       InText;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bSetSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionManagerComponent.OptionManagerComponent_C.ResetDisplayToDefualtSetting
struct UOptionManagerComponent_C_ResetDisplayToDefualtSetting_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ApplyAllSetting
struct UOptionManagerComponent_C_ApplyAllSetting_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetIsDynamicResolutionEnabled
struct UOptionManagerComponent_C_GetIsDynamicResolutionEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetRenderScale
struct UOptionManagerComponent_C_GetRenderScale_Params
{
	float                                              CurrentScaleNormalized;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentScaleValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinScaleValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxScaleValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetGamma
struct UOptionManagerComponent_C_GetGamma_Params
{
	float                                              Gamma;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetCurrentWindowMode
struct UOptionManagerComponent_C_GetCurrentWindowMode_Params
{
	TEnumAsByte<Engine_EWindowMode>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetIsVSyncEnable
struct UOptionManagerComponent_C_GetIsVSyncEnable_Params
{
	bool                                               Enabled;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionManagerComponent.OptionManagerComponent_C.GetResolutionSupport
struct UOptionManagerComponent_C_GetResolutionSupport_Params
{
	bool                                               CanGet;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FText>                               ReturnText;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnCurrent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.ReceiveBeginPlay
struct UOptionManagerComponent_C_ReceiveBeginPlay_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.OnInitialize
struct UOptionManagerComponent_C_OnInitialize_Params
{
};

// Function OptionManagerComponent.OptionManagerComponent_C.ExecuteUbergraph_OptionManagerComponent
struct UOptionManagerComponent_C_ExecuteUbergraph_OptionManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionManagerComponent.OptionManagerComponent_C.OnApplyGameSettings__DelegateSignature
struct UOptionManagerComponent_C_OnApplyGameSettings__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
