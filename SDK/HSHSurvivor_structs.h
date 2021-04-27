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
// Enums
//---------------------------------------------------------------------------

// Enum HSHSurvivor.EMoveActionHSH
enum class HSHSurvivor_EMoveActionHSH : uint8_t
{
	EMoveActionHSH__Move           = 0,
	EMoveActionHSH__Stop           = 1,
	EMoveActionHSH__Return         = 2,
	EMoveActionHSH__EMoveActionHSH_MAX = 3,

};

// Enum HSHSurvivor.ECharacterType
enum class HSHSurvivor_ECharacterType : uint8_t
{
	CT_Spectator                   = 0,
	CT_Survivor                    = 1,
	CT_Hunter                      = 2,
	CT_Non                         = 3,
	CT_MAX                         = 4,

};

// Enum HSHSurvivor.EPickableType
enum class HSHSurvivor_EPickableType : uint8_t
{
	PT_General                     = 0,
	PT_Melee                       = 1,
	PT_Range                       = 2,
	PT_Trap                        = 3,
	PT_None                        = 4,
	PT_Non                         = 5,
	PT_MAX                         = 6,

};

// Enum HSHSurvivor.EJokeEvent
enum class HSHSurvivor_EJokeEvent : uint8_t
{
	NonEvent                       = 0,
	NotSeeAnyOne                   = 1,
	OnChasing                      = 2,
	SkillCheckFailed               = 3,
	OnAttackByHunter               = 4,
	OnAttackBySurvivor             = 5,
	OnScaned                       = 6,
	OnRitualSuccess                = 7,
	Idle                           = 8,
	LastJokeEvent                  = 9,
	EJokeEvent_MAX                 = 10,

};

// Enum HSHSurvivor.EDlc
enum class HSHSurvivor_EDlc : uint8_t
{
	zBingSurvivor                  = 0,
	HrkHunter                      = 1,
	EDlc_MAX                       = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HSHSurvivor.DropItem
// 0x0014
struct FHSHSurvivor_FDropItem
{
	struct FPrimaryAssetId                             Item;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.HSHItemSlot
// 0x000C
struct FHSHItemSlot
{
	struct FPrimaryAssetType                           ItemType;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotNumber;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.HSHGameplayEffectContainerSpec
// 0x0030
struct FHSHGameplayEffectContainerSpec
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>           TargetGameplayEffectSpecs;                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.HSHItemData
// 0x0008
struct FHSHItemData
{
	int                                                ItemCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemLevel;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.ShowStatus
// 0x0038
struct FShowStatus
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9BTA[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct HSHSurvivor.HSHGameplayEffectContainer
// 0x0018
struct FHSHGameplayEffectContainer
{
	class UClass*                                      TargetType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              TargetGameplayEffectClasses;                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.S_PairAnimationPickable
// 0x0010
struct FS_PairAnimationPickable
{
	class UClass*                                      CharacterClass;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AnimMontage;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.JokeData
// 0x0010
struct FJokeData
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3DF8[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct HSHSurvivor.JokeArray
// 0x0010
struct FJokeArray
{
	TArray<struct FJokeData>                           Data;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.PerkHandleData
// 0x0010
struct FPerkHandleData
{
	class AHSHCharacterBase*                           Owner;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AHSHCharacterBase*                           Target;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.SProgressInfo
// 0x0058
struct FSProgressInfo
{
	TArray<class AController*>                         Player;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                                     Target;                                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              progress;                                                  // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              progressCheck;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                progressProbability;                                       // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WOG9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       IsSkillCheck;                                              // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bCanSkillCheck;                                            // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9CP[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              progressTime;                                              // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DoLongProgressTime;                                        // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BanSkilCheckTimer;                                         // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AController*>                         AI;                                                        // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HSHSurvivor.VentilatorCooldown
// 0x000C
struct FVentilatorCooldown
{
	int                                                Index;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Current;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
