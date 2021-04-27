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

// BlueprintGeneratedClass IHSHController.IHSHController_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIHSHController_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IHSHController.IHSHController_C");
		return ptr;
	}



	void DisableBlockInputKeys(TArray<struct FKey> Keys);
	void EnableBlockInputKeys();
	void GetIsEnableBlockCamera(bool* Return);
	void GetIsEnableBlockAction(bool* Return);
	void DisableMouseCameraClient();
	void EnableMouseCameraClient();
	void DisableActionClient();
	void EnableActionClient();
	void DisableMovementClient();
	void EnableMovementClient();
	void DisableInputClient();
	void EnableInputClient();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
