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

// BlueprintGeneratedClass IWidgetPingable.IWidgetPingable_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIWidgetPingable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IWidgetPingable.IWidgetPingable_C");
		return ptr;
	}



	void UpdateWidget(const struct FText& HeadlineText, const struct FText& DataText, const struct FSlateColor& InColorAndOpacity, const struct FS_PingPair& S_PingPair, bool IsInScreen, float Angle);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
