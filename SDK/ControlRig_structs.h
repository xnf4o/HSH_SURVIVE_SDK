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

// Enum ControlRig.ERigExecutionType
enum class ControlRig_ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime     = 0,
	ERigExecutionType__Editing     = 1,
	ERigExecutionType__Max         = 2,

};

// Enum ControlRig.EControlRigOpCode
enum class ControlRig_EControlRigOpCode : uint8_t
{
	EControlRigOpCode__Done        = 0,
	EControlRigOpCode__Copy        = 1,
	EControlRigOpCode__Exec        = 2,
	EControlRigOpCode__Invalid     = 3,
	EControlRigOpCode__EControlRigOpCode_MAX = 4,

};

// Enum ControlRig.ETransformGetterType
enum class ControlRig_ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial  = 0,
	ETransformGetterType__Current  = 1,
	ETransformGetterType__Max      = 2,

};

// Enum ControlRig.ETransformSpaceMode
enum class ControlRig_ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace = 0,
	ETransformSpaceMode__GlobalSpace = 1,
	ETransformSpaceMode__BaseSpace = 2,
	ETransformSpaceMode__BaseJoint = 3,
	ETransformSpaceMode__Max       = 4,

};

// Enum ControlRig.EUnitExecutionType
enum class ControlRig_EUnitExecutionType : uint8_t
{
	EUnitExecutionType__Always     = 0,
	EUnitExecutionType__InEditingTime = 1,
	EUnitExecutionType__Disable    = 2,
	EUnitExecutionType__Max        = 3,

};

// Enum ControlRig.EAimMode
enum class ControlRig_EAimMode : uint8_t
{
	EAimMode__AimAtTarget          = 0,
	EAimMode__OrientToTarget       = 1,
	EAimMode__MAX                  = 2,

};

// Enum ControlRig.EApplyTransformMode
enum class ControlRig_EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override  = 0,
	EApplyTransformMode__Additive  = 1,
	EApplyTransformMode__Max       = 2,

};

