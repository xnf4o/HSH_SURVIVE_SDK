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

// Class OnlineSubsystemNull.OnlineSubsystemNullLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOnlineSubsystemNullLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemNull.OnlineSubsystemNullLibrary");
		return ptr;
	}



	void STATIC_OpenSteamUserProfile(const struct FString& csteamID);
	bool STATIC_IsOverlayEnabled();
	struct FString STATIC_GetIdentifier();
	struct FString STATIC_GetCSteamID();
	bool STATIC_BLoggedOn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
