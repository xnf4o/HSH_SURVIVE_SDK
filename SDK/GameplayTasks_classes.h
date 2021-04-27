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

// Class GameplayTasks.GameplayTasksComponent
// 0x0070 (FullSize[0x0170] - InheritedSize[0x0100])
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_X574[0xC];                                     // 0x0100(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      UnknownData_CIMH : 1;                                      // 0x010C(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bIsNetDirty : 1;                                           // 0x010C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RGE9[0x3];                                     // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayTask*>                       SimulatedTasks;                                            // 0x0110(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                         // 0x0120(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EGX0[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayTask*>                       TickingTasks;                                              // 0x0140(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       KnownTasks;                                                // 0x0150(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                  // 0x0160(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}



	void OnRep_SimulatedTasks();
	GameplayTasks_EGameplayTaskRunResult STATIC_K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};

// Class GameplayTasks.GameplayTask
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData_FMG7[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       InstanceName;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KGLS[0x2];                                     // 0x0040(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	GameplayTasks_ETaskResourceOverlapPolicy           ResourceOverlapPolicy;                                     // 0x0042(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MKP9[0x25];                                    // 0x0043(0x0025) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameplayTask*                               ChildTask;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JR7B[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}



	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}



	class UGameplayTask_ClaimResource* STATIC_ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);
	class UGameplayTask_ClaimResource* STATIC_ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);
};

// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                   // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                               // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91Y4[0x18];                                    // 0x00A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ClassToSpawn;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}



	class UGameplayTask_SpawnActor* STATIC_SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                             // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_36GJ[0x10];                                    // 0x00A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}



};

// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9Z0[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}



	class UGameplayTask_WaitDelay* STATIC_TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameplayTaskOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}



};

// Class GameplayTasks.GameplayTaskResource
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             AutoResourceID;                                            // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BP6L[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bManuallySetID : 1;                                        // 0x0038(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4WTB[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
