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

// Enum GameplayDebugger.EGameplayDebuggerOverrideMode
enum class GameplayDebugger_EGameplayDebuggerOverrideMode : uint8_t
{
	EGameplayDebuggerOverrideMode__Enable = 0,
	EGameplayDebuggerOverrideMode__Disable = 1,
	EGameplayDebuggerOverrideMode__UseDefault = 2,
	EGameplayDebuggerOverrideMode__EGameplayDebuggerOverrideMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayDebugger.GameplayDebuggerInputConfig
// 0x0030
struct FGameplayDebuggerInputConfig
{
	struct FString                                     ConfigName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0010(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bModShift : 1;                                             // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bModCtrl : 1;                                              // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bModAlt : 1;                                               // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bModCmd : 1;                                               // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F3E9[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryConfig
// 0x0030
struct FGameplayDebuggerCategoryConfig
{
	struct FString                                     CategoryName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotIdx;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayDebugger_EGameplayDebuggerOverrideMode     ActiveInGame;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayDebugger_EGameplayDebuggerOverrideMode     ActiveInSimulate;                                          // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayDebugger_EGameplayDebuggerOverrideMode     Hidden;                                                    // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BD71[0x1];                                     // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverrideSlotIdx : 1;                                      // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VR2M[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayDebuggerInputConfig>        InputHandlers;                                             // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayDebugger.GameplayDebuggerNetPack
// 0x0018
struct FGameplayDebuggerNetPack
{
	unsigned char                                      UnknownData_SBSZ[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayDebugger.GameplayDebuggerDebugActor
// 0x0018
struct FGameplayDebuggerDebugActor
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActorName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SyncCounter;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AHXC[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayDebugger.GameplayDebuggerExtensionConfig
// 0x0028
struct FGameplayDebuggerExtensionConfig
{
	struct FString                                     ExtensionName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayDebugger_EGameplayDebuggerOverrideMode     UseExtension;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VFZ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayDebuggerInputConfig>        InputHandlers;                                             // 0x0018(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayDebugger.GameplayDebuggerPlayerData
// 0x0018
struct FGameplayDebuggerPlayerData
{
	class UGameplayDebuggerLocalController*            Controller;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputComponent*                             InputComponent;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayDebuggerCategoryReplicator*         Replicator;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
