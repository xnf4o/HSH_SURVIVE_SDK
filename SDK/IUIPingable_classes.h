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

// BlueprintGeneratedClass IUIPingable.IUIPingable_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIUIPingable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IUIPingable.IUIPingable_C");
		return ptr;
	}



	void UpdatePing(TArray<struct FS_PingPair> ActivePing);
	void ShowPing(TArray<struct FS_PingPair> ActivePing);
	void UpdatePingUI(const struct FVector& WorldLocation, int Index);
	void HidePingUI();
	void ShowPingUI(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& Color, const struct FVector& WorldLocation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
