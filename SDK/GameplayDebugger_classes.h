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

// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
// 0x0070 (FullSize[0x03A8] - InheritedSize[0x0338])
class AGameplayDebuggerCategoryReplicator : public AActor
{
public:
	class APlayerController*                           OwnerPC;                                                   // 0x0338(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsEnabled;                                                // 0x0340(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0AIJ[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayDebuggerNetPack                    ReplicatedData;                                            // 0x0348(0x0018) (Net, Protected, NativeAccessSpecifierProtected)
	struct FGameplayDebuggerDebugActor                 DebugActor;                                                // 0x0360(0x0018) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UGameplayDebuggerRenderingComponent*         RenderingComp;                                             // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RVNE[0x28];                                    // 0x0380(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayDebugger.GameplayDebuggerCategoryReplicator");
		return ptr;
	}



	void ServerSetEnabled(bool bEnable);
	void ServerSetDebugActor(class AActor* Actor);
	void ServerSetCategoryEnabled(int CategoryId, bool bEnable);
	void ServerSendExtensionInputEvent(int ExtensionId, int HandlerId);
	void ServerSendCategoryInputEvent(int CategoryId, int HandlerId);
};

// Class GameplayDebugger.GameplayDebuggerConfig
// 0x0228 (FullSize[0x0258] - InheritedSize[0x0030])
class UGameplayDebuggerConfig : public UObject
{
public:
	struct FKey                                        ActivationKey;                                             // 0x0030(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategoryRowNextKey;                                        // 0x0048(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategoryRowPrevKey;                                        // 0x0060(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot0;                                             // 0x0078(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot1;                                             // 0x0090(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot2;                                             // 0x00A8(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot3;                                             // 0x00C0(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot4;                                             // 0x00D8(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot5;                                             // 0x00F0(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot6;                                             // 0x0108(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot7;                                             // 0x0120(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot8;                                             // 0x0138(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        CategorySlot9;                                             // 0x0150(0x0018) (Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugCanvasPaddingLeft;                                    // 0x0168(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugCanvasPaddingRight;                                   // 0x016C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugCanvasPaddingTop;                                     // 0x0170(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugCanvasPaddingBottom;                                  // 0x0174(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerCategoryConfig>     Categories;                                                // 0x0178(0x0010) (Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerExtensionConfig>    Extensions;                                                // 0x0188(0x0010) (Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_26BV[0xC0];                                    // 0x0198(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayDebugger.GameplayDebuggerConfig");
		return ptr;
	}



};

// Class GameplayDebugger.GameplayDebuggerLocalController
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UGameplayDebuggerLocalController : public UObject
{
public:
	class AGameplayDebuggerCategoryReplicator*         CachedReplicator;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayDebuggerPlayerManager*              CachedPlayerManager;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      DebugActorCandidate;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VJ4Y[0xF8];                                    // 0x0048(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayDebugger.GameplayDebuggerLocalController");
		return ptr;
	}



};

// Class GameplayDebugger.GameplayDebuggerPlayerManager
// 0x0028 (FullSize[0x0360] - InheritedSize[0x0338])
class AGameplayDebuggerPlayerManager : public AActor
{
public:
	TArray<struct FGameplayDebuggerPlayerData>         playerData;                                                // 0x0338(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;                                      // 0x0348(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6W0L[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayDebugger.GameplayDebuggerPlayerManager");
		return ptr;
	}



};

// Class GameplayDebugger.GameplayDebuggerRenderingComponent
// 0x0068 (FullSize[0x05E0] - InheritedSize[0x0578])
class UGameplayDebuggerRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_E6SC[0x8];                                     // 0x0578(0x0008) Fix Super Size
	unsigned char                                      UnknownData_00S6[0x60];                                    // 0x0580(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayDebugger.GameplayDebuggerRenderingComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
