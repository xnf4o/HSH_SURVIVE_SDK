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

// BlueprintGeneratedClass IHunterScan.IHunterScan_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIHunterScan_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IHunterScan.IHunterScan_C");
		return ptr;
	}



	void OnHunterScan();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
