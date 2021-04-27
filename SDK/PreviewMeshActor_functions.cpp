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

// Function PreviewMeshActor.PreviewMeshActor_C.OnRep_IsShowMesh
// (BlueprintCallable, BlueprintEvent)
void APreviewMeshActor_C::OnRep_IsShowMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.OnRep_IsShowMesh");

	APreviewMeshActor_C_OnRep_IsShowMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.OnRep_RefActor
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void APreviewMeshActor_C::OnRep_RefActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.OnRep_RefActor");

	APreviewMeshActor_C_OnRep_RefActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.InitializeMesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void APreviewMeshActor_C::InitializeMesh(class UStaticMesh* Mesh, const struct FTransform& Transform)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.InitializeMesh");

	APreviewMeshActor_C_InitializeMesh_Params params;
	params.Mesh = Mesh;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.InitializeActor
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APreviewMeshActor_C::InitializeActor(class UClass* ActorClass)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.InitializeActor");

	APreviewMeshActor_C_InitializeActor_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.ShowMesh
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void APreviewMeshActor_C::ShowMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.ShowMesh");

	APreviewMeshActor_C_ShowMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.HideMesh
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void APreviewMeshActor_C::HideMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.HideMesh");

	APreviewMeshActor_C_HideMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.MulticastShowMesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void APreviewMeshActor_C::MulticastShowMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.MulticastShowMesh");

	APreviewMeshActor_C_MulticastShowMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.MulticastHideMesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void APreviewMeshActor_C::MulticastHideMesh()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.MulticastHideMesh");

	APreviewMeshActor_C_MulticastHideMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.DeinitializeActor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void APreviewMeshActor_C::DeinitializeActor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.DeinitializeActor");

	APreviewMeshActor_C_DeinitializeActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PreviewMeshActor.PreviewMeshActor_C.ExecuteUbergraph_PreviewMeshActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APreviewMeshActor_C::ExecuteUbergraph_PreviewMeshActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PreviewMeshActor.PreviewMeshActor_C.ExecuteUbergraph_PreviewMeshActor");

	APreviewMeshActor_C_ExecuteUbergraph_PreviewMeshActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
