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

// BlueprintGeneratedClass LeverBAse.LeverBase_C
// 0x0037 (FullSize[0x0700] - InheritedSize[0x06C9])
class ALeverBase_C : public AInteractionBase_C
{
public:
	unsigned char                                      UnknownData_LH79[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           CacheCharacter;                                            // 0x06E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  CacheSprite;                                               // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsOn;                                                     // 0x06F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsCooldown;                                               // 0x06F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PHHS[0x2];                                     // 0x06FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Cooldown;                                                  // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LeverBAse.LeverBase_C");
		return ptr;
	}



	void EndCooldown();
	void StartCooldown();
	void IsCooldown(bool* Return);
	void IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return);
	void IsLeverOn(bool* Return);
	void Interaction(class AHSHCharacterBase* Character);
	void OnServerSwitchChange(bool bIsOn, class AHSHCharacterBase* Character);
	void ReceiveBeginPlay();
	void ShowIndicator(class AActor* PlayerCharacter);
	void ExecuteUbergraph_LeverBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
