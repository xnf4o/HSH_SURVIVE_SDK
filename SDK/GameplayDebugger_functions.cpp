// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled");

	AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor");

	AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            CategoryId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int CategoryId, bool bEnable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled");

	AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params params;
	params.CategoryId = CategoryId;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            ExtensionId                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            HandlerId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int ExtensionId, int HandlerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent");

	AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params params;
	params.ExtensionId = ExtensionId;
	params.HandlerId = HandlerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            CategoryId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            HandlerId                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int CategoryId, int HandlerId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent");

	AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params params;
	params.CategoryId = CategoryId;
	params.HandlerId = HandlerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
