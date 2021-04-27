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

// BlueprintGeneratedClass HSURHUD.HSURHUD_C
// 0x0040 (FullSize[0x0468] - InheritedSize[0x0428])
class AHSURHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Widget_Survivor;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Widget_Hunter;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_Main_Widget_C*                       General;                                                   // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_Spectator_C*                         IngameSpectatorUI;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_SpectatorRole_C*                     IngameSpectatorUI_Role;                                    // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSURHUD.HSURHUD_C");
		return ptr;
	}



	void ShowHunterWidget();
	void ShowSurvivorWidget();
	void ShowGeneralWidget();
	void HideWidget(TEnumAsByte<E_Role_E_Role> Role);
	void CreateUISpectator(TEnumAsByte<E_Role_E_Role> Role);
	void RemoveUISpectator(TEnumAsByte<E_Role_E_Role> Role);
	void UpdateUISpectator(TEnumAsByte<E_Role_E_Role> Role, const struct FS_UISpectator& Data);
	void InitializeWidgetIngameWidget();
	void HideGeneralWidget();
	void ExecuteUbergraph_HSURHUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
