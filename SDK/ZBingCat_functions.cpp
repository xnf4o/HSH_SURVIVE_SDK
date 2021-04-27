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

// Function ZBingCat.ZBingCat_C.SetCatItemByClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::SetCatItemByClass(class UClass* ItemClass)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.SetCatItemByClass");

	AZBingCat_C_SetCatItemByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.BlendIdlePostTimeline__FinishedFunc
// (BlueprintEvent)
void AZBingCat_C::BlendIdlePostTimeline__FinishedFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.BlendIdlePostTimeline__FinishedFunc");

	AZBingCat_C_BlendIdlePostTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.BlendIdlePostTimeline__UpdateFunc
// (BlueprintEvent)
void AZBingCat_C::BlendIdlePostTimeline__UpdateFunc()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.BlendIdlePostTimeline__UpdateFunc");

	AZBingCat_C_BlendIdlePostTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyEnd_DE3D6E2144713541F718BEA693F38B70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyEnd_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyEnd_DE3D6E2144713541F718BEA693F38B70");

	AZBingCat_C_OnNotifyEnd_DE3D6E2144713541F718BEA693F38B70_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyBegin_DE3D6E2144713541F718BEA693F38B70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyBegin_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyBegin_DE3D6E2144713541F718BEA693F38B70");

	AZBingCat_C_OnNotifyBegin_DE3D6E2144713541F718BEA693F38B70_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnInterrupted_DE3D6E2144713541F718BEA693F38B70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnInterrupted_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnInterrupted_DE3D6E2144713541F718BEA693F38B70");

	AZBingCat_C_OnInterrupted_DE3D6E2144713541F718BEA693F38B70_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnBlendOut_DE3D6E2144713541F718BEA693F38B70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnBlendOut_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnBlendOut_DE3D6E2144713541F718BEA693F38B70");

	AZBingCat_C_OnBlendOut_DE3D6E2144713541F718BEA693F38B70_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnCompleted_DE3D6E2144713541F718BEA693F38B70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnCompleted_DE3D6E2144713541F718BEA693F38B70(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnCompleted_DE3D6E2144713541F718BEA693F38B70");

	AZBingCat_C_OnCompleted_DE3D6E2144713541F718BEA693F38B70_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyEnd_202FEEC442B802067FA1008047CB5895
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyEnd_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyEnd_202FEEC442B802067FA1008047CB5895");

	AZBingCat_C_OnNotifyEnd_202FEEC442B802067FA1008047CB5895_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyBegin_202FEEC442B802067FA1008047CB5895
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyBegin_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyBegin_202FEEC442B802067FA1008047CB5895");

	AZBingCat_C_OnNotifyBegin_202FEEC442B802067FA1008047CB5895_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnInterrupted_202FEEC442B802067FA1008047CB5895
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnInterrupted_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnInterrupted_202FEEC442B802067FA1008047CB5895");

	AZBingCat_C_OnInterrupted_202FEEC442B802067FA1008047CB5895_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnBlendOut_202FEEC442B802067FA1008047CB5895
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnBlendOut_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnBlendOut_202FEEC442B802067FA1008047CB5895");

	AZBingCat_C_OnBlendOut_202FEEC442B802067FA1008047CB5895_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnCompleted_202FEEC442B802067FA1008047CB5895
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnCompleted_202FEEC442B802067FA1008047CB5895(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnCompleted_202FEEC442B802067FA1008047CB5895");

	AZBingCat_C_OnCompleted_202FEEC442B802067FA1008047CB5895_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyEnd_60D00E33484F2E490012A9B97752AF12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyEnd_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyEnd_60D00E33484F2E490012A9B97752AF12");

	AZBingCat_C_OnNotifyEnd_60D00E33484F2E490012A9B97752AF12_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyBegin_60D00E33484F2E490012A9B97752AF12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyBegin_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyBegin_60D00E33484F2E490012A9B97752AF12");

	AZBingCat_C_OnNotifyBegin_60D00E33484F2E490012A9B97752AF12_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnInterrupted_60D00E33484F2E490012A9B97752AF12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnInterrupted_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnInterrupted_60D00E33484F2E490012A9B97752AF12");

	AZBingCat_C_OnInterrupted_60D00E33484F2E490012A9B97752AF12_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnBlendOut_60D00E33484F2E490012A9B97752AF12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnBlendOut_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnBlendOut_60D00E33484F2E490012A9B97752AF12");

	AZBingCat_C_OnBlendOut_60D00E33484F2E490012A9B97752AF12_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnCompleted_60D00E33484F2E490012A9B97752AF12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnCompleted_60D00E33484F2E490012A9B97752AF12(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnCompleted_60D00E33484F2E490012A9B97752AF12");

	AZBingCat_C_OnCompleted_60D00E33484F2E490012A9B97752AF12_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyEnd_7DDBB42F451720821D8119962F38CB9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyEnd_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyEnd_7DDBB42F451720821D8119962F38CB9D");

	AZBingCat_C_OnNotifyEnd_7DDBB42F451720821D8119962F38CB9D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyBegin_7DDBB42F451720821D8119962F38CB9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyBegin_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyBegin_7DDBB42F451720821D8119962F38CB9D");

	AZBingCat_C_OnNotifyBegin_7DDBB42F451720821D8119962F38CB9D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnInterrupted_7DDBB42F451720821D8119962F38CB9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnInterrupted_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnInterrupted_7DDBB42F451720821D8119962F38CB9D");

	AZBingCat_C_OnInterrupted_7DDBB42F451720821D8119962F38CB9D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnBlendOut_7DDBB42F451720821D8119962F38CB9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnBlendOut_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnBlendOut_7DDBB42F451720821D8119962F38CB9D");

	AZBingCat_C_OnBlendOut_7DDBB42F451720821D8119962F38CB9D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnCompleted_7DDBB42F451720821D8119962F38CB9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnCompleted_7DDBB42F451720821D8119962F38CB9D(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnCompleted_7DDBB42F451720821D8119962F38CB9D");

	AZBingCat_C_OnCompleted_7DDBB42F451720821D8119962F38CB9D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyEnd_F2C70D24408F92E811D7EA88CA7438E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyEnd_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyEnd_F2C70D24408F92E811D7EA88CA7438E1");

	AZBingCat_C_OnNotifyEnd_F2C70D24408F92E811D7EA88CA7438E1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnNotifyBegin_F2C70D24408F92E811D7EA88CA7438E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnNotifyBegin_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnNotifyBegin_F2C70D24408F92E811D7EA88CA7438E1");

	AZBingCat_C_OnNotifyBegin_F2C70D24408F92E811D7EA88CA7438E1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnInterrupted_F2C70D24408F92E811D7EA88CA7438E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnInterrupted_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnInterrupted_F2C70D24408F92E811D7EA88CA7438E1");

	AZBingCat_C_OnInterrupted_F2C70D24408F92E811D7EA88CA7438E1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnBlendOut_F2C70D24408F92E811D7EA88CA7438E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnBlendOut_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnBlendOut_F2C70D24408F92E811D7EA88CA7438E1");

	AZBingCat_C_OnBlendOut_F2C70D24408F92E811D7EA88CA7438E1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnCompleted_F2C70D24408F92E811D7EA88CA7438E1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnCompleted_F2C70D24408F92E811D7EA88CA7438E1(const struct FName& NotifyName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnCompleted_F2C70D24408F92E811D7EA88CA7438E1");

	AZBingCat_C_OnCompleted_F2C70D24408F92E811D7EA88CA7438E1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.ReceiveTick");

	AZBingCat_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.AddCatItem
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Pickable             CachePickable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::AddCatItem(const struct FS_Pickable& CachePickable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.AddCatItem");

	AZBingCat_C_AddCatItem_Params params;
	params.CachePickable = CachePickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.RemoveCatItem
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AZBingCat_C::RemoveCatItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.RemoveCatItem");

	AZBingCat_C_RemoveCatItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AZBingCat_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.ReceiveBeginPlay");

	AZBingCat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.Blend0To1
// (BlueprintCallable, BlueprintEvent)
void AZBingCat_C::Blend0To1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.Blend0To1");

	AZBingCat_C_Blend0To1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.Blend1To0
// (BlueprintCallable, BlueprintEvent)
void AZBingCat_C::Blend1To0()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.Blend1To0");

	AZBingCat_C_Blend1To0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.M_CatTakeItem
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AZBingCat_C::M_CatTakeItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.M_CatTakeItem");

	AZBingCat_C_M_CatTakeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.M_CatGiveItem
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AZBingCat_C::M_CatGiveItem()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.M_CatGiveItem");

	AZBingCat_C_M_CatGiveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnOwnerHidden
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AZBingCat_C::OnOwnerHidden(bool IsHidden)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnOwnerHidden");

	AZBingCat_C_OnOwnerHidden_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OwnerInteractStart
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AZBingCat_C::OwnerInteractStart(bool bIsProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OwnerInteractStart");

	AZBingCat_C_OwnerInteractStart_Params params;
	params.bIsProgress = bIsProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OwnerInteractDone
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AZBingCat_C::OwnerInteractDone()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OwnerInteractDone");

	AZBingCat_C_OwnerInteractDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OwnerInteractStop
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OwnerInteractStop(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OwnerInteractStop");

	AZBingCat_C_OwnerInteractStop_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnOwnerDead
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::OnOwnerDead(class AActor* DestroyedActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnOwnerDead");

	AZBingCat_C_OnOwnerDead_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.ExecuteUbergraph_ZBingCat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AZBingCat_C::ExecuteUbergraph_ZBingCat(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.ExecuteUbergraph_ZBingCat");

	AZBingCat_C_ExecuteUbergraph_ZBingCat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnBlendBackwardFinishe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AZBingCat_C::OnBlendBackwardFinishe__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnBlendBackwardFinishe__DelegateSignature");

	AZBingCat_C_OnBlendBackwardFinishe__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ZBingCat.ZBingCat_C.OnBlendForwardFinishe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AZBingCat_C::OnBlendForwardFinishe__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ZBingCat.ZBingCat_C.OnBlendForwardFinishe__DelegateSignature");

	AZBingCat_C_OnBlendForwardFinishe__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
