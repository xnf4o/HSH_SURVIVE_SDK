// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function OptionManagerComponent.OptionManagerComponent_C.ResetControl
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetControl");

	UOptionManagerComponent_C_ResetControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetSkillcheckType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkillcheckType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetSkillcheckType(int SkillcheckType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetSkillcheckType");

	UOptionManagerComponent_C_SetSkillcheckType_Params params;
	params.SkillcheckType = SkillcheckType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetSkillcheckType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SkillcheckType                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetSkillcheckType(int* SkillcheckType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetSkillcheckType");

	UOptionManagerComponent_C_GetSkillcheckType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkillcheckType != nullptr)
		*SkillcheckType = params.SkillcheckType;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetChatbox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ChatOption_E_ChatOption> Chatbox                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetChatbox(TEnumAsByte<E_ChatOption_E_ChatOption>* Chatbox)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetChatbox");

	UOptionManagerComponent_C_GetChatbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Chatbox != nullptr)
		*Chatbox = params.Chatbox;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetChatbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ChatOption_E_ChatOption> Chatbox                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetChatbox(TEnumAsByte<E_ChatOption_E_ChatOption> Chatbox)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetChatbox");

	UOptionManagerComponent_C_SetChatbox_Params params;
	params.Chatbox = Chatbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SendToSubscriber
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::SendToSubscriber()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SendToSubscriber");

	UOptionManagerComponent_C_SendToSubscriber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.NotifySubscriber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::NotifySubscriber()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.NotifySubscriber");

	UOptionManagerComponent_C_NotifySubscriber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.Deregister
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UIOptionSubscriber_C> Member                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOptionManagerComponent_C::Deregister(const TScriptInterface<class UIOptionSubscriber_C>& Member)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.Deregister");

	UOptionManagerComponent_C_Deregister_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.Register
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UIOptionSubscriber_C> Member                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOptionManagerComponent_C::Register(const TScriptInterface<class UIOptionSubscriber_C>& Member)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.Register");

	UOptionManagerComponent_C_Register_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetRegion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_ServerRegion         Regionn                        (Parm, OutParm, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetRegion(struct FS_ServerRegion* Regionn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetRegion");

	UOptionManagerComponent_C_GetRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Regionn != nullptr)
		*Regionn = params.Regionn;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetToggleCounch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ControlType_E_ControlType> ToggleCounch                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetToggleCounch(TEnumAsByte<E_ControlType_E_ControlType> ToggleCounch)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetToggleCounch");

	UOptionManagerComponent_C_SetToggleCounch_Params params;
	params.ToggleCounch = ToggleCounch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetToggleCounch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ControlType_E_ControlType> ToggleSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetToggleCounch(TEnumAsByte<E_ControlType_E_ControlType>* ToggleSprint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetToggleCounch");

	UOptionManagerComponent_C_GetToggleCounch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToggleSprint != nullptr)
		*ToggleSprint = params.ToggleSprint;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetToggleSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_ControlType_E_ControlType> ToggleSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetToggleSprint(TEnumAsByte<E_ControlType_E_ControlType>* ToggleSprint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetToggleSprint");

	UOptionManagerComponent_C_GetToggleSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToggleSprint != nullptr)
		*ToggleSprint = params.ToggleSprint;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetToggleSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ControlType_E_ControlType> ToggleSprint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetToggleSprint(TEnumAsByte<E_ControlType_E_ControlType> ToggleSprint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetToggleSprint");

	UOptionManagerComponent_C_SetToggleSprint_Params params;
	params.ToggleSprint = ToggleSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.RefreshControl
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::RefreshControl()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.RefreshControl");

	UOptionManagerComponent_C_RefreshControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetMouseSens
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MouseSens                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetMouseSens(float MouseSens)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetMouseSens");

	UOptionManagerComponent_C_SetMouseSens_Params params;
	params.MouseSens = MouseSens;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetMouseSens
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MouseSens                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetMouseSens(float* MouseSens)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetMouseSens");

	UOptionManagerComponent_C_GetMouseSens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseSens != nullptr)
		*MouseSens = params.MouseSens;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetRegion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ServerRegion         region                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetRegion(const struct FS_ServerRegion& region)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetRegion");

	UOptionManagerComponent_C_SetRegion_Params params;
	params.region = region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetSystemToDefualtSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetSystemToDefualtSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetSystemToDefualtSetting");

	UOptionManagerComponent_C_ResetSystemToDefualtSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetSystem
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetSystem");

	UOptionManagerComponent_C_ResetSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ApplySystem
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ApplySystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ApplySystem");

	UOptionManagerComponent_C_ApplySystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.RefreshSystem
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::RefreshSystem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.RefreshSystem");

	UOptionManagerComponent_C_RefreshSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetLanguage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Languages_E_Languages> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Languages                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetLanguage(TEnumAsByte<E_Languages_E_Languages> Index, struct FString* Languages)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetLanguage");

	UOptionManagerComponent_C_SetLanguage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Languages != nullptr)
		*Languages = params.Languages;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetLanguage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Languages                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetLanguage(struct FString* Languages)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetLanguage");

	UOptionManagerComponent_C_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Languages != nullptr)
		*Languages = params.Languages;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetAudio
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetAudio");

	UOptionManagerComponent_C_ResetAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetGraphics
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetGraphics");

	UOptionManagerComponent_C_ResetGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetDisplay
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetDisplay");

	UOptionManagerComponent_C_ResetDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetControlToDefualtSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetControlToDefualtSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetControlToDefualtSetting");

	UOptionManagerComponent_C_ResetControlToDefualtSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetAudioToDefualtSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetAudioToDefualtSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetAudioToDefualtSetting");

	UOptionManagerComponent_C_ResetAudioToDefualtSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetGraphicsToDefualtSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetGraphicsToDefualtSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetGraphicsToDefualtSetting");

	UOptionManagerComponent_C_ResetGraphicsToDefualtSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetSubtitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 LanguageSubtitle               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetSubtitle(struct FString* LanguageSubtitle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetSubtitle");

	UOptionManagerComponent_C_GetSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LanguageSubtitle != nullptr)
		*LanguageSubtitle = params.LanguageSubtitle;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetSubtitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Languages_E_Languages> Languages                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 LanguageSubtitle               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetSubtitle(TEnumAsByte<E_Languages_E_Languages> Languages, struct FString* LanguageSubtitle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetSubtitle");

	UOptionManagerComponent_C_SetSubtitle_Params params;
	params.Languages = Languages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LanguageSubtitle != nullptr)
		*LanguageSubtitle = params.LanguageSubtitle;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Quality_E_Quality> Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetQuality(TEnumAsByte<E_Quality_E_Quality> Quality)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetQuality");

	UOptionManagerComponent_C_SetQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Quality_E_Quality> Quality                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetQuality(TEnumAsByte<E_Quality_E_Quality>* Quality)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetQuality");

	UOptionManagerComponent_C_GetQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quality != nullptr)
		*Quality = params.Quality;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Effect                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetEffect(int Effect)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetEffect");

	UOptionManagerComponent_C_SetEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Effects                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetEffect(int* Effects)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetEffect");

	UOptionManagerComponent_C_GetEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetTexture(int Texture)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetTexture");

	UOptionManagerComponent_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetTexture(int* Texture)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetTexture");

	UOptionManagerComponent_C_GetTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Shadow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetShadow(int Shadow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetShadow");

	UOptionManagerComponent_C_SetShadow_Params params;
	params.Shadow = Shadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetShadow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Shadow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetShadow(int* Shadow)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetShadow");

	UOptionManagerComponent_C_GetShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Shadow != nullptr)
		*Shadow = params.Shadow;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetPostProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Post_Process                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetPostProcess(int Post_Process)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetPostProcess");

	UOptionManagerComponent_C_SetPostProcess_Params params;
	params.Post_Process = Post_Process;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetPostProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PostProcess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetPostProcess(int* PostProcess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetPostProcess");

	UOptionManagerComponent_C_GetPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PostProcess != nullptr)
		*PostProcess = params.PostProcess;

}


