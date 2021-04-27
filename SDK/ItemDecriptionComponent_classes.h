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

// BlueprintGeneratedClass ItemDecriptionComponent.ItemDecriptionComponent_C
// 0x0050 (FullSize[0x0150] - InheritedSize[0x0100])
class UItemDecriptionComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UIngame_ItemDecription_C*                    Widget;                                                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enable;                                                    // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AKXB[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Header;                                                    // 0x0120(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Description;                                               // 0x0138(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ItemDecriptionComponent.ItemDecriptionComponent_C");
		return ptr;
	}



	void SetUpDescription(const struct FText& Header, const struct FText& Description);
	void GetDescription(struct FText* Header, struct FText* Description);
	void TryToCreateWidget();
	void ActiveWidget();
	void DeactiveWidget();
	void ExecuteUbergraph_ItemDecriptionComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
