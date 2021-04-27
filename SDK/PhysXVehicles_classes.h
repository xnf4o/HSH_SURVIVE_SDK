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

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0158 (FullSize[0x02E0] - InheritedSize[0x0188])
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData_ER76[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDeprecatedSpringOffsetMode : 1;                           // 0x0190(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverseAsBrake : 1;                                       // 0x0190(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseRVOAvoidance : 1;                                      // 0x0190(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRawHandbrakeInput : 1;                                    // 0x0190(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRawGearUpInput : 1;                                       // 0x0190(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRawGearDownInput : 1;                                     // 0x0190(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ETTM[0x3];                                     // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                  // 0x0194(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZAQ1[0x3];                                     // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Mass;                                                      // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXDX[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWheelSetup>                         WheelSetups;                                               // 0x01A0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              DragCoefficient;                                           // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChassisWidth;                                              // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChassisHeight;                                             // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragArea;                                                  // 0x01BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EstimatedMaxEngineSpeed;                                   // 0x01C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxEngineRPM;                                              // 0x01C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugDragMagnitude;                                        // 0x01C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InertiaTensorScale;                                        // 0x01CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinNormalizedTireLoad;                                     // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinNormalizedTireLoadFiltered;                             // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxNormalizedTireLoad;                                     // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxNormalizedTireLoadFiltered;                             // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThresholdLongitudinalSpeed;                                // 0x01E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LowForwardSpeedSubStepCount;                               // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HighForwardSpeedSubStepCount;                              // 0x01F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YV1[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UVehicleWheel*>                       Wheels;                                                    // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LAQ0[0x18];                                    // 0x0208(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RVOAvoidanceRadius;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RVOAvoidanceHeight;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceConsiderationRadius;                              // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RVOSteeringStep;                                           // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RVOThrottleStep;                                           // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvoidanceUID;                                              // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                            // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                             // 0x023C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              AvoidanceWeight;                                           // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PendingLaunchVelocity;                                     // 0x0248(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedVehicleState                     ReplicatedState;                                           // 0x0254(0x0014) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7D7X[0x4];                                     // 0x0268(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RawSteeringInput;                                          // 0x026C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RawThrottleInput;                                          // 0x0270(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RawBrakeInput;                                             // 0x0274(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SteeringInput;                                             // 0x0278(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ThrottleInput;                                             // 0x027C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BrakeInput;                                                // 0x0280(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HandbrakeInput;                                            // 0x0284(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleBrakeInput;                                            // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StopThreshold;                                             // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WrongDirectionThreshold;                                   // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           ThrottleInputRate;                                         // 0x0294(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           BrakeInputRate;                                            // 0x029C(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           HandbrakeInputRate;                                        // 0x02A4(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                           SteeringInputRate;                                         // 0x02AC(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PUXE[0x24];                                    // 0x02B4(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 OverrideController;                                        // 0x02D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}



	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}



	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetDriveTorque(float DriveTorque, int WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int WheelIndex);
};

// Class PhysXVehicles.TireConfig
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UTireConfig : public UDataAsset
{
public:
	float                                              FrictionScale;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z56D[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTireConfigMaterialFriction>         TireFrictionScales;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AG9A[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}



};

// Class PhysXVehicles.VehicleAnimInstance
// 0x0748 (FullSize[0x09B0] - InheritedSize[0x0268])
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_3B6F[0x8];                                     // 0x0268(0x0008) Fix Super Size
	unsigned char                                      UnknownData_W57E[0x730];                                   // 0x0270(0x0730) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                           // 0x09A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NLZ5[0x8];                                     // 0x09A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}



	class AWheeledVehicle* GetVehicle();
};

// Class PhysXVehicles.VehicleWheel
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                                 CollisionMesh;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDontCreateShape;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoAdjustCollisionSize;                                  // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DR20[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Offset;                                                    // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShapeRadius;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShapeWidth;                                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass;                                                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRate;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SteerAngle;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAffectedByHandbrake;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_90XU[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTireType*                                   TireType;                                                  // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTireConfig*                                 TireConfig;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LatStiffMaxLoad;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LatStiffValue;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LongStiffValue;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionForceOffset;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionMaxRaise;                                        // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionMaxDrop;                                         // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionNaturalFrequency;                                // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuspensionDampingRatio;                                    // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysXVehicles_EWheelSweepType>         SweepType;                                                 // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGKX[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxBrakeTorque;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHandBrakeTorque;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCPH[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWheeledVehicleMovementComponent*            VehicleSim;                                                // 0x00A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WheelIndex;                                                // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugLongSlip;                                             // 0x00AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugLatSlip;                                              // 0x00B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugNormalizedTireLoad;                                   // 0x00B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0OPX[0x4];                                     // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DebugWheelTorque;                                          // 0x00BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugLongForce;                                            // 0x00C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugLatForce;                                             // 0x00C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x00C8(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OldLocation;                                               // 0x00D4(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x00E0(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6M1[0xC];                                     // 0x00EC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}



	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};

// Class PhysXVehicles.WheeledVehicle
// 0x0010 (FullSize[0x03A8] - InheritedSize[0x0398])
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}



};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0178 (FullSize[0x0458] - InheritedSize[0x02E0])
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                          EngineSetup;                                               // 0x02E0(0x00A0) (Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferential4WData                  DifferentialSetup;                                         // 0x0380(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AckermannAccuracy;                                         // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVehicleTransmissionData                    TransmissionSetup;                                         // 0x03A0(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          SteeringCurve;                                             // 0x03D0(0x0088) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