// Function OptionManagerComponent.OptionManagerComponent_C.RefreshGraphics
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::RefreshGraphics()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.RefreshGraphics");

	UOptionManagerComponent_C_RefreshGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetAntiAliasing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AntiAlias                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetAntiAliasing(int AntiAlias)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetAntiAliasing");

	UOptionManagerComponent_C_SetAntiAliasing_Params params;
	params.AntiAlias = AntiAlias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetAntiAliasing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AntiAlias                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetAntiAliasing(int* AntiAlias)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetAntiAliasing");

	UOptionManagerComponent_C_GetAntiAliasing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AntiAlias != nullptr)
		*AntiAlias = params.AntiAlias;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ApplyAudio
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ApplyAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ApplyAudio");

	UOptionManagerComponent_C_ApplyAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetFPSLimitWithNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewLimit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetFPSLimitWithNumber(float NewLimit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetFPSLimitWithNumber");

	UOptionManagerComponent_C_SetFPSLimitWithNumber_Params params;
	params.NewLimit = NewLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetFPSLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UOptionManagerComponent_C::SetFPSLimit(const struct FText& Text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetFPSLimit");

	UOptionManagerComponent_C_SetFPSLimit_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetFPSLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FrameRateLimit                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetFPSLimit(float* FrameRateLimit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetFPSLimit");

	UOptionManagerComponent_C_GetFPSLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FrameRateLimit != nullptr)
		*FrameRateLimit = params.FrameRateLimit;

}


// Function OptionManagerComponent.OptionManagerComponent_C.RefreshDisplay
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::RefreshDisplay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.RefreshDisplay");

	UOptionManagerComponent_C_RefreshDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetUIAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVolume                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          UIVolume                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetUIAudio(float NewVolume, float* UIVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetUIAudio");

	UOptionManagerComponent_C_SetUIAudio_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UIVolume != nullptr)
		*UIVolume = params.UIVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetDialogAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVolume                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DialogVolume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetDialogAudio(float NewVolume, float* DialogVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetDialogAudio");

	UOptionManagerComponent_C_SetDialogAudio_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DialogVolume != nullptr)
		*DialogVolume = params.DialogVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetMusicAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVolume                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MusicVolume                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetMusicAudio(float NewVolume, float* MusicVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetMusicAudio");

	UOptionManagerComponent_C_SetMusicAudio_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MusicVolume != nullptr)
		*MusicVolume = params.MusicVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetSFXAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVolume                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EffectVolume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetSFXAudio(float NewVolume, float* EffectVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetSFXAudio");

	UOptionManagerComponent_C_SetSFXAudio_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EffectVolume != nullptr)
		*EffectVolume = params.EffectVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetUIAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          UIVolume                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetUIAudio(float* UIVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetUIAudio");

	UOptionManagerComponent_C_GetUIAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UIVolume != nullptr)
		*UIVolume = params.UIVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetDialogAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DialogVolume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetDialogAudio(float* DialogVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetDialogAudio");

	UOptionManagerComponent_C_GetDialogAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DialogVolume != nullptr)
		*DialogVolume = params.DialogVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetMusicAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MusicVolume                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetMusicAudio(float* MusicVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetMusicAudio");

	UOptionManagerComponent_C_GetMusicAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MusicVolume != nullptr)
		*MusicVolume = params.MusicVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetSFXAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          EffectVolume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetSFXAudio(float* EffectVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetSFXAudio");

	UOptionManagerComponent_C_GetSFXAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EffectVolume != nullptr)
		*EffectVolume = params.EffectVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.TryGetSaveGameManager
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USaveGameManager_C*      SaveGameManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::TryGetSaveGameManager(class USaveGameManager_C** SaveGameManager)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.TryGetSaveGameManager");

	UOptionManagerComponent_C_TryGetSaveGameManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveGameManager != nullptr)
		*SaveGameManager = params.SaveGameManager;

}


