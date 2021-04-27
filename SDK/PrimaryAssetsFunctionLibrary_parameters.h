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

// Function PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C.GetStickerItem
struct UPrimaryAssetsFunctionLibrary_C_GetStickerItem_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  StickerTexture;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C.GetItemProfile
struct UPrimaryAssetsFunctionLibrary_C_GetItemProfile_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 ItemImageProfile;                                          // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
