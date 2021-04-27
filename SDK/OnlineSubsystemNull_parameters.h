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

// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.OpenSteamUserProfile
struct UOnlineSubsystemNullLibrary_OpenSteamUserProfile_Params
{
	struct FString                                     csteamID;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.IsOverlayEnabled
struct UOnlineSubsystemNullLibrary_IsOverlayEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.GetIdentifier
struct UOnlineSubsystemNullLibrary_GetIdentifier_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.GetCSteamID
struct UOnlineSubsystemNullLibrary_GetCSteamID_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlineSubsystemNull.OnlineSubsystemNullLibrary.BLoggedOn
struct UOnlineSubsystemNullLibrary_BLoggedOn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
