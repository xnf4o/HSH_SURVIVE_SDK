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

// BlueprintGeneratedClass CommunicationWheelComponent.CommunicationWheelComponent_C
// 0x006A (FullSize[0x016A] - InheritedSize[0x0100])
class UCommunicationWheelComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UIngame_Sticker_C*                           StickerWidget;                                             // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIngame_Sticker_Character_C*                 StickerCharacterWidget;                                    // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsStickerActive;                                           // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T28O[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerController*                           OwningController;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StickerIsInitialize;                                       // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1GS5[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WDG_HeightOffset;                                          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentSelected;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_APSV[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTexture2D*>                          StickerList;                                               // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture2D*>                          EmoteList;                                                 // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UIngame_Emote_C*                             EmoteWidget;                                               // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EmoteIsInitialize;                                         // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsEmoteActive;                                             // 0x0169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass CommunicationWheelComponent.CommunicationWheelComponent_C");
		return ptr;
	}



	void RunEmote(int* emote);
	void GetSelectedEmote(int* CurrentSelect);
	void HideEmoteWidget();
	void ShowEmoteWidget();
	void InitializeEmote();
	void SetCurrentSticker(int Index);
	void IsLocallyControlled(bool* IsLocal);
	void IsClientSurvivor(bool* IsSurvivor);
	void GetPlayerIndexByID(int PlayerId, int* Index);
	void RunSticker(int PlayerIndex, class UTexture2D* Sticker);
	void GetSelectedSticker(int* CurrentSelect);
	void InitializeSticker();
	void HideStickerWidget();
	void ShowStickerWidget();
	void ReceiveBeginPlay();
	void RunSticker_Multicast(int PlayerIndex, class UTexture2D* Sticker);
	void ReceiveTick(float DeltaSeconds);
	void RunSticker_Server(int PlayerIndex, class UTexture2D* Sticker);
	void RunSticker_Owner(int CurrentSelected, int PlayerId);
	void ExecuteUbergraph_CommunicationWheelComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
