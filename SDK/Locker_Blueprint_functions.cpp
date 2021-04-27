// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Locker_Blueprint.Locker_Blueprint_C.SetDoorResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsResponse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALocker_Blueprint_C::SetDoorResponse(bool bIsResponse)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.SetDoorResponse");

	ALocker_Blueprint_C_SetDoorResponse_Params params;
	params.bIsResponse = bIsResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.PlayInnerAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lenght                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALocker_Blueprint_C::PlayInnerAnimation(float* Lenght)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.PlayInnerAnimation");

	ALocker_Blueprint_C_PlayInnerAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Lenght != nullptr)
		*Lenght = params.Lenght;

}


// Function Locker_Blueprint.Locker_Blueprint_C.PlayOuterAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lenght                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALocker_Blueprint_C::PlayOuterAnimation(float* Lenght)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.PlayOuterAnimation");

	ALocker_Blueprint_C_PlayOuterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Lenght != nullptr)
		*Lenght = params.Lenght;

}


// Function Locker_Blueprint.Locker_Blueprint_C.RandomDoor
// (Public, BlueprintCallable, BlueprintEvent)
void ALocker_Blueprint_C::RandomDoor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.RandomDoor");

	ALocker_Blueprint_C_RandomDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__FinishedFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_OpenDoor__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__FinishedFunc");

	ALocker_Blueprint_C_Timeline_OpenDoor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__UpdateFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_OpenDoor__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__UpdateFunc");

	ALocker_Blueprint_C_Timeline_OpenDoor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__SoundClose__EventFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_OpenDoor__SoundClose__EventFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__SoundClose__EventFunc");

	ALocker_Blueprint_C_Timeline_OpenDoor__SoundClose__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__SoundOpen__EventFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_OpenDoor__SoundOpen__EventFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_OpenDoor__SoundOpen__EventFunc");

	ALocker_Blueprint_C_Timeline_OpenDoor__SoundOpen__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__FinishedFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_CloseOpen__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__FinishedFunc");

	ALocker_Blueprint_C_Timeline_CloseOpen__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__UpdateFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_CloseOpen__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__UpdateFunc");

	ALocker_Blueprint_C_Timeline_CloseOpen__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__SoundClose__EventFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_CloseOpen__SoundClose__EventFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__SoundClose__EventFunc");

	ALocker_Blueprint_C_Timeline_CloseOpen__SoundClose__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__SoundOpen__EventFunc
// (BlueprintEvent)
void ALocker_Blueprint_C::Timeline_CloseOpen__SoundOpen__EventFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.Timeline_CloseOpen__SoundOpen__EventFunc");

	ALocker_Blueprint_C_Timeline_CloseOpen__SoundOpen__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.MulticastPlayInnerAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ALocker_Blueprint_C::MulticastPlayInnerAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.MulticastPlayInnerAnimation");

	ALocker_Blueprint_C_MulticastPlayInnerAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.MulticastPlayOuterAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ALocker_Blueprint_C::MulticastPlayOuterAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.MulticastPlayOuterAnimation");

	ALocker_Blueprint_C_MulticastPlayOuterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Locker_Blueprint.Locker_Blueprint_C.ExecuteUbergraph_Locker_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALocker_Blueprint_C::ExecuteUbergraph_Locker_Blueprint(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Locker_Blueprint.Locker_Blueprint_C.ExecuteUbergraph_Locker_Blueprint");

	ALocker_Blueprint_C_ExecuteUbergraph_Locker_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
