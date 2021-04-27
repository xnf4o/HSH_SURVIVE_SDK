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

// BlueprintGeneratedClass Locker_Blueprint.Locker_Blueprint_C
// 0x0058 (FullSize[0x08A8] - InheritedSize[0x0850])
class ALocker_Blueprint_C : public AHiddingPlace_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0850(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               BlockPlayer;                                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        DoorMesh;                                                  // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_CloseOpen_Alpha_0A3D75C74B41C467570190B11F0DB203; // 0x0870(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_CloseOpen__Direction_0A3D75C74B41C467570190B11F0DB203; // 0x0874(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TVUB[0x3];                                     // 0x0875(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_CloseOpen;                                        // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_OpenDoor_Alpha_2E8DC8A944317D30A22D0F95778116DA;  // 0x0880(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_OpenDoor__Direction_2E8DC8A944317D30A22D0F95778116DA; // 0x0884(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4X4G[0x3];                                     // 0x0885(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_OpenDoor;                                         // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         DoorArray;                                                 // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundAttenuation*                           AttenuationSetting;                                        // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass Locker_Blueprint.Locker_Blueprint_C");
		return ptr;
	}



	void SetDoorResponse(bool bIsResponse);
	void PlayInnerAnimation(float* Lenght);
	void PlayOuterAnimation(float* Lenght);
	void RandomDoor();
	void Timeline_OpenDoor__FinishedFunc();
	void Timeline_OpenDoor__UpdateFunc();
	void Timeline_OpenDoor__SoundClose__EventFunc();
	void Timeline_OpenDoor__SoundOpen__EventFunc();
	void Timeline_CloseOpen__FinishedFunc();
	void Timeline_CloseOpen__UpdateFunc();
	void Timeline_CloseOpen__SoundClose__EventFunc();
	void Timeline_CloseOpen__SoundOpen__EventFunc();
	void MulticastPlayInnerAnimation();
	void MulticastPlayOuterAnimation();
	void ExecuteUbergraph_Locker_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
