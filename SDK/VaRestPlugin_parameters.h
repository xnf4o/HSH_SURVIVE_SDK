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

// Function VaRestPlugin.VaRestJsonObject.WriteToFilePath
struct UVaRestJsonObject_WriteToFilePath_Params
{
	struct FString                                     Path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRelativeToProjectDir;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetStringField
struct UVaRestJsonObject_SetStringField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringValue;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
struct UVaRestJsonObject_SetStringArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StringArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetObjectField
struct UVaRestJsonObject_SetObjectField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           JsonObject;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
struct UVaRestJsonObject_SetObjectArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonObject*>                   ObjectArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetNumberField
struct UVaRestJsonObject_SetNumberField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Number;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
struct UVaRestJsonObject_SetNumberArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      NumberArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetIntegerField
struct UVaRestJsonObject_SetIntegerField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Number;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetField
struct UVaRestJsonObject_SetField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            JsonValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetBoolField
struct UVaRestJsonObject_SetBoolField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
struct UVaRestJsonObject_SetBoolArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       BoolArray;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.SetArrayField
struct UVaRestJsonObject_SetArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonValue*>                    inArray;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.Reset
struct UVaRestJsonObject_Reset_Params
{
};

// Function VaRestPlugin.VaRestJsonObject.RemoveField
struct UVaRestJsonObject_RemoveField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
struct UVaRestJsonObject_MergeJsonObject_Params
{
	class UVaRestJsonObject*                           InJsonObject;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Overwrite;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.HasField
struct UVaRestJsonObject_HasField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetStringField
struct UVaRestJsonObject_GetStringField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
struct UVaRestJsonObject_GetStringArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetObjectField
struct UVaRestJsonObject_GetObjectField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
struct UVaRestJsonObject_GetObjectArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonObject*>                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetNumberField
struct UVaRestJsonObject_GetNumberField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
struct UVaRestJsonObject_GetNumberArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetIntegerField
struct UVaRestJsonObject_GetIntegerField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetFieldNames
struct UVaRestJsonObject_GetFieldNames_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetField
struct UVaRestJsonObject_GetField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetBoolField
struct UVaRestJsonObject_GetBoolField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
struct UVaRestJsonObject_GetBoolArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.GetArrayField
struct UVaRestJsonObject_GetArrayField_Params
{
	struct FString                                     FieldName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonValue*>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
struct UVaRestJsonObject_EncodeJsonToSingleString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.EncodeJson
struct UVaRestJsonObject_EncodeJson_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.DecodeJson
struct UVaRestJsonObject_DecodeJson_Params
{
	struct FString                                     JSONString;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseIncrementalParser;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
struct UVaRestJsonObject_ConstructJsonObject_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.IsNull
struct UVaRestJsonValue_IsNull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.GetTypeString
struct UVaRestJsonValue_GetTypeString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.GetType
struct UVaRestJsonValue_GetType_Params
{
	VaRestPlugin_EVaJson                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
struct UVaRestJsonValue_ConstructJsonValueString_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringValue;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
struct UVaRestJsonValue_ConstructJsonValueObject_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           JsonObject;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
struct UVaRestJsonValue_ConstructJsonValueNumber_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Number;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
struct UVaRestJsonValue_ConstructJsonValueBool_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
struct UVaRestJsonValue_ConstructJsonValueArray_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonValue*>                    inArray;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.AsString
struct UVaRestJsonValue_AsString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.AsObject
struct UVaRestJsonValue_AsObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.AsNumber
struct UVaRestJsonValue_AsNumber_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.AsBool
struct UVaRestJsonValue_AsBool_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestJsonValue.AsArray
struct UVaRestJsonValue_AsArray_Params
{
	TArray<class UVaRestJsonValue*>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestLibrary.PercentEncode
struct UVaRestLibrary_PercentEncode_Params
{
	struct FString                                     Source;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestLibrary.LoadJsonFromFile
struct UVaRestLibrary_LoadJsonFromFile_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRelativeToContentDir;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestLibrary.CallURL
struct UVaRestLibrary_CallURL_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VaRestPlugin_ERequestVerb                          Verb;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VaRestPlugin_ERequestContentType                   ContentType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           VaRestJson;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestLibrary.Base64EncodeData
struct UVaRestLibrary_Base64EncodeData_Params
{
	TArray<unsigned char>                              Data;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     Dest;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestLibrary.Base64Encode
struct UVaRestLibrary_Base64Encode_Params
{
	struct FString                                     Source;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestLibrary.Base64DecodeData
struct UVaRestLibrary_Base64DecodeData_Params
{
	struct FString                                     Source;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Dest;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestLibrary.Base64Decode
struct UVaRestLibrary_Base64Decode_Params
{
	struct FString                                     Source;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Dest;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetVerb
struct UVaRestRequestJSON_SetVerb_Params
{
	VaRestPlugin_ERequestVerb                          Verb;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetURL
struct UVaRestRequestJSON_SetURL_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
struct UVaRestRequestJSON_SetStringRequestContent_Params
{
	struct FString                                     Content;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
struct UVaRestRequestJSON_SetResponseObject_Params
{
	class UVaRestJsonObject*                           JsonObject;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
struct UVaRestRequestJSON_SetRequestObject_Params
{
	class UVaRestJsonObject*                           JsonObject;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetHeader
struct UVaRestRequestJSON_SetHeader_Params
{
	struct FString                                     HeaderName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HeaderValue;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
struct UVaRestRequestJSON_SetCustomVerb_Params
{
	struct FString                                     Verb;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetContentType
struct UVaRestRequestJSON_SetContentType_Params
{
	VaRestPlugin_ERequestContentType                   ContentType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
struct UVaRestRequestJSON_SetBinaryRequestContent_Params
{
	TArray<unsigned char>                              Content;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
struct UVaRestRequestJSON_SetBinaryContentType_Params
{
	struct FString                                     ContentType;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
struct UVaRestRequestJSON_ResetResponseData_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
struct UVaRestRequestJSON_ResetRequestData_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.ResetData
struct UVaRestRequestJSON_ResetData_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.RemoveTag
struct UVaRestRequestJSON_RemoveTag_Params
{
	struct FName                                       Tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.ProcessURL
struct UVaRestRequestJSON_ProcessURL_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.HasTag
struct UVaRestRequestJSON_HasTag_Params
{
	struct FName                                       Tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetURL
struct UVaRestRequestJSON_GetURL_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetStatus
struct UVaRestRequestJSON_GetStatus_Params
{
	VaRestPlugin_ERequestStatus                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
struct UVaRestRequestJSON_GetResponseObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
struct UVaRestRequestJSON_GetResponseHeader_Params
{
	struct FString                                     HeaderName;                                                // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetResponseContentAsString
struct UVaRestRequestJSON_GetResponseContentAsString_Params
{
	bool                                               bCacheResponseContent;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
struct UVaRestRequestJSON_GetResponseCode_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
struct UVaRestRequestJSON_GetRequestObject_Params
{
	class UVaRestJsonObject*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
struct UVaRestRequestJSON_GetAllResponseHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.ExecuteProcessRequest
struct UVaRestRequestJSON_ExecuteProcessRequest_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
struct UVaRestRequestJSON_ConstructRequestExt_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VaRestPlugin_ERequestVerb                          Verb;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VaRestPlugin_ERequestContentType                   ContentType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestRequestJSON*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
struct UVaRestRequestJSON_ConstructRequest_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestRequestJSON*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.Cancel
struct UVaRestRequestJSON_Cancel_Params
{
};

// Function VaRestPlugin.VaRestRequestJSON.ApplyURL
struct UVaRestRequestJSON_ApplyURL_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                           Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function VaRestPlugin.VaRestRequestJSON.AddTag
struct UVaRestRequestJSON_AddTag_Params
{
	struct FName                                       Tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
