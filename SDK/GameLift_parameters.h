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

// Function GameLift.GameLiftClientObject.ValidateMatchmakingRuleSet
struct UGameLiftClientObject_ValidateMatchmakingRuleSet_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FValidateMatchmakingRuleSetRequest          ValidateMatchmakingRuleSetRequest;                         // (Parm, NativeAccessSpecifierPublic)
	struct FValidateMatchmakingRuleSetResult           ValidateMatchmakingRuleSetResult;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateScript
struct UGameLiftClientObject_UpdateScript_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateScriptRequest                        UpdateScriptRequest;                                       // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateScriptResult                         UpdateScriptResult;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateRuntimeConfiguration
struct UGameLiftClientObject_UpdateRuntimeConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateRuntimeConfigurationRequest          UpdateRuntimeConfigurationRequest;                         // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateRuntimeConfigurationResult           UpdateRuntimeConfigurationResult;                          // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateMatchmakingConfiguration
struct UGameLiftClientObject_UpdateMatchmakingConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateMatchmakingConfigurationRequest      UpdateMatchmakingConfigurationRequest;                     // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateMatchmakingConfigurationResult       UpdateMatchmakingConfigurationResult;                      // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateGameSessionQueue
struct UGameLiftClientObject_UpdateGameSessionQueue_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionQueueRequest              UpdateGameSessionQueueRequest;                             // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionQueueResult               UpdateGameSessionQueueResult;                              // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateGameSession
struct UGameLiftClientObject_UpdateGameSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionRequest                   UpdateGameSessionRequest;                                  // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateGameSessionResult                    UpdateGameSessionResult;                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateFleetPortSettings
struct UGameLiftClientObject_UpdateFleetPortSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFleetPortSettingsRequest             UpdateFleetPortSettingsRequest;                            // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFleetPortSettingsResult              UpdateFleetPortSettingsResult;                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateFleetCapacity
struct UGameLiftClientObject_UpdateFleetCapacity_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFleetCapacityRequest                 UpdateFleetCapacityRequest;                                // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFleetCapacityResult                  UpdateFleetCapacityResult;                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateFleetAttributes
struct UGameLiftClientObject_UpdateFleetAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateFleetAttributesRequest               UpdateFleetAttributesRequest;                              // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateFleetAttributesResult                UpdateFleetAttributesResult;                               // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateBuild
struct UGameLiftClientObject_UpdateBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUpdateBuildRequest                         UpdateBuildRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FUpdateBuildResult                          UpdateBuildResult;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.UpdateAlias
struct UGameLiftClientObject_UpdateAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftUpdateAliasRequest                 updateAliasRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FGameLiftUpdateAliasResult                  updateAliasResult;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StopMatchmaking
struct UGameLiftClientObject_StopMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopMatchmakingRequest                     StopMatchmakingRequest;                                    // (Parm, NativeAccessSpecifierPublic)
	struct FStopMatchmakingResult                      StopMatchmakingResult;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StopGameSessionPlacement
struct UGameLiftClientObject_StopGameSessionPlacement_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopGameSessionPlacementRequest            StopGameSessionPlacementRequest;                           // (Parm, NativeAccessSpecifierPublic)
	struct FStopGameSessionPlacementResult             StopGameSessionPlacementResult;                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StopFleetActions
struct UGameLiftClientObject_StopFleetActions_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStopFleetActionsRequest                    StopFleetActionsRequest;                                   // (Parm, NativeAccessSpecifierPublic)
	struct FStopFleetActionsResult                     StopFleetActionsResult;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartMatchmaking
struct UGameLiftClientObject_StartMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartMatchmakingRequest                    StartMatchmakingRequest;                                   // (Parm, NativeAccessSpecifierPublic)
	struct FStartMatchmakingResult                     StartMatchmakingResult;                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartMatchBackfill
struct UGameLiftClientObject_StartMatchBackfill_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartMatchBackfillRequest                  StartMatchBackfillRequest;                                 // (Parm, NativeAccessSpecifierPublic)
	struct FStartMatchBackfillResult                   StartMatchBackfillResult;                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartGameSessionPlacement
struct UGameLiftClientObject_StartGameSessionPlacement_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartGameSessionPlacementRequest           StartGameSessionPlacementRequest;                          // (Parm, NativeAccessSpecifierPublic)
	struct FStartGameSessionPlacementResult            StartGameSessionPlacementResult;                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.StartFleetActions
struct UGameLiftClientObject_StartFleetActions_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStartFleetActionsRequest                   StartFleetActionsRequest;                                  // (Parm, NativeAccessSpecifierPublic)
	struct FStartFleetActionsResult                    StartFleetActionsResult;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.SearchGameSessions
