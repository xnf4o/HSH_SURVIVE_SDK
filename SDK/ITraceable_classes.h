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

// BlueprintGeneratedClass ITraceable.ITraceable_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UITraceable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ITraceable.ITraceable_C");
		return ptr;
	}



	void OnTracerChangeHitComponent(class APawn* Pawn, class UPrimitiveComponent* PreviousComponent, class UPrimitiveComponent* CurrentComponent);
	void OnTracerLeave(class APawn* Pawn, class UPrimitiveComponent* HitComponent);
	void OnTracerEnter(class APawn* Pawn, class UPrimitiveComponent* HitComponent);
	void OnTracerInteract(class APawn* Pawn, class UPrimitiveComponent* HitComponent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
