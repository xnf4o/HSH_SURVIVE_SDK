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
// Classes
//---------------------------------------------------------------------------

// Class ControlRig.ControlRig
// 0x0128 (FullSize[0x0158] - InheritedSize[0x0030])
class UControlRig : public UObject
{
public:
	unsigned char                                      UnknownData_A9T7[0x14];                                    // 0x0030(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	ControlRig_ERigExecutionType                       ExecutionType;                                             // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOGS[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRigHierarchyContainer                      Hierarchy;                                                 // 0x0048(0x00C0) (Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigOperator>                 Operators;                                                 // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LO7Y[0x40];                                    // 0x0118(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRig");
		return ptr;
	}



	void SetGlobalTransform(const struct FName& JointName, const struct FTransform& InTransform);
	struct FTransform GetGlobalTransform(const struct FName& JointName);
	float GetDeltaTime();
};

// Class ControlRig.ControlRigBindingTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UControlRigBindingTrack : public UMovieSceneSpawnTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigBindingTrack");
		return ptr;
	}



};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigBlueprintGeneratedClass");
		return ptr;
	}



};

// Class ControlRig.ControlRigComponent
// 0x0048 (FullSize[0x0148] - InheritedSize[0x0100])
class UControlRigComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPreInitializeDelegate;                                   // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPostInitializeDelegate;                                  // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPreEvaluateDelegate;                                     // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPostEvaluateDelegate;                                    // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UControlRig*                                 ControlRig;                                                // 0x0140(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigComponent");
		return ptr;
	}



	void OnPreInitialize();
	void OnPreEvaluate();
	void OnPostInitialize();
	void OnPostEvaluate();
	class UControlRig* BP_GetControlRig();
};

// Class ControlRig.ControlRigControl
// 0x0050 (FullSize[0x0388] - InheritedSize[0x0338])
class AControlRigControl : public AActor
{
public:
	struct FString                                     PropertyPath;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8C9R[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0350(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x0380(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSelected : 1;                                             // 0x0380(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHovered : 1;                                              // 0x0380(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bManipulating : 1;                                         // 0x0380(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSTD[0x7];                                     // 0x0381(0x0007) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigControl");
		return ptr;
	}



	void OnTransformChanged(const struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
};

// Class ControlRig.ControlRigLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UControlRigLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigLibrary");
		return ptr;
	}



};

// Class ControlRig.ControlRigObjectHolder
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                             Objects;                                                   // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigObjectHolder");
		return ptr;
	}



};

// Class ControlRig.ControlRigSequence
// 0x0058 (FullSize[0x04F8] - InheritedSize[0x04A0])
class UControlRigSequence : public ULevelSequence
{
public:
	unsigned char                                      LastExportedToAnimationSequence[0x28];                     // 0x04A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRigSequence.LastExportedToAnimationSequence
	unsigned char                                      LastExportedUsingSkeletalMesh[0x28];                       // 0x04C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRigSequence.LastExportedUsingSkeletalMesh
	float                                              LastExportedFrameRate;                                     // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_230A[0x4];                                     // 0x04F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigSequence");
		return ptr;
	}



};

// Class ControlRig.ControlRigSequencerAnimInstance
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigSequencerAnimInstance");
		return ptr;
	}



};

// Class ControlRig.ControlRigStaticMeshControl
// 0x0018 (FullSize[0x03A0] - InheritedSize[0x0388])
class AControlRigStaticMeshControl : public AControlRigControl
{
public:
	class USceneComponent*                             Scene;                                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TBTK[0x8];                                     // 0x0398(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.ControlRigStaticMeshControl");
		return ptr;
	}



};

// Class ControlRig.MovieSceneControlRigSection
// 0x00B8 (FullSize[0x0210] - InheritedSize[0x0158])
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{
public:
	bool                                               bAdditive;                                                 // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyBoneFilter;                                          // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6GYE[0x6];                                     // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputBlendPose                             BoneFilter;                                                // 0x0160(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Weight;                                                    // 0x0170(0x00A0) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.MovieSceneControlRigSection");
		return ptr;
	}



};

// Class ControlRig.MovieSceneControlRigTrack
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ControlRig.MovieSceneControlRigTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
