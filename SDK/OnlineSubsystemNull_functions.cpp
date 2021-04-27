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

// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.OpenSteamUserProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 csteamID                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlineSubsystemNullLibrary::STATIC_OpenSteamUserProfile(const struct FString& csteamID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.OpenSteamUserProfile");

	UOnlineSubsystemNullLibrary_OpenSteamUserProfile_Params params;
	params.csteamID = csteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.IsOverlayEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineSubsystemNullLibrary::STATIC_IsOverlayEnabled()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.IsOverlayEnabled");

	UOnlineSubsystemNullLibrary_IsOverlayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.GetIdentifier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineSubsystemNullLibrary::STATIC_GetIdentifier()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.GetIdentifier");

	UOnlineSubsystemNullLibrary_GetIdentifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.GetCSteamID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineSubsystemNullLibrary::STATIC_GetCSteamID()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.GetCSteamID");

	UOnlineSubsystemNullLibrary_GetCSteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.BLoggedOn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineSubsystemNullLibrary::STATIC_BLoggedOn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.BLoggedOn");

	UOnlineSubsystemNullLibrary_BLoggedOn_Params params;

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
