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

// Function SaveGameManager.SaveGameManager_C.GetOptionGraphics
struct USaveGameManager_C_GetOptionGraphics_Params
{
	class UOptionGraphicsSaveGame_C*                   OptionGraphics;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SaveGameManager.SaveGameManager_C.LoadGame
struct USaveGameManager_C_LoadGame_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ExtraName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                      SaveGameClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CreateNew;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SaveGameManager.SaveGameManager_C.SaveGame
struct USaveGameManager_C_SaveGame_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ExtraName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class USaveGame*                                   SaveGameObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SaveSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CreateNew;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SaveGameManager.SaveGameManager_C.GetOptionDisplay
struct USaveGameManager_C_GetOptionDisplay_Params
{
	class UOptionDisplaySaveGame_C*                    OptionDisplay;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SaveGameManager.SaveGameManager_C.DefaultOptionDisplay
struct USaveGameManager_C_DefaultOptionDisplay_Params
{
};

// Function SaveGameManager.SaveGameManager_C.SaveOptionAudio
struct USaveGameManager_C_SaveOptionAudio_Params
{
};

// Function SaveGameManager.SaveGameManager_C.LoadOptionAudio
struct USaveGameManager_C_LoadOptionAudio_Params
{
};

// Function SaveGameManager.SaveGameManager_C.DefaultOptionAudio
struct USaveGameManager_C_DefaultOptionAudio_Params
{
};

// Function SaveGameManager.SaveGameManager_C.SaveOptionGraphics
struct USaveGameManager_C_SaveOptionGraphics_Params
{
};

// Function SaveGameManager.SaveGameManager_C.LoadOptionGraphics
struct USaveGameManager_C_LoadOptionGraphics_Params
{
};

// Function SaveGameManager.SaveGameManager_C.DefaultOptionGraphics
struct USaveGameManager_C_DefaultOptionGraphics_Params
{
};

// Function SaveGameManager.SaveGameManager_C.LoadOptionDisplay
struct USaveGameManager_C_LoadOptionDisplay_Params
{
};

// Function SaveGameManager.SaveGameManager_C.SaveOptionControl
struct USaveGameManager_C_SaveOptionControl_Params
{
};

// Function SaveGameManager.SaveGameManager_C.LoadOptionControl
struct USaveGameManager_C_LoadOptionControl_Params
{
};

// Function SaveGameManager.SaveGameManager_C.DefaultOptionControl
struct USaveGameManager_C_DefaultOptionControl_Params
{
};

// Function SaveGameManager.SaveGameManager_C.SaveOptionDisplay
struct USaveGameManager_C_SaveOptionDisplay_Params
{
};

// Function SaveGameManager.SaveGameManager_C.SaveTutorial
struct USaveGameManager_C_SaveTutorial_Params
{
};

// Function SaveGameManager.SaveGameManager_C.LoadTutorial
struct USaveGameManager_C_LoadTutorial_Params
{
};

// Function SaveGameManager.SaveGameManager_C.DefualtTutorial
struct USaveGameManager_C_DefualtTutorial_Params
{
};

// Function SaveGameManager.SaveGameManager_C.SaveOptionSystem
struct USaveGameManager_C_SaveOptionSystem_Params
{
};

// Function SaveGameManager.SaveGameManager_C.LoadOptionSystem
struct USaveGameManager_C_LoadOptionSystem_Params
{
};

// Function SaveGameManager.SaveGameManager_C.DefaultOptionSystem
struct USaveGameManager_C_DefaultOptionSystem_Params
{
};

// Function SaveGameManager.SaveGameManager_C.Initialize
struct USaveGameManager_C_Initialize_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SaveGameManager.SaveGameManager_C.SaveAnnouncement
struct USaveGameManager_C_SaveAnnouncement_Params
{
};

// Function SaveGameManager.SaveGameManager_C.LoadAnnouncement
struct USaveGameManager_C_LoadAnnouncement_Params
{
};

// Function SaveGameManager.SaveGameManager_C.DefaultAnnouncement
struct USaveGameManager_C_DefaultAnnouncement_Params
{
};

// Function SaveGameManager.SaveGameManager_C.ExecuteUbergraph_SaveGameManager
struct USaveGameManager_C_ExecuteUbergraph_SaveGameManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SaveGameManager.SaveGameManager_C.OnInitialize__DelegateSignature
struct USaveGameManager_C_OnInitialize__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