struct UGameLiftClientObject_SearchGameSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSearchGameSessionsRequest                  SearchGameSessionsRequest;                                 // (Parm, NativeAccessSpecifierPublic)
	struct FSearchGameSessionsResult                   SearchGameSessionsResult;                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ResolveAlias
struct UGameLiftClientObject_ResolveAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FResolveAliasRequest                        ResolveAliasRequest;                                       // (Parm, NativeAccessSpecifierPublic)
	struct FResolveAliasResult                         ResolveAliasResult;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.RequestUploadCredentials
struct UGameLiftClientObject_RequestUploadCredentials_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRequestUploadCredentialsRequest            RequestUploadCredentialsRequest;                           // (Parm, NativeAccessSpecifierPublic)
	struct FRequestUploadCredentialsResult             RequestUploadCredentialsResult;                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.PutScalingPolicy
struct UGameLiftClientObject_PutScalingPolicy_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPutScalingPolicyRequest                    PutScalingPolicyRequest;                                   // (Parm, NativeAccessSpecifierPublic)
	struct FPutScalingPolicyResult                     PutScalingPolicyResult;                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListScripts
struct UGameLiftClientObject_ListScripts_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListScriptsRequest                         ListScriptsRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FListScriptsResult                          ListScriptsResult;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListFleets
struct UGameLiftClientObject_ListFleets_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListFleetsRequest                          ListFleetsRequest;                                         // (Parm, NativeAccessSpecifierPublic)
	struct FListFleetsResult                           ListFleetsResult;                                          // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListBuilds
struct UGameLiftClientObject_ListBuilds_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FListBuildsRequest                          ListBuildsRequest;                                         // (Parm, NativeAccessSpecifierPublic)
	struct FListBuildsResult                           ListBuildsResult;                                          // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.ListAliases
struct UGameLiftClientObject_ListAliases_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftListAliasesRequest                 listAliasesRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FGameLiftListAliasesResult                  listAliasesResult;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.GetServiceClientName
struct UGameLiftClientObject_GetServiceClientName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.GetInstanceAccess
struct UGameLiftClientObject_GetInstanceAccess_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetInstanceAccessRequest                   GetInstanceAccessRequest;                                  // (Parm, NativeAccessSpecifierPublic)
	struct FGetInstanceAccessResult                    GetInstanceAccessResult;                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.GetGameSessionLogUrl
struct UGameLiftClientObject_GetGameSessionLogUrl_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGetGameSessionLogUrlRequest                GetGameSessionLogUrlRequest;                               // (Parm, NativeAccessSpecifierPublic)
	struct FGetGameSessionLogUrlResult                 GetGameSessionLogUrlResult;                                // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeVpcPeeringConnections
struct UGameLiftClientObject_DescribeVpcPeeringConnections_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringConnectionsRequest       DescribeVpcPeeringConnectionsRequest;                      // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringConnectionsResult        DescribeVpcPeeringConnectionsResult;                       // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeVpcPeeringAuthorizations
struct UGameLiftClientObject_DescribeVpcPeeringAuthorizations_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringAuthorizationsRequest    DescribeVpcPeeringAuthorizationsRequest;                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDescribeVpcPeeringAuthorizationsResult     DescribeVpcPeeringAuthorizationsResult;                    // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeScript
struct UGameLiftClientObject_DescribeScript_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeScriptRequest                      DescribeScriptRequest;                                     // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeScriptResult                       DescribeScriptResult;                                      // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeScalingPolicies
struct UGameLiftClientObject_DescribeScalingPolicies_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeScalingPoliciesRequest             DescribeScalingPoliciesRequest;                            // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeScalingPoliciesResult              DescribeScalingPoliciesResult;                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeRuntimeConfiguration
struct UGameLiftClientObject_DescribeRuntimeConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeRuntimeConfigurationRequest        DescribeRuntimeConfigurationRequest;                       // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeRuntimeConfigurationResult         DescribeRuntimeConfigurationResult;                        // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribePlayerSessions
struct UGameLiftClientObject_DescribePlayerSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribePlayerSessionsRequest              DescribePlayerSessionsRequest;                             // (Parm, NativeAccessSpecifierPublic)
	struct FDescribePlayerSessionsResult               DescribePlayerSessionsResult;                              // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeMatchmakingRuleSets
