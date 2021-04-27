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

// Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.ReceiveBeginPlay
struct UHSURLobbyCameraManagerComponent_C_ReceiveBeginPlay_Params
{
};

// Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.BlendCamera
struct UHSURLobbyCameraManagerComponent_C_BlendCamera_Params
{
	bool                                               IsOnCharacterSetting_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Role_E_Role>                         Move_to_Camera_Role;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockOutgoing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURLobbyCameraManagerComponent.HSURLobbyCameraManagerComponent_C.ExecuteUbergraph_HSURLobbyCameraManagerComponent
struct UHSURLobbyCameraManagerComponent_C_ExecuteUbergraph_HSURLobbyCameraManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
