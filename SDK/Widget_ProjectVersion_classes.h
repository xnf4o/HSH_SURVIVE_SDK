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

// WidgetBlueprintGeneratedClass Widget_ProjectVersion.Widget_ProjectVersion_C
// 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
class UWidget_ProjectVersion_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextBlock_Version;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ProjectVersion.Widget_ProjectVersion_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Widget_ProjectVersion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
