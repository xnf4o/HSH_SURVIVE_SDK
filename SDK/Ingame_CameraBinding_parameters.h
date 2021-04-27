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

// Function Ingame_CameraBinding.Ingame_CameraBinding_C.OnStatusApply
struct UIngame_CameraBinding_C_OnStatusApply_Params
{
};

// Function Ingame_CameraBinding.Ingame_CameraBinding_C.Tick
struct UIngame_CameraBinding_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_CameraBinding.Ingame_CameraBinding_C.Construct
struct UIngame_CameraBinding_C_Construct_Params
{
};

// Function Ingame_CameraBinding.Ingame_CameraBinding_C.ExecuteUbergraph_Ingame_CameraBinding
struct UIngame_CameraBinding_C_ExecuteUbergraph_Ingame_CameraBinding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
