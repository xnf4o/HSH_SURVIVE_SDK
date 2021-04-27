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

// Function GameSparks.GameSparksComponent.SetApiStage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 stage                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksComponent::SetApiStage(const struct FString& stage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.SetApiStage");

	UGameSparksComponent_SetApiStage_Params params;
	params.stage = stage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksComponent.SetApiDomain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 domain                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksComponent::SetApiDomain(const struct FString& domain)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.SetApiDomain");

	UGameSparksComponent_SetApiDomain_Params params;
	params.domain = domain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksComponent.SetApiCredential
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 credential                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksComponent::SetApiCredential(const struct FString& credential)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.SetApiCredential");

	UGameSparksComponent_SetApiCredential_Params params;
	params.credential = credential;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GameSparksComponent.OnGameSparksLogEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString                 LogMessage                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksComponent::OnGameSparksLogEvent__DelegateSignature(const struct FString& LogMessage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GameSparksComponent.OnGameSparksLogEvent__DelegateSignature");

	UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Params params;
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GameSparksComponent.OnGameSparksAvailable__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           available                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksComponent::OnGameSparksAvailable__DelegateSignature(bool available)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GameSparksComponent.OnGameSparksAvailable__DelegateSignature");

	UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Params params;
	params.available = available;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksComponent.Logout
// (Final, Native, Public, BlueprintCallable)
void UGameSparksComponent::Logout()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.Logout");

	UGameSparksComponent_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksComponent.IsAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksComponent::IsAvailable()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.IsAvailable");

	UGameSparksComponent_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksComponent.IsAuthenticated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksComponent::IsAuthenticated()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.IsAuthenticated");

	UGameSparksComponent_IsAuthenticated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksComponent.Disconnect
// (Final, Native, Public, BlueprintCallable)
void UGameSparksComponent::Disconnect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.Disconnect");

	UGameSparksComponent_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksComponent.ConnectWithCredential
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 apikey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 secret                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 credential                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           previewServer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           clearCachedAuthentication      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksComponent::ConnectWithCredential(const struct FString& apikey, const struct FString& secret, const struct FString& credential, bool previewServer, bool clearCachedAuthentication)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.ConnectWithCredential");

	UGameSparksComponent_ConnectWithCredential_Params params;
	params.apikey = apikey;
	params.secret = secret;
	params.credential = credential;
	params.previewServer = previewServer;
	params.clearCachedAuthentication = clearCachedAuthentication;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksComponent.Connect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 apikey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 secret                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           previewServer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           clearCachedAuthentication      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksComponent::Connect(const struct FString& apikey, const struct FString& secret, bool previewServer, bool clearCachedAuthentication)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksComponent.Connect");

	UGameSparksComponent_Connect_Params params;
	params.apikey = apikey;
	params.secret = secret;
	params.previewServer = previewServer;
	params.clearCachedAuthentication = clearCachedAuthentication;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksLogEventData.SetString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksLogEventData* UGameSparksLogEventData::SetString(const struct FString& Name, const struct FString& Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksLogEventData.SetString");

	UGameSparksLogEventData_SetString_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksLogEventData.SetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksLogEventData* UGameSparksLogEventData::SetObject(const struct FString& Name, class UGameSparksScriptData* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksLogEventData.SetObject");

	UGameSparksLogEventData_SetObject_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksLogEventData.SetNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksLogEventData* UGameSparksLogEventData::SetNumber(const struct FString& Name, int Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksLogEventData.SetNumber");

	UGameSparksLogEventData_SetNumber_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksLogEventData.CreateGameSparksLogEventAttributes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksLogEventData* UGameSparksLogEventData::STATIC_CreateGameSparksLogEventAttributes(class UObject* WorldContextObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksLogEventData.CreateGameSparksLogEventAttributes");

	UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksObject.SetApiStage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 stage                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksObject::SetApiStage(const struct FString& stage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.SetApiStage");

	UGameSparksObject_SetApiStage_Params params;
	params.stage = stage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksObject.SetApiDomain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 domain                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksObject::SetApiDomain(const struct FString& domain)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.SetApiDomain");

	UGameSparksObject_SetApiDomain_Params params;
	params.domain = domain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksObject.SetApiCredential
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 credential                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksObject::SetApiCredential(const struct FString& credential)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.SetApiCredential");

	UGameSparksObject_SetApiCredential_Params params;
	params.credential = credential;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GameSparksObject.OnGameSparksLogEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString                 LogMessage                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksObject::OnGameSparksLogEvent__DelegateSignature(const struct FString& LogMessage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GameSparksObject.OnGameSparksLogEvent__DelegateSignature");

	UGameSparksObject_OnGameSparksLogEvent__DelegateSignature_Params params;
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GameSparksObject.OnGameSparksAvailable__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           available                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksObject::OnGameSparksAvailable__DelegateSignature(bool available)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GameSparksObject.OnGameSparksAvailable__DelegateSignature");

	UGameSparksObject_OnGameSparksAvailable__DelegateSignature_Params params;
	params.available = available;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksObject.Logout
// (Final, Native, Public, BlueprintCallable)
void UGameSparksObject::Logout()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.Logout");

	UGameSparksObject_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksObject.IsAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksObject::IsAvailable()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.IsAvailable");

	UGameSparksObject_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksObject.IsAuthenticated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksObject::IsAuthenticated()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.IsAuthenticated");

	UGameSparksObject_IsAuthenticated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksObject.Disconnect
// (Final, Native, Public, BlueprintCallable)
void UGameSparksObject::Disconnect()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.Disconnect");

	UGameSparksObject_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksObject.Connect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 apikey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 secret                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           previewServer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           clearCachedAuthentication      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameSparksObject::Connect(const struct FString& apikey, const struct FString& secret, bool previewServer, bool clearCachedAuthentication)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksObject.Connect");

	UGameSparksObject_Connect_Params params;
	params.apikey = apikey;
	params.secret = secret;
	params.previewServer = previewServer;
	params.clearCachedAuthentication = clearCachedAuthentication;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GameSparksRequestArray.CreateGameSparksRequestArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksRequestArray* UGameSparksRequestArray::STATIC_CreateGameSparksRequestArray(class UObject* WorldContextObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksRequestArray.CreateGameSparksRequestArray");

	UGameSparksRequestArray_CreateGameSparksRequestArray_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.ToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameSparksScriptData::ToString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.ToString");

	UGameSparksScriptData_ToString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetStringArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         Value                          (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetStringArray(const struct FString& Name, TArray<struct FString> Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetStringArray");

	UGameSparksScriptData_SetStringArray_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetString(const struct FString& Name, const struct FString& Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetString");

	UGameSparksScriptData_SetString_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetNumberArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    Value                          (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetNumberArray(const struct FString& Name, TArray<int> Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetNumberArray");

	UGameSparksScriptData_SetNumberArray_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetNumber(const struct FString& Name, int Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetNumber");

	UGameSparksScriptData_SetNumber_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetIntArray
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    int_value                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetIntArray(const struct FString& Name, TArray<int> int_value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetIntArray");

	UGameSparksScriptData_SetIntArray_Params params;
	params.Name = Name;
	params.int_value = int_value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetGSDataArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGameSparksScriptData*> Value                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetGSDataArray(const struct FString& Name, TArray<class UGameSparksScriptData*> Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetGSDataArray");

	UGameSparksScriptData_SetGSDataArray_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetGSData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetGSData(const struct FString& Name, class UGameSparksScriptData* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetGSData");

	UGameSparksScriptData_SetGSData_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetFloatArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Value                          (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetFloatArray(const struct FString& Name, TArray<float> Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetFloatArray");

	UGameSparksScriptData_SetFloatArray_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetFloat(const struct FString& Name, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetFloat");

	UGameSparksScriptData_SetFloat_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetDateTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime               Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetDateTime(const struct FString& Name, const struct FDateTime& Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetDateTime");

	UGameSparksScriptData_SetDateTime_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.SetBoolean
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::SetBoolean(const struct FString& Name, bool Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.SetBoolean");

	UGameSparksScriptData_SetBoolean_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.JSONString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameSparksScriptData::JSONString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.JSONString");

	UGameSparksScriptData_JSONString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasStringArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasStringArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasStringArray");

	UGameSparksScriptData_HasStringArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasString(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasString");

	UGameSparksScriptData_HasString_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasNumberArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasNumberArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasNumberArray");

	UGameSparksScriptData_HasNumberArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasNumber(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasNumber");

	UGameSparksScriptData_HasNumber_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasIntArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasIntArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasIntArray");

	UGameSparksScriptData_HasIntArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasGSDataArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasGSDataArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasGSDataArray");

	UGameSparksScriptData_HasGSDataArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasGSData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasGSData(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasGSData");

	UGameSparksScriptData_HasGSData_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasFloatArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasFloatArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasFloatArray");

	UGameSparksScriptData_HasFloatArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasFloat(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasFloat");

	UGameSparksScriptData_HasFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasDateTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasDateTime(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasDateTime");

	UGameSparksScriptData_HasDateTime_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.HasBoolean
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::HasBoolean(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.HasBoolean");

	UGameSparksScriptData_HasBoolean_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetStringArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UGameSparksScriptData::GetStringArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetStringArray");

	UGameSparksScriptData_GetStringArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameSparksScriptData::GetString(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetString");

	UGameSparksScriptData_GetString_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetNumberArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> UGameSparksScriptData::GetNumberArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetNumberArray");

	UGameSparksScriptData_GetNumberArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameSparksScriptData::GetNumber(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetNumber");

	UGameSparksScriptData_GetNumber_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UGameSparksScriptData::GetKeys()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetKeys");

	UGameSparksScriptData_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetIntArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> UGameSparksScriptData::GetIntArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetIntArray");

	UGameSparksScriptData_GetIntArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetGSDataArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGameSparksScriptData*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UGameSparksScriptData*> UGameSparksScriptData::GetGSDataArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetGSDataArray");

	UGameSparksScriptData_GetGSDataArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetGSData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::GetGSData(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetGSData");

	UGameSparksScriptData_GetGSData_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetFloatArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UGameSparksScriptData::GetFloatArray(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetFloatArray");

	UGameSparksScriptData_GetFloatArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameSparksScriptData::GetFloat(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetFloat");

	UGameSparksScriptData_GetFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetDateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime UGameSparksScriptData::GetDateTime(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetDateTime");

	UGameSparksScriptData_GetDateTime_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.GetBoolean
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameSparksScriptData::GetBoolean(const struct FString& Name)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.GetBoolean");

	UGameSparksScriptData_GetBoolean_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GameSparksScriptData.CreateGameSparksScriptData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameSparksScriptData* UGameSparksScriptData::STATIC_CreateGameSparksScriptData(class UObject* WorldContextObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GameSparksScriptData.CreateGameSparksScriptData");

	UGameSparksScriptData_CreateGameSparksScriptData_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAcceptChallengeRequest.SendAcceptChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAcceptChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAcceptChallengeRequest* UGSAcceptChallengeRequest::STATIC_SendAcceptChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAcceptChallengeRequest.SendAcceptChallengeRequestOnBehalfOf");

	UGSAcceptChallengeRequest_SendAcceptChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAcceptChallengeRequest.SendAcceptChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAcceptChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAcceptChallengeRequest* UGSAcceptChallengeRequest::STATIC_SendAcceptChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAcceptChallengeRequest.SendAcceptChallengeRequest");

	UGSAcceptChallengeRequest_SendAcceptChallengeRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAccountDetailsRequest.SendAccountDetailsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAccountDetailsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAccountDetailsRequest* UGSAccountDetailsRequest::STATIC_SendAccountDetailsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAccountDetailsRequest.SendAccountDetailsRequestOnBehalfOf");

	UGSAccountDetailsRequest_SendAccountDetailsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAccountDetailsRequest.SendAccountDetailsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAccountDetailsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAccountDetailsRequest* UGSAccountDetailsRequest::STATIC_SendAccountDetailsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAccountDetailsRequest.SendAccountDetailsRequest");

	UGSAccountDetailsRequest_SendAccountDetailsRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAmazonBuyGoodsRequest.SendAmazonBuyGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AmazonUserId                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReceiptId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAmazonBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAmazonBuyGoodsRequest* UGSAmazonBuyGoodsRequest::STATIC_SendAmazonBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AmazonUserId, const struct FString& CurrencyCode, const struct FString& ReceiptId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAmazonBuyGoodsRequest.SendAmazonBuyGoodsRequestOnBehalfOf");

	UGSAmazonBuyGoodsRequest_SendAmazonBuyGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AmazonUserId = AmazonUserId;
	params.CurrencyCode = CurrencyCode;
	params.ReceiptId = ReceiptId;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAmazonBuyGoodsRequest.SendAmazonBuyGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AmazonUserId                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReceiptId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAmazonBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAmazonBuyGoodsRequest* UGSAmazonBuyGoodsRequest::STATIC_SendAmazonBuyGoodsRequest(const struct FString& AmazonUserId, const struct FString& CurrencyCode, const struct FString& ReceiptId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAmazonBuyGoodsRequest.SendAmazonBuyGoodsRequest");

	UGSAmazonBuyGoodsRequest_SendAmazonBuyGoodsRequest_Params params;
	params.AmazonUserId = AmazonUserId;
	params.CurrencyCode = CurrencyCode;
	params.ReceiptId = ReceiptId;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAmazonConnectRequest.SendAmazonConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAmazonConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAmazonConnectRequest* UGSAmazonConnectRequest::STATIC_SendAmazonConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAmazonConnectRequest.SendAmazonConnectRequestOnBehalfOf");

	UGSAmazonConnectRequest_SendAmazonConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAmazonConnectRequest.SendAmazonConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAmazonConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAmazonConnectRequest* UGSAmazonConnectRequest::STATIC_SendAmazonConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAmazonConnectRequest.SendAmazonConnectRequest");

	UGSAmazonConnectRequest_SendAmazonConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAnalyticsRequest.SendAnalyticsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAnalyticsRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAnalyticsRequest* UGSAnalyticsRequest::STATIC_SendAnalyticsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* Data, bool End, const struct FString& Key, bool Start, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAnalyticsRequest.SendAnalyticsRequestOnBehalfOf");

	UGSAnalyticsRequest_SendAnalyticsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Data = Data;
	params.End = End;
	params.Key = Key;
	params.Start = Start;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAnalyticsRequest.SendAnalyticsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAnalyticsRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAnalyticsRequest* UGSAnalyticsRequest::STATIC_SendAnalyticsRequest(class UGameSparksScriptData* Data, bool End, const struct FString& Key, bool Start, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAnalyticsRequest.SendAnalyticsRequest");

	UGSAnalyticsRequest_SendAnalyticsRequest_Params params;
	params.Data = Data;
	params.End = End;
	params.Key = Key;
	params.Start = Start;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAroundMeLeaderboardRequest.SendAroundMeLeaderboardRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   CustomIdFilter                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DontErrorOnNotSocial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeFirst                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeLast                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamIds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAroundMeLeaderboardRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAroundMeLeaderboardRequest* UGSAroundMeLeaderboardRequest::STATIC_SendAroundMeLeaderboardRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, class UGameSparksScriptData* CustomIdFilter, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAroundMeLeaderboardRequest.SendAroundMeLeaderboardRequestOnBehalfOf");

	UGSAroundMeLeaderboardRequest_SendAroundMeLeaderboardRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.CustomIdFilter = CustomIdFilter;
	params.DontErrorOnNotSocial = DontErrorOnNotSocial;
	params.EntryCount = EntryCount;
	params.FriendIds = FriendIds;
	params.IncludeFirst = IncludeFirst;
	params.IncludeLast = IncludeLast;
	params.InverseSocial = InverseSocial;
	params.LeaderboardShortCode = LeaderboardShortCode;
	params.Social = Social;
	params.TeamIds = TeamIds;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAroundMeLeaderboardRequest.SendAroundMeLeaderboardRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   CustomIdFilter                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DontErrorOnNotSocial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeFirst                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeLast                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamIds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAroundMeLeaderboardRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAroundMeLeaderboardRequest* UGSAroundMeLeaderboardRequest::STATIC_SendAroundMeLeaderboardRequest(const struct FString& ChallengeInstanceId, class UGameSparksScriptData* CustomIdFilter, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAroundMeLeaderboardRequest.SendAroundMeLeaderboardRequest");

	UGSAroundMeLeaderboardRequest_SendAroundMeLeaderboardRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.CustomIdFilter = CustomIdFilter;
	params.DontErrorOnNotSocial = DontErrorOnNotSocial;
	params.EntryCount = EntryCount;
	params.FriendIds = FriendIds;
	params.IncludeFirst = IncludeFirst;
	params.IncludeLast = IncludeLast;
	params.InverseSocial = InverseSocial;
	params.LeaderboardShortCode = LeaderboardShortCode;
	params.Social = Social;
	params.TeamIds = TeamIds;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAuthenticationRequest.SendAuthenticationRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAuthenticationRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAuthenticationRequest* UGSAuthenticationRequest::STATIC_SendAuthenticationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Password, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAuthenticationRequest.SendAuthenticationRequestOnBehalfOf");

	UGSAuthenticationRequest_SendAuthenticationRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Password = Password;
	params.Username = Username;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSAuthenticationRequest.SendAuthenticationRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSAuthenticationRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSAuthenticationRequest* UGSAuthenticationRequest::STATIC_SendAuthenticationRequest(const struct FString& Password, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSAuthenticationRequest.SendAuthenticationRequest");

	UGSAuthenticationRequest_SendAuthenticationRequest_Params params;
	params.Password = Password;
	params.Username = Username;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSBatchAdminRequest.SendBatchAdminRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksRequestArray* playerIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Request                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSBatchAdminRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSBatchAdminRequest* UGSBatchAdminRequest::STATIC_SendBatchAdminRequest(class UGameSparksRequestArray* playerIds, class UGameSparksScriptData* Request, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSBatchAdminRequest.SendBatchAdminRequest");

	UGSBatchAdminRequest_SendBatchAdminRequest_Params params;
	params.playerIds = playerIds;
	params.Request = Request;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSBuyVirtualGoodsRequest.SendBuyVirtualGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyShortCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CurrencyType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSBuyVirtualGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSBuyVirtualGoodsRequest* UGSBuyVirtualGoodsRequest::STATIC_SendBuyVirtualGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyShortCode, int CurrencyType, int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSBuyVirtualGoodsRequest.SendBuyVirtualGoodsRequestOnBehalfOf");

	UGSBuyVirtualGoodsRequest_SendBuyVirtualGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.CurrencyShortCode = CurrencyShortCode;
	params.CurrencyType = CurrencyType;
	params.Quantity = Quantity;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSBuyVirtualGoodsRequest.SendBuyVirtualGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrencyShortCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            CurrencyType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSBuyVirtualGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSBuyVirtualGoodsRequest* UGSBuyVirtualGoodsRequest::STATIC_SendBuyVirtualGoodsRequest(const struct FString& CurrencyShortCode, int CurrencyType, int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSBuyVirtualGoodsRequest.SendBuyVirtualGoodsRequest");

	UGSBuyVirtualGoodsRequest_SendBuyVirtualGoodsRequest_Params params;
	params.CurrencyShortCode = CurrencyShortCode;
	params.CurrencyType = CurrencyType;
	params.Quantity = Quantity;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSCancelBulkJobAdminRequest.SendCancelBulkJobAdminRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksRequestArray* BulkJobIds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSCancelBulkJobAdminRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSCancelBulkJobAdminRequest* UGSCancelBulkJobAdminRequest::STATIC_SendCancelBulkJobAdminRequest(class UGameSparksRequestArray* BulkJobIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSCancelBulkJobAdminRequest.SendCancelBulkJobAdminRequest");

	UGSCancelBulkJobAdminRequest_SendCancelBulkJobAdminRequest_Params params;
	params.BulkJobIds = BulkJobIds;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSChangeUserDetailsRequest.SendChangeUserDetailsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NewPassword                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OldPassword                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSChangeUserDetailsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSChangeUserDetailsRequest* UGSChangeUserDetailsRequest::STATIC_SendChangeUserDetailsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, const struct FString& Language, const struct FString& NewPassword, const struct FString& OldPassword, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSChangeUserDetailsRequest.SendChangeUserDetailsRequestOnBehalfOf");

	UGSChangeUserDetailsRequest_SendChangeUserDetailsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DisplayName = DisplayName;
	params.Language = Language;
	params.NewPassword = NewPassword;
	params.OldPassword = OldPassword;
	params.Username = Username;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSChangeUserDetailsRequest.SendChangeUserDetailsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Language                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NewPassword                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OldPassword                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSChangeUserDetailsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSChangeUserDetailsRequest* UGSChangeUserDetailsRequest::STATIC_SendChangeUserDetailsRequest(const struct FString& DisplayName, const struct FString& Language, const struct FString& NewPassword, const struct FString& OldPassword, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSChangeUserDetailsRequest.SendChangeUserDetailsRequest");

	UGSChangeUserDetailsRequest_SendChangeUserDetailsRequest_Params params;
	params.DisplayName = DisplayName;
	params.Language = Language;
	params.NewPassword = NewPassword;
	params.OldPassword = OldPassword;
	params.Username = Username;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSChatOnChallengeRequest.SendChatOnChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSChatOnChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSChatOnChallengeRequest* UGSChatOnChallengeRequest::STATIC_SendChatOnChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSChatOnChallengeRequest.SendChatOnChallengeRequestOnBehalfOf");

	UGSChatOnChallengeRequest_SendChatOnChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSChatOnChallengeRequest.SendChatOnChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSChatOnChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSChatOnChallengeRequest* UGSChatOnChallengeRequest::STATIC_SendChatOnChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSChatOnChallengeRequest.SendChatOnChallengeRequest");

	UGSChatOnChallengeRequest_SendChatOnChallengeRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSConsumeVirtualGoodRequest.SendConsumeVirtualGoodRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSConsumeVirtualGoodRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSConsumeVirtualGoodRequest* UGSConsumeVirtualGoodRequest::STATIC_SendConsumeVirtualGoodRequestOnBehalfOf(const struct FString& PlayerId, int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSConsumeVirtualGoodRequest.SendConsumeVirtualGoodRequestOnBehalfOf");

	UGSConsumeVirtualGoodRequest_SendConsumeVirtualGoodRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Quantity = Quantity;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSConsumeVirtualGoodRequest.SendConsumeVirtualGoodRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSConsumeVirtualGoodRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSConsumeVirtualGoodRequest* UGSConsumeVirtualGoodRequest::STATIC_SendConsumeVirtualGoodRequest(int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSConsumeVirtualGoodRequest.SendConsumeVirtualGoodRequest");

	UGSConsumeVirtualGoodRequest_SendConsumeVirtualGoodRequest_Params params;
	params.Quantity = Quantity;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSCreateChallengeRequest.SendCreateChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoStartJoinedChallengeOnMaxPlayers (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeMessage               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeShortCode             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency1Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency2Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency3Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency4Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency5Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency6Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   CurrencyWagers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   EligibilityCriteria            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 endTime                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ExpiryTime                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Silent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 startTime                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* UsersToChallenge               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSCreateChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSCreateChallengeRequest* UGSCreateChallengeRequest::STATIC_SendCreateChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessType, bool AutoStartJoinedChallengeOnMaxPlayers, const struct FString& ChallengeMessage, const struct FString& ChallengeShortCode, int Currency1Wager, int Currency2Wager, int Currency3Wager, int Currency4Wager, int Currency5Wager, int Currency6Wager, class UGameSparksScriptData* CurrencyWagers, class UGameSparksScriptData* EligibilityCriteria, const struct FString& endTime, const struct FString& ExpiryTime, int MaxAttempts, int MaxPlayers, int MinPlayers, bool Silent, const struct FString& startTime, class UGameSparksRequestArray* UsersToChallenge, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSCreateChallengeRequest.SendCreateChallengeRequestOnBehalfOf");

	UGSCreateChallengeRequest_SendCreateChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessType = AccessType;
	params.AutoStartJoinedChallengeOnMaxPlayers = AutoStartJoinedChallengeOnMaxPlayers;
	params.ChallengeMessage = ChallengeMessage;
	params.ChallengeShortCode = ChallengeShortCode;
	params.Currency1Wager = Currency1Wager;
	params.Currency2Wager = Currency2Wager;
	params.Currency3Wager = Currency3Wager;
	params.Currency4Wager = Currency4Wager;
	params.Currency5Wager = Currency5Wager;
	params.Currency6Wager = Currency6Wager;
	params.CurrencyWagers = CurrencyWagers;
	params.EligibilityCriteria = EligibilityCriteria;
	params.endTime = endTime;
	params.ExpiryTime = ExpiryTime;
	params.MaxAttempts = MaxAttempts;
	params.MaxPlayers = MaxPlayers;
	params.MinPlayers = MinPlayers;
	params.Silent = Silent;
	params.startTime = startTime;
	params.UsersToChallenge = UsersToChallenge;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSCreateChallengeRequest.SendCreateChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoStartJoinedChallengeOnMaxPlayers (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeMessage               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeShortCode             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency1Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency2Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency3Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency4Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency5Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Currency6Wager                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   CurrencyWagers                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   EligibilityCriteria            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 endTime                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ExpiryTime                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Silent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 startTime                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* UsersToChallenge               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSCreateChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSCreateChallengeRequest* UGSCreateChallengeRequest::STATIC_SendCreateChallengeRequest(const struct FString& AccessType, bool AutoStartJoinedChallengeOnMaxPlayers, const struct FString& ChallengeMessage, const struct FString& ChallengeShortCode, int Currency1Wager, int Currency2Wager, int Currency3Wager, int Currency4Wager, int Currency5Wager, int Currency6Wager, class UGameSparksScriptData* CurrencyWagers, class UGameSparksScriptData* EligibilityCriteria, const struct FString& endTime, const struct FString& ExpiryTime, int MaxAttempts, int MaxPlayers, int MinPlayers, bool Silent, const struct FString& startTime, class UGameSparksRequestArray* UsersToChallenge, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSCreateChallengeRequest.SendCreateChallengeRequest");

	UGSCreateChallengeRequest_SendCreateChallengeRequest_Params params;
	params.AccessType = AccessType;
	params.AutoStartJoinedChallengeOnMaxPlayers = AutoStartJoinedChallengeOnMaxPlayers;
	params.ChallengeMessage = ChallengeMessage;
	params.ChallengeShortCode = ChallengeShortCode;
	params.Currency1Wager = Currency1Wager;
	params.Currency2Wager = Currency2Wager;
	params.Currency3Wager = Currency3Wager;
	params.Currency4Wager = Currency4Wager;
	params.Currency5Wager = Currency5Wager;
	params.Currency6Wager = Currency6Wager;
	params.CurrencyWagers = CurrencyWagers;
	params.EligibilityCriteria = EligibilityCriteria;
	params.endTime = endTime;
	params.ExpiryTime = ExpiryTime;
	params.MaxAttempts = MaxAttempts;
	params.MaxPlayers = MaxPlayers;
	params.MinPlayers = MinPlayers;
	params.Silent = Silent;
	params.startTime = startTime;
	params.UsersToChallenge = UsersToChallenge;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSCreateTeamRequest.SendCreateTeamRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSCreateTeamRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSCreateTeamRequest* UGSCreateTeamRequest::STATIC_SendCreateTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& TeamId, const struct FString& TeamName, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSCreateTeamRequest.SendCreateTeamRequestOnBehalfOf");

	UGSCreateTeamRequest_SendCreateTeamRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.TeamId = TeamId;
	params.TeamName = TeamName;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSCreateTeamRequest.SendCreateTeamRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSCreateTeamRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSCreateTeamRequest* UGSCreateTeamRequest::STATIC_SendCreateTeamRequest(const struct FString& TeamId, const struct FString& TeamName, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSCreateTeamRequest.SendCreateTeamRequest");

	UGSCreateTeamRequest_SendCreateTeamRequest_Params params;
	params.TeamId = TeamId;
	params.TeamName = TeamName;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDeclineChallengeRequest.SendDeclineChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDeclineChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDeclineChallengeRequest* UGSDeclineChallengeRequest::STATIC_SendDeclineChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDeclineChallengeRequest.SendDeclineChallengeRequestOnBehalfOf");

	UGSDeclineChallengeRequest_SendDeclineChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDeclineChallengeRequest.SendDeclineChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDeclineChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDeclineChallengeRequest* UGSDeclineChallengeRequest::STATIC_SendDeclineChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDeclineChallengeRequest.SendDeclineChallengeRequest");

	UGSDeclineChallengeRequest_SendDeclineChallengeRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDeviceAuthenticationRequest.SendDeviceAuthenticationRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceID                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceModel                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceOS                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 operatingSystem                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDeviceAuthenticationRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDeviceAuthenticationRequest* UGSDeviceAuthenticationRequest::STATIC_SendDeviceAuthenticationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DeviceID, const struct FString& DeviceModel, const struct FString& DeviceName, const struct FString& DeviceOS, const struct FString& DeviceType, const struct FString& DisplayName, const struct FString& operatingSystem, class UGameSparksScriptData* Segments, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDeviceAuthenticationRequest.SendDeviceAuthenticationRequestOnBehalfOf");

	UGSDeviceAuthenticationRequest_SendDeviceAuthenticationRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DeviceID = DeviceID;
	params.DeviceModel = DeviceModel;
	params.DeviceName = DeviceName;
	params.DeviceOS = DeviceOS;
	params.DeviceType = DeviceType;
	params.DisplayName = DisplayName;
	params.operatingSystem = operatingSystem;
	params.Segments = Segments;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDeviceAuthenticationRequest.SendDeviceAuthenticationRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceID                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceModel                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceOS                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 operatingSystem                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDeviceAuthenticationRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDeviceAuthenticationRequest* UGSDeviceAuthenticationRequest::STATIC_SendDeviceAuthenticationRequest(const struct FString& DeviceID, const struct FString& DeviceModel, const struct FString& DeviceName, const struct FString& DeviceOS, const struct FString& DeviceType, const struct FString& DisplayName, const struct FString& operatingSystem, class UGameSparksScriptData* Segments, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDeviceAuthenticationRequest.SendDeviceAuthenticationRequest");

	UGSDeviceAuthenticationRequest_SendDeviceAuthenticationRequest_Params params;
	params.DeviceID = DeviceID;
	params.DeviceModel = DeviceModel;
	params.DeviceName = DeviceName;
	params.DeviceOS = DeviceOS;
	params.DeviceType = DeviceType;
	params.DisplayName = DisplayName;
	params.operatingSystem = operatingSystem;
	params.Segments = Segments;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDismissMessageRequest.SendDismissMessageRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MessageId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDismissMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDismissMessageRequest* UGSDismissMessageRequest::STATIC_SendDismissMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDismissMessageRequest.SendDismissMessageRequestOnBehalfOf");

	UGSDismissMessageRequest_SendDismissMessageRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.MessageId = MessageId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDismissMessageRequest.SendDismissMessageRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MessageId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDismissMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDismissMessageRequest* UGSDismissMessageRequest::STATIC_SendDismissMessageRequest(const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDismissMessageRequest.SendDismissMessageRequest");

	UGSDismissMessageRequest_SendDismissMessageRequest_Params params;
	params.MessageId = MessageId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDismissMultipleMessagesRequest.SendDismissMultipleMessagesRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* MessageIds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDismissMultipleMessagesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDismissMultipleMessagesRequest* UGSDismissMultipleMessagesRequest::STATIC_SendDismissMultipleMessagesRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* MessageIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDismissMultipleMessagesRequest.SendDismissMultipleMessagesRequestOnBehalfOf");

	UGSDismissMultipleMessagesRequest_SendDismissMultipleMessagesRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.MessageIds = MessageIds;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDismissMultipleMessagesRequest.SendDismissMultipleMessagesRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksRequestArray* MessageIds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDismissMultipleMessagesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDismissMultipleMessagesRequest* UGSDismissMultipleMessagesRequest::STATIC_SendDismissMultipleMessagesRequest(class UGameSparksRequestArray* MessageIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDismissMultipleMessagesRequest.SendDismissMultipleMessagesRequest");

	UGSDismissMultipleMessagesRequest_SendDismissMultipleMessagesRequest_Params params;
	params.MessageIds = MessageIds;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDropTeamRequest.SendDropTeamRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDropTeamRequest*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDropTeamRequest* UGSDropTeamRequest::STATIC_SendDropTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDropTeamRequest.SendDropTeamRequestOnBehalfOf");

	UGSDropTeamRequest_SendDropTeamRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSDropTeamRequest.SendDropTeamRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSDropTeamRequest*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSDropTeamRequest* UGSDropTeamRequest::STATIC_SendDropTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSDropTeamRequest.SendDropTeamRequest");

	UGSDropTeamRequest_SendDropTeamRequest_Params params;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSEndSessionRequest.SendEndSessionRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSEndSessionRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSEndSessionRequest* UGSEndSessionRequest::STATIC_SendEndSessionRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSEndSessionRequest.SendEndSessionRequestOnBehalfOf");

	UGSEndSessionRequest_SendEndSessionRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSEndSessionRequest.SendEndSessionRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSEndSessionRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSEndSessionRequest* UGSEndSessionRequest::STATIC_SendEndSessionRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSEndSessionRequest.SendEndSessionRequest");

	UGSEndSessionRequest_SendEndSessionRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFacebookConnectRequest.SendFacebookConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFacebookConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFacebookConnectRequest* UGSFacebookConnectRequest::STATIC_SendFacebookConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFacebookConnectRequest.SendFacebookConnectRequestOnBehalfOf");

	UGSFacebookConnectRequest_SendFacebookConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.code = code;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFacebookConnectRequest.SendFacebookConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFacebookConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFacebookConnectRequest* UGSFacebookConnectRequest::STATIC_SendFacebookConnectRequest(const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFacebookConnectRequest.SendFacebookConnectRequest");

	UGSFacebookConnectRequest_SendFacebookConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.code = code;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFindChallengeRequest.SendFindChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Eligibility                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* ShortCode                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFindChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFindChallengeRequest* UGSFindChallengeRequest::STATIC_SendFindChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessType, int Count, class UGameSparksScriptData* Eligibility, int Offset, class UGameSparksRequestArray* ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFindChallengeRequest.SendFindChallengeRequestOnBehalfOf");

	UGSFindChallengeRequest_SendFindChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessType = AccessType;
	params.Count = Count;
	params.Eligibility = Eligibility;
	params.Offset = Offset;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFindChallengeRequest.SendFindChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Eligibility                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* ShortCode                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFindChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFindChallengeRequest* UGSFindChallengeRequest::STATIC_SendFindChallengeRequest(const struct FString& AccessType, int Count, class UGameSparksScriptData* Eligibility, int Offset, class UGameSparksRequestArray* ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFindChallengeRequest.SendFindChallengeRequest");

	UGSFindChallengeRequest_SendFindChallengeRequest_Params params;
	params.AccessType = AccessType;
	params.Count = Count;
	params.Eligibility = Eligibility;
	params.Offset = Offset;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFindMatchRequest.SendFindMatchRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Action                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Skill                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFindMatchRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFindMatchRequest* UGSFindMatchRequest::STATIC_SendFindMatchRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Action, const struct FString& MatchGroup, const struct FString& MatchShortCode, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFindMatchRequest.SendFindMatchRequestOnBehalfOf");

	UGSFindMatchRequest_SendFindMatchRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Action = Action;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.Skill = Skill;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFindMatchRequest.SendFindMatchRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Action                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Skill                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFindMatchRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFindMatchRequest* UGSFindMatchRequest::STATIC_SendFindMatchRequest(const struct FString& Action, const struct FString& MatchGroup, const struct FString& MatchShortCode, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFindMatchRequest.SendFindMatchRequest");

	UGSFindMatchRequest_SendFindMatchRequest_Params params;
	params.Action = Action;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.Skill = Skill;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFindPendingMatchesRequest.SendFindPendingMatchesRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxMatchesToFind               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFindPendingMatchesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFindPendingMatchesRequest* UGSFindPendingMatchesRequest::STATIC_SendFindPendingMatchesRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MatchGroup, const struct FString& MatchShortCode, int MaxMatchesToFind, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFindPendingMatchesRequest.SendFindPendingMatchesRequestOnBehalfOf");

	UGSFindPendingMatchesRequest_SendFindPendingMatchesRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.MaxMatchesToFind = MaxMatchesToFind;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSFindPendingMatchesRequest.SendFindPendingMatchesRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxMatchesToFind               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSFindPendingMatchesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSFindPendingMatchesRequest* UGSFindPendingMatchesRequest::STATIC_SendFindPendingMatchesRequest(const struct FString& MatchGroup, const struct FString& MatchShortCode, int MaxMatchesToFind, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSFindPendingMatchesRequest.SendFindPendingMatchesRequest");

	UGSFindPendingMatchesRequest_SendFindPendingMatchesRequest_Params params;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.MaxMatchesToFind = MaxMatchesToFind;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGameCenterConnectRequest.SendGameCenterConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ExternalPlayerId               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublicKeyUrl                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Salt                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Signature                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Timestamp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGameCenterConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGameCenterConnectRequest* UGSGameCenterConnectRequest::STATIC_SendGameCenterConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& ExternalPlayerId, const struct FString& PublicKeyUrl, const struct FString& Salt, class UGameSparksScriptData* Segments, const struct FString& Signature, bool SwitchIfPossible, bool SyncDisplayName, int Timestamp, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGameCenterConnectRequest.SendGameCenterConnectRequestOnBehalfOf");

	UGSGameCenterConnectRequest_SendGameCenterConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.ExternalPlayerId = ExternalPlayerId;
	params.PublicKeyUrl = PublicKeyUrl;
	params.Salt = Salt;
	params.Segments = Segments;
	params.Signature = Signature;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.Timestamp = Timestamp;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGameCenterConnectRequest.SendGameCenterConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ExternalPlayerId               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PublicKeyUrl                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Salt                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Signature                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Timestamp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGameCenterConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGameCenterConnectRequest* UGSGameCenterConnectRequest::STATIC_SendGameCenterConnectRequest(const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& ExternalPlayerId, const struct FString& PublicKeyUrl, const struct FString& Salt, class UGameSparksScriptData* Segments, const struct FString& Signature, bool SwitchIfPossible, bool SyncDisplayName, int Timestamp, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGameCenterConnectRequest.SendGameCenterConnectRequest");

	UGSGameCenterConnectRequest_SendGameCenterConnectRequest_Params params;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.ExternalPlayerId = ExternalPlayerId;
	params.PublicKeyUrl = PublicKeyUrl;
	params.Salt = Salt;
	params.Segments = Segments;
	params.Signature = Signature;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.Timestamp = Timestamp;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetChallengeRequest.SendGetChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetChallengeRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetChallengeRequest* UGSGetChallengeRequest::STATIC_SendGetChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetChallengeRequest.SendGetChallengeRequestOnBehalfOf");

	UGSGetChallengeRequest_SendGetChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetChallengeRequest.SendGetChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetChallengeRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetChallengeRequest* UGSGetChallengeRequest::STATIC_SendGetChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetChallengeRequest.SendGetChallengeRequest");

	UGSGetChallengeRequest_SendGetChallengeRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetDownloadableRequest.SendGetDownloadableRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetDownloadableRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetDownloadableRequest* UGSGetDownloadableRequest::STATIC_SendGetDownloadableRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetDownloadableRequest.SendGetDownloadableRequestOnBehalfOf");

	UGSGetDownloadableRequest_SendGetDownloadableRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetDownloadableRequest.SendGetDownloadableRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetDownloadableRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetDownloadableRequest* UGSGetDownloadableRequest::STATIC_SendGetDownloadableRequest(const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetDownloadableRequest.SendGetDownloadableRequest");

	UGSGetDownloadableRequest_SendGetDownloadableRequest_Params params;
	params.ShortCode = ShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetLeaderboardEntriesRequest.SendGetLeaderboardEntriesRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Challenges                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Leaderboards                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Player                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetLeaderboardEntriesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetLeaderboardEntriesRequest* UGSGetLeaderboardEntriesRequest::STATIC_SendGetLeaderboardEntriesRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetLeaderboardEntriesRequest.SendGetLeaderboardEntriesRequestOnBehalfOf");

	UGSGetLeaderboardEntriesRequest_SendGetLeaderboardEntriesRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Challenges = Challenges;
	params.InverseSocial = InverseSocial;
	params.Leaderboards = Leaderboards;
	params.Player = Player;
	params.Social = Social;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetLeaderboardEntriesRequest.SendGetLeaderboardEntriesRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksRequestArray* Challenges                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Leaderboards                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Player                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetLeaderboardEntriesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetLeaderboardEntriesRequest* UGSGetLeaderboardEntriesRequest::STATIC_SendGetLeaderboardEntriesRequest(class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetLeaderboardEntriesRequest.SendGetLeaderboardEntriesRequest");

	UGSGetLeaderboardEntriesRequest_SendGetLeaderboardEntriesRequest_Params params;
	params.Challenges = Challenges;
	params.InverseSocial = InverseSocial;
	params.Leaderboards = Leaderboards;
	params.Player = Player;
	params.Social = Social;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetMessageRequest.SendGetMessageRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MessageId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetMessageRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetMessageRequest* UGSGetMessageRequest::STATIC_SendGetMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetMessageRequest.SendGetMessageRequestOnBehalfOf");

	UGSGetMessageRequest_SendGetMessageRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.MessageId = MessageId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetMessageRequest.SendGetMessageRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MessageId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetMessageRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetMessageRequest* UGSGetMessageRequest::STATIC_SendGetMessageRequest(const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetMessageRequest.SendGetMessageRequest");

	UGSGetMessageRequest_SendGetMessageRequest_Params params;
	params.MessageId = MessageId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetMyTeamsRequest.SendGetMyTeamsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           OwnedOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetMyTeamsRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetMyTeamsRequest* UGSGetMyTeamsRequest::STATIC_SendGetMyTeamsRequestOnBehalfOf(const struct FString& PlayerId, bool OwnedOnly, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetMyTeamsRequest.SendGetMyTeamsRequestOnBehalfOf");

	UGSGetMyTeamsRequest_SendGetMyTeamsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.OwnedOnly = OwnedOnly;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetMyTeamsRequest.SendGetMyTeamsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           OwnedOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetMyTeamsRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetMyTeamsRequest* UGSGetMyTeamsRequest::STATIC_SendGetMyTeamsRequest(bool OwnedOnly, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetMyTeamsRequest.SendGetMyTeamsRequest");

	UGSGetMyTeamsRequest_SendGetMyTeamsRequest_Params params;
	params.OwnedOnly = OwnedOnly;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetPropertyRequest.SendGetPropertyRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertyShortCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetPropertyRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetPropertyRequest* UGSGetPropertyRequest::STATIC_SendGetPropertyRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& PropertyShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetPropertyRequest.SendGetPropertyRequestOnBehalfOf");

	UGSGetPropertyRequest_SendGetPropertyRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.PropertyShortCode = PropertyShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetPropertyRequest.SendGetPropertyRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyShortCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetPropertyRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetPropertyRequest* UGSGetPropertyRequest::STATIC_SendGetPropertyRequest(const struct FString& PropertyShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetPropertyRequest.SendGetPropertyRequest");

	UGSGetPropertyRequest_SendGetPropertyRequest_Params params;
	params.PropertyShortCode = PropertyShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetPropertySetRequest.SendGetPropertySetRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PropertySetShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetPropertySetRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetPropertySetRequest* UGSGetPropertySetRequest::STATIC_SendGetPropertySetRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& PropertySetShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetPropertySetRequest.SendGetPropertySetRequestOnBehalfOf");

	UGSGetPropertySetRequest_SendGetPropertySetRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.PropertySetShortCode = PropertySetShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetPropertySetRequest.SendGetPropertySetRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertySetShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetPropertySetRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetPropertySetRequest* UGSGetPropertySetRequest::STATIC_SendGetPropertySetRequest(const struct FString& PropertySetShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetPropertySetRequest.SendGetPropertySetRequest");

	UGSGetPropertySetRequest_SendGetPropertySetRequest_Params params;
	params.PropertySetShortCode = PropertySetShortCode;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetTeamRequest.SendGetTeamRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetTeamRequest*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetTeamRequest* UGSGetTeamRequest::STATIC_SendGetTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetTeamRequest.SendGetTeamRequestOnBehalfOf");

	UGSGetTeamRequest_SendGetTeamRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetTeamRequest.SendGetTeamRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetTeamRequest*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetTeamRequest* UGSGetTeamRequest::STATIC_SendGetTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetTeamRequest.SendGetTeamRequest");

	UGSGetTeamRequest_SendGetTeamRequest_Params params;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetUploadUrlRequest.SendGetUploadUrlRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   UploadData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetUploadUrlRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetUploadUrlRequest* UGSGetUploadUrlRequest::STATIC_SendGetUploadUrlRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* UploadData, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetUploadUrlRequest.SendGetUploadUrlRequestOnBehalfOf");

	UGSGetUploadUrlRequest_SendGetUploadUrlRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.UploadData = UploadData;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetUploadUrlRequest.SendGetUploadUrlRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   UploadData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetUploadUrlRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetUploadUrlRequest* UGSGetUploadUrlRequest::STATIC_SendGetUploadUrlRequest(class UGameSparksScriptData* UploadData, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetUploadUrlRequest.SendGetUploadUrlRequest");

	UGSGetUploadUrlRequest_SendGetUploadUrlRequest_Params params;
	params.UploadData = UploadData;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetUploadedRequest.SendGetUploadedRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UploadId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetUploadedRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetUploadedRequest* UGSGetUploadedRequest::STATIC_SendGetUploadedRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& UploadId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetUploadedRequest.SendGetUploadedRequestOnBehalfOf");

	UGSGetUploadedRequest_SendGetUploadedRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.UploadId = UploadId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGetUploadedRequest.SendGetUploadedRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 UploadId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGetUploadedRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGetUploadedRequest* UGSGetUploadedRequest::STATIC_SendGetUploadedRequest(const struct FString& UploadId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGetUploadedRequest.SendGetUploadedRequest");

	UGSGetUploadedRequest_SendGetUploadedRequest_Params params;
	params.UploadId = UploadId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGooglePlayBuyGoodsRequest.SendGooglePlayBuyGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Signature                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SignedData                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGooglePlayBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGooglePlayBuyGoodsRequest* UGSGooglePlayBuyGoodsRequest::STATIC_SendGooglePlayBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& Signature, const struct FString& SignedData, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGooglePlayBuyGoodsRequest.SendGooglePlayBuyGoodsRequestOnBehalfOf");

	UGSGooglePlayBuyGoodsRequest_SendGooglePlayBuyGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.CurrencyCode = CurrencyCode;
	params.Signature = Signature;
	params.SignedData = SignedData;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGooglePlayBuyGoodsRequest.SendGooglePlayBuyGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Signature                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SignedData                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGooglePlayBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGooglePlayBuyGoodsRequest* UGSGooglePlayBuyGoodsRequest::STATIC_SendGooglePlayBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& Signature, const struct FString& SignedData, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGooglePlayBuyGoodsRequest.SendGooglePlayBuyGoodsRequest");

	UGSGooglePlayBuyGoodsRequest_SendGooglePlayBuyGoodsRequest_Params params;
	params.CurrencyCode = CurrencyCode;
	params.Signature = Signature;
	params.SignedData = SignedData;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGooglePlayConnectRequest.SendGooglePlayConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           GooglePlusScope                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ProfileScope                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGooglePlayConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGooglePlayConnectRequest* UGSGooglePlayConnectRequest::STATIC_SendGooglePlayConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, const struct FString& code, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, bool GooglePlusScope, bool ProfileScope, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGooglePlayConnectRequest.SendGooglePlayConnectRequestOnBehalfOf");

	UGSGooglePlayConnectRequest_SendGooglePlayConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.code = code;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.GooglePlusScope = GooglePlusScope;
	params.ProfileScope = ProfileScope;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGooglePlayConnectRequest.SendGooglePlayConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           GooglePlusScope                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ProfileScope                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGooglePlayConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGooglePlayConnectRequest* UGSGooglePlayConnectRequest::STATIC_SendGooglePlayConnectRequest(const struct FString& AccessToken, const struct FString& code, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, bool GooglePlusScope, bool ProfileScope, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGooglePlayConnectRequest.SendGooglePlayConnectRequest");

	UGSGooglePlayConnectRequest_SendGooglePlayConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.code = code;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.GooglePlusScope = GooglePlusScope;
	params.ProfileScope = ProfileScope;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGooglePlusConnectRequest.SendGooglePlusConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGooglePlusConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGooglePlusConnectRequest* UGSGooglePlusConnectRequest::STATIC_SendGooglePlusConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGooglePlusConnectRequest.SendGooglePlusConnectRequestOnBehalfOf");

	UGSGooglePlusConnectRequest_SendGooglePlusConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.code = code;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSGooglePlusConnectRequest.SendGooglePlusConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSGooglePlusConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSGooglePlusConnectRequest* UGSGooglePlusConnectRequest::STATIC_SendGooglePlusConnectRequest(const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSGooglePlusConnectRequest.SendGooglePlusConnectRequest");

	UGSGooglePlusConnectRequest_SendGooglePlusConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.code = code;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSIOSBuyGoodsRequest.SendIOSBuyGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Sandbox                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSIOSBuyGoodsRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSIOSBuyGoodsRequest* UGSIOSBuyGoodsRequest::STATIC_SendIOSBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& Receipt, bool Sandbox, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSIOSBuyGoodsRequest.SendIOSBuyGoodsRequestOnBehalfOf");

	UGSIOSBuyGoodsRequest_SendIOSBuyGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.CurrencyCode = CurrencyCode;
	params.Receipt = Receipt;
	params.Sandbox = Sandbox;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSIOSBuyGoodsRequest.SendIOSBuyGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Sandbox                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSIOSBuyGoodsRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSIOSBuyGoodsRequest* UGSIOSBuyGoodsRequest::STATIC_SendIOSBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& Receipt, bool Sandbox, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSIOSBuyGoodsRequest.SendIOSBuyGoodsRequest");

	UGSIOSBuyGoodsRequest_SendIOSBuyGoodsRequest_Params params;
	params.CurrencyCode = CurrencyCode;
	params.Receipt = Receipt;
	params.Sandbox = Sandbox;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSJoinChallengeRequest.SendJoinChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Eligibility                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSJoinChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSJoinChallengeRequest* UGSJoinChallengeRequest::STATIC_SendJoinChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, class UGameSparksScriptData* Eligibility, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSJoinChallengeRequest.SendJoinChallengeRequestOnBehalfOf");

	UGSJoinChallengeRequest_SendJoinChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Eligibility = Eligibility;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSJoinChallengeRequest.SendJoinChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Eligibility                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSJoinChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSJoinChallengeRequest* UGSJoinChallengeRequest::STATIC_SendJoinChallengeRequest(const struct FString& ChallengeInstanceId, class UGameSparksScriptData* Eligibility, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSJoinChallengeRequest.SendJoinChallengeRequest");

	UGSJoinChallengeRequest_SendJoinChallengeRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Eligibility = Eligibility;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSJoinPendingMatchRequest.SendJoinPendingMatchRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PendingMatchId                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSJoinPendingMatchRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSJoinPendingMatchRequest* UGSJoinPendingMatchRequest::STATIC_SendJoinPendingMatchRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MatchGroup, const struct FString& MatchShortCode, const struct FString& PendingMatchId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSJoinPendingMatchRequest.SendJoinPendingMatchRequestOnBehalfOf");

	UGSJoinPendingMatchRequest_SendJoinPendingMatchRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.PendingMatchId = PendingMatchId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSJoinPendingMatchRequest.SendJoinPendingMatchRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PendingMatchId                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSJoinPendingMatchRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSJoinPendingMatchRequest* UGSJoinPendingMatchRequest::STATIC_SendJoinPendingMatchRequest(const struct FString& MatchGroup, const struct FString& MatchShortCode, const struct FString& PendingMatchId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSJoinPendingMatchRequest.SendJoinPendingMatchRequest");

	UGSJoinPendingMatchRequest_SendJoinPendingMatchRequest_Params params;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.PendingMatchId = PendingMatchId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSJoinTeamRequest.SendJoinTeamRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSJoinTeamRequest*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSJoinTeamRequest* UGSJoinTeamRequest::STATIC_SendJoinTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSJoinTeamRequest.SendJoinTeamRequestOnBehalfOf");

	UGSJoinTeamRequest_SendJoinTeamRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSJoinTeamRequest.SendJoinTeamRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSJoinTeamRequest*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSJoinTeamRequest* UGSJoinTeamRequest::STATIC_SendJoinTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSJoinTeamRequest.SendJoinTeamRequest");

	UGSJoinTeamRequest_SendJoinTeamRequest_Params params;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSKongregateConnectRequest.SendKongregateConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameAuthToken                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UserId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSKongregateConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSKongregateConnectRequest* UGSKongregateConnectRequest::STATIC_SendKongregateConnectRequestOnBehalfOf(const struct FString& PlayerId, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& GameAuthToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& UserId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSKongregateConnectRequest.SendKongregateConnectRequestOnBehalfOf");

	UGSKongregateConnectRequest_SendKongregateConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.GameAuthToken = GameAuthToken;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.UserId = UserId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSKongregateConnectRequest.SendKongregateConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameAuthToken                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UserId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSKongregateConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSKongregateConnectRequest* UGSKongregateConnectRequest::STATIC_SendKongregateConnectRequest(bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& GameAuthToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& UserId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSKongregateConnectRequest.SendKongregateConnectRequest");

	UGSKongregateConnectRequest_SendKongregateConnectRequest_Params params;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.GameAuthToken = GameAuthToken;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.UserId = UserId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLeaderboardDataRequest.SendLeaderboardDataRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DontErrorOnNotSocial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeFirst                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeLast                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamIds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLeaderboardDataRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLeaderboardDataRequest* UGSLeaderboardDataRequest::STATIC_SendLeaderboardDataRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLeaderboardDataRequest.SendLeaderboardDataRequestOnBehalfOf");

	UGSLeaderboardDataRequest_SendLeaderboardDataRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.DontErrorOnNotSocial = DontErrorOnNotSocial;
	params.EntryCount = EntryCount;
	params.FriendIds = FriendIds;
	params.IncludeFirst = IncludeFirst;
	params.IncludeLast = IncludeLast;
	params.InverseSocial = InverseSocial;
	params.LeaderboardShortCode = LeaderboardShortCode;
	params.Offset = Offset;
	params.Social = Social;
	params.TeamIds = TeamIds;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLeaderboardDataRequest.SendLeaderboardDataRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DontErrorOnNotSocial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeFirst                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeLast                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamIds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLeaderboardDataRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLeaderboardDataRequest* UGSLeaderboardDataRequest::STATIC_SendLeaderboardDataRequest(const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLeaderboardDataRequest.SendLeaderboardDataRequest");

	UGSLeaderboardDataRequest_SendLeaderboardDataRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.DontErrorOnNotSocial = DontErrorOnNotSocial;
	params.EntryCount = EntryCount;
	params.FriendIds = FriendIds;
	params.IncludeFirst = IncludeFirst;
	params.IncludeLast = IncludeLast;
	params.InverseSocial = InverseSocial;
	params.LeaderboardShortCode = LeaderboardShortCode;
	params.Offset = Offset;
	params.Social = Social;
	params.TeamIds = TeamIds;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLeaderboardsEntriesRequest.SendLeaderboardsEntriesRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Challenges                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Leaderboards                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Player                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLeaderboardsEntriesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLeaderboardsEntriesRequest* UGSLeaderboardsEntriesRequest::STATIC_SendLeaderboardsEntriesRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLeaderboardsEntriesRequest.SendLeaderboardsEntriesRequestOnBehalfOf");

	UGSLeaderboardsEntriesRequest_SendLeaderboardsEntriesRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Challenges = Challenges;
	params.InverseSocial = InverseSocial;
	params.Leaderboards = Leaderboards;
	params.Player = Player;
	params.Social = Social;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLeaderboardsEntriesRequest.SendLeaderboardsEntriesRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksRequestArray* Challenges                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Leaderboards                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Player                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLeaderboardsEntriesRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLeaderboardsEntriesRequest* UGSLeaderboardsEntriesRequest::STATIC_SendLeaderboardsEntriesRequest(class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLeaderboardsEntriesRequest.SendLeaderboardsEntriesRequest");

	UGSLeaderboardsEntriesRequest_SendLeaderboardsEntriesRequest_Params params;
	params.Challenges = Challenges;
	params.InverseSocial = InverseSocial;
	params.Leaderboards = Leaderboards;
	params.Player = Player;
	params.Social = Social;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLeaveTeamRequest.SendLeaveTeamRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLeaveTeamRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLeaveTeamRequest* UGSLeaveTeamRequest::STATIC_SendLeaveTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLeaveTeamRequest.SendLeaveTeamRequestOnBehalfOf");

	UGSLeaveTeamRequest_SendLeaveTeamRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLeaveTeamRequest.SendLeaveTeamRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLeaveTeamRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLeaveTeamRequest* UGSLeaveTeamRequest::STATIC_SendLeaveTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLeaveTeamRequest.SendLeaveTeamRequest");

	UGSLeaveTeamRequest_SendLeaveTeamRequest_Params params;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListAchievementsRequest.SendListAchievementsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListAchievementsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListAchievementsRequest* UGSListAchievementsRequest::STATIC_SendListAchievementsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListAchievementsRequest.SendListAchievementsRequestOnBehalfOf");

	UGSListAchievementsRequest_SendListAchievementsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListAchievementsRequest.SendListAchievementsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListAchievementsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListAchievementsRequest* UGSListAchievementsRequest::STATIC_SendListAchievementsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListAchievementsRequest.SendListAchievementsRequest");

	UGSListAchievementsRequest_SendListAchievementsRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListBulkJobsAdminRequest.SendListBulkJobsAdminRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksRequestArray* BulkJobIds                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListBulkJobsAdminRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListBulkJobsAdminRequest* UGSListBulkJobsAdminRequest::STATIC_SendListBulkJobsAdminRequest(class UGameSparksRequestArray* BulkJobIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListBulkJobsAdminRequest.SendListBulkJobsAdminRequest");

	UGSListBulkJobsAdminRequest_SendListBulkJobsAdminRequest_Params params;
	params.BulkJobIds = BulkJobIds;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListChallengeRequest.SendListChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 State                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* States                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListChallengeRequest* UGSListChallengeRequest::STATIC_SendListChallengeRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, const struct FString& ShortCode, const struct FString& State, class UGameSparksRequestArray* States, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListChallengeRequest.SendListChallengeRequestOnBehalfOf");

	UGSListChallengeRequest_SendListChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.ShortCode = ShortCode;
	params.State = State;
	params.States = States;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListChallengeRequest.SendListChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ShortCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 State                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* States                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListChallengeRequest* UGSListChallengeRequest::STATIC_SendListChallengeRequest(int EntryCount, int Offset, const struct FString& ShortCode, const struct FString& State, class UGameSparksRequestArray* States, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListChallengeRequest.SendListChallengeRequest");

	UGSListChallengeRequest_SendListChallengeRequest_Params params;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.ShortCode = ShortCode;
	params.State = State;
	params.States = States;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListChallengeTypeRequest.SendListChallengeTypeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListChallengeTypeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListChallengeTypeRequest* UGSListChallengeTypeRequest::STATIC_SendListChallengeTypeRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListChallengeTypeRequest.SendListChallengeTypeRequestOnBehalfOf");

	UGSListChallengeTypeRequest_SendListChallengeTypeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListChallengeTypeRequest.SendListChallengeTypeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListChallengeTypeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListChallengeTypeRequest* UGSListChallengeTypeRequest::STATIC_SendListChallengeTypeRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListChallengeTypeRequest.SendListChallengeTypeRequest");

	UGSListChallengeTypeRequest_SendListChallengeTypeRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListGameFriendsRequest.SendListGameFriendsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListGameFriendsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListGameFriendsRequest* UGSListGameFriendsRequest::STATIC_SendListGameFriendsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListGameFriendsRequest.SendListGameFriendsRequestOnBehalfOf");

	UGSListGameFriendsRequest_SendListGameFriendsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListGameFriendsRequest.SendListGameFriendsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListGameFriendsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListGameFriendsRequest* UGSListGameFriendsRequest::STATIC_SendListGameFriendsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListGameFriendsRequest.SendListGameFriendsRequest");

	UGSListGameFriendsRequest_SendListGameFriendsRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListInviteFriendsRequest.SendListInviteFriendsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListInviteFriendsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListInviteFriendsRequest* UGSListInviteFriendsRequest::STATIC_SendListInviteFriendsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListInviteFriendsRequest.SendListInviteFriendsRequestOnBehalfOf");

	UGSListInviteFriendsRequest_SendListInviteFriendsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListInviteFriendsRequest.SendListInviteFriendsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListInviteFriendsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListInviteFriendsRequest* UGSListInviteFriendsRequest::STATIC_SendListInviteFriendsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListInviteFriendsRequest.SendListInviteFriendsRequest");

	UGSListInviteFriendsRequest_SendListInviteFriendsRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListLeaderboardsRequest.SendListLeaderboardsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListLeaderboardsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListLeaderboardsRequest* UGSListLeaderboardsRequest::STATIC_SendListLeaderboardsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListLeaderboardsRequest.SendListLeaderboardsRequestOnBehalfOf");

	UGSListLeaderboardsRequest_SendListLeaderboardsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListLeaderboardsRequest.SendListLeaderboardsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListLeaderboardsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListLeaderboardsRequest* UGSListLeaderboardsRequest::STATIC_SendListLeaderboardsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListLeaderboardsRequest.SendListLeaderboardsRequest");

	UGSListLeaderboardsRequest_SendListLeaderboardsRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListMessageDetailRequest.SendListMessageDetailRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Include                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Status                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListMessageDetailRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListMessageDetailRequest* UGSListMessageDetailRequest::STATIC_SendListMessageDetailRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, const struct FString& Include, int Offset, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListMessageDetailRequest.SendListMessageDetailRequestOnBehalfOf");

	UGSListMessageDetailRequest_SendListMessageDetailRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.EntryCount = EntryCount;
	params.Include = Include;
	params.Offset = Offset;
	params.Status = Status;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListMessageDetailRequest.SendListMessageDetailRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Include                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Status                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListMessageDetailRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListMessageDetailRequest* UGSListMessageDetailRequest::STATIC_SendListMessageDetailRequest(int EntryCount, const struct FString& Include, int Offset, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListMessageDetailRequest.SendListMessageDetailRequest");

	UGSListMessageDetailRequest_SendListMessageDetailRequest_Params params;
	params.EntryCount = EntryCount;
	params.Include = Include;
	params.Offset = Offset;
	params.Status = Status;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListMessageRequest.SendListMessageRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Include                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListMessageRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListMessageRequest* UGSListMessageRequest::STATIC_SendListMessageRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListMessageRequest.SendListMessageRequestOnBehalfOf");

	UGSListMessageRequest_SendListMessageRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.EntryCount = EntryCount;
	params.Include = Include;
	params.Offset = Offset;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListMessageRequest.SendListMessageRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Include                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListMessageRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListMessageRequest* UGSListMessageRequest::STATIC_SendListMessageRequest(int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListMessageRequest.SendListMessageRequest");

	UGSListMessageRequest_SendListMessageRequest_Params params;
	params.EntryCount = EntryCount;
	params.Include = Include;
	params.Offset = Offset;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListMessageSummaryRequest.SendListMessageSummaryRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListMessageSummaryRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListMessageSummaryRequest* UGSListMessageSummaryRequest::STATIC_SendListMessageSummaryRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListMessageSummaryRequest.SendListMessageSummaryRequestOnBehalfOf");

	UGSListMessageSummaryRequest_SendListMessageSummaryRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListMessageSummaryRequest.SendListMessageSummaryRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListMessageSummaryRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListMessageSummaryRequest* UGSListMessageSummaryRequest::STATIC_SendListMessageSummaryRequest(int EntryCount, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListMessageSummaryRequest.SendListMessageSummaryRequest");

	UGSListMessageSummaryRequest_SendListMessageSummaryRequest_Params params;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListTeamChatRequest.SendListTeamChatRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListTeamChatRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListTeamChatRequest* UGSListTeamChatRequest::STATIC_SendListTeamChatRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListTeamChatRequest.SendListTeamChatRequestOnBehalfOf");

	UGSListTeamChatRequest_SendListTeamChatRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListTeamChatRequest.SendListTeamChatRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListTeamChatRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListTeamChatRequest* UGSListTeamChatRequest::STATIC_SendListTeamChatRequest(int EntryCount, int Offset, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListTeamChatRequest.SendListTeamChatRequest");

	UGSListTeamChatRequest_SendListTeamChatRequest_Params params;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListTeamsRequest.SendListTeamsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamNameFilter                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamTypeFilter                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListTeamsRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListTeamsRequest* UGSListTeamsRequest::STATIC_SendListTeamsRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, const struct FString& TeamNameFilter, const struct FString& TeamTypeFilter, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListTeamsRequest.SendListTeamsRequestOnBehalfOf");

	UGSListTeamsRequest_SendListTeamsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.TeamNameFilter = TeamNameFilter;
	params.TeamTypeFilter = TeamTypeFilter;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListTeamsRequest.SendListTeamsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamNameFilter                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamTypeFilter                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListTeamsRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListTeamsRequest* UGSListTeamsRequest::STATIC_SendListTeamsRequest(int EntryCount, int Offset, const struct FString& TeamNameFilter, const struct FString& TeamTypeFilter, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListTeamsRequest.SendListTeamsRequest");

	UGSListTeamsRequest_SendListTeamsRequest_Params params;
	params.EntryCount = EntryCount;
	params.Offset = Offset;
	params.TeamNameFilter = TeamNameFilter;
	params.TeamTypeFilter = TeamTypeFilter;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListTransactionsRequest.SendListTransactionsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DateFrom                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DateTo                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Include                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListTransactionsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListTransactionsRequest* UGSListTransactionsRequest::STATIC_SendListTransactionsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DateFrom, const struct FString& DateTo, int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListTransactionsRequest.SendListTransactionsRequestOnBehalfOf");

	UGSListTransactionsRequest_SendListTransactionsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DateFrom = DateFrom;
	params.DateTo = DateTo;
	params.EntryCount = EntryCount;
	params.Include = Include;
	params.Offset = Offset;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListTransactionsRequest.SendListTransactionsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DateFrom                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DateTo                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Include                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListTransactionsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListTransactionsRequest* UGSListTransactionsRequest::STATIC_SendListTransactionsRequest(const struct FString& DateFrom, const struct FString& DateTo, int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListTransactionsRequest.SendListTransactionsRequest");

	UGSListTransactionsRequest_SendListTransactionsRequest_Params params;
	params.DateFrom = DateFrom;
	params.DateTo = DateTo;
	params.EntryCount = EntryCount;
	params.Include = Include;
	params.Offset = Offset;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListVirtualGoodsRequest.SendListVirtualGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IncludeDisabled                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Tags                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListVirtualGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListVirtualGoodsRequest* UGSListVirtualGoodsRequest::STATIC_SendListVirtualGoodsRequestOnBehalfOf(const struct FString& PlayerId, bool IncludeDisabled, class UGameSparksRequestArray* Tags, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListVirtualGoodsRequest.SendListVirtualGoodsRequestOnBehalfOf");

	UGSListVirtualGoodsRequest_SendListVirtualGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.IncludeDisabled = IncludeDisabled;
	params.Tags = Tags;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSListVirtualGoodsRequest.SendListVirtualGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           IncludeDisabled                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* Tags                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSListVirtualGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSListVirtualGoodsRequest* UGSListVirtualGoodsRequest::STATIC_SendListVirtualGoodsRequest(bool IncludeDisabled, class UGameSparksRequestArray* Tags, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSListVirtualGoodsRequest.SendListVirtualGoodsRequest");

	UGSListVirtualGoodsRequest_SendListVirtualGoodsRequest_Params params;
	params.IncludeDisabled = IncludeDisabled;
	params.Tags = Tags;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLogChallengeEventRequest.SendLogChallengeEventRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventKey                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* LogEventData                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLogChallengeEventRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLogChallengeEventRequest* UGSLogChallengeEventRequest::STATIC_SendLogChallengeEventRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLogChallengeEventRequest.SendLogChallengeEventRequestOnBehalfOf");

	UGSLogChallengeEventRequest_SendLogChallengeEventRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.EventKey = EventKey;
	params.LogEventData = LogEventData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLogChallengeEventRequest.SendLogChallengeEventRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventKey                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* LogEventData                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLogChallengeEventRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLogChallengeEventRequest* UGSLogChallengeEventRequest::STATIC_SendLogChallengeEventRequest(const struct FString& ChallengeInstanceId, const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLogChallengeEventRequest.SendLogChallengeEventRequest");

	UGSLogChallengeEventRequest_SendLogChallengeEventRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.EventKey = EventKey;
	params.LogEventData = LogEventData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLogEventRequest.SendLogEventRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EventKey                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* LogEventData                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLogEventRequest*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLogEventRequest* UGSLogEventRequest::STATIC_SendLogEventRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLogEventRequest.SendLogEventRequestOnBehalfOf");

	UGSLogEventRequest_SendLogEventRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.EventKey = EventKey;
	params.LogEventData = LogEventData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSLogEventRequest.SendLogEventRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventKey                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksLogEventData* LogEventData                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSLogEventRequest*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSLogEventRequest* UGSLogEventRequest::STATIC_SendLogEventRequest(const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSLogEventRequest.SendLogEventRequest");

	UGSLogEventRequest_SendLogEventRequest_Params params;
	params.EventKey = EventKey;
	params.LogEventData = LogEventData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSMatchDetailsRequest.SendMatchDetailsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           RealtimeEnabled                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSMatchDetailsRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSMatchDetailsRequest* UGSMatchDetailsRequest::STATIC_SendMatchDetailsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MatchId, bool RealtimeEnabled, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSMatchDetailsRequest.SendMatchDetailsRequestOnBehalfOf");

	UGSMatchDetailsRequest_SendMatchDetailsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.MatchId = MatchId;
	params.RealtimeEnabled = RealtimeEnabled;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSMatchDetailsRequest.SendMatchDetailsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           RealtimeEnabled                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSMatchDetailsRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSMatchDetailsRequest* UGSMatchDetailsRequest::STATIC_SendMatchDetailsRequest(const struct FString& MatchId, bool RealtimeEnabled, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSMatchDetailsRequest.SendMatchDetailsRequest");

	UGSMatchDetailsRequest_SendMatchDetailsRequest_Params params;
	params.MatchId = MatchId;
	params.RealtimeEnabled = RealtimeEnabled;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSMatchmakingRequest.SendMatchmakingRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Action                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   CustomQuery                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   MatchData                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ParticipantData                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Skill                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSMatchmakingRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSMatchmakingRequest* UGSMatchmakingRequest::STATIC_SendMatchmakingRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Action, class UGameSparksScriptData* CustomQuery, class UGameSparksScriptData* MatchData, const struct FString& MatchGroup, const struct FString& MatchShortCode, class UGameSparksScriptData* ParticipantData, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSMatchmakingRequest.SendMatchmakingRequestOnBehalfOf");

	UGSMatchmakingRequest_SendMatchmakingRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Action = Action;
	params.CustomQuery = CustomQuery;
	params.MatchData = MatchData;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.ParticipantData = ParticipantData;
	params.Skill = Skill;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSMatchmakingRequest.SendMatchmakingRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Action                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   CustomQuery                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   MatchData                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchGroup                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchShortCode                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ParticipantData                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Skill                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSMatchmakingRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSMatchmakingRequest* UGSMatchmakingRequest::STATIC_SendMatchmakingRequest(const struct FString& Action, class UGameSparksScriptData* CustomQuery, class UGameSparksScriptData* MatchData, const struct FString& MatchGroup, const struct FString& MatchShortCode, class UGameSparksScriptData* ParticipantData, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSMatchmakingRequest.SendMatchmakingRequest");

	UGSMatchmakingRequest_SendMatchmakingRequest_Params params;
	params.Action = Action;
	params.CustomQuery = CustomQuery;
	params.MatchData = MatchData;
	params.MatchGroup = MatchGroup;
	params.MatchShortCode = MatchShortCode;
	params.ParticipantData = ParticipantData;
	params.Skill = Skill;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSNXConnectRequest.SendNXConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AccountPerLoginId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NsaIdToken                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSNXConnectRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSNXConnectRequest* UGSNXConnectRequest::STATIC_SendNXConnectRequestOnBehalfOf(const struct FString& PlayerId, bool AccountPerLoginId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& NsaIdToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSNXConnectRequest.SendNXConnectRequestOnBehalfOf");

	UGSNXConnectRequest_SendNXConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccountPerLoginId = AccountPerLoginId;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.NsaIdToken = NsaIdToken;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSNXConnectRequest.SendNXConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           AccountPerLoginId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NsaIdToken                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSNXConnectRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSNXConnectRequest* UGSNXConnectRequest::STATIC_SendNXConnectRequest(bool AccountPerLoginId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& NsaIdToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSNXConnectRequest.SendNXConnectRequest");

	UGSNXConnectRequest_SendNXConnectRequest_Params params;
	params.AccountPerLoginId = AccountPerLoginId;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.NsaIdToken = NsaIdToken;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPSNAccountConnectRequest.SendPSNAccountConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuthorizationCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPSNAccountConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPSNAccountConnectRequest* UGSPSNAccountConnectRequest::STATIC_SendPSNAccountConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPSNAccountConnectRequest.SendPSNAccountConnectRequestOnBehalfOf");

	UGSPSNAccountConnectRequest_SendPSNAccountConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AuthorizationCode = AuthorizationCode;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPSNAccountConnectRequest.SendPSNAccountConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AuthorizationCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPSNAccountConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPSNAccountConnectRequest* UGSPSNAccountConnectRequest::STATIC_SendPSNAccountConnectRequest(const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPSNAccountConnectRequest.SendPSNAccountConnectRequest");

	UGSPSNAccountConnectRequest_SendPSNAccountConnectRequest_Params params;
	params.AuthorizationCode = AuthorizationCode;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPSNConnectRequest.SendPSNConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuthorizationCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPSNConnectRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPSNConnectRequest* UGSPSNConnectRequest::STATIC_SendPSNConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPSNConnectRequest.SendPSNConnectRequestOnBehalfOf");

	UGSPSNConnectRequest_SendPSNConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AuthorizationCode = AuthorizationCode;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPSNConnectRequest.SendPSNConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AuthorizationCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPSNConnectRequest*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPSNConnectRequest* UGSPSNConnectRequest::STATIC_SendPSNConnectRequest(const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPSNConnectRequest.SendPSNConnectRequest");

	UGSPSNConnectRequest_SendPSNConnectRequest_Params params;
	params.AuthorizationCode = AuthorizationCode;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.RedirectUri = RedirectUri;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPsnBuyGoodsRequest.SendPsnBuyGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AuthorizationCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EntitlementLabel               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UseCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPsnBuyGoodsRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPsnBuyGoodsRequest* UGSPsnBuyGoodsRequest::STATIC_SendPsnBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AuthorizationCode, const struct FString& CurrencyCode, const struct FString& EntitlementLabel, const struct FString& RedirectUri, float SubUnitPrice, bool UniqueTransactionByPlayer, int UseCount, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPsnBuyGoodsRequest.SendPsnBuyGoodsRequestOnBehalfOf");

	UGSPsnBuyGoodsRequest_SendPsnBuyGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AuthorizationCode = AuthorizationCode;
	params.CurrencyCode = CurrencyCode;
	params.EntitlementLabel = EntitlementLabel;
	params.RedirectUri = RedirectUri;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.UseCount = UseCount;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPsnBuyGoodsRequest.SendPsnBuyGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AuthorizationCode              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 EntitlementLabel               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RedirectUri                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UseCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPsnBuyGoodsRequest*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPsnBuyGoodsRequest* UGSPsnBuyGoodsRequest::STATIC_SendPsnBuyGoodsRequest(const struct FString& AuthorizationCode, const struct FString& CurrencyCode, const struct FString& EntitlementLabel, const struct FString& RedirectUri, float SubUnitPrice, bool UniqueTransactionByPlayer, int UseCount, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPsnBuyGoodsRequest.SendPsnBuyGoodsRequest");

	UGSPsnBuyGoodsRequest_SendPsnBuyGoodsRequest_Params params;
	params.AuthorizationCode = AuthorizationCode;
	params.CurrencyCode = CurrencyCode;
	params.EntitlementLabel = EntitlementLabel;
	params.RedirectUri = RedirectUri;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.UseCount = UseCount;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPushRegistrationRequest.SendPushRegistrationRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DeviceOS                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PushId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPushRegistrationRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPushRegistrationRequest* UGSPushRegistrationRequest::STATIC_SendPushRegistrationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DeviceOS, const struct FString& PushId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPushRegistrationRequest.SendPushRegistrationRequestOnBehalfOf");

	UGSPushRegistrationRequest_SendPushRegistrationRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DeviceOS = DeviceOS;
	params.PushId = PushId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSPushRegistrationRequest.SendPushRegistrationRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DeviceOS                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PushId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSPushRegistrationRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSPushRegistrationRequest* UGSPushRegistrationRequest::STATIC_SendPushRegistrationRequest(const struct FString& DeviceOS, const struct FString& PushId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSPushRegistrationRequest.SendPushRegistrationRequest");

	UGSPushRegistrationRequest_SendPushRegistrationRequest_Params params;
	params.DeviceOS = DeviceOS;
	params.PushId = PushId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSQQConnectRequest.SendQQConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSQQConnectRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSQQConnectRequest* UGSQQConnectRequest::STATIC_SendQQConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSQQConnectRequest.SendQQConnectRequestOnBehalfOf");

	UGSQQConnectRequest_SendQQConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSQQConnectRequest.SendQQConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSQQConnectRequest*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSQQConnectRequest* UGSQQConnectRequest::STATIC_SendQQConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSQQConnectRequest.SendQQConnectRequest");

	UGSQQConnectRequest_SendQQConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRegistrationRequest.SendRegistrationRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRegistrationRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRegistrationRequest* UGSRegistrationRequest::STATIC_SendRegistrationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, const struct FString& Password, class UGameSparksScriptData* Segments, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRegistrationRequest.SendRegistrationRequestOnBehalfOf");

	UGSRegistrationRequest_SendRegistrationRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DisplayName = DisplayName;
	params.Password = Password;
	params.Segments = Segments;
	params.Username = Username;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRegistrationRequest.SendRegistrationRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRegistrationRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRegistrationRequest* UGSRegistrationRequest::STATIC_SendRegistrationRequest(const struct FString& DisplayName, const struct FString& Password, class UGameSparksScriptData* Segments, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRegistrationRequest.SendRegistrationRequest");

	UGSRegistrationRequest_SendRegistrationRequest_Params params;
	params.DisplayName = DisplayName;
	params.Password = Password;
	params.Segments = Segments;
	params.Username = Username;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRevokePurchaseGoodsRequest.SendRevokePurchaseGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StoreType                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TransactionIds                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRevokePurchaseGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRevokePurchaseGoodsRequest* UGSRevokePurchaseGoodsRequest::STATIC_SendRevokePurchaseGoodsRequest(const struct FString& PlayerId, const struct FString& StoreType, class UGameSparksRequestArray* TransactionIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRevokePurchaseGoodsRequest.SendRevokePurchaseGoodsRequest");

	UGSRevokePurchaseGoodsRequest_SendRevokePurchaseGoodsRequest_Params params;
	params.PlayerId = PlayerId;
	params.StoreType = StoreType;
	params.TransactionIds = TransactionIds;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSScheduleBulkJobAdminRequest.SendScheduleBulkJobAdminRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ModuleShortCode                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   PlayerQuery                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ScheduledTime                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Script                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSScheduleBulkJobAdminRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSScheduleBulkJobAdminRequest* UGSScheduleBulkJobAdminRequest::STATIC_SendScheduleBulkJobAdminRequest(class UGameSparksScriptData* Data, const struct FString& ModuleShortCode, class UGameSparksScriptData* PlayerQuery, const struct FString& ScheduledTime, const struct FString& Script, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSScheduleBulkJobAdminRequest.SendScheduleBulkJobAdminRequest");

	UGSScheduleBulkJobAdminRequest_SendScheduleBulkJobAdminRequest_Params params;
	params.Data = Data;
	params.ModuleShortCode = ModuleShortCode;
	params.PlayerQuery = PlayerQuery;
	params.ScheduledTime = ScheduledTime;
	params.Script = Script;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSendFriendMessageRequest.SendSendFriendMessageRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSendFriendMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSendFriendMessageRequest* UGSSendFriendMessageRequest::STATIC_SendSendFriendMessageRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* FriendIds, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSendFriendMessageRequest.SendSendFriendMessageRequestOnBehalfOf");

	UGSSendFriendMessageRequest_SendSendFriendMessageRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.FriendIds = FriendIds;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSendFriendMessageRequest.SendSendFriendMessageRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSendFriendMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSendFriendMessageRequest* UGSSendFriendMessageRequest::STATIC_SendSendFriendMessageRequest(class UGameSparksRequestArray* FriendIds, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSendFriendMessageRequest.SendSendFriendMessageRequest");

	UGSSendFriendMessageRequest_SendSendFriendMessageRequest_Params params;
	params.FriendIds = FriendIds;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSendTeamChatMessageRequest.SendSendTeamChatMessageRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSendTeamChatMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSendTeamChatMessageRequest* UGSSendTeamChatMessageRequest::STATIC_SendSendTeamChatMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Message, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSendTeamChatMessageRequest.SendSendTeamChatMessageRequestOnBehalfOf");

	UGSSendTeamChatMessageRequest_SendSendTeamChatMessageRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.Message = Message;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSendTeamChatMessageRequest.SendSendTeamChatMessageRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OwnerId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamType                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSendTeamChatMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSendTeamChatMessageRequest* UGSSendTeamChatMessageRequest::STATIC_SendSendTeamChatMessageRequest(const struct FString& Message, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSendTeamChatMessageRequest.SendSendTeamChatMessageRequest");

	UGSSendTeamChatMessageRequest_SendSendTeamChatMessageRequest_Params params;
	params.Message = Message;
	params.OwnerId = OwnerId;
	params.TeamId = TeamId;
	params.TeamType = TeamType;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSocialDisconnectRequest.SendSocialDisconnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SystemId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSocialDisconnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSocialDisconnectRequest* UGSSocialDisconnectRequest::STATIC_SendSocialDisconnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& SystemId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSocialDisconnectRequest.SendSocialDisconnectRequestOnBehalfOf");

	UGSSocialDisconnectRequest_SendSocialDisconnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.SystemId = SystemId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSocialDisconnectRequest.SendSocialDisconnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SystemId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSocialDisconnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSocialDisconnectRequest* UGSSocialDisconnectRequest::STATIC_SendSocialDisconnectRequest(const struct FString& SystemId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSocialDisconnectRequest.SendSocialDisconnectRequest");

	UGSSocialDisconnectRequest_SendSocialDisconnectRequest_Params params;
	params.SystemId = SystemId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSocialLeaderboardDataRequest.SendSocialLeaderboardDataRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DontErrorOnNotSocial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeFirst                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeLast                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamIds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSocialLeaderboardDataRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSocialLeaderboardDataRequest* UGSSocialLeaderboardDataRequest::STATIC_SendSocialLeaderboardDataRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSocialLeaderboardDataRequest.SendSocialLeaderboardDataRequestOnBehalfOf");

	UGSSocialLeaderboardDataRequest_SendSocialLeaderboardDataRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.DontErrorOnNotSocial = DontErrorOnNotSocial;
	params.EntryCount = EntryCount;
	params.FriendIds = FriendIds;
	params.IncludeFirst = IncludeFirst;
	params.IncludeLast = IncludeLast;
	params.InverseSocial = InverseSocial;
	params.LeaderboardShortCode = LeaderboardShortCode;
	params.Offset = Offset;
	params.Social = Social;
	params.TeamIds = TeamIds;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSocialLeaderboardDataRequest.SendSocialLeaderboardDataRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DontErrorOnNotSocial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* FriendIds                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeFirst                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IncludeLast                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InverseSocial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LeaderboardShortCode           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Social                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamIds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksRequestArray* TeamTypes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSocialLeaderboardDataRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSocialLeaderboardDataRequest* UGSSocialLeaderboardDataRequest::STATIC_SendSocialLeaderboardDataRequest(const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSocialLeaderboardDataRequest.SendSocialLeaderboardDataRequest");

	UGSSocialLeaderboardDataRequest_SendSocialLeaderboardDataRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.DontErrorOnNotSocial = DontErrorOnNotSocial;
	params.EntryCount = EntryCount;
	params.FriendIds = FriendIds;
	params.IncludeFirst = IncludeFirst;
	params.IncludeLast = IncludeLast;
	params.InverseSocial = InverseSocial;
	params.LeaderboardShortCode = LeaderboardShortCode;
	params.Offset = Offset;
	params.Social = Social;
	params.TeamIds = TeamIds;
	params.TeamTypes = TeamTypes;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSocialStatusRequest.SendSocialStatusRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSocialStatusRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSocialStatusRequest* UGSSocialStatusRequest::STATIC_SendSocialStatusRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSocialStatusRequest.SendSocialStatusRequestOnBehalfOf");

	UGSSocialStatusRequest_SendSocialStatusRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSocialStatusRequest.SendSocialStatusRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSocialStatusRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSocialStatusRequest* UGSSocialStatusRequest::STATIC_SendSocialStatusRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSocialStatusRequest.SendSocialStatusRequest");

	UGSSocialStatusRequest_SendSocialStatusRequest_Params params;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSteamBuyGoodsRequest.SendSteamBuyGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSteamBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSteamBuyGoodsRequest* UGSSteamBuyGoodsRequest::STATIC_SendSteamBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& OrderId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSteamBuyGoodsRequest.SendSteamBuyGoodsRequestOnBehalfOf");

	UGSSteamBuyGoodsRequest_SendSteamBuyGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.CurrencyCode = CurrencyCode;
	params.OrderId = OrderId;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSteamBuyGoodsRequest.SendSteamBuyGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OrderId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSteamBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSteamBuyGoodsRequest* UGSSteamBuyGoodsRequest::STATIC_SendSteamBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& OrderId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSteamBuyGoodsRequest.SendSteamBuyGoodsRequest");

	UGSSteamBuyGoodsRequest_SendSteamBuyGoodsRequest_Params params;
	params.CurrencyCode = CurrencyCode;
	params.OrderId = OrderId;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSteamConnectRequest.SendSteamConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionTicket                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSteamConnectRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSteamConnectRequest* UGSSteamConnectRequest::STATIC_SendSteamConnectRequestOnBehalfOf(const struct FString& PlayerId, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& SessionTicket, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSteamConnectRequest.SendSteamConnectRequestOnBehalfOf");

	UGSSteamConnectRequest_SendSteamConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SessionTicket = SessionTicket;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSSteamConnectRequest.SendSteamConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SessionTicket                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSSteamConnectRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSSteamConnectRequest* UGSSteamConnectRequest::STATIC_SendSteamConnectRequest(bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& SessionTicket, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSSteamConnectRequest.SendSteamConnectRequest");

	UGSSteamConnectRequest_SendSteamConnectRequest_Params params;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SessionTicket = SessionTicket;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSTwitchConnectRequest.SendTwitchConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSTwitchConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSTwitchConnectRequest* UGSTwitchConnectRequest::STATIC_SendTwitchConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSTwitchConnectRequest.SendTwitchConnectRequestOnBehalfOf");

	UGSTwitchConnectRequest_SendTwitchConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSTwitchConnectRequest.SendTwitchConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSTwitchConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSTwitchConnectRequest* UGSTwitchConnectRequest::STATIC_SendTwitchConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSTwitchConnectRequest.SendTwitchConnectRequest");

	UGSTwitchConnectRequest_SendTwitchConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSTwitterConnectRequest.SendTwitterConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessSecret                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSTwitterConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSTwitterConnectRequest* UGSTwitterConnectRequest::STATIC_SendTwitterConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessSecret, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSTwitterConnectRequest.SendTwitterConnectRequestOnBehalfOf");

	UGSTwitterConnectRequest_SendTwitterConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessSecret = AccessSecret;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSTwitterConnectRequest.SendTwitterConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessSecret                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSTwitterConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSTwitterConnectRequest* UGSTwitterConnectRequest::STATIC_SendTwitterConnectRequest(const struct FString& AccessSecret, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSTwitterConnectRequest.SendTwitterConnectRequest");

	UGSTwitterConnectRequest_SendTwitterConnectRequest_Params params;
	params.AccessSecret = AccessSecret;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSUpdateMessageRequest.SendUpdateMessageRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MessageId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Status                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSUpdateMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSUpdateMessageRequest* UGSUpdateMessageRequest::STATIC_SendUpdateMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MessageId, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSUpdateMessageRequest.SendUpdateMessageRequestOnBehalfOf");

	UGSUpdateMessageRequest_SendUpdateMessageRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.MessageId = MessageId;
	params.Status = Status;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSUpdateMessageRequest.SendUpdateMessageRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MessageId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Status                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSUpdateMessageRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSUpdateMessageRequest* UGSUpdateMessageRequest::STATIC_SendUpdateMessageRequest(const struct FString& MessageId, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSUpdateMessageRequest.SendUpdateMessageRequest");

	UGSUpdateMessageRequest_SendUpdateMessageRequest_Params params;
	params.MessageId = MessageId;
	params.Status = Status;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSViberConnectRequest.SendViberConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotRegisterForPush           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSViberConnectRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSViberConnectRequest* UGSViberConnectRequest::STATIC_SendViberConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool DoNotRegisterForPush, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSViberConnectRequest.SendViberConnectRequestOnBehalfOf");

	UGSViberConnectRequest_SendViberConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.DoNotRegisterForPush = DoNotRegisterForPush;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSViberConnectRequest.SendViberConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotRegisterForPush           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSViberConnectRequest*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSViberConnectRequest* UGSViberConnectRequest::STATIC_SendViberConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool DoNotRegisterForPush, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSViberConnectRequest.SendViberConnectRequest");

	UGSViberConnectRequest_SendViberConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.DoNotRegisterForPush = DoNotRegisterForPush;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSWeChatConnectRequest.SendWeChatConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OpenId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSWeChatConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSWeChatConnectRequest* UGSWeChatConnectRequest::STATIC_SendWeChatConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& OpenId, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSWeChatConnectRequest.SendWeChatConnectRequestOnBehalfOf");

	UGSWeChatConnectRequest_SendWeChatConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.OpenId = OpenId;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSWeChatConnectRequest.SendWeChatConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OpenId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSWeChatConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSWeChatConnectRequest* UGSWeChatConnectRequest::STATIC_SendWeChatConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& OpenId, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSWeChatConnectRequest.SendWeChatConnectRequest");

	UGSWeChatConnectRequest_SendWeChatConnectRequest_Params params;
	params.AccessToken = AccessToken;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.OpenId = OpenId;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSWindowsBuyGoodsRequest.SendWindowsBuyGoodsRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Platform                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSWindowsBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSWindowsBuyGoodsRequest* UGSWindowsBuyGoodsRequest::STATIC_SendWindowsBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& Platform, const struct FString& Receipt, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSWindowsBuyGoodsRequest.SendWindowsBuyGoodsRequestOnBehalfOf");

	UGSWindowsBuyGoodsRequest_SendWindowsBuyGoodsRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.CurrencyCode = CurrencyCode;
	params.Platform = Platform;
	params.Receipt = Receipt;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSWindowsBuyGoodsRequest.SendWindowsBuyGoodsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrencyCode                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Platform                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubUnitPrice                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UniqueTransactionByPlayer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSWindowsBuyGoodsRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSWindowsBuyGoodsRequest* UGSWindowsBuyGoodsRequest::STATIC_SendWindowsBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& Platform, const struct FString& Receipt, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSWindowsBuyGoodsRequest.SendWindowsBuyGoodsRequest");

	UGSWindowsBuyGoodsRequest_SendWindowsBuyGoodsRequest_Params params;
	params.CurrencyCode = CurrencyCode;
	params.Platform = Platform;
	params.Receipt = Receipt;
	params.SubUnitPrice = SubUnitPrice;
	params.UniqueTransactionByPlayer = UniqueTransactionByPlayer;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSWithdrawChallengeRequest.SendWithdrawChallengeRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSWithdrawChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSWithdrawChallengeRequest* UGSWithdrawChallengeRequest::STATIC_SendWithdrawChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSWithdrawChallengeRequest.SendWithdrawChallengeRequestOnBehalfOf");

	UGSWithdrawChallengeRequest_SendWithdrawChallengeRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSWithdrawChallengeRequest.SendWithdrawChallengeRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChallengeInstanceId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSWithdrawChallengeRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSWithdrawChallengeRequest* UGSWithdrawChallengeRequest::STATIC_SendWithdrawChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSWithdrawChallengeRequest.SendWithdrawChallengeRequest");

	UGSWithdrawChallengeRequest_SendWithdrawChallengeRequest_Params params;
	params.ChallengeInstanceId = ChallengeInstanceId;
	params.Message = Message;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSXBOXLiveConnectRequest.SendXBOXLiveConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StsTokenString                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSXBOXLiveConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSXBOXLiveConnectRequest* UGSXBOXLiveConnectRequest::STATIC_SendXBOXLiveConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& StsTokenString, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSXBOXLiveConnectRequest.SendXBOXLiveConnectRequestOnBehalfOf");

	UGSXBOXLiveConnectRequest_SendXBOXLiveConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.StsTokenString = StsTokenString;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSXBOXLiveConnectRequest.SendXBOXLiveConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StsTokenString                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSXBOXLiveConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSXBOXLiveConnectRequest* UGSXBOXLiveConnectRequest::STATIC_SendXBOXLiveConnectRequest(const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& StsTokenString, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSXBOXLiveConnectRequest.SendXBOXLiveConnectRequest");

	UGSXBOXLiveConnectRequest_SendXBOXLiveConnectRequest_Params params;
	params.DisplayName = DisplayName;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Segments = Segments;
	params.StsTokenString = StsTokenString;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSXboxOneConnectRequest.SendXboxOneConnectRequestOnBehalfOf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Sandbox                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Token                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSXboxOneConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSXboxOneConnectRequest* UGSXboxOneConnectRequest::STATIC_SendXboxOneConnectRequestOnBehalfOf(const struct FString& PlayerId, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& Sandbox, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& Token, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSXboxOneConnectRequest.SendXboxOneConnectRequestOnBehalfOf");

	UGSXboxOneConnectRequest_SendXboxOneConnectRequestOnBehalfOf_Params params;
	params.PlayerId = PlayerId;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Sandbox = Sandbox;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.Token = Token;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSXboxOneConnectRequest.SendXboxOneConnectRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           DoNotCreateNewPlayer           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DoNotLinkToCurrentPlayer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ErrorOnSwitch                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Sandbox                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SwitchIfPossible               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SyncDisplayName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Token                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSparksScriptData*   ScriptData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Durable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            requestTimeoutSeconds          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSXboxOneConnectRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSXboxOneConnectRequest* UGSXboxOneConnectRequest::STATIC_SendXboxOneConnectRequest(bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& Sandbox, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& Token, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSXboxOneConnectRequest.SendXboxOneConnectRequest");

	UGSXboxOneConnectRequest_SendXboxOneConnectRequest_Params params;
	params.DoNotCreateNewPlayer = DoNotCreateNewPlayer;
	params.DoNotLinkToCurrentPlayer = DoNotLinkToCurrentPlayer;
	params.ErrorOnSwitch = ErrorOnSwitch;
	params.Sandbox = Sandbox;
	params.Segments = Segments;
	params.SwitchIfPossible = SwitchIfPossible;
	params.SyncDisplayName = SyncDisplayName;
	params.Token = Token;
	params.ScriptData = ScriptData;
	params.Durable = Durable;
	params.requestTimeoutSeconds = requestTimeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.ToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGSRTData::ToString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.ToString");

	UGSRTData_ToString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.SetVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::SetVector(int Index, class UGSRTVector* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.SetVector");

	UGSRTData_SetVector_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.SetString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::SetString(int Index, const struct FString& Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.SetString");

	UGSRTData_SetString_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.SetInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::SetInt(int Index, int Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.SetInt");

	UGSRTData_SetInt_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.SetFVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::SetFVector(int Index, const struct FVector& Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.SetFVector");

	UGSRTData_SetFVector_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.SetFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::SetFloat(int Index, float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.SetFloat");

	UGSRTData_SetFloat_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.SetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::SetData(int Index, class UGSRTData* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.SetData");

	UGSRTData_SetData_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.HasVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTData::HasVector(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.HasVector");

	UGSRTData_HasVector_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.HasString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTData::HasString(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.HasString");

	UGSRTData_HasString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.HasInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTData::HasInt(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.HasInt");

	UGSRTData_HasInt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.HasFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTData::HasFloat(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.HasFloat");

	UGSRTData_HasFloat_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.HasData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTData::HasData(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.HasData");

	UGSRTData_HasData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.GetVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTData::GetVector(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.GetVector");

	UGSRTData_GetVector_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.GetString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGSRTData::GetString(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.GetString");

	UGSRTData_GetString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.GetInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGSRTData::GetInt(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.GetInt");

	UGSRTData_GetInt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.GetFVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGSRTData::GetFVector(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.GetFVector");

	UGSRTData_GetFVector_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.GetFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGSRTData::GetFloat(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.GetFloat");

	UGSRTData_GetFloat_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::GetData(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.GetData");

	UGSRTData_GetData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTData.CreateRTData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTData* UGSRTData::STATIC_CreateRTData(class UObject* WorldContextObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTData.CreateRTData");

	UGSRTData_CreateRTData_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTSession.Stop
// (Final, Native, Public, BlueprintCallable)
void UGSRTSession::Stop()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTSession.Stop");

	UGSRTSession_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GSRTSession.Start
// (Final, Native, Public, BlueprintCallable)
void UGSRTSession::Start()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTSession.Start");

	UGSRTSession_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GSRTSession.Send
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            opCode                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GameSparks_EDeliveryIntent     intent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int>                    peerIds                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UGSRTSession::Send(int opCode, GameSparks_EDeliveryIntent intent, class UGSRTData* Data, TArray<int> peerIds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTSession.Send");

	UGSRTSession_Send_Params params;
	params.opCode = opCode;
	params.intent = intent;
	params.Data = Data;
	params.peerIds = peerIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GSRTSession.OnReady__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGSRTSession*            session                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ready                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGSRTSession::OnReady__DelegateSignature(class UGSRTSession* session, bool ready)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GSRTSession.OnReady__DelegateSignature");

	UGSRTSession_OnReady__DelegateSignature_Params params;
	params.session = session;
	params.ready = ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GSRTSession.OnPlayerDisconnect__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGSRTSession*            session                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PeerId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGSRTSession::OnPlayerDisconnect__DelegateSignature(class UGSRTSession* session, int PeerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GSRTSession.OnPlayerDisconnect__DelegateSignature");

	UGSRTSession_OnPlayerDisconnect__DelegateSignature_Params params;
	params.session = session;
	params.PeerId = PeerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GSRTSession.OnPlayerConnect__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGSRTSession*            session                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PeerId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGSRTSession::OnPlayerConnect__DelegateSignature(class UGSRTSession* session, int PeerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GSRTSession.OnPlayerConnect__DelegateSignature");

	UGSRTSession_OnPlayerConnect__DelegateSignature_Params params;
	params.session = session;
	params.PeerId = PeerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction GameSparks.GSRTSession.OnData__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGSRTSession*            session                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            sender                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            opCode                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTData*               Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGSRTSession::OnData__DelegateSignature(class UGSRTSession* session, int sender, int opCode, class UGSRTData* Data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameSparks.GSRTSession.OnData__DelegateSignature");

	UGSRTSession_OnData__DelegateSignature_Params params;
	params.session = session;
	params.sender = sender;
	params.opCode = opCode;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameSparks.GSRTSession.GetPeerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGSRTSession::GetPeerId()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTSession.GetPeerId");

	UGSRTSession_GetPeerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTSession.GetActivePeers
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> UGSRTSession::GetActivePeers()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTSession.GetActivePeers");

	UGSRTSession_GetActivePeers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTSession.CreateRTSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Host                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Port                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Token                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTSession*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTSession* UGSRTSession::STATIC_CreateRTSession(class UObject* WorldContextObject, const struct FString& Host, const struct FString& Port, const struct FString& Token)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTSession.CreateRTSession");

	UGSRTSession_CreateRTSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Host = Host;
	params.Port = Port;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetZ(float Z)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetZ");

	UGSRTVector_SetZ_Params params;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetY
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetY(float Y)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetY");

	UGSRTVector_SetY_Params params;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetXYZW
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          W                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetXYZW(float X, float Y, float Z, float W)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetXYZW");

	UGSRTVector_SetXYZW_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.W = W;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetXYZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetXYZ(float X, float Y, float Z)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetXYZ");

	UGSRTVector_SetXYZ_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetXY
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetXY(float X, float Y)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetXY");

	UGSRTVector_SetXY_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetX
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetX(float X)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetX");

	UGSRTVector_SetX_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetW
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          W                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetW(float W)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetW");

	UGSRTVector_SetW_Params params;
	params.W = W;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.SetFromFVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 V                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::SetFromFVector(const struct FVector& V)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.SetFromFVector");

	UGSRTVector_SetFromFVector_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.HasZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTVector::HasZ()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.HasZ");

	UGSRTVector_HasZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.HasY
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTVector::HasY()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.HasY");

	UGSRTVector_HasY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.HasX
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTVector::HasX()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.HasX");

	UGSRTVector_HasX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.HasW
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGSRTVector::HasW()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.HasW");

	UGSRTVector_HasW_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.GetZ
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGSRTVector::GetZ()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.GetZ");

	UGSRTVector_GetZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.GetY
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGSRTVector::GetY()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.GetY");

	UGSRTVector_GetY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.GetX
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGSRTVector::GetX()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.GetX");

	UGSRTVector_GetX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.GetW
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGSRTVector::GetW()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.GetW");

	UGSRTVector_GetW_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameSparks.GSRTVector.CreateRTVector
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSRTVector*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGSRTVector* UGSRTVector::STATIC_CreateRTVector(class UObject* WorldContextObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameSparks.GSRTVector.CreateRTVector");

	UGSRTVector_CreateRTVector_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
