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

// Enum Localization.ELocalizationTargetLoadingPolicy
enum class Localization_ELocalizationTargetLoadingPolicy : uint8_t
{
	ELocalizationTargetLoadingPolicy__Never = 0,
	ELocalizationTargetLoadingPolicy__Always = 1,
	ELocalizationTargetLoadingPolicy__Editor = 2,
	ELocalizationTargetLoadingPolicy__Game = 3,
	ELocalizationTargetLoadingPolicy__PropertyNames = 4,
	ELocalizationTargetLoadingPolicy__ToolTips = 5,
	ELocalizationTargetLoadingPolicy__ELocalizationTargetLoadingPolicy_MAX = 6,

};

// Enum Localization.ELocalizationGatherPathRoot
enum class Localization_ELocalizationGatherPathRoot : uint8_t
{
	ELocalizationGatherPathRoot__Auto = 0,
	ELocalizationGatherPathRoot__Engine = 1,
	ELocalizationGatherPathRoot__Project = 2,
	ELocalizationGatherPathRoot__ELocalizationGatherPathRoot_MAX = 3,

};

// Enum Localization.ELocalizationTargetConflictStatus
enum class Localization_ELocalizationTargetConflictStatus : uint8_t
{
	ELocalizationTargetConflictStatus__Unknown = 0,
	ELocalizationTargetConflictStatus__ConflictsPresent = 1,
	ELocalizationTargetConflictStatus__Clear = 2,
	ELocalizationTargetConflictStatus__ELocalizationTargetConflictStatus_MAX = 3,

};

// Enum Localization.ELocTextPlatformSplitMode
enum class Localization_ELocTextPlatformSplitMode : uint8_t
{
	ELocTextPlatformSplitMode__None = 0,
	ELocTextPlatformSplitMode__Restricted = 1,
	ELocTextPlatformSplitMode__All = 2,
	ELocTextPlatformSplitMode__ELocTextPlatformSplitMode_MAX = 3,

};

// Enum Localization.ELocalizedTextCollapseMode
enum class Localization_ELocalizedTextCollapseMode : uint8_t
{
	ELocalizedTextCollapseMode__IdenticalTextIdAndSource = 0,
	ELocalizedTextCollapseMode__IdenticalPackageIdTextIdAndSource = 1,
	ELocalizedTextCollapseMode__IdenticalNamespaceAndSource = 2,
	ELocalizedTextCollapseMode__ELocalizedTextCollapseMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Localization.MetaDataTextKeyPattern
// 0x0010
struct FMetaDataTextKeyPattern
{
	struct FString                                     Pattern;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.MetaDataKeyName
// 0x0010
struct FMetaDataKeyName
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.GatherTextExcludePath
// 0x0018
struct FGatherTextExcludePath
{
	Localization_ELocalizationGatherPathRoot           PathRoot;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0U4T[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Pattern;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.LocalizationCompilationSettings
// 0x0001
struct FLocalizationCompilationSettings
{
	bool                                               SkipSourceCheck;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.LocalizationExportingSettings
// 0x0003
struct FLocalizationExportingSettings
{
	Localization_ELocalizedTextCollapseMode            CollapseMode;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldPersistCommentsOnExport;                             // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldAddSourceLocationsAsComments;                        // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.MetaDataKeyGatherSpecification
// 0x0030
struct FMetaDataKeyGatherSpecification
{
	struct FMetaDataKeyName                            MetaDataKey;                                               // 0x0000(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     TextNamespace;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetaDataTextKeyPattern                     TextKeyPattern;                                            // 0x0020(0x0010) (Edit, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.GatherTextIncludePath
// 0x0018
struct FGatherTextIncludePath
{
	Localization_ELocalizationGatherPathRoot           PathRoot;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SAHT[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Pattern;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.GatherTextFromMetaDataConfiguration
// 0x0040
struct FGatherTextFromMetaDataConfiguration
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AR6R[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGatherTextIncludePath>              IncludePathWildcards;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextExcludePath>              ExcludePathWildcards;                                      // 0x0018(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FMetaDataKeyGatherSpecification>     KeySpecifications;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               ShouldGatherFromEditorOnlyData;                            // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CE01[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Localization.GatherTextFileExtension
// 0x0010
struct FGatherTextFileExtension
{
	struct FString                                     Pattern;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.GatherTextFromPackagesConfiguration
// 0x0050
struct FGatherTextFromPackagesConfiguration
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7UDX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGatherTextIncludePath>              IncludePathWildcards;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextExcludePath>              ExcludePathWildcards;                                      // 0x0018(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextFileExtension>            FileExtensions;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Collections;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               ShouldGatherFromEditorOnlyData;                            // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SkipGatherCache;                                           // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2IB[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Localization.GatherTextSearchDirectory
// 0x0018
struct FGatherTextSearchDirectory
{
	Localization_ELocalizationGatherPathRoot           PathRoot;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ZD9[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Path;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Localization.GatherTextFromTextFilesConfiguration
// 0x0040
struct FGatherTextFromTextFilesConfiguration
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MEJ7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGatherTextSearchDirectory>          SearchDirectories;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextExcludePath>              ExcludePathWildcards;                                      // 0x0018(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGatherTextFileExtension>            FileExtensions;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               ShouldGatherFromEditorOnlyData;                            // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_921S[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Localization.LocalizationImportDialogueSettings
// 0x0028
struct FLocalizationImportDialogueSettings
{
	struct FDirectoryPath                              RawAudioPath;                                              // 0x0000(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     ImportedDialogueFolder;                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportNativeAsSource;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BCVF[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Localization.CultureStatistics
// 0x0018
struct FCultureStatistics
{
	struct FString                                     CultureName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           WordCount;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QXDK[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Localization.LocalizationTargetSettings
// 0x0170
struct FLocalizationTargetSettings
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       Guid;                                                      // 0x0010(0x0010) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Localization_ELocalizationTargetConflictStatus     ConflictStatus;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PQU8[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGuid>                               TargetDependencies;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FFilePath>                           AdditionalManifestDependencies;                            // 0x0038(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredModuleNames;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGatherTextFromTextFilesConfiguration       GatherFromTextFiles;                                       // 0x0058(0x0040) (Edit, Config, NativeAccessSpecifierPublic)
	struct FGatherTextFromPackagesConfiguration        GatherFromPackages;                                        // 0x0098(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	struct FGatherTextFromMetaDataConfiguration        GatherFromMetaData;                                        // 0x00E8(0x0040) (Edit, Config, NativeAccessSpecifierPublic)
	struct FLocalizationExportingSettings              ExportSettings;                                            // 0x0128(0x0003) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FLocalizationCompilationSettings            CompileSettings;                                           // 0x012B(0x0001) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KK4V[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLocalizationImportDialogueSettings         ImportDialogueSettings;                                    // 0x0130(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	int                                                NativeCultureIndex;                                        // 0x0158(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GMHF[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCultureStatistics>                  SupportedCulturesStatistics;                               // 0x0160(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
