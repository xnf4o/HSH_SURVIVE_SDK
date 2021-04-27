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

// Class GameSparks.GameSparksComponent
// 0x0028 (FullSize[0x0280] - InheritedSize[0x0258])
class UGameSparksComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnGameSparksAvailableDelegate;                             // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameSparksDebugLog;                                      // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZAB[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GameSparksComponent");
		return ptr;
	}



	void SetApiStage(const struct FString& stage);
	void SetApiDomain(const struct FString& domain);
	void SetApiCredential(const struct FString& credential);
	void OnGameSparksLogEvent__DelegateSignature(const struct FString& LogMessage);
	void OnGameSparksAvailable__DelegateSignature(bool available);
	void Logout();
	bool IsAvailable();
	bool IsAuthenticated();
	void Disconnect();
	void ConnectWithCredential(const struct FString& apikey, const struct FString& secret, const struct FString& credential, bool previewServer, bool clearCachedAuthentication);
	void Connect(const struct FString& apikey, const struct FString& secret, bool previewServer, bool clearCachedAuthentication);
};

// Class GameSparks.GameSparksLogEventData
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class UGameSparksLogEventData : public UObject
{
public:
	TMap<struct FString, struct FString>               m_strings;                                                 // 0x0030(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, int>                          m_numbers;                                                 // 0x0080(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, class UGameSparksScriptData*> m_objects;                                                 // 0x00D0(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GameSparksLogEventData");
		return ptr;
	}



	class UGameSparksLogEventData* SetString(const struct FString& Name, const struct FString& Value);
	class UGameSparksLogEventData* SetObject(const struct FString& Name, class UGameSparksScriptData* Value);
	class UGameSparksLogEventData* SetNumber(const struct FString& Name, int Value);
	class UGameSparksLogEventData* STATIC_CreateGameSparksLogEventAttributes(class UObject* WorldContextObject);
};

// Class GameSparks.GameSparksObject
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGameSparksObject : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnGameSparksAvailableDelegate;                             // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameSparksDebugLog;                                      // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GameSparksObject");
		return ptr;
	}



	void SetApiStage(const struct FString& stage);
	void SetApiDomain(const struct FString& domain);
	void SetApiCredential(const struct FString& credential);
	void OnGameSparksLogEvent__DelegateSignature(const struct FString& LogMessage);
	void OnGameSparksAvailable__DelegateSignature(bool available);
	void Logout();
	bool IsAvailable();
	bool IsAuthenticated();
	void Disconnect();
	void Connect(const struct FString& apikey, const struct FString& secret, bool previewServer, bool clearCachedAuthentication);
};

// Class GameSparks.GameSparksRequestArray
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGameSparksRequestArray : public UObject
{
public:
	TArray<struct FString>                             StringArray;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GameSparksRequestArray");
		return ptr;
	}



	class UGameSparksRequestArray* STATIC_CreateGameSparksRequestArray(class UObject* WorldContextObject);
};

// Class GameSparks.GameSparksScriptData
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGameSparksScriptData : public UObject
{
public:
	unsigned char                                      UnknownData_GTFL[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GameSparksScriptData");
		return ptr;
	}



	struct FString ToString();
	class UGameSparksScriptData* SetStringArray(const struct FString& Name, TArray<struct FString> Value);
	class UGameSparksScriptData* SetString(const struct FString& Name, const struct FString& Value);
	class UGameSparksScriptData* SetNumberArray(const struct FString& Name, TArray<int> Value);
	class UGameSparksScriptData* SetNumber(const struct FString& Name, int Value);
	class UGameSparksScriptData* SetIntArray(const struct FString& Name, TArray<int> int_value);
	class UGameSparksScriptData* SetGSDataArray(const struct FString& Name, TArray<class UGameSparksScriptData*> Value);
	class UGameSparksScriptData* SetGSData(const struct FString& Name, class UGameSparksScriptData* Value);
	class UGameSparksScriptData* SetFloatArray(const struct FString& Name, TArray<float> Value);
	class UGameSparksScriptData* SetFloat(const struct FString& Name, float Value);
	class UGameSparksScriptData* SetDateTime(const struct FString& Name, const struct FDateTime& Value);
	class UGameSparksScriptData* SetBoolean(const struct FString& Name, bool Value);
	struct FString JSONString();
	bool HasStringArray(const struct FString& Name);
	bool HasString(const struct FString& Name);
	bool HasNumberArray(const struct FString& Name);
	bool HasNumber(const struct FString& Name);
	bool HasIntArray(const struct FString& Name);
	bool HasGSDataArray(const struct FString& Name);
	bool HasGSData(const struct FString& Name);
	bool HasFloatArray(const struct FString& Name);
	bool HasFloat(const struct FString& Name);
	bool HasDateTime(const struct FString& Name);
	bool HasBoolean(const struct FString& Name);
	TArray<struct FString> GetStringArray(const struct FString& Name);
	struct FString GetString(const struct FString& Name);
	TArray<int> GetNumberArray(const struct FString& Name);
	int GetNumber(const struct FString& Name);
	TArray<struct FString> GetKeys();
	TArray<int> GetIntArray(const struct FString& Name);
	TArray<class UGameSparksScriptData*> GetGSDataArray(const struct FString& Name);
	class UGameSparksScriptData* GetGSData(const struct FString& Name);
	TArray<float> GetFloatArray(const struct FString& Name);
	float GetFloat(const struct FString& Name);
	struct FDateTime GetDateTime(const struct FString& Name);
	bool GetBoolean(const struct FString& Name);
	class UGameSparksScriptData* STATIC_CreateGameSparksScriptData(class UObject* WorldContextObject);
};

