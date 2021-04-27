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
// Enums
//---------------------------------------------------------------------------

// Enum GameAnalytics.EGAGender
enum class GameAnalytics_EGAGender : uint8_t
{
	EGAGender__undefined           = 0,
	EGAGender__male                = 1,
	EGAGender__female              = 2,
	EGAGender__EGAGender_MAX       = 3,

};

// Enum GameAnalytics.EGAErrorSeverity
enum class GameAnalytics_EGAErrorSeverity : uint8_t
{
	EGAErrorSeverity__undefined    = 0,
	EGAErrorSeverity__debug        = 1,
	EGAErrorSeverity__info         = 2,
	EGAErrorSeverity__warning      = 3,
	EGAErrorSeverity__error        = 4,
	EGAErrorSeverity__critical     = 5,
	EGAErrorSeverity__EGAErrorSeverity_MAX = 6,

};

// Enum GameAnalytics.EGAProgressionStatus
enum class GameAnalytics_EGAProgressionStatus : uint8_t
{
	EGAProgressionStatus__undefined = 0,
	EGAProgressionStatus__start    = 1,
	EGAProgressionStatus__complete = 2,
	EGAProgressionStatus__fail     = 3,
	EGAProgressionStatus__EGAProgressionStatus_MAX = 4,

};

// Enum GameAnalytics.EGAResourceFlowType
enum class GameAnalytics_EGAResourceFlowType : uint8_t
{
	EGAResourceFlowType__undefined = 0,
	EGAResourceFlowType__source    = 1,
	EGAResourceFlowType__sink      = 2,
	EGAResourceFlowType__EGAResourceFlowType_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
