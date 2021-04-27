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

// BlueprintGeneratedClass IRitualState.IRitualState_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIRitualState_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IRitualState.IRitualState_C");
		return ptr;
	}



	void OnRitualStateChanged(int State);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
