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
// Parameters
//---------------------------------------------------------------------------

// Function PreviewMeshActor.PreviewMeshActor_C.OnRep_IsShowMesh
struct APreviewMeshActor_C_OnRep_IsShowMesh_Params
{
};

// Function PreviewMeshActor.PreviewMeshActor_C.OnRep_RefActor
struct APreviewMeshActor_C_OnRep_RefActor_Params
{
};

// Function PreviewMeshActor.PreviewMeshActor_C.InitializeMesh
struct APreviewMeshActor_C_InitializeMesh_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function PreviewMeshActor.PreviewMeshActor_C.InitializeActor
struct APreviewMeshActor_C_InitializeActor_Params
{
	class UClass*                                      ActorClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PreviewMeshActor.PreviewMeshActor_C.ShowMesh
struct APreviewMeshActor_C_ShowMesh_Params
{
};

// Function PreviewMeshActor.PreviewMeshActor_C.HideMesh
struct APreviewMeshActor_C_HideMesh_Params
{
};

// Function PreviewMeshActor.PreviewMeshActor_C.MulticastShowMesh
struct APreviewMeshActor_C_MulticastShowMesh_Params
{
};

// Function PreviewMeshActor.PreviewMeshActor_C.MulticastHideMesh
struct APreviewMeshActor_C_MulticastHideMesh_Params
{
};

// Function PreviewMeshActor.PreviewMeshActor_C.DeinitializeActor
struct APreviewMeshActor_C_DeinitializeActor_Params
{
};

// Function PreviewMeshActor.PreviewMeshActor_C.ExecuteUbergraph_PreviewMeshActor
struct APreviewMeshActor_C_ExecuteUbergraph_PreviewMeshActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
