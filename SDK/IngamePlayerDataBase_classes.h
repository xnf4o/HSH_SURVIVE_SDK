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

// BlueprintGeneratedClass IngamePlayerDataBase.IngamePlayerDataBase_C
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UIngamePlayerDataBase_C : public UHSHObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AGameStateBase*                              GameState;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSendInteractSlateBrush;                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnGameplayEffectApply;                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IngamePlayerDataBase.IngamePlayerDataBase_C");
		return ptr;
	}



	void GetPlayerInfo(class APawn* Target, struct FPlayerInfoStruct_G* PlayerInfo);
	void SendBooleanSuddenDeathMode(bool* IsSuddenDeath);
	void SendInteractSlateBrush(const struct FSlateBrush& SlateBrush_Normal, const struct FSlateBrush& SlateBrush_Hover, const struct FSlateBrush& SlateBrush_Interact, const struct FText& SlateText, bool NotShowButton);
	void Tick(float DeltaTime);
	void ExecuteUbergraph_IngamePlayerDataBase(int EntryPoint);
	void OnGameplayEffectApply__DelegateSignature(const struct FGameplayTagContainer& GameplayTags);
	void OnSendInteractSlateBrush__DelegateSignature(const struct FSlateBrush& SlateBrush_Normal, const struct FSlateBrush& SlateBrush_Hover, const struct FSlateBrush& SlateBrush_Interact, const struct FText& SlateText, bool NotShowButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