// Function OptionManagerComponent.OptionManagerComponent_C.RefreshAudio
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::RefreshAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.RefreshAudio");

	UOptionManagerComponent_C_RefreshAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetMasterAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVolume                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MasterVolume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetMasterAudio(float NewVolume, float* MasterVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetMasterAudio");

	UOptionManagerComponent_C_SetMasterAudio_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasterVolume != nullptr)
		*MasterVolume = params.MasterVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetMasterAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MasterVolume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetMasterAudio(float* MasterVolume)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetMasterAudio");

	UOptionManagerComponent_C_GetMasterAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasterVolume != nullptr)
		*MasterVolume = params.MasterVolume;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetIsDynamicResolutionEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UOptionManagerComponent_C::SetIsDynamicResolutionEnabled(bool bEnable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetIsDynamicResolutionEnabled");

	UOptionManagerComponent_C_SetIsDynamicResolutionEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionManagerComponent.OptionManagerComponent_C.SetRenderScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetRenderScale(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetRenderScale");

	UOptionManagerComponent_C_SetRenderScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetGamma
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Gamma                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetGamma(float Gamma)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetGamma");

	UOptionManagerComponent_C_SetGamma_Params params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetCurrentWindowMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EWindowMode> InFullscreenMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::SetCurrentWindowMode(TEnumAsByte<Engine_EWindowMode> InFullscreenMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetCurrentWindowMode");

	UOptionManagerComponent_C_SetCurrentWindowMode_Params params;
	params.InFullscreenMode = InFullscreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetIsVSyncEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOptionManagerComponent_C::SetIsVSyncEnable(bool bEnabled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetIsVSyncEnable");

	UOptionManagerComponent_C_SetIsVSyncEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.SetResolutionSupport
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bSetSuccess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOptionManagerComponent_C::SetResolutionSupport(const struct FText& InText, bool* bSetSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.SetResolutionSupport");

	UOptionManagerComponent_C_SetResolutionSupport_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSetSuccess != nullptr)
		*bSetSuccess = params.bSetSuccess;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ResetDisplayToDefualtSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ResetDisplayToDefualtSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ResetDisplayToDefualtSetting");

	UOptionManagerComponent_C_ResetDisplayToDefualtSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ApplyAllSetting
// (Public, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::ApplyAllSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ApplyAllSetting");

	UOptionManagerComponent_C_ApplyAllSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetIsDynamicResolutionEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UOptionManagerComponent_C::GetIsDynamicResolutionEnabled()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetIsDynamicResolutionEnabled");

	UOptionManagerComponent_C_GetIsDynamicResolutionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionManagerComponent.OptionManagerComponent_C.GetRenderScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CurrentScaleNormalized         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentScaleValue              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinScaleValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxScaleValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetRenderScale(float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetRenderScale");

	UOptionManagerComponent_C_GetRenderScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentScaleNormalized != nullptr)
		*CurrentScaleNormalized = params.CurrentScaleNormalized;
	if (CurrentScaleValue != nullptr)
		*CurrentScaleValue = params.CurrentScaleValue;
	if (MinScaleValue != nullptr)
		*MinScaleValue = params.MinScaleValue;
	if (MaxScaleValue != nullptr)
		*MaxScaleValue = params.MaxScaleValue;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetGamma
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Gamma                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetGamma(float* Gamma)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetGamma");

	UOptionManagerComponent_C_GetGamma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Gamma != nullptr)
		*Gamma = params.Gamma;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetCurrentWindowMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Engine_EWindowMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Engine_EWindowMode> UOptionManagerComponent_C::GetCurrentWindowMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetCurrentWindowMode");

	UOptionManagerComponent_C_GetCurrentWindowMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OptionManagerComponent.OptionManagerComponent_C.GetIsVSyncEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOptionManagerComponent_C::GetIsVSyncEnable(bool* Enabled)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetIsVSyncEnable");

	UOptionManagerComponent_C_GetIsVSyncEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;

}


// Function OptionManagerComponent.OptionManagerComponent_C.GetResolutionSupport
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanGet                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FText>           ReturnText                     (Parm, OutParm, ZeroConstructor)
// int                            ReturnCurrent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::GetResolutionSupport(bool* CanGet, TArray<struct FText>* ReturnText, int* ReturnCurrent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.GetResolutionSupport");

	UOptionManagerComponent_C_GetResolutionSupport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanGet != nullptr)
		*CanGet = params.CanGet;
	if (ReturnText != nullptr)
		*ReturnText = params.ReturnText;
	if (ReturnCurrent != nullptr)
		*ReturnCurrent = params.ReturnCurrent;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UOptionManagerComponent_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ReceiveBeginPlay");

	UOptionManagerComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.OnInitialize
// (BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::OnInitialize()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.OnInitialize");

	UOptionManagerComponent_C_OnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.ExecuteUbergraph_OptionManagerComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOptionManagerComponent_C::ExecuteUbergraph_OptionManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.ExecuteUbergraph_OptionManagerComponent");

	UOptionManagerComponent_C_ExecuteUbergraph_OptionManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OptionManagerComponent.OptionManagerComponent_C.OnApplyGameSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UOptionManagerComponent_C::OnApplyGameSettings__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OptionManagerComponent.OptionManagerComponent_C.OnApplyGameSettings__DelegateSignature");

	UOptionManagerComponent_C_OnApplyGameSettings__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