struct UGameLiftClientObject_DescribeMatchmakingRuleSets_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingRuleSetsRequest         DescribeMatchmakingRuleSetsRequest;                        // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingRuleSetsResult          DescribeMatchmakingRuleSetsResult;                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeMatchmakingConfigurations
struct UGameLiftClientObject_DescribeMatchmakingConfigurations_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingConfigurationsRequest   DescribeMatchmakingConfigurationsRequest;                  // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingConfigurationsResult    DescribeMatchmakingConfigurationsResult;                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeMatchmaking
struct UGameLiftClientObject_DescribeMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingRequest                 DescribeMatchmakingRequest;                                // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeMatchmakingResult                  DescribeMatchmakingResult;                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeInstances
struct UGameLiftClientObject_DescribeInstances_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeInstancesRequest                   DescribeInstancesRequest;                                  // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeInstancesResult                    DescribeInstancesResult;                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessions
struct UGameLiftClientObject_DescribeGameSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionsRequest                DescribeGameSessionsRequest;                               // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionsResult                 DescribeGameSessionsResult;                                // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessionQueues
struct UGameLiftClientObject_DescribeGameSessionQueues_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionQueuesRequest           DescribeGameSessionQueuesRequest;                          // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionQueuesResult            DescribeGameSessionQueuesResult;                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessionPlacement
struct UGameLiftClientObject_DescribeGameSessionPlacement_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionPlacementRequest        DescribeGameSessionPlacementRequest;                       // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionPlacementResult         DescribeGameSessionPlacementResult;                        // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeGameSessionDetails
struct UGameLiftClientObject_DescribeGameSessionDetails_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionDetailsRequest          DescribeGameSessionDetailsRequest;                         // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeGameSessionDetailsResult           DescribeGameSessionDetailsResult;                          // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetUtilization
struct UGameLiftClientObject_DescribeFleetUtilization_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetUtilizationRequest            DescribeFleetUtilizationRequest;                           // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetUtilizationResult             DescribeFleetUtilizationResult;                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetPortSettings
struct UGameLiftClientObject_DescribeFleetPortSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetPortSettingsRequest           DescribeFleetPortSettingsRequest;                          // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetPortSettingsResult            DescribeFleetPortSettingsResult;                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetEvents
struct UGameLiftClientObject_DescribeFleetEvents_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetEventsRequest                 DescribeFleetEventsRequest;                                // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetEventsResult                  DescribeFleetEventsResult;                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetCapacity
struct UGameLiftClientObject_DescribeFleetCapacity_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetCapacityRequest               DescribeFleetCapacityRequest;                              // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetCapacityResult                DescribeFleetCapacityResult;                               // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeFleetAttributes
struct UGameLiftClientObject_DescribeFleetAttributes_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeFleetAttributesRequest             DescribeFleetAttributesRequest;                            // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeFleetAttributesResult              DescribeFleetAttributesResult;                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeEC2InstanceLimits
struct UGameLiftClientObject_DescribeEC2InstanceLimits_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeEC2InstanceLimitsRequest           DescribeEC2InstanceLimitsRequest;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDescribeEC2InstanceLimitsResult            DescribeEC2InstanceLimitsResult;                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeBuild
struct UGameLiftClientObject_DescribeBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeBuildRequest                       DescribeBuildRequest;                                      // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeBuildResult                        DescribeBuildResult;                                       // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DescribeAlias
struct UGameLiftClientObject_DescribeAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDescribeAliasRequest                       DescribeAliasRequest;                                      // (Parm, NativeAccessSpecifierPublic)
	struct FDescribeAliasResult                        DescribeAliasResult;                                       // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteVpcPeeringConnection
struct UGameLiftClientObject_DeleteVpcPeeringConnection_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringConnectionRequest          DeleteVpcPeeringConnectionRequest;                         // (Parm, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringConnectionResult           DeleteVpcPeeringConnectionResult;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteVpcPeeringAuthorization
struct UGameLiftClientObject_DeleteVpcPeeringAuthorization_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringAuthorizationRequest       DeleteVpcPeeringAuthorizationRequest;                      // (Parm, NativeAccessSpecifierPublic)
	struct FDeleteVpcPeeringAuthorizationResult        DeleteVpcPeeringAuthorizationResult;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteScript
struct UGameLiftClientObject_DeleteScript_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteScriptRequest                        DeleteScriptRequest;                                       // (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteScalingPolicy
struct UGameLiftClientObject_DeleteScalingPolicy_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteScalingPolicyRequest                 DeleteScalingPolicyRequest;                                // (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteMatchmakingRuleSet
struct UGameLiftClientObject_DeleteMatchmakingRuleSet_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingRuleSetRequest            DeleteMatchmakingRuleSetRequest;                           // (Parm, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingRuleSetResult             DeleteMatchmakingRuleSetResult;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteMatchmakingConfiguration
struct UGameLiftClientObject_DeleteMatchmakingConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingConfigurationRequest      DeleteMatchmakingConfigurationRequest;                     // (Parm, NativeAccessSpecifierPublic)
	struct FDeleteMatchmakingConfigurationResult       DeleteMatchmakingConfigurationResult;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteGameSessionQueue
