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

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
struct UWebBrowser_OnBeforePopup__DelegateSignature_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Frame;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.LoadURL
struct UWebBrowser_LoadURL_Params
{
	struct FString                                     NewURL;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.LoadString
struct UWebBrowser_LoadString_Params
{
	struct FString                                     Contents;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DummyURL;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.GetURL
struct UWebBrowser_GetURL_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.GetTitleText
struct UWebBrowser_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
struct UWebBrowser_ExecuteJavascript_Params
{
	struct FString                                     ScriptText;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
