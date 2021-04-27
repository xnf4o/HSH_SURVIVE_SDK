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

// Function LD_3DWidgetBase.LD_3DWidgetBase_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALD_3DWidgetBase_C::SetImage(class UObject* Image, const struct FString& Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_3DWidgetBase.LD_3DWidgetBase_C.SetImage");

	ALD_3DWidgetBase_C_SetImage_Params params;
	params.Image = Image;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_3DWidgetBase.LD_3DWidgetBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ALD_3DWidgetBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_3DWidgetBase.LD_3DWidgetBase_C.Timeline_0__FinishedFunc");

	ALD_3DWidgetBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_3DWidgetBase.LD_3DWidgetBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ALD_3DWidgetBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_3DWidgetBase.LD_3DWidgetBase_C.Timeline_0__UpdateFunc");

	ALD_3DWidgetBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_3DWidgetBase.LD_3DWidgetBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALD_3DWidgetBase_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_3DWidgetBase.LD_3DWidgetBase_C.ReceiveBeginPlay");

	ALD_3DWidgetBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LD_3DWidgetBase.LD_3DWidgetBase_C.ExecuteUbergraph_LD_3DWidgetBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALD_3DWidgetBase_C::ExecuteUbergraph_LD_3DWidgetBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LD_3DWidgetBase.LD_3DWidgetBase_C.ExecuteUbergraph_LD_3DWidgetBase");

	ALD_3DWidgetBase_C_ExecuteUbergraph_LD_3DWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
