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

// Class AWSCore.UUID
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUUID : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AWSCore.UUID");
		return ptr;
	}



	struct FAWSUUID STATIC_RandomUUID();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
