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

// Class SignificanceManager.SignificanceManager
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData_4M8A[0xD8];                                    // 0x0030(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              SignificanceManagerClassName;                              // 0x0108(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
