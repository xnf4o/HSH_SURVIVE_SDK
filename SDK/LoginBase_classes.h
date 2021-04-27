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

// BlueprintGeneratedClass LoginBase.LoginBase_C
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class ULoginBase_C : public UObject
{
public:
	class UClass*                                      WidgetClass;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLoginResponse;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LoginBase.LoginBase_C");
		return ptr;
	}



	void GetWidgetClass(class UClass** WidgetClass);
	void OnLoginResponse__DelegateSignature(bool IsError, const struct FGSAuthenticationResponse& GSAuthenticationResponse);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
