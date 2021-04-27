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

// BlueprintGeneratedClass ZBingCat_PreviewItem_Match.ZBingCat_PreviewItem_Match_C
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class AZBingCat_PreviewItem_Match_C : public AZBingCat_PreviewItemBase_C
{
public:
	class UStaticMeshComponent*                        PreviewSubItem;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ZBingCat_PreviewItem_Match.ZBingCat_PreviewItem_Match_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
