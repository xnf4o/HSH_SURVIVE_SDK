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
// Parameters
//---------------------------------------------------------------------------

// Function PingManagerComponent.PingManagerComponent_C.FoundLongTime
struct UPingManagerComponent_C_FoundLongTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.CreateHunterSpecter
struct UPingManagerComponent_C_CreateHunterSpecter_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowLongTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.HunterSpecterTime
struct UPingManagerComponent_C_HunterSpecterTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.FindSoundList
struct UPingManagerComponent_C_FindSoundList_Params
{
	TEnumAsByte<E_PingCase_E_PingCase>                 Case;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PingSoundList>                    SoundList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               _2D;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundRitualTime
struct UPingManagerComponent_C_FoundRitualTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.CreateFoundRitual
struct UPingManagerComponent_C_CreateFoundRitual_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowLongTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.IsTargetInActive
struct UPingManagerComponent_C_IsTargetInActive_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	bool                                               ForceFind;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundSoulTime
struct UPingManagerComponent_C_FoundSoulTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.CreateFoundSoul
struct UPingManagerComponent_C_CreateFoundSoul_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowLongTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.CheckOnlyOnePing
struct UPingManagerComponent_C_CheckOnlyOnePing_Params
{
	TEnumAsByte<E_PingCase_E_PingCase>                 Case;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHaveInArray;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PingManagerComponent.PingManagerComponent_C.CreateFoundPortal
struct UPingManagerComponent_C_CreateFoundPortal_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowLongTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundPortalTime
struct UPingManagerComponent_C_FoundPortalTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.CheckPingCondition_Refactor
struct UPingManagerComponent_C_CheckPingCondition_Refactor_Params
{
	struct FHitResult                                  HitResult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHSHCharacterBase*                           PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PlayerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EnemyClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               bIsShouldAdded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundSurvivorTime
struct UPingManagerComponent_C_FoundSurvivorTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.CreateFoundSurvivor
struct UPingManagerComponent_C_CreateFoundSurvivor_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowLongTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.AddOrUpdatePingActiveTarget
struct UPingManagerComponent_C_AddOrUpdatePingActiveTarget_Params
{
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FS_PingPair                                 NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanSameTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_PingCase_E_PingCase>                 Case;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bForceUpdateSameCase;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 Output;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.FillterPingPair
struct UPingManagerComponent_C_FillterPingPair_Params
{
	TArray<struct FS_PingPair>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UPingComponent_C*                            PingComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PingPair>                         OutputArray;                                               // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function PingManagerComponent.PingManagerComponent_C.AddPingActiveNotPair
struct UPingManagerComponent_C_AddPingActiveNotPair_Params
{
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class AHSHCharacterBase*                           PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_PingPair                                 Output;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.RemovePingActiveWithTarget
struct UPingManagerComponent_C_RemovePingActiveWithTarget_Params
{
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundTrapTime
struct UPingManagerComponent_C_FoundTrapTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundChestTime
struct UPingManagerComponent_C_FoundChestTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.MakeS_PingPair
struct UPingManagerComponent_C_MakeS_PingPair_Params
{
	TEnumAsByte<E_PingCase_E_PingCase>                 PingCase;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      HitActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowLongTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.GetPlayerName
struct UPingManagerComponent_C_GetPlayerName_Params
{
	class AController*                                 Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerName;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.RemovePingActiveWithCharacter
struct UPingManagerComponent_C_RemovePingActiveWithCharacter_Params
{
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PingManagerComponent.PingManagerComponent_C.IsCancel?
struct UPingManagerComponent_C_IsCancel__Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	bool                                               Cancel_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundItemTime
struct UPingManagerComponent_C_FoundItemTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.FoundEnemyTime
struct UPingManagerComponent_C_FoundEnemyTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.UpdatePair
struct UPingManagerComponent_C_UpdatePair_Params
{
	struct FS_PingPair                                 Pair;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 Return;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.GotoLocationTime
struct UPingManagerComponent_C_GotoLocationTime_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.TryGetPlayerController
struct UPingManagerComponent_C_TryGetPlayerController_Params
{
	TArray<class AHSURPlayerController_C*>             ReturnPlayerController;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function PingManagerComponent.PingManagerComponent_C.NotifyUpdatePing
struct UPingManagerComponent_C_NotifyUpdatePing_Params
{
	TArray<struct FS_PingPair>                         ActivePing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function PingManagerComponent.PingManagerComponent_C.RemovePingActive
struct UPingManagerComponent_C_RemovePingActive_Params
{
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FS_PingPair                                 PingPair;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.AddPingActive
struct UPingManagerComponent_C_AddPingActive_Params
{
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class AHSHCharacterBase*                           PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 NewItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_PingPair                                 Output;                                                    // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.CheckPingCondition
struct UPingManagerComponent_C_CheckPingCondition_Params
{
	struct FHitResult                                  HitResult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHSHCharacterBase*                           PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PlayerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EnemyClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PingPair                                 S_PingPair;                                                // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.IsInActive
struct UPingManagerComponent_C_IsInActive_Params
{
	class AHSHCharacterBase*                           PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PingPair>                         ActivePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.Initialize
struct UPingManagerComponent_C_Initialize_Params
{
};

// Function PingManagerComponent.PingManagerComponent_C.RequestPing
struct UPingManagerComponent_C_RequestPing_Params
{
	struct FHitResult                                  OutHit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               IsHit_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHSHCharacterBase*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PlayerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EnemyClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.ReceiveTick
struct UPingManagerComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.ForceRequestPing
struct UPingManagerComponent_C_ForceRequestPing_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PingCase_E_PingCase>                 PingCase;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      HitActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpdateLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCanSameTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bForceUpdateSameCase;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bPlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowLongTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PingManagerComponent.PingManagerComponent_C.ServerPlaySound
struct UPingManagerComponent_C_ServerPlaySound_Params
{
	class UClass*                                      CharacterClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PingCase_E_PingCase>                 Case;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.ForceRemovePingByTarget
struct UPingManagerComponent_C_ForceRemovePingByTarget_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.ForceRemovePingByCharacter
struct UPingManagerComponent_C_ForceRemovePingByCharacter_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingManagerComponent.PingManagerComponent_C.ExecuteUbergraph_PingManagerComponent
struct UPingManagerComponent_C_ExecuteUbergraph_PingManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
