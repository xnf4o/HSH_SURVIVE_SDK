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

// Function Ingame_CatLifeTime.Ingame_CatLifeTime_C.SetLifeTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RealLifeTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_CatLifeTime_C::SetLifeTime(float RealLifeTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_CatLifeTime.Ingame_CatLifeTime_C.SetLifeTime");

	UIngame_CatLifeTime_C_SetLifeTime_Params params;
	params.RealLifeTime = RealLifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_CatLifeTime.Ingame_CatLifeTime_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_CatLifeTime_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_CatLifeTime.Ingame_CatLifeTime_C.Tick");

	UIngame_CatLifeTime_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Ingame_CatLifeTime.Ingame_CatLifeTime_C.ExecuteUbergraph_Ingame_CatLifeTime
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngame_CatLifeTime_C::ExecuteUbergraph_Ingame_CatLifeTime(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Ingame_CatLifeTime.Ingame_CatLifeTime_C.ExecuteUbergraph_Ingame_CatLifeTime");

	UIngame_CatLifeTime_C_ExecuteUbergraph_Ingame_CatLifeTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
