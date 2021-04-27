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

// Function PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C.GetStickerItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              StickerTexture                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPrimaryAssetsFunctionLibrary_C::STATIC_GetStickerItem(const struct FPrimaryAssetId& PrimaryAssetId, class UObject* __WorldContext, class UTexture2D** StickerTexture)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C.GetStickerItem");

	UPrimaryAssetsFunctionLibrary_C_GetStickerItem_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StickerTexture != nullptr)
		*StickerTexture = params.StickerTexture;

}


// Function PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C.GetItemProfile
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush             ItemImageProfile               (Parm, OutParm)
void UPrimaryAssetsFunctionLibrary_C::STATIC_GetItemProfile(const struct FPrimaryAssetId& PrimaryAssetId, class UObject* __WorldContext, struct FSlateBrush* ItemImageProfile)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PrimaryAssetsFunctionLibrary.PrimaryAssetsFunctionLibrary_C.GetItemProfile");

	UPrimaryAssetsFunctionLibrary_C_GetItemProfile_Params params;
	params.PrimaryAssetId = PrimaryAssetId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemImageProfile != nullptr)
		*ItemImageProfile = params.ItemImageProfile;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
