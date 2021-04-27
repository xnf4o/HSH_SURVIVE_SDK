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

// Class VaRestPlugin.VaRestJsonObject
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UVaRestJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData_YV54[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VaRestPlugin.VaRestJsonObject");
		return ptr;
	}



	bool WriteToFilePath(const struct FString& Path, bool bIsRelativeToProjectDir);
	void SetStringField(const struct FString& FieldName, const struct FString& StringValue);
	void SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	void SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject);
	void SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray);
	void SetNumberField(const struct FString& FieldName, float Number);
	void SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray);
	void SetIntegerField(const struct FString& FieldName, int Number);
	void SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue);
	void SetBoolField(const struct FString& FieldName, bool InValue);
	void SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	void SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray);
	void Reset();
	void RemoveField(const struct FString& FieldName);
	void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const struct FString& FieldName);
	struct FString GetStringField(const struct FString& FieldName);
	TArray<struct FString> GetStringArrayField(const struct FString& FieldName);
	class UVaRestJsonObject* GetObjectField(const struct FString& FieldName);
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const struct FString& FieldName);
	float GetNumberField(const struct FString& FieldName);
	TArray<float> GetNumberArrayField(const struct FString& FieldName);
	int GetIntegerField(const struct FString& FieldName);
	TArray<struct FString> GetFieldNames();
	class UVaRestJsonValue* GetField(const struct FString& FieldName);
	bool GetBoolField(const struct FString& FieldName);
	TArray<bool> GetBoolArrayField(const struct FString& FieldName);
	TArray<class UVaRestJsonValue*> GetArrayField(const struct FString& FieldName);
	struct FString EncodeJsonToSingleString();
	struct FString EncodeJson();
	bool DecodeJson(const struct FString& JSONString, bool bUseIncrementalParser);
	class UVaRestJsonObject* STATIC_ConstructJsonObject(class UObject* WorldContextObject);
};

// Class VaRestPlugin.VaRestJsonValue
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UVaRestJsonValue : public UObject
{
public:
	unsigned char                                      UnknownData_O8FB[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VaRestPlugin.VaRestJsonValue");
		return ptr;
	}



	bool IsNull();
	struct FString GetTypeString();
	VaRestPlugin_EVaJson GetType();
	class UVaRestJsonValue* STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const struct FString& StringValue);
	class UVaRestJsonValue* STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
	class UVaRestJsonValue* STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
	class UVaRestJsonValue* STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray);
	struct FString AsString();
	class UVaRestJsonObject* AsObject();
	float AsNumber();
	bool AsBool();
	TArray<class UVaRestJsonValue*> AsArray();
};

// Class VaRestPlugin.VaRestLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VaRestPlugin.VaRestLibrary");
		return ptr;
	}



	struct FString STATIC_PercentEncode(const struct FString& Source);
	class UVaRestJsonObject* STATIC_LoadJsonFromFile(class UObject* WorldContextObject, const struct FString& Path, bool bIsRelativeToContentDir);
	void STATIC_CallURL(class UObject* WorldContextObject, const struct FString& URL, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback);
	bool STATIC_Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest);
	struct FString STATIC_Base64Encode(const struct FString& Source);
	bool STATIC_Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest);
	bool STATIC_Base64Decode(const struct FString& Source, struct FString* Dest);
};

// Class VaRestPlugin.VaRestRequestJSON
// 0x0198 (FullSize[0x01C8] - InheritedSize[0x0030])
class UVaRestRequestJSON : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRequestComplete;                                         // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestFail;                                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ZKT[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ResponseSize;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VD92[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ResponseContent;                                           // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsValidJsonResponse;                                      // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OGSR[0xF];                                     // 0x00A9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestJsonObject*                           RequestJsonObj;                                            // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DS6V[0x30];                                    // 0x00C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestJsonObject*                           ResponseJsonObj;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4KSO[0xD0];                                    // 0x00F8(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VaRestPlugin.VaRestRequestJSON");
		return ptr;
	}



	void SetVerb(VaRestPlugin_ERequestVerb Verb);
	void SetURL(const struct FString& URL);
	void SetStringRequestContent(const struct FString& Content);
	void SetResponseObject(class UVaRestJsonObject* JsonObject);
	void SetRequestObject(class UVaRestJsonObject* JsonObject);
	void SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	void SetCustomVerb(const struct FString& Verb);
	void SetContentType(VaRestPlugin_ERequestContentType ContentType);
	void SetBinaryRequestContent(TArray<unsigned char> Content);
	void SetBinaryContentType(const struct FString& ContentType);
	void ResetResponseData();
	void ResetRequestData();
	void ResetData();
	int RemoveTag(const struct FName& Tag);
	void ProcessURL(const struct FString& URL);
	bool HasTag(const struct FName& Tag);
	struct FString GetURL();
	VaRestPlugin_ERequestStatus GetStatus();
	class UVaRestJsonObject* GetResponseObject();
	struct FString GetResponseHeader(const struct FString& HeaderName);
	struct FString GetResponseContentAsString(bool bCacheResponseContent);
	int GetResponseCode();
	class UVaRestJsonObject* GetRequestObject();
	TArray<struct FString> GetAllResponseHeaders();
	void ExecuteProcessRequest();
	class UVaRestRequestJSON* STATIC_ConstructRequestExt(class UObject* WorldContextObject, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType);
	class UVaRestRequestJSON* STATIC_ConstructRequest(class UObject* WorldContextObject);
	void Cancel();
	void ApplyURL(const struct FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void AddTag(const struct FName& Tag);
};

// Class VaRestPlugin.VaRestSettings
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UVaRestSettings : public UObject
{
public:
	bool                                               bExtendedLog;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3MY8[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VaRestPlugin.VaRestSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
