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

// Function InteractFunctionLibrary.InteractFunctionLibrary_C.FormatDescriptionWeapon
struct UInteractFunctionLibrary_C_FormatDescriptionWeapon_Params
{
	struct FText                                       InText;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Return;                                                    // (Parm, OutParm)
};

// Function InteractFunctionLibrary.InteractFunctionLibrary_C.FormatDescriptionWeaponState
struct UInteractFunctionLibrary_C_FormatDescriptionWeaponState_Params
{
	struct FText                                       InText;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Return;                                                    // (Parm, OutParm)
};

// Function InteractFunctionLibrary.InteractFunctionLibrary_C.IsCanUseItem
struct UInteractFunctionLibrary_C_IsCanUseItem_Params
{
	class UClass*                                      Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanUse;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       NotifyText;                                                // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