// Class GameSparks.GSAcceptChallengeRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSAcceptChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Message;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FCY1[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSAcceptChallengeRequest");
		return ptr;
	}



	class UGSAcceptChallengeRequest* STATIC_SendAcceptChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSAcceptChallengeRequest* STATIC_SendAcceptChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSAccountDetailsRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSAccountDetailsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QQ4P[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSAccountDetailsRequest");
		return ptr;
	}



	class UGSAccountDetailsRequest* STATIC_SendAccountDetailsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSAccountDetailsRequest* STATIC_SendAccountDetailsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSAmazonBuyGoodsRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSAmazonBuyGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AmazonUserId;                                              // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     CurrencyCode;                                              // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ReceiptId;                                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SubUnitPrice;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               UniqueTransactionByPlayer;                                 // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AH1U[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EOBM[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSAmazonBuyGoodsRequest");
		return ptr;
	}



	class UGSAmazonBuyGoodsRequest* STATIC_SendAmazonBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AmazonUserId, const struct FString& CurrencyCode, const struct FString& ReceiptId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSAmazonBuyGoodsRequest* STATIC_SendAmazonBuyGoodsRequest(const struct FString& AmazonUserId, const struct FString& CurrencyCode, const struct FString& ReceiptId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSAmazonConnectRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSAmazonConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GOTT[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DQ4I[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PPSO[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSAmazonConnectRequest");
		return ptr;
	}



	class UGSAmazonConnectRequest* STATIC_SendAmazonConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSAmazonConnectRequest* STATIC_SendAmazonConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSAnalyticsRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSAnalyticsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       Data;                                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               End;                                                       // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8SDO[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Key;                                                       // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Start;                                                     // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K3Z2[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9WIZ[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSAnalyticsRequest");
		return ptr;
	}



	class UGSAnalyticsRequest* STATIC_SendAnalyticsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* Data, bool End, const struct FString& Key, bool Start, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSAnalyticsRequest* STATIC_SendAnalyticsRequest(class UGameSparksScriptData* Data, bool End, const struct FString& Key, bool Start, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSAroundMeLeaderboardRequest
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UGSAroundMeLeaderboardRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       CustomIdFilter;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DontErrorOnNotSocial;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BMGX[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntryCount;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     FriendIds;                                                 // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                IncludeFirst;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                IncludeLast;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               InverseSocial;                                             // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YZAR[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardShortCode;                                      // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Social;                                                    // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3L3N[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     TeamIds;                                                   // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     TeamTypes;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FQZ4[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSAroundMeLeaderboardRequest");
		return ptr;
	}



	class UGSAroundMeLeaderboardRequest* STATIC_SendAroundMeLeaderboardRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, class UGameSparksScriptData* CustomIdFilter, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSAroundMeLeaderboardRequest* STATIC_SendAroundMeLeaderboardRequest(const struct FString& ChallengeInstanceId, class UGameSparksScriptData* CustomIdFilter, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSAuthenticationRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSAuthenticationRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Username;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MBAX[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSAuthenticationRequest");
		return ptr;
	}



	class UGSAuthenticationRequest* STATIC_SendAuthenticationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Password, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSAuthenticationRequest* STATIC_SendAuthenticationRequest(const struct FString& Password, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSBatchAdminRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSBatchAdminRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksRequestArray*                     playerIds;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Request;                                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RMGF[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSBatchAdminRequest");
		return ptr;
	}



	class UGSBatchAdminRequest* STATIC_SendBatchAdminRequest(class UGameSparksRequestArray* playerIds, class UGameSparksScriptData* Request, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSBuyVirtualGoodsRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSBuyVirtualGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyShortCode;                                         // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                CurrencyType;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Quantity;                                                  // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ShortCode;                                                 // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PTC9[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSBuyVirtualGoodsRequest");
		return ptr;
	}



	class UGSBuyVirtualGoodsRequest* STATIC_SendBuyVirtualGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyShortCode, int CurrencyType, int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSBuyVirtualGoodsRequest* STATIC_SendBuyVirtualGoodsRequest(const struct FString& CurrencyShortCode, int CurrencyType, int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSCancelBulkJobAdminRequest
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UGSCancelBulkJobAdminRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksRequestArray*                     BulkJobIds;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O958[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSCancelBulkJobAdminRequest");
		return ptr;
	}



	class UGSCancelBulkJobAdminRequest* STATIC_SendCancelBulkJobAdminRequest(class UGameSparksRequestArray* BulkJobIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSChangeUserDetailsRequest
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UGSChangeUserDetailsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Language;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     NewPassword;                                               // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     OldPassword;                                               // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Username;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7QV7[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSChangeUserDetailsRequest");
		return ptr;
	}



	class UGSChangeUserDetailsRequest* STATIC_SendChangeUserDetailsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, const struct FString& Language, const struct FString& NewPassword, const struct FString& OldPassword, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSChangeUserDetailsRequest* STATIC_SendChangeUserDetailsRequest(const struct FString& DisplayName, const struct FString& Language, const struct FString& NewPassword, const struct FString& OldPassword, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSChatOnChallengeRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSChatOnChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Message;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5WW3[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSChatOnChallengeRequest");
		return ptr;
	}



	class UGSChatOnChallengeRequest* STATIC_SendChatOnChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSChatOnChallengeRequest* STATIC_SendChatOnChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSConsumeVirtualGoodRequest
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UGSConsumeVirtualGoodRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W2WN[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ShortCode;                                                 // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6H72[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSConsumeVirtualGoodRequest");
		return ptr;
	}



	class UGSConsumeVirtualGoodRequest* STATIC_SendConsumeVirtualGoodRequestOnBehalfOf(const struct FString& PlayerId, int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSConsumeVirtualGoodRequest* STATIC_SendConsumeVirtualGoodRequest(int Quantity, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSCreateChallengeRequest
// 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
class UGSCreateChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessType;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               AutoStartJoinedChallengeOnMaxPlayers;                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5318[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ChallengeMessage;                                          // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ChallengeShortCode;                                        // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Currency1Wager;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Currency2Wager;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Currency3Wager;                                            // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Currency4Wager;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Currency5Wager;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Currency6Wager;                                            // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       CurrencyWagers;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       EligibilityCriteria;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     endTime;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ExpiryTime;                                                // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxAttempts;                                               // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxPlayers;                                                // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MinPlayers;                                                // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Silent;                                                    // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1NFL[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     startTime;                                                 // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     UsersToChallenge;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T5BJ[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSCreateChallengeRequest");
		return ptr;
	}



	class UGSCreateChallengeRequest* STATIC_SendCreateChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessType, bool AutoStartJoinedChallengeOnMaxPlayers, const struct FString& ChallengeMessage, const struct FString& ChallengeShortCode, int Currency1Wager, int Currency2Wager, int Currency3Wager, int Currency4Wager, int Currency5Wager, int Currency6Wager, class UGameSparksScriptData* CurrencyWagers, class UGameSparksScriptData* EligibilityCriteria, const struct FString& endTime, const struct FString& ExpiryTime, int MaxAttempts, int MaxPlayers, int MinPlayers, bool Silent, const struct FString& startTime, class UGameSparksRequestArray* UsersToChallenge, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSCreateChallengeRequest* STATIC_SendCreateChallengeRequest(const struct FString& AccessType, bool AutoStartJoinedChallengeOnMaxPlayers, const struct FString& ChallengeMessage, const struct FString& ChallengeShortCode, int Currency1Wager, int Currency2Wager, int Currency3Wager, int Currency4Wager, int Currency5Wager, int Currency6Wager, class UGameSparksScriptData* CurrencyWagers, class UGameSparksScriptData* EligibilityCriteria, const struct FString& endTime, const struct FString& ExpiryTime, int MaxAttempts, int MaxPlayers, int MinPlayers, bool Silent, const struct FString& startTime, class UGameSparksRequestArray* UsersToChallenge, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSCreateTeamRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSCreateTeamRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     TeamId;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamName;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamType;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LJNA[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSCreateTeamRequest");
		return ptr;
	}



	class UGSCreateTeamRequest* STATIC_SendCreateTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& TeamId, const struct FString& TeamName, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSCreateTeamRequest* STATIC_SendCreateTeamRequest(const struct FString& TeamId, const struct FString& TeamName, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSDeclineChallengeRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSDeclineChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Message;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VMU1[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSDeclineChallengeRequest");
		return ptr;
	}



	class UGSDeclineChallengeRequest* STATIC_SendDeclineChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSDeclineChallengeRequest* STATIC_SendDeclineChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSDeviceAuthenticationRequest
// 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
class UGSDeviceAuthenticationRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     DeviceID;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DeviceModel;                                               // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DeviceName;                                                // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DeviceOS;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DeviceType;                                                // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DisplayName;                                               // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     operatingSystem;                                           // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KBM1[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSDeviceAuthenticationRequest");
		return ptr;
	}



	class UGSDeviceAuthenticationRequest* STATIC_SendDeviceAuthenticationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DeviceID, const struct FString& DeviceModel, const struct FString& DeviceName, const struct FString& DeviceOS, const struct FString& DeviceType, const struct FString& DisplayName, const struct FString& operatingSystem, class UGameSparksScriptData* Segments, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSDeviceAuthenticationRequest* STATIC_SendDeviceAuthenticationRequest(const struct FString& DeviceID, const struct FString& DeviceModel, const struct FString& DeviceName, const struct FString& DeviceOS, const struct FString& DeviceType, const struct FString& DisplayName, const struct FString& operatingSystem, class UGameSparksScriptData* Segments, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSDismissMessageRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSDismissMessageRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     MessageId;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B4S9[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSDismissMessageRequest");
		return ptr;
	}



	class UGSDismissMessageRequest* STATIC_SendDismissMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSDismissMessageRequest* STATIC_SendDismissMessageRequest(const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSDismissMultipleMessagesRequest
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGSDismissMultipleMessagesRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksRequestArray*                     MessageIds;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HQVZ[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSDismissMultipleMessagesRequest");
		return ptr;
	}



	class UGSDismissMultipleMessagesRequest* STATIC_SendDismissMultipleMessagesRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* MessageIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSDismissMultipleMessagesRequest* STATIC_SendDismissMultipleMessagesRequest(class UGameSparksRequestArray* MessageIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSDropTeamRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSDropTeamRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     OwnerId;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamId;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamType;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W3W8[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSDropTeamRequest");
		return ptr;
	}



	class UGSDropTeamRequest* STATIC_SendDropTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSDropTeamRequest* STATIC_SendDropTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSEndSessionRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSEndSessionRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0O7Z[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSEndSessionRequest");
		return ptr;
	}



	class UGSEndSessionRequest* STATIC_SendEndSessionRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSEndSessionRequest* STATIC_SendEndSessionRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSFacebookConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSFacebookConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     code;                                                      // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0K60[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WA79[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DGQD[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSFacebookConnectRequest");
		return ptr;
	}



	class UGSFacebookConnectRequest* STATIC_SendFacebookConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSFacebookConnectRequest* STATIC_SendFacebookConnectRequest(const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSFindChallengeRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSFindChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessType;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Count;                                                     // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XYC4[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Eligibility;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6ICY[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     ShortCode;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0O6Q[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSFindChallengeRequest");
		return ptr;
	}



	class UGSFindChallengeRequest* STATIC_SendFindChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessType, int Count, class UGameSparksScriptData* Eligibility, int Offset, class UGameSparksRequestArray* ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSFindChallengeRequest* STATIC_SendFindChallengeRequest(const struct FString& AccessType, int Count, class UGameSparksScriptData* Eligibility, int Offset, class UGameSparksRequestArray* ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSFindMatchRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSFindMatchRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     Action;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     MatchGroup;                                                // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     MatchShortCode;                                            // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Skill;                                                     // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OHBT[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XYBY[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSFindMatchRequest");
		return ptr;
	}



	class UGSFindMatchRequest* STATIC_SendFindMatchRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Action, const struct FString& MatchGroup, const struct FString& MatchShortCode, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSFindMatchRequest* STATIC_SendFindMatchRequest(const struct FString& Action, const struct FString& MatchGroup, const struct FString& MatchShortCode, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSFindPendingMatchesRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSFindPendingMatchesRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     MatchGroup;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     MatchShortCode;                                            // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxMatchesToFind;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_70IG[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ENFK[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSFindPendingMatchesRequest");
		return ptr;
	}



	class UGSFindPendingMatchesRequest* STATIC_SendFindPendingMatchesRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MatchGroup, const struct FString& MatchShortCode, int MaxMatchesToFind, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSFindPendingMatchesRequest* STATIC_SendFindPendingMatchesRequest(const struct FString& MatchGroup, const struct FString& MatchShortCode, int MaxMatchesToFind, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGameCenterConnectRequest
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UGSGameCenterConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K44I[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExternalPlayerId;                                          // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PublicKeyUrl;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Salt;                                                      // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Signature;                                                 // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DHXL[0x2];                                     // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Timestamp;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1B2M[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGameCenterConnectRequest");
		return ptr;
	}



	class UGSGameCenterConnectRequest* STATIC_SendGameCenterConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& ExternalPlayerId, const struct FString& PublicKeyUrl, const struct FString& Salt, class UGameSparksScriptData* Segments, const struct FString& Signature, bool SwitchIfPossible, bool SyncDisplayName, int Timestamp, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGameCenterConnectRequest* STATIC_SendGameCenterConnectRequest(const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& ExternalPlayerId, const struct FString& PublicKeyUrl, const struct FString& Salt, class UGameSparksScriptData* Segments, const struct FString& Signature, bool SwitchIfPossible, bool SyncDisplayName, int Timestamp, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetChallengeRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSGetChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Message;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V4HL[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetChallengeRequest");
		return ptr;
	}



	class UGSGetChallengeRequest* STATIC_SendGetChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetChallengeRequest* STATIC_SendGetChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetDownloadableRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSGetDownloadableRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ShortCode;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NQMP[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetDownloadableRequest");
		return ptr;
	}



	class UGSGetDownloadableRequest* STATIC_SendGetDownloadableRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetDownloadableRequest* STATIC_SendGetDownloadableRequest(const struct FString& ShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetLeaderboardEntriesRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSGetLeaderboardEntriesRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksRequestArray*                     Challenges;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               InverseSocial;                                             // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9NLP[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     Leaderboards;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Player;                                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Social;                                                    // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E1F7[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     TeamTypes;                                                 // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q60S[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetLeaderboardEntriesRequest");
		return ptr;
	}



	class UGSGetLeaderboardEntriesRequest* STATIC_SendGetLeaderboardEntriesRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetLeaderboardEntriesRequest* STATIC_SendGetLeaderboardEntriesRequest(class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetMessageRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSGetMessageRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     MessageId;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C2N6[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetMessageRequest");
		return ptr;
	}



	class UGSGetMessageRequest* STATIC_SendGetMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetMessageRequest* STATIC_SendGetMessageRequest(const struct FString& MessageId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetMyTeamsRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSGetMyTeamsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               OwnedOnly;                                                 // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UXMH[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     TeamTypes;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TZ1V[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetMyTeamsRequest");
		return ptr;
	}



	class UGSGetMyTeamsRequest* STATIC_SendGetMyTeamsRequestOnBehalfOf(const struct FString& PlayerId, bool OwnedOnly, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetMyTeamsRequest* STATIC_SendGetMyTeamsRequest(bool OwnedOnly, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetPropertyRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSGetPropertyRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     PropertyShortCode;                                         // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5YDD[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetPropertyRequest");
		return ptr;
	}



	class UGSGetPropertyRequest* STATIC_SendGetPropertyRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& PropertyShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetPropertyRequest* STATIC_SendGetPropertyRequest(const struct FString& PropertyShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetPropertySetRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSGetPropertySetRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     PropertySetShortCode;                                      // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S62Y[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetPropertySetRequest");
		return ptr;
	}



	class UGSGetPropertySetRequest* STATIC_SendGetPropertySetRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& PropertySetShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetPropertySetRequest* STATIC_SendGetPropertySetRequest(const struct FString& PropertySetShortCode, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetTeamRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSGetTeamRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     OwnerId;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamId;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamType;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BZL7[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetTeamRequest");
		return ptr;
	}



	class UGSGetTeamRequest* STATIC_SendGetTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetTeamRequest* STATIC_SendGetTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetUploadUrlRequest
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGSGetUploadUrlRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       UploadData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SPDM[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetUploadUrlRequest");
		return ptr;
	}



	class UGSGetUploadUrlRequest* STATIC_SendGetUploadUrlRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* UploadData, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetUploadUrlRequest* STATIC_SendGetUploadUrlRequest(class UGameSparksScriptData* UploadData, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGetUploadedRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSGetUploadedRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     UploadId;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B044[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGetUploadedRequest");
		return ptr;
	}



	class UGSGetUploadedRequest* STATIC_SendGetUploadedRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& UploadId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGetUploadedRequest* STATIC_SendGetUploadedRequest(const struct FString& UploadId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGooglePlayBuyGoodsRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSGooglePlayBuyGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Signature;                                                 // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     SignedData;                                                // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SubUnitPrice;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               UniqueTransactionByPlayer;                                 // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RL1Z[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VZTQ[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGooglePlayBuyGoodsRequest");
		return ptr;
	}



	class UGSGooglePlayBuyGoodsRequest* STATIC_SendGooglePlayBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& Signature, const struct FString& SignedData, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGooglePlayBuyGoodsRequest* STATIC_SendGooglePlayBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& Signature, const struct FString& SignedData, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGooglePlayConnectRequest
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UGSGooglePlayConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     code;                                                      // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DisplayName;                                               // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0072(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               GooglePlusScope;                                           // 0x0073(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ProfileScope;                                              // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EBQM[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RedirectUri;                                               // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RQNF[0x6];                                     // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UAG2[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGooglePlayConnectRequest");
		return ptr;
	}



	class UGSGooglePlayConnectRequest* STATIC_SendGooglePlayConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, const struct FString& code, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, bool GooglePlusScope, bool ProfileScope, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGooglePlayConnectRequest* STATIC_SendGooglePlayConnectRequest(const struct FString& AccessToken, const struct FString& code, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, bool GooglePlusScope, bool ProfileScope, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSGooglePlusConnectRequest
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UGSGooglePlusConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     code;                                                      // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_47KV[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RedirectUri;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OKVG[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FDU7[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSGooglePlusConnectRequest");
		return ptr;
	}



	class UGSGooglePlusConnectRequest* STATIC_SendGooglePlusConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSGooglePlusConnectRequest* STATIC_SendGooglePlusConnectRequest(const struct FString& AccessToken, const struct FString& code, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSIOSBuyGoodsRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSIOSBuyGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Receipt;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Sandbox;                                                   // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9UJT[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SubUnitPrice;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               UniqueTransactionByPlayer;                                 // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7R9Y[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XWM7[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSIOSBuyGoodsRequest");
		return ptr;
	}



	class UGSIOSBuyGoodsRequest* STATIC_SendIOSBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& Receipt, bool Sandbox, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSIOSBuyGoodsRequest* STATIC_SendIOSBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& Receipt, bool Sandbox, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSJoinChallengeRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSJoinChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Eligibility;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Message;                                                   // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6Z2K[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSJoinChallengeRequest");
		return ptr;
	}



	class UGSJoinChallengeRequest* STATIC_SendJoinChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, class UGameSparksScriptData* Eligibility, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSJoinChallengeRequest* STATIC_SendJoinChallengeRequest(const struct FString& ChallengeInstanceId, class UGameSparksScriptData* Eligibility, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSJoinPendingMatchRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSJoinPendingMatchRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     MatchGroup;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     MatchShortCode;                                            // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PendingMatchId;                                            // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O56M[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSJoinPendingMatchRequest");
		return ptr;
	}



	class UGSJoinPendingMatchRequest* STATIC_SendJoinPendingMatchRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MatchGroup, const struct FString& MatchShortCode, const struct FString& PendingMatchId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSJoinPendingMatchRequest* STATIC_SendJoinPendingMatchRequest(const struct FString& MatchGroup, const struct FString& MatchShortCode, const struct FString& PendingMatchId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSJoinTeamRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSJoinTeamRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     OwnerId;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamId;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamType;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LJZ0[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSJoinTeamRequest");
		return ptr;
	}



	class UGSJoinTeamRequest* STATIC_SendJoinTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSJoinTeamRequest* STATIC_SendJoinTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSKongregateConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSKongregateConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FUO6[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameAuthToken;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_84D9[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserId;                                                    // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T42S[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSKongregateConnectRequest");
		return ptr;
	}



	class UGSKongregateConnectRequest* STATIC_SendKongregateConnectRequestOnBehalfOf(const struct FString& PlayerId, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& GameAuthToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& UserId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSKongregateConnectRequest* STATIC_SendKongregateConnectRequest(bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& GameAuthToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& UserId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSLeaderboardDataRequest
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UGSLeaderboardDataRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DontErrorOnNotSocial;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W31T[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntryCount;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     FriendIds;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                IncludeFirst;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                IncludeLast;                                               // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               InverseSocial;                                             // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DOE9[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardShortCode;                                      // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Social;                                                    // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9WBM[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     TeamIds;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     TeamTypes;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HAHX[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSLeaderboardDataRequest");
		return ptr;
	}



	class UGSLeaderboardDataRequest* STATIC_SendLeaderboardDataRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSLeaderboardDataRequest* STATIC_SendLeaderboardDataRequest(const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSLeaderboardsEntriesRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSLeaderboardsEntriesRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksRequestArray*                     Challenges;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               InverseSocial;                                             // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SKIC[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     Leaderboards;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Player;                                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Social;                                                    // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WPHK[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     TeamTypes;                                                 // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_49NK[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSLeaderboardsEntriesRequest");
		return ptr;
	}



	class UGSLeaderboardsEntriesRequest* STATIC_SendLeaderboardsEntriesRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSLeaderboardsEntriesRequest* STATIC_SendLeaderboardsEntriesRequest(class UGameSparksRequestArray* Challenges, bool InverseSocial, class UGameSparksRequestArray* Leaderboards, const struct FString& Player, bool Social, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSLeaveTeamRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSLeaveTeamRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     OwnerId;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamId;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamType;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UIIC[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSLeaveTeamRequest");
		return ptr;
	}



	class UGSLeaveTeamRequest* STATIC_SendLeaveTeamRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSLeaveTeamRequest* STATIC_SendLeaveTeamRequest(const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListAchievementsRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSListAchievementsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GV5P[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListAchievementsRequest");
		return ptr;
	}



	class UGSListAchievementsRequest* STATIC_SendListAchievementsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListAchievementsRequest* STATIC_SendListAchievementsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListBulkJobsAdminRequest
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UGSListBulkJobsAdminRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksRequestArray*                     BulkJobIds;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0SAJ[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListBulkJobsAdminRequest");
		return ptr;
	}



	class UGSListBulkJobsAdminRequest* STATIC_SendListBulkJobsAdminRequest(class UGameSparksRequestArray* BulkJobIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListChallengeRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSListChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ShortCode;                                                 // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     State;                                                     // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     States;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1IYF[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListChallengeRequest");
		return ptr;
	}



	class UGSListChallengeRequest* STATIC_SendListChallengeRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, const struct FString& ShortCode, const struct FString& State, class UGameSparksRequestArray* States, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListChallengeRequest* STATIC_SendListChallengeRequest(int EntryCount, int Offset, const struct FString& ShortCode, const struct FString& State, class UGameSparksRequestArray* States, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListChallengeTypeRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSListChallengeTypeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K9BZ[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListChallengeTypeRequest");
		return ptr;
	}



	class UGSListChallengeTypeRequest* STATIC_SendListChallengeTypeRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListChallengeTypeRequest* STATIC_SendListChallengeTypeRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListGameFriendsRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSListGameFriendsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VUFB[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListGameFriendsRequest");
		return ptr;
	}



	class UGSListGameFriendsRequest* STATIC_SendListGameFriendsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListGameFriendsRequest* STATIC_SendListGameFriendsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListInviteFriendsRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSListInviteFriendsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q02R[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListInviteFriendsRequest");
		return ptr;
	}



	class UGSListInviteFriendsRequest* STATIC_SendListInviteFriendsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListInviteFriendsRequest* STATIC_SendListInviteFriendsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListLeaderboardsRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSListLeaderboardsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V5OA[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListLeaderboardsRequest");
		return ptr;
	}



	class UGSListLeaderboardsRequest* STATIC_SendListLeaderboardsRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListLeaderboardsRequest* STATIC_SendListLeaderboardsRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListMessageDetailRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSListMessageDetailRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UMXK[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Include;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7UY4[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Status;                                                    // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MB20[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListMessageDetailRequest");
		return ptr;
	}



	class UGSListMessageDetailRequest* STATIC_SendListMessageDetailRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, const struct FString& Include, int Offset, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListMessageDetailRequest* STATIC_SendListMessageDetailRequest(int EntryCount, const struct FString& Include, int Offset, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListMessageRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSListMessageRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0DF3[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Include;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K78P[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RK9M[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListMessageRequest");
		return ptr;
	}



	class UGSListMessageRequest* STATIC_SendListMessageRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListMessageRequest* STATIC_SendListMessageRequest(int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListMessageSummaryRequest
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGSListMessageSummaryRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W0D4[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListMessageSummaryRequest");
		return ptr;
	}



	class UGSListMessageSummaryRequest* STATIC_SendListMessageSummaryRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListMessageSummaryRequest* STATIC_SendListMessageSummaryRequest(int EntryCount, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListTeamChatRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSListTeamChatRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     OwnerId;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamId;                                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamType;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1W7I[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListTeamChatRequest");
		return ptr;
	}



	class UGSListTeamChatRequest* STATIC_SendListTeamChatRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListTeamChatRequest* STATIC_SendListTeamChatRequest(int EntryCount, int Offset, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListTeamsRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSListTeamsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                EntryCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamNameFilter;                                            // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamTypeFilter;                                            // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_65DM[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListTeamsRequest");
		return ptr;
	}



	class UGSListTeamsRequest* STATIC_SendListTeamsRequestOnBehalfOf(const struct FString& PlayerId, int EntryCount, int Offset, const struct FString& TeamNameFilter, const struct FString& TeamTypeFilter, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListTeamsRequest* STATIC_SendListTeamsRequest(int EntryCount, int Offset, const struct FString& TeamNameFilter, const struct FString& TeamTypeFilter, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListTransactionsRequest
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UGSListTransactionsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     DateFrom;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DateTo;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                EntryCount;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I0PO[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Include;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8C3N[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GPES[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListTransactionsRequest");
		return ptr;
	}



	class UGSListTransactionsRequest* STATIC_SendListTransactionsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DateFrom, const struct FString& DateTo, int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListTransactionsRequest* STATIC_SendListTransactionsRequest(const struct FString& DateFrom, const struct FString& DateTo, int EntryCount, const struct FString& Include, int Offset, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSListVirtualGoodsRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSListVirtualGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               IncludeDisabled;                                           // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CP17[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     Tags;                                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R4PA[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSListVirtualGoodsRequest");
		return ptr;
	}



	class UGSListVirtualGoodsRequest* STATIC_SendListVirtualGoodsRequestOnBehalfOf(const struct FString& PlayerId, bool IncludeDisabled, class UGameSparksRequestArray* Tags, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSListVirtualGoodsRequest* STATIC_SendListVirtualGoodsRequest(bool IncludeDisabled, class UGameSparksRequestArray* Tags, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSLogChallengeEventRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSLogChallengeEventRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     EventKey;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksLogEventData*                     LogEventData;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D2LI[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSLogChallengeEventRequest");
		return ptr;
	}



	class UGSLogChallengeEventRequest* STATIC_SendLogChallengeEventRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds);
	class UGSLogChallengeEventRequest* STATIC_SendLogChallengeEventRequest(const struct FString& ChallengeInstanceId, const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSLogEventRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSLogEventRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     EventKey;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksLogEventData*                     LogEventData;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2IS5[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSLogEventRequest");
		return ptr;
	}



	class UGSLogEventRequest* STATIC_SendLogEventRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds);
	class UGSLogEventRequest* STATIC_SendLogEventRequest(const struct FString& EventKey, class UGameSparksLogEventData* LogEventData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSMatchDetailsRequest
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UGSMatchDetailsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RealtimeEnabled;                                           // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9FE4[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0NG8[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSMatchDetailsRequest");
		return ptr;
	}



	class UGSMatchDetailsRequest* STATIC_SendMatchDetailsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MatchId, bool RealtimeEnabled, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSMatchDetailsRequest* STATIC_SendMatchDetailsRequest(const struct FString& MatchId, bool RealtimeEnabled, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSMatchmakingRequest
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UGSMatchmakingRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     Action;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       CustomQuery;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       MatchData;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     MatchGroup;                                                // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     MatchShortCode;                                            // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ParticipantData;                                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Skill;                                                     // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FC8N[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_21E1[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSMatchmakingRequest");
		return ptr;
	}



	class UGSMatchmakingRequest* STATIC_SendMatchmakingRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Action, class UGameSparksScriptData* CustomQuery, class UGameSparksScriptData* MatchData, const struct FString& MatchGroup, const struct FString& MatchShortCode, class UGameSparksScriptData* ParticipantData, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSMatchmakingRequest* STATIC_SendMatchmakingRequest(const struct FString& Action, class UGameSparksScriptData* CustomQuery, class UGameSparksScriptData* MatchData, const struct FString& MatchGroup, const struct FString& MatchShortCode, class UGameSparksScriptData* ParticipantData, int Skill, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSNXConnectRequest
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UGSNXConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               AccountPerLoginId;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E82U[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CXDX[0x5];                                     // 0x005B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NsaIdToken;                                                // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ERMY[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K8OO[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSNXConnectRequest");
		return ptr;
	}



	class UGSNXConnectRequest* STATIC_SendNXConnectRequestOnBehalfOf(const struct FString& PlayerId, bool AccountPerLoginId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& NsaIdToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSNXConnectRequest* STATIC_SendNXConnectRequest(bool AccountPerLoginId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& NsaIdToken, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSPSNAccountConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSPSNAccountConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AuthorizationCode;                                         // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CJH1[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RedirectUri;                                               // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GA8Z[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I32P[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSPSNAccountConnectRequest");
		return ptr;
	}



	class UGSPSNAccountConnectRequest* STATIC_SendPSNAccountConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSPSNAccountConnectRequest* STATIC_SendPSNAccountConnectRequest(const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSPSNConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSPSNConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AuthorizationCode;                                         // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6BHL[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RedirectUri;                                               // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YUD3[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P73M[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSPSNConnectRequest");
		return ptr;
	}



	class UGSPSNConnectRequest* STATIC_SendPSNConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSPSNConnectRequest* STATIC_SendPSNConnectRequest(const struct FString& AuthorizationCode, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& RedirectUri, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSPsnBuyGoodsRequest
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UGSPsnBuyGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AuthorizationCode;                                         // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     CurrencyCode;                                              // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     EntitlementLabel;                                          // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     RedirectUri;                                               // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SubUnitPrice;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               UniqueTransactionByPlayer;                                 // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQZI[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UseCount;                                                  // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ASXG[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XULT[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSPsnBuyGoodsRequest");
		return ptr;
	}



	class UGSPsnBuyGoodsRequest* STATIC_SendPsnBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AuthorizationCode, const struct FString& CurrencyCode, const struct FString& EntitlementLabel, const struct FString& RedirectUri, float SubUnitPrice, bool UniqueTransactionByPlayer, int UseCount, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSPsnBuyGoodsRequest* STATIC_SendPsnBuyGoodsRequest(const struct FString& AuthorizationCode, const struct FString& CurrencyCode, const struct FString& EntitlementLabel, const struct FString& RedirectUri, float SubUnitPrice, bool UniqueTransactionByPlayer, int UseCount, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSPushRegistrationRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSPushRegistrationRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     DeviceOS;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PushId;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UMUE[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSPushRegistrationRequest");
		return ptr;
	}



	class UGSPushRegistrationRequest* STATIC_SendPushRegistrationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DeviceOS, const struct FString& PushId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSPushRegistrationRequest* STATIC_SendPushRegistrationRequest(const struct FString& DeviceOS, const struct FString& PushId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSQQConnectRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSQQConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9DMI[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4Y1D[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KAA0[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSQQConnectRequest");
		return ptr;
	}



	class UGSQQConnectRequest* STATIC_SendQQConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSQQConnectRequest* STATIC_SendQQConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSRegistrationRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSRegistrationRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Password;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Username;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IM13[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSRegistrationRequest");
		return ptr;
	}



	class UGSRegistrationRequest* STATIC_SendRegistrationRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, const struct FString& Password, class UGameSparksScriptData* Segments, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSRegistrationRequest* STATIC_SendRegistrationRequest(const struct FString& DisplayName, const struct FString& Password, class UGameSparksScriptData* Segments, const struct FString& Username, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSRevokePurchaseGoodsRequest
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UGSRevokePurchaseGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     StoreType;                                                 // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     TransactionIds;                                            // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YKMK[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSRevokePurchaseGoodsRequest");
		return ptr;
	}



	class UGSRevokePurchaseGoodsRequest* STATIC_SendRevokePurchaseGoodsRequest(const struct FString& PlayerId, const struct FString& StoreType, class UGameSparksRequestArray* TransactionIds, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSScheduleBulkJobAdminRequest
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGSScheduleBulkJobAdminRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       Data;                                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ModuleShortCode;                                           // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       PlayerQuery;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ScheduledTime;                                             // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Script;                                                    // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7PB2[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSScheduleBulkJobAdminRequest");
		return ptr;
	}



	class UGSScheduleBulkJobAdminRequest* STATIC_SendScheduleBulkJobAdminRequest(class UGameSparksScriptData* Data, const struct FString& ModuleShortCode, class UGameSparksScriptData* PlayerQuery, const struct FString& ScheduledTime, const struct FString& Script, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSSendFriendMessageRequest
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UGSSendFriendMessageRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksRequestArray*                     FriendIds;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Message;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L04I[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSSendFriendMessageRequest");
		return ptr;
	}



	class UGSSendFriendMessageRequest* STATIC_SendSendFriendMessageRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksRequestArray* FriendIds, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSSendFriendMessageRequest* STATIC_SendSendFriendMessageRequest(class UGameSparksRequestArray* FriendIds, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSSendTeamChatMessageRequest
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UGSSendTeamChatMessageRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     OwnerId;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamId;                                                    // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TeamType;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZPNB[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSSendTeamChatMessageRequest");
		return ptr;
	}



	class UGSSendTeamChatMessageRequest* STATIC_SendSendTeamChatMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& Message, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSSendTeamChatMessageRequest* STATIC_SendSendTeamChatMessageRequest(const struct FString& Message, const struct FString& OwnerId, const struct FString& TeamId, const struct FString& TeamType, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSSocialDisconnectRequest
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGSSocialDisconnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     SystemId;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CIXX[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSSocialDisconnectRequest");
		return ptr;
	}



	class UGSSocialDisconnectRequest* STATIC_SendSocialDisconnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& SystemId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSSocialDisconnectRequest* STATIC_SendSocialDisconnectRequest(const struct FString& SystemId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSSocialLeaderboardDataRequest
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UGSSocialLeaderboardDataRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DontErrorOnNotSocial;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GYEO[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntryCount;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     FriendIds;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                IncludeFirst;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                IncludeLast;                                               // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               InverseSocial;                                             // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4Y2X[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardShortCode;                                      // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Offset;                                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Social;                                                    // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JBGM[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksRequestArray*                     TeamIds;                                                   // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksRequestArray*                     TeamTypes;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UOBF[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSSocialLeaderboardDataRequest");
		return ptr;
	}



	class UGSSocialLeaderboardDataRequest* STATIC_SendSocialLeaderboardDataRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSSocialLeaderboardDataRequest* STATIC_SendSocialLeaderboardDataRequest(const struct FString& ChallengeInstanceId, bool DontErrorOnNotSocial, int EntryCount, class UGameSparksRequestArray* FriendIds, int IncludeFirst, int IncludeLast, bool InverseSocial, const struct FString& LeaderboardShortCode, int Offset, bool Social, class UGameSparksRequestArray* TeamIds, class UGameSparksRequestArray* TeamTypes, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSSocialStatusRequest
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGSSocialStatusRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ANNA[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSSocialStatusRequest");
		return ptr;
	}



	class UGSSocialStatusRequest* STATIC_SendSocialStatusRequestOnBehalfOf(const struct FString& PlayerId, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSSocialStatusRequest* STATIC_SendSocialStatusRequest(class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSSteamBuyGoodsRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSSteamBuyGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     OrderId;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SubUnitPrice;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               UniqueTransactionByPlayer;                                 // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q03E[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LTPO[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSSteamBuyGoodsRequest");
		return ptr;
	}



	class UGSSteamBuyGoodsRequest* STATIC_SendSteamBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& OrderId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSSteamBuyGoodsRequest* STATIC_SendSteamBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& OrderId, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSSteamConnectRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSSteamConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CLQC[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     SessionTicket;                                             // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B7LK[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R1ZW[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSSteamConnectRequest");
		return ptr;
	}



	class UGSSteamConnectRequest* STATIC_SendSteamConnectRequestOnBehalfOf(const struct FString& PlayerId, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& SessionTicket, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSSteamConnectRequest* STATIC_SendSteamConnectRequest(bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& SessionTicket, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSTwitchConnectRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSTwitchConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V49S[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A1IR[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4WYH[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSTwitchConnectRequest");
		return ptr;
	}



	class UGSTwitchConnectRequest* STATIC_SendTwitchConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSTwitchConnectRequest* STATIC_SendTwitchConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSTwitterConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSTwitterConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessSecret;                                              // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     AccessToken;                                               // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OBLU[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3TMJ[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LI3J[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSTwitterConnectRequest");
		return ptr;
	}



	class UGSTwitterConnectRequest* STATIC_SendTwitterConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessSecret, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSTwitterConnectRequest* STATIC_SendTwitterConnectRequest(const struct FString& AccessSecret, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSUpdateMessageRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSUpdateMessageRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     MessageId;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Status;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MM0B[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSUpdateMessageRequest");
		return ptr;
	}



	class UGSUpdateMessageRequest* STATIC_SendUpdateMessageRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& MessageId, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSUpdateMessageRequest* STATIC_SendUpdateMessageRequest(const struct FString& MessageId, const struct FString& Status, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSViberConnectRequest
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGSViberConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotRegisterForPush;                                      // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0053(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G028[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9W9R[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IEP9[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSViberConnectRequest");
		return ptr;
	}



	class UGSViberConnectRequest* STATIC_SendViberConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool DoNotRegisterForPush, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSViberConnectRequest* STATIC_SendViberConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool DoNotRegisterForPush, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSWeChatConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSWeChatConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     AccessToken;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C28P[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OpenId;                                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2HD9[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AWRM[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSWeChatConnectRequest");
		return ptr;
	}



	class UGSWeChatConnectRequest* STATIC_SendWeChatConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& OpenId, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSWeChatConnectRequest* STATIC_SendWeChatConnectRequest(const struct FString& AccessToken, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& OpenId, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSWindowsBuyGoodsRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSWindowsBuyGoodsRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Platform;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Receipt;                                                   // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SubUnitPrice;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               UniqueTransactionByPlayer;                                 // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WVP0[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DFOZ[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSWindowsBuyGoodsRequest");
		return ptr;
	}



	class UGSWindowsBuyGoodsRequest* STATIC_SendWindowsBuyGoodsRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& CurrencyCode, const struct FString& Platform, const struct FString& Receipt, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSWindowsBuyGoodsRequest* STATIC_SendWindowsBuyGoodsRequest(const struct FString& CurrencyCode, const struct FString& Platform, const struct FString& Receipt, float SubUnitPrice, bool UniqueTransactionByPlayer, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSWithdrawChallengeRequest
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGSWithdrawChallengeRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeInstanceId;                                       // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     Message;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D9BC[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSWithdrawChallengeRequest");
		return ptr;
	}



	class UGSWithdrawChallengeRequest* STATIC_SendWithdrawChallengeRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSWithdrawChallengeRequest* STATIC_SendWithdrawChallengeRequest(const struct FString& ChallengeInstanceId, const struct FString& Message, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSXBOXLiveConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSXBOXLiveConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RE0A[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     StsTokenString;                                            // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C7KB[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L6PC[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSXBOXLiveConnectRequest");
		return ptr;
	}



	class UGSXBOXLiveConnectRequest* STATIC_SendXBOXLiveConnectRequestOnBehalfOf(const struct FString& PlayerId, const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& StsTokenString, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSXBOXLiveConnectRequest* STATIC_SendXBOXLiveConnectRequest(const struct FString& DisplayName, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, class UGameSparksScriptData* Segments, const struct FString& StsTokenString, bool SwitchIfPossible, bool SyncDisplayName, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSXboxOneConnectRequest
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGSXboxOneConnectRequest : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnResponse;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               DoNotCreateNewPlayer;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DoNotLinkToCurrentPlayer;                                  // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ErrorOnSwitch;                                             // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TILV[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Sandbox;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       Segments;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SwitchIfPossible;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SyncDisplayName;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9MLZ[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Token;                                                     // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSparksScriptData*                       ScriptData;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               Durable;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6850[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                requestTimeoutSeconds;                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PlayerId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSXboxOneConnectRequest");
		return ptr;
	}



	class UGSXboxOneConnectRequest* STATIC_SendXboxOneConnectRequestOnBehalfOf(const struct FString& PlayerId, bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& Sandbox, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& Token, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
	class UGSXboxOneConnectRequest* STATIC_SendXboxOneConnectRequest(bool DoNotCreateNewPlayer, bool DoNotLinkToCurrentPlayer, bool ErrorOnSwitch, const struct FString& Sandbox, class UGameSparksScriptData* Segments, bool SwitchIfPossible, bool SyncDisplayName, const struct FString& Token, class UGameSparksScriptData* ScriptData, bool Durable, int requestTimeoutSeconds);
};

// Class GameSparks.GSMessageListeners
// 0x01D8 (FullSize[0x0430] - InheritedSize[0x0258])
class UGSMessageListeners : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnAchievementEarnedMessage;                                // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeAcceptedMessage;                                // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeChangedMessage;                                 // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeChatMessage;                                    // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeDeclinedMessage;                                // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeDrawnMessage;                                   // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeExpiredMessage;                                 // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeIssuedMessage;                                  // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeJoinedMessage;                                  // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeLapsedMessage;                                  // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeLostMessage;                                    // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeStartedMessage;                                 // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeTurnTakenMessage;                               // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeWaitingMessage;                                 // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeWithdrawnMessage;                               // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeWonMessage;                                     // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendMessage;                                           // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGlobalRankChangedMessage;                                // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchFoundMessage;                                       // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchNotFoundMessage;                                    // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchUpdatedMessage;                                     // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewHighScoreMessage;                                     // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewTeamScoreMessage;                                     // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScriptMessage;                                           // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionTerminatedMessage;                                // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSocialRankChangedMessage;                                // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamChatMessage;                                         // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamRankChangedMessage;                                  // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUploadCompleteMessage;                                   // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SWF5[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSMessageListeners");
		return ptr;
	}



};

// Class GameSparks.GSMessageListenersObject
// 0x01D0 (FullSize[0x0200] - InheritedSize[0x0030])
class UGSMessageListenersObject : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnAchievementEarnedMessage;                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeAcceptedMessage;                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeChangedMessage;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeChatMessage;                                    // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeDeclinedMessage;                                // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeDrawnMessage;                                   // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeExpiredMessage;                                 // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeIssuedMessage;                                  // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeJoinedMessage;                                  // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeLapsedMessage;                                  // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeLostMessage;                                    // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeStartedMessage;                                 // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeTurnTakenMessage;                               // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeWaitingMessage;                                 // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeWithdrawnMessage;                               // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChallengeWonMessage;                                     // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendMessage;                                           // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGlobalRankChangedMessage;                                // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchFoundMessage;                                       // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchNotFoundMessage;                                    // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchUpdatedMessage;                                     // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewHighScoreMessage;                                     // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewTeamScoreMessage;                                     // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScriptMessage;                                           // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionTerminatedMessage;                                // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSocialRankChangedMessage;                                // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamChatMessage;                                         // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamRankChangedMessage;                                  // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUploadCompleteMessage;                                   // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSMessageListenersObject");
		return ptr;
	}



};

// Class GameSparks.GSRTData
// 0x1800 (FullSize[0x1830] - InheritedSize[0x0030])
class UGSRTData : public UObject
{
public:
	unsigned char                                      UnknownData_W0PI[0x1800];                                  // 0x0030(0x1800) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSRTData");
		return ptr;
	}



	struct FString ToString();
	class UGSRTData* SetVector(int Index, class UGSRTVector* Value);
	class UGSRTData* SetString(int Index, const struct FString& Value);
	class UGSRTData* SetInt(int Index, int Value);
	class UGSRTData* SetFVector(int Index, const struct FVector& Value);
	class UGSRTData* SetFloat(int Index, float Value);
	class UGSRTData* SetData(int Index, class UGSRTData* Value);
	bool HasVector(int Index);
	bool HasString(int Index);
	bool HasInt(int Index);
	bool HasFloat(int Index);
	bool HasData(int Index);
	class UGSRTVector* GetVector(int Index);
	struct FString GetString(int Index);
	int GetInt(int Index);
	struct FVector GetFVector(int Index);
	float GetFloat(int Index);
	class UGSRTData* GetData(int Index);
	class UGSRTData* STATIC_CreateRTData(class UObject* WorldContextObject);
};

// Class GameSparks.GSRTSession
// 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
class UGSRTSession : public UObject
{
public:
	unsigned char                                      UnknownData_SNAR[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnReadyDelegate;                                           // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerConnectDelegate;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerDisconnectDelegate;                                // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDataDelegate;                                            // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               IsReady;                                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAI8[0x6F];                                    // 0x0079(0x006F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSRTSession");
		return ptr;
	}



	void Stop();
	void Start();
	void Send(int opCode, GameSparks_EDeliveryIntent intent, class UGSRTData* Data, TArray<int> peerIds);
	void OnReady__DelegateSignature(class UGSRTSession* session, bool ready);
	void OnPlayerDisconnect__DelegateSignature(class UGSRTSession* session, int PeerId);
	void OnPlayerConnect__DelegateSignature(class UGSRTSession* session, int PeerId);
	void OnData__DelegateSignature(class UGSRTSession* session, int sender, int opCode, class UGSRTData* Data);
	int GetPeerId();
	TArray<int> GetActivePeers();
	class UGSRTSession* STATIC_CreateRTSession(class UObject* WorldContextObject, const struct FString& Host, const struct FString& Port, const struct FString& Token);
};

// Class GameSparks.GSRTVector
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGSRTVector : public UObject
{
public:
	unsigned char                                      UnknownData_ZVVY[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameSparks.GSRTVector");
		return ptr;
	}



	class UGSRTVector* SetZ(float Z);
	class UGSRTVector* SetY(float Y);
	class UGSRTVector* SetXYZW(float X, float Y, float Z, float W);
	class UGSRTVector* SetXYZ(float X, float Y, float Z);
	class UGSRTVector* SetXY(float X, float Y);
	class UGSRTVector* SetX(float X);
	class UGSRTVector* SetW(float W);
	class UGSRTVector* SetFromFVector(const struct FVector& V);
	bool HasZ();
	bool HasY();
	bool HasX();
	bool HasW();
	float GetZ();
	float GetY();
	float GetX();
	float GetW();
	class UGSRTVector* STATIC_CreateRTVector(class UObject* WorldContextObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
