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

// BlueprintGeneratedClass DetectValueComponent.DetectValueComponent_C
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class UDetectValueComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass DetectValueComponent.DetectValueComponent_C");
		return ptr;
	}



	bool CheckingPlayerDoOverScore(const struct FString& PlayerId, int Score);
	bool CheckingAFK(float Time);
	void ReceiveTick(float DeltaSeconds);
	void ReportCase(const struct FString& PlayerId, TEnumAsByte<E_ReportCase_E_ReportCase> Case);
	void CheckingPlayerDoOverDmg(const struct FString& PlayerId, float Dmg);
	void CheckingPlayerDoOverSpeed(const struct FString& PlayerId, float Speed);
	void OnReported(class UVaRestRequestJSON* Request);
	void ExecuteUbergraph_DetectValueComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
