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

// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
struct AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
struct AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
struct AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params
{
	int                                                CategoryId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
struct AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params
{
	int                                                ExtensionId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HandlerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
struct AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params
{
	int                                                CategoryId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HandlerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
