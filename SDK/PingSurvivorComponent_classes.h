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

// BlueprintGeneratedClass PingSurvivorComponent.PingSurvivorComponent_C
// 0x0028 (FullSize[0x0190] - InheritedSize[0x0168])
class UPingSurvivorComponent_C : public UPingComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0168(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AHSHCharacterBase*                           hshcharacter;                                              // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSoundIcon;                                               // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass PingSurvivorComponent.PingSurvivorComponent_C");
		return ptr;
	}



	void FindHunterNearActor(class AActor* OtherActor, class AHunterBase_C** Output);
	void TryGetOwner(class AHSHCharacterBase** OutputPin);
	void FillterArray(TArray<struct FS_PingPair>* Array, TArray<struct FS_PingPair>* OutArray);
	void SoundIcon(class AActor* HitActor);
	void PingPotal(class AActor* Portal, const struct FVector& Offset);
	void PingHunterSpecter(class AHunterBase_C* hunter);
	void PingHunter(const struct FVector& Location, const struct FVector& Direction, float Distance);
	void ExecuteUbergraph_PingSurvivorComponent(int EntryPoint);
	void OnSoundIcon__DelegateSignature(class AActor* Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
