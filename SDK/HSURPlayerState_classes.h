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

// BlueprintGeneratedClass HSURPlayerState.HSURPlayerState_C
// 0x0260 (FullSize[0x06C0] - InheritedSize[0x0460])
class AHSURPlayerState_C : public AHSHPlayerStateNative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Role_E_Role>                         PlayerRole;                                                // 0x0478(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_SurvivorState_E_SurvivorState>       Status;                                                    // 0x0479(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_16AR[0x6];                                     // 0x047A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  NormalStatusImage;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  SoulStatusImage;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PlayerCharacterClass;                                      // 0x0490(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                DeathCount;                                                // 0x0498(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSturdyUsed;                                             // 0x049C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5JNR[0x3];                                     // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 CharacterIcon;                                             // 0x04A0(0x0088) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FSlateBrush                                 CharacterIconSlateBrush;                                   // 0x0528(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerInfoStruct_G                         PlayerInfo;                                                // 0x05B0(0x0110) (Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURPlayerState.HSURPlayerState_C");
		return ptr;
	}



	void GetCharacterIcon(struct FSlateBrush* CharacterIcon);
	void OnRep_PlayerCharacterClass();
	void GetStatusImage(class UTexture2D** NormalStatusImage, class UTexture2D** SoulStatusImage);
	void ReceiveDestroyed();
	void SettingStatusImage(class UClass* Class, const struct FSlateBrush& CharacterIcon);
	void ExecuteUbergraph_HSURPlayerState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
