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

// WidgetBlueprintGeneratedClass Ingame_Sticker_Character.Ingame_Sticker_Character_C
// 0x0019 (FullSize[0x0259] - InheritedSize[0x0240])
class UIngame_Sticker_Character_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_81;                                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsBusy;                                                    // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("WidgetBlueprintGeneratedClass Ingame_Sticker_Character.Ingame_Sticker_Character_C");
		return ptr;
	}



	void SetImage(class UTexture2D* Texture);
	void Construct();
	void RunSticker(class UTexture2D* Texture, float DisplayTime);
	void ExecuteUbergraph_Ingame_Sticker_Character(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
