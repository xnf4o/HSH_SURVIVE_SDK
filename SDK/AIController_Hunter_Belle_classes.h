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

// BlueprintGeneratedClass AIController_Hunter_Belle.AIController_Hunter_Belle_C
// 0x0017 (FullSize[0x0598] - InheritedSize[0x0581])
class AAIController_Hunter_Belle_C : public AAIController_Hunter_C
{
public:
	unsigned char                                      UnknownData_Z2F4[0x7];                                     // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0588(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass AIController_Hunter_Belle.AIController_Hunter_Belle_C");
		return ptr;
	}



	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_AIController_Hunter_Belle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
