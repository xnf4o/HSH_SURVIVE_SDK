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

// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Refresh
struct UIngame_ItemDecription_C_Refresh_Params
{
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Tick
struct UIngame_ItemDecription_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Activate
struct UIngame_ItemDecription_C_Activate_Params
{
};

// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Deactivate
struct UIngame_ItemDecription_C_Deactivate_Params
{
};

// Function Ingame_ItemDecription.Ingame_ItemDecription_C.Construct
struct UIngame_ItemDecription_C_Construct_Params
{
};

// Function Ingame_ItemDecription.Ingame_ItemDecription_C.ExecuteUbergraph_Ingame_ItemDecription
struct UIngame_ItemDecription_C_ExecuteUbergraph_Ingame_ItemDecription_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
