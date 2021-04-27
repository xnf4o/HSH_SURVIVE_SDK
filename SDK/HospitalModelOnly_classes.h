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

// BlueprintGeneratedClass HospitalModelOnly.HospitalModelOnly_C
// 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
class AHospitalModelOnly_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0340(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HospitalModelOnly.HospitalModelOnly_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_HospitalModelOnly(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
