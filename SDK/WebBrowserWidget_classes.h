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

// Class WebBrowserWidget.WebBrowser
// 0x0048 (FullSize[0x0160] - InheritedSize[0x0118])
class UWebBrowser : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                              // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBeforePopup;                                             // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     InitialURL;                                                // 0x0138(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSupportsTransparency;                                     // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L720[0x17];                                    // 0x0149(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class WebBrowserWidget.WebBrowser");
		return ptr;
	}



	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame);
	void LoadURL(const struct FString& NewURL);
	void LoadString(const struct FString& Contents, const struct FString& DummyURL);
	struct FString GetURL();
	struct FText GetTitleText();
	void ExecuteJavascript(const struct FString& ScriptText);
};

// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UWebBrowserAssetManager : public UObject
{
public:
	unsigned char                                      DefaultMaterial[0x28];                                     // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WebBrowserWidget.WebBrowserAssetManager.DefaultMaterial
	unsigned char                                      UnknownData_6QS6[0x28];                                    // 0x0058(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class WebBrowserWidget.WebBrowserAssetManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
