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

// BlueprintGeneratedClass EndgameCamera.EndgameCamera_C
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class AEndgameCamera_C : public ACameraBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AHunterBase_C*                               hunter;                                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass EndgameCamera.EndgameCamera_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_EndgameCamera(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