// Enum ControlRig.EControlRigState
enum class ControlRig_EControlRigState : uint8_t
{
	EControlRigState__Init         = 0,
	EControlRigState__Update       = 1,
	EControlRigState__Invalid      = 2,
	EControlRigState__EControlRigState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ControlRig.RigHierarchyRef
// 0x0018
struct FRigHierarchyRef
{
	unsigned char                                      UnknownData_RRYT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseBaseHierarchy;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_61SM[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VZ83[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit
// 0x0020
struct FRigUnit
{
	unsigned char                                      UnknownData_VI3Q[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RigUnitName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RigUnitStructName;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ControlRig_EUnitExecutionType                      ExecutionType;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MEEP[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_FABRIK
// 0x0048 (0x0068 - 0x0020)
struct FRigUnit_FABRIK : public FRigUnit
{
	struct FRigHierarchyRef                            HierarchyRef;                                              // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       StartJoint;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EndJoint;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Precision;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BYPS[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_Clamp_Float : public FRigUnit
{
	float                                              Value;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Min;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Result;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
	float                                              Argument0;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Argument1;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Result;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9FK[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_GetJointTransform : public FRigUnit
{
	struct FRigHierarchyRef                            HierarchyRef;                                              // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Joint;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ControlRig_ETransformGetterType                    Type;                                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ControlRig_ETransformSpaceMode                     TransformSpace;                                            // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2W7W[0xE];                                     // 0x0042(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  BaseTransform;                                             // 0x0050(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       BaseJoint;                                                 // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BIL[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Output;                                                    // 0x0090(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_MergeHierarchy
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MergeHierarchy : public FRigUnit
{
	struct FRigHierarchyRef                            TargetHierarchy;                                           // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRigHierarchyRef                            SourceHierarchy;                                           // 0x0038(0x0018) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                      // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXOF[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Argument;                                                  // 0x0030(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L2T2[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                      // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                    // 0x0030(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
	struct FQuat                                       Argument;                                                  // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Axis;                                                      // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
// 0x0170 (0x0A40 - 0x08D0)
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
	unsigned char                                      UnknownData_UWGX[0x170];                                   // 0x08D0(0x0170) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigJoint
// 0x00C0
struct FRigJoint
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParentName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParentIndex;                                               // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SN3N[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x0020(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  GlobalTransform;                                           // 0x0050(0x0030) (Edit, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  LocalTransform;                                            // 0x0080(0x0030) (Edit, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Dependents;                                                // 0x00B0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigHierarchy
// 0x0060
struct FRigHierarchy
{
	TArray<struct FRigJoint>                           Joints;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            NameToIndexMapping;                                        // 0x0010(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigHierarchyContainer
// 0x00C0
struct FRigHierarchyContainer
{
	unsigned char                                      UnknownData_7AFN[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRigHierarchy                               BaseHierarchy;                                             // 0x0060(0x0060) (NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// 0x00D0 (0x00D8 - 0x0008)
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
	bool                                               bAdditive;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyBoneFilter;                                          // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_39QM[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputBlendPose                             BoneFilter;                                                // 0x0010(0x0010) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Weight;                                                    // 0x0020(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneEvaluationOperand                Operand;                                                   // 0x00C0(0x0014) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGHD[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.AimTarget
// 0x0050
struct FAimTarget
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DRP6[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AlignVector;                                               // 0x0040(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWNC[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_AimConstraint
// 0x0070 (0x0090 - 0x0020)
struct FRigUnit_AimConstraint : public FRigUnit
{
	struct FRigHierarchyRef                            HierarchyRef;                                              // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FName                                       Joint;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ControlRig_EAimMode                                AimMode;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ControlRig_EAimMode                                UpMode;                                                    // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GHBG[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AimVector;                                                 // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     UpVector;                                                  // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JSOF[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAimTarget>                          AimTargets;                                                // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAimTarget>                          UpTargets;                                                 // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_56VF[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_ApplyFK
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_ApplyFK : public FRigUnit
{
	struct FRigHierarchyRef                            HierarchyRef;                                              // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Joint;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransformFilter                            Filter;                                                    // 0x0070(0x0009) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	ControlRig_EApplyTransformMode                     ApplyTransformMode;                                        // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ControlRig_ETransformSpaceMode                     ApplyTransformSpace;                                       // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HVOC[0x5];                                     // 0x007B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  BaseTransform;                                             // 0x0080(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       BaseJoint;                                                 // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMTJ[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
	struct FQuat                                       Argument;                                                  // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                    // 0x0030(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
	struct FQuat                                       Argument0;                                                 // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       Argument1;                                                 // 0x0030(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       Result;                                                    // 0x0040(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
	struct FTransform                                  Argument0;                                                 // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Argument1;                                                 // 0x0050(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                    // 0x0080(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// 0x0000 (0x00B0 - 0x00B0)
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// 0x0000 (0x00B0 - 0x00B0)
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.ConstraintTarget
// 0x0040
struct FConstraintTarget
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaintainOffset;                                           // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                            Filter;                                                    // 0x0035(0x0009) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XQKP[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
// 0x00E0 (0x0100 - 0x0020)
struct FRigUnit_TransformConstraint : public FRigUnit
{
	struct FRigHierarchyRef                            HierarchyRef;                                              // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Joint;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ControlRig_ETransformSpaceMode                     BaseTransformSpace;                                        // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5HBM[0xF];                                     // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  BaseTransform;                                             // 0x0050(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       BaseJoint;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConstraintTarget>                   Targets;                                                   // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U2WJ[0x68];                                    // 0x0098(0x0068) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// 0x01D0 (0x01F0 - 0x0020)
struct FRigUnit_TwoBoneIKFK : public FRigUnit
{
	struct FRigHierarchyRef                            HierarchyRef;                                              // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       StartJoint;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EndJoint;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePoleTarget;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_67OL[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PoleTarget;                                                // 0x004C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spin;                                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ASP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  EndEffector;                                               // 0x0060(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              IKBlend;                                                   // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8WO[0xC];                                     // 0x0094(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  StartJointFKTransform;                                     // 0x00A0(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MidJointFKTransform;                                       // 0x00D0(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  EndJointFKTransform;                                       // 0x0100(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R1OP[0xC0];                                    // 0x0130(0x00C0) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
	struct FVector                                     Argument0;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Argument1;                                                 // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Result;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8O76[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
	struct FVector                                     Argument0;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Argument1;                                                 // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                    // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2UG8[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.BlendTarget
// 0x0040
struct FBlendTarget
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9CD9[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_BlendTransform
// 0x0070 (0x0090 - 0x0020)
struct FRigUnit_BlendTransform : public FRigUnit
{
	struct FTransform                                  Source;                                                    // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBlendTarget>                        Targets;                                                   // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                    // 0x0060(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_Control
// 0x00D0 (0x00F0 - 0x0020)
struct FRigUnit_Control : public FRigUnit
{
	struct FEulerTransform                             Transform;                                                 // 0x0020(0x0024) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z348[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Base;                                                      // 0x0050(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  InitTransform;                                             // 0x0080(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Result;                                                    // 0x00B0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransformFilter                            Filter;                                                    // 0x00E0(0x0009) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WX5O[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// 0x0000 (0x00F0 - 0x00F0)
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{

};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
	struct FQuat                                       Input;                                                     // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     TwistAxis;                                                 // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0909[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Swing;                                                     // 0x0040(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       Twist;                                                     // 0x0050(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
	struct FQuat                                       Input;                                                     // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                    // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9Y06[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
	struct FRotator                                    Input;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Result;                                                    // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
	struct FVector                                     Input;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFTO[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Result;                                                    // 0x0030(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
	struct FVector                                     Input;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Result;                                                    // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
	struct FQuat                                       Input;                                                     // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Result;                                                    // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4A2G[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertRotation : public FRigUnit
{
	struct FRotator                                    Input;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZGPX[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Result;                                                    // 0x0030(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
	struct FEulerTransform                             Input;                                                     // 0x0020(0x0024) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AYHC[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Result;                                                    // 0x0050(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_ConvertTransform : public FRigUnit
{
	struct FTransform                                  Input;                                                     // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEulerTransform                             Result;                                                    // 0x0050(0x0024) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Z5P[0xC];                                     // 0x0074(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnit_CreateHierarchy
// 0x0038 (0x0058 - 0x0020)
struct FRigUnit_CreateHierarchy : public FRigUnit
{
	struct FRigHierarchyRef                            NewHierarchy;                                              // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRigHierarchyRef                            SourceHierarchy;                                           // 0x0038(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Root;                                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.StructReference
// 0x0008
struct FStructReference
{
	unsigned char                                      UnknownData_J72I[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.RigUnitReference_Example
// 0x0000 (0x0008 - 0x0008)
struct FRigUnitReference_Example : public FStructReference
{

};

// ScriptStruct ControlRig.RigUnit_Example
// 0x00B0 (0x00D0 - 0x0020)
struct FRigUnit_Example : public FRigUnit
{
	struct FString                                     TestInputString;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEulerTransform                             TestInOutTransform;                                        // 0x0030(0x0024) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     TestInputVector;                                           // 0x0054(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TestInputInteger;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBRB[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     TestInputObject;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TestOutputVector;                                          // 0x0070(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TestInputFloat;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      TestInputFloatArray;                                       // 0x0080(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          TestInputTransformArray;                                   // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FRigHierarchyRef                            HierarchyRef;                                              // 0x00A0(0x0018) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TestOutputFloat;                                           // 0x00B8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FJ2U[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRigUnitReference_Example                   TestUnitReferenceInput;                                    // 0x00C0(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnitReference_Example                   TestUnitReferenceOutput;                                   // 0x00C8(0x0008) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.ControlRigOperator
// 0x0028
struct FControlRigOperator
{
	ControlRig_EControlRigOpCode                       opCode;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VRO4[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PropertyPath1;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PropertyPath2;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.ConstraintNodeData
// 0x00B0
struct FConstraintNodeData
{
	struct FTransform                                  RelativeParent;                                            // 0x0000(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintOffset                           ConstraintOffset;                                          // 0x0030(0x0060) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       LinkedNode;                                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransformConstraint>                Constraints;                                               // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BH4V[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ControlRig.AnimationHierarchy
// 0x0010 (0x0088 - 0x0078)
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
	TArray<struct FConstraintNodeData>                 UserData;                                                  // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_ControlRigBase : public FAnimNode_Base
{
	TArray<struct FName>                               RigHierarchyItemNameMapping;                               // 0x0010(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UNodeMappingContainer>        NodeMappingContainer;                                      // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct ControlRig.AnimNode_ControlRig
// 0x0020 (0x0048 - 0x0028)
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
	struct FPoseLink                                   Source;                                                    // 0x0028(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class UClass*                                      ControlRigClass;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UControlRig*                                 ControlRig;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// 0x0008 (0x0030 - 0x0028)
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
	TWeakObjectPtr<class UControlRig>                  ControlRig;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ControlRig.ControlRigBindingTemplate
// 0x0000 (0x00B0 - 0x00B0)
struct FControlRigBindingTemplate : public FMovieSceneSpawnSectionTemplate
{

};

// ScriptStruct ControlRig.ControlRigComponentInstanceData
// 0x0008 (0x0060 - 0x0058)
struct FControlRigComponentInstanceData : public FActorComponentInstanceData
{
	class UControlRig*                                 AnimControlRig;                                            // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// 0x0008
struct FControlRigSequenceObjectReference
{
	class UClass*                                      ControlRigClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// 0x0010
struct FControlRigSequenceObjectReferences
{
	TArray<struct FControlRigSequenceObjectReference>  Array;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// 0x0020
struct FControlRigSequenceObjectReferenceMap
{
	TArray<struct FGuid>                               BindingIds;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigSequenceObjectReferences> References;                                                // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
