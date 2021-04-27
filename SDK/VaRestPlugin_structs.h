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
// Enums
//---------------------------------------------------------------------------

// Enum VaRestPlugin.EVaJson
enum class VaRestPlugin_EVaJson : uint8_t
{
	EVaJson__None                  = 0,
	EVaJson__Null                  = 1,
	EVaJson__String                = 2,
	EVaJson__Number                = 3,
	EVaJson__Boolean               = 4,
	EVaJson__Array                 = 5,
	EVaJson__Object                = 6,
	EVaJson__EVaJson_MAX           = 7,

};

// Enum VaRestPlugin.ERequestStatus
enum class VaRestPlugin_ERequestStatus : uint8_t
{
	ERequestStatus__NotStarted     = 0,
	ERequestStatus__Processing     = 1,
	ERequestStatus__Failed         = 2,
	ERequestStatus__Failed_ConnectionError = 3,
	ERequestStatus__Succeeded      = 4,
	ERequestStatus__ERequestStatus_MAX = 5,

};

// Enum VaRestPlugin.ERequestContentType
enum class VaRestPlugin_ERequestContentType : uint8_t
{
	ERequestContentType__x_www_form_urlencoded_url = 0,
	ERequestContentType__x_www_form_urlencoded_body = 1,
	ERequestContentType__json      = 2,
	ERequestContentType__binary    = 3,
	ERequestContentType__ERequestContentType_MAX = 4,

};

// Enum VaRestPlugin.ERequestVerb
enum class VaRestPlugin_ERequestVerb : uint8_t
{
	ERequestVerb__GET              = 0,
	ERequestVerb__POST             = 1,
	ERequestVerb__PUT              = 2,
	ERequestVerb__DEL              = 3,
	ERequestVerb__CUSTOM           = 4,
	ERequestVerb__ERequestVerb_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VaRestPlugin.VaRestCallResponse
// 0x0030
struct FVaRestCallResponse
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0010(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U4YD[0x10];                                    // 0x0020(0x0010) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
