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

// Function HSURPlayerState.HSURPlayerState_C.GetCharacterIcon
struct AHSURPlayerState_C_GetCharacterIcon_Params
{
	struct FSlateBrush                                 CharacterIcon;                                             // (Parm, OutParm)
};

// Function HSURPlayerState.HSURPlayerState_C.OnRep_PlayerCharacterClass
struct AHSURPlayerState_C_OnRep_PlayerCharacterClass_Params
{
};

// Function HSURPlayerState.HSURPlayerState_C.GetStatusImage
struct AHSURPlayerState_C_GetStatusImage_Params
{
	class UTexture2D*                                  NormalStatusImage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  SoulStatusImage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURPlayerState.HSURPlayerState_C.ReceiveDestroyed
struct AHSURPlayerState_C_ReceiveDestroyed_Params
{
};

// Function HSURPlayerState.HSURPlayerState_C.SettingStatusImage
struct AHSURPlayerState_C_SettingStatusImage_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 CharacterIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HSURPlayerState.HSURPlayerState_C.ExecuteUbergraph_HSURPlayerState
struct AHSURPlayerState_C_ExecuteUbergraph_HSURPlayerState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
