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

// Function GA_Camera.GA_Camera_C.UpdateItem
struct UGA_Camera_C_UpdateItem_Params
{
};

// Function GA_Camera.GA_Camera_C.EventReceived_7A287AA14C8797A7DF3155A6F43A3133
struct UGA_Camera_C_EventReceived_7A287AA14C8797A7DF3155A6F43A3133_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Camera.GA_Camera_C.OnCancelled_7A287AA14C8797A7DF3155A6F43A3133
struct UGA_Camera_C_OnCancelled_7A287AA14C8797A7DF3155A6F43A3133_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Camera.GA_Camera_C.OnInterrupted_7A287AA14C8797A7DF3155A6F43A3133
struct UGA_Camera_C_OnInterrupted_7A287AA14C8797A7DF3155A6F43A3133_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Camera.GA_Camera_C.OnBlendOut_7A287AA14C8797A7DF3155A6F43A3133
struct UGA_Camera_C_OnBlendOut_7A287AA14C8797A7DF3155A6F43A3133_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Camera.GA_Camera_C.OnCompleted_7A287AA14C8797A7DF3155A6F43A3133
struct UGA_Camera_C_OnCompleted_7A287AA14C8797A7DF3155A6F43A3133_Params
{
	struct FGameplayTag                                EventTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Camera.GA_Camera_C.K2_ActivateAbility
struct UGA_Camera_C_K2_ActivateAbility_Params
{
};

// Function GA_Camera.GA_Camera_C.K2_OnEndAbility
struct UGA_Camera_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Camera.GA_Camera_C.ExecuteUbergraph_GA_Camera
struct UGA_Camera_C_ExecuteUbergraph_GA_Camera_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