struct UGameLiftClientObject_DeleteGameSessionQueue_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteGameSessionQueueRequest              DeleteGameSessionQueueRequest;                             // (Parm, NativeAccessSpecifierPublic)
	struct FDeleteGameSessionQueueResult               DeleteGameSessionQueueResult;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteFleet
struct UGameLiftClientObject_DeleteFleet_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteFleetRequest                         DeleteFleetRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteBuild
struct UGameLiftClientObject_DeleteBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDeleteBuildRequest                         DeleteBuildRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.DeleteAlias
struct UGameLiftClientObject_DeleteAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftDeleteAliasRequest                 deleteAliasRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateVpcPeeringConnection
struct UGameLiftClientObject_CreateVpcPeeringConnection_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringConnectionRequest          CreateVpcPeeringConnectionRequest;                         // (Parm, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringConnectionResult           CreateVpcPeeringConnectionResult;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateVpcPeeringAuthorization
struct UGameLiftClientObject_CreateVpcPeeringAuthorization_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringAuthorizationRequest       CreateVpcPeeringAuthorizationRequest;                      // (Parm, NativeAccessSpecifierPublic)
	struct FCreateVpcPeeringAuthorizationResult        CreateVpcPeeringAuthorizationResult;                       // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateScript
struct UGameLiftClientObject_CreateScript_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateScriptRequest                        CreateScriptRequest;                                       // (Parm, NativeAccessSpecifierPublic)
	struct FCreateScriptResult                         CreateScriptResult;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreatePlayerSessions
struct UGameLiftClientObject_CreatePlayerSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionsRequest                CreatePlayerSessionsRequest;                               // (Parm, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionsResult                 CreatePlayerSessionsResult;                                // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreatePlayerSession
struct UGameLiftClientObject_CreatePlayerSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionRequest                 CreatePlayerSessionRequest;                                // (Parm, NativeAccessSpecifierPublic)
	struct FCreatePlayerSessionResult                  CreatePlayerSessionResult;                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateMatchmakingRuleSet
struct UGameLiftClientObject_CreateMatchmakingRuleSet_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingRuleSetRequest            CreateMatchmakingRuleSetRequest;                           // (Parm, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingRuleSetResult             CreateMatchmakingRuleSetResult;                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateMatchmakingConfiguration
struct UGameLiftClientObject_CreateMatchmakingConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingConfigurationRequest      CreateMatchmakingConfigurationRequest;                     // (Parm, NativeAccessSpecifierPublic)
	struct FCreateMatchmakingConfigurationResult       CreateMatchmakingConfigurationResult;                      // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateGameSessionQueue
struct UGameLiftClientObject_CreateGameSessionQueue_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateGameSessionQueueRequest              CreateGameSessionQueueRequest;                             // (Parm, NativeAccessSpecifierPublic)
	struct FCreateGameSessionQueueResult               CreateGameSessionQueueResult;                              // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateGameSession
struct UGameLiftClientObject_CreateGameSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateGameSessionRequest                   CreateGameSessionRequest;                                  // (Parm, NativeAccessSpecifierPublic)
	struct FCreateGameSessionResult                    CreateGameSessionResult;                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateGameLiftObject
struct UGameLiftClientObject_CreateGameLiftObject_Params
{
	struct FAWSCredentials                             credentials;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAWSClientConfiguration                     clientConfiguration;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGameLiftClientObject*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateFleet
struct UGameLiftClientObject_CreateFleet_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateFleetRequest                         CreateFleetRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FCreateFleetResult                          CreateFleetResult;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateBuild
struct UGameLiftClientObject_CreateBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreateBuildRequest                         CreateBuildRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FCreateBuildResult                          CreateBuildResult;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.CreateAlias
struct UGameLiftClientObject_CreateAlias_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameLiftCreateAliasRequest                 createAliasRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FGameLiftCreateAliasResult                  createAliasResult;                                         // (Parm, OutParm, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftClientObject.AcceptMatch
struct UGameLiftClientObject_AcceptMatch_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAcceptMatchRequest                         AcceptMatchRequest;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FAcceptMatchResult                          AcceptMatchResult;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	GameLift_EGameLiftError                            errorType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLift.GameLiftUtils.IdentifyGameLiftARNType
struct UGameLiftUtils_IdentifyGameLiftARNType_Params
{
	struct FString                                     awsResourceName;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameLift_EGameLiftARNType                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
