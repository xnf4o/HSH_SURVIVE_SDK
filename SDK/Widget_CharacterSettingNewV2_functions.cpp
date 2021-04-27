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

// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::BeginMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginMenuAnimation");

	UWidget_CharacterSettingNewV2_C_BeginMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.EndMenuAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::EndMenuAnimation(float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.EndMenuAnimation");

	UWidget_CharacterSettingNewV2_C_EndMenuAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugMakeInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         OwnedItem                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPrimaryAssetId> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_ItemInventory> Items                          (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::DebugMakeInventory(TArray<struct FString>* OwnedItem, TArray<struct FPrimaryAssetId>* Array, TArray<struct FS_ItemInventory>* Items)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugMakeInventory");

	UWidget_CharacterSettingNewV2_C_DebugMakeInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnedItem != nullptr)
		*OwnedItem = params.OwnedItem;
	if (Array != nullptr)
		*Array = params.Array;
	if (Items != nullptr)
		*Items = params.Items;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugFindProduct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FS_StoreProduct         Product                        (Parm, OutParm, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::DebugFindProduct(const struct FPrimaryAssetId& PrimaryAssetId, struct FS_StoreProduct* Product)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugFindProduct");

	UWidget_CharacterSettingNewV2_C_DebugFindProduct_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Product != nullptr)
		*Product = params.Product;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugMakeOwnedItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPrimaryAssetId> Asset_IDs                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         OwnedItem                      (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::DebugMakeOwnedItems(TArray<struct FPrimaryAssetId>* Asset_IDs, TArray<struct FString>* OwnedItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugMakeOwnedItems");

	UWidget_CharacterSettingNewV2_C_DebugMakeOwnedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Asset_IDs != nullptr)
		*Asset_IDs = params.Asset_IDs;
	if (OwnedItem != nullptr)
		*OwnedItem = params.OwnedItem;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsInMainMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInMainMenu                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_CharacterSettingNewV2_C::IsInMainMenu(bool* IsInMainMenu)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsInMainMenu");

	UWidget_CharacterSettingNewV2_C_IsInMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInMainMenu != nullptr)
		*IsInMainMenu = params.IsInMainMenu;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterPreviewLobby
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHSURLobbyActor_C*       LobbyPreview                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerOwnerId                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::GetCharacterPreviewLobby(class AHSURLobbyActor_C** LobbyPreview, int* PlayerOwnerId, struct FPlayerInfoStruct_G* PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterPreviewLobby");

	UWidget_CharacterSettingNewV2_C_GetCharacterPreviewLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyPreview != nullptr)
		*LobbyPreview = params.LobbyPreview;
	if (PlayerOwnerId != nullptr)
		*PlayerOwnerId = params.PlayerOwnerId;
	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterPreview
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_CharacterSetting_C*  CharacterPreview               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::GetCharacterPreview(class ABP_CharacterSetting_C** CharacterPreview)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterPreview");

	UWidget_CharacterSettingNewV2_C_GetCharacterPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterPreview != nullptr)
		*CharacterPreview = params.CharacterPreview;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterBack
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> AssetIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> OutputPin                      (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::FilterBack(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterBack");

	UWidget_CharacterSettingNewV2_C_FilterBack_Params params;
	params.Role = Role;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetIDs != nullptr)
		*AssetIDs = params.AssetIDs;
	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeDebugInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         OwnedItem                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPrimaryAssetId> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_ItemInventory> Items                          (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakeDebugInventory(TArray<struct FString>* OwnedItem, TArray<struct FPrimaryAssetId>* Array, TArray<struct FS_ItemInventory>* Items)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeDebugInventory");

	UWidget_CharacterSettingNewV2_C_MakeDebugInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnedItem != nullptr)
		*OwnedItem = params.OwnedItem;
	if (Array != nullptr)
		*Array = params.Array;
	if (Items != nullptr)
		*Items = params.Items;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterHead
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> AssetIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> OutputPin                      (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::FilterHead(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterHead");

	UWidget_CharacterSettingNewV2_C_FilterHead_Params params;
	params.Role = Role;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetIDs != nullptr)
		*AssetIDs = params.AssetIDs;
	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeAccBackAssetID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPrimaryAssetId> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakeAccBackAssetID(TArray<struct FS_StoreProduct>* Products, TArray<struct FPrimaryAssetId>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeAccBackAssetID");

	UWidget_CharacterSettingNewV2_C_MakeAccBackAssetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeAccHeadAssetID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPrimaryAssetId> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakeAccHeadAssetID(TArray<struct FS_StoreProduct>* Products, TArray<struct FPrimaryAssetId>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeAccHeadAssetID");

	UWidget_CharacterSettingNewV2_C_MakeAccHeadAssetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeSkinAssetID_New
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_StoreProduct> Products                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPrimaryAssetId> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakeSkinAssetID_New(TArray<struct FS_StoreProduct>* Products, TArray<struct FPrimaryAssetId>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeSkinAssetID_New");

	UWidget_CharacterSettingNewV2_C_MakeSkinAssetID_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Products != nullptr)
		*Products = params.Products;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_PassiveUniquePanel_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_CharacterSettingNewV2_C::Get_PassiveUniquePanel_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_PassiveUniquePanel_Visibility_1");

	UWidget_CharacterSettingNewV2_C_Get_PassiveUniquePanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetColorIsPassiveUnique
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHPassivePerkItem*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWidget_CharacterSettingNewV2_C::GetColorIsPassiveUnique(class UHSHPassivePerkItem* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetColorIsPassiveUnique");

	UWidget_CharacterSettingNewV2_C_GetColorIsPassiveUnique_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginShowPerkContent
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BeginShowPerkContent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginShowPerkContent");

	UWidget_CharacterSettingNewV2_C_BeginShowPerkContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginShowContent
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BeginShowContent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BeginShowContent");

	UWidget_CharacterSettingNewV2_C_BeginShowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshStatusInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::RefreshStatusInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshStatusInfo");

	UWidget_CharacterSettingNewV2_C_RefreshStatusInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_Widget_Button_StatusInfo_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_CharacterSettingNewV2_C::Get_Widget_Button_StatusInfo_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_Widget_Button_StatusInfo_Visibility_1");

	UWidget_CharacterSettingNewV2_C_Get_Widget_Button_StatusInfo_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsWidgetActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_CharacterSettingNewV2_C::IsWidgetActive(bool* IsActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsWidgetActive");

	UWidget_CharacterSettingNewV2_C_IsWidgetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshContent
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::RefreshContent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshContent");

	UWidget_CharacterSettingNewV2_C_RefreshContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshHeaderEmoteVO
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::RefreshHeaderEmoteVO(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshHeaderEmoteVO");

	UWidget_CharacterSettingNewV2_C_RefreshHeaderEmoteVO_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshCharacterList
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::RefreshCharacterList()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshCharacterList");

	UWidget_CharacterSettingNewV2_C_RefreshCharacterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeCharacterAssetID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrimaryAssetId> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakeCharacterAssetID(TArray<struct FPrimaryAssetId>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeCharacterAssetID");

	UWidget_CharacterSettingNewV2_C_MakeCharacterAssetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_PerkPanel_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWidget_CharacterSettingNewV2_C::Get_PerkPanel_Visibility_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Get_PerkPanel_Visibility_1");

	UWidget_CharacterSettingNewV2_C_Get_PerkPanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetSpecterSkinText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_CharacterSettingNewV2_C::GetSpecterSkinText()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetSpecterSkinText");

	UWidget_CharacterSettingNewV2_C_GetSpecterSkinText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetSpecterActivePerkText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_CharacterSettingNewV2_C::GetSpecterActivePerkText()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetSpecterActivePerkText");

	UWidget_CharacterSettingNewV2_C_GetSpecterActivePerkText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_CharacterSettingNewV2_C::GetText_1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetText_1");

	UWidget_CharacterSettingNewV2_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeSkinAssetID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrimaryAssetId> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakeSkinAssetID(TArray<struct FPrimaryAssetId>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeSkinAssetID");

	UWidget_CharacterSettingNewV2_C_MakeSkinAssetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakePerkAssetID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrimaryAssetId> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakePerkAssetID(TArray<struct FPrimaryAssetId>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakePerkAssetID");

	UWidget_CharacterSettingNewV2_C_MakePerkAssetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetImageBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSHItem*                HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::SetImageBrush(class UHSHItem* HSHItem, class UImage* icon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetImageBrush");

	UWidget_CharacterSettingNewV2_C_SetImageBrush_Params params;
	params.HSHItem = HSHItem;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetToolTipWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   TooltipTxtHeader               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   TooltipTxtDesc                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::SetToolTipWidget(class UWidget* Target, const struct FText& TooltipTxtHeader, const struct FText& TooltipTxtDesc, const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetToolTipWidget");

	UWidget_CharacterSettingNewV2_C_SetToolTipWidget_Params params;
	params.Target = Target;
	params.TooltipTxtHeader = TooltipTxtHeader;
	params.TooltipTxtDesc = TooltipTxtDesc;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterItems
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> AssetIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_ItemInventory> Return                         (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::FilterItems(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, TArray<struct FString>* Items, TArray<int>* Number, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FS_ItemInventory>* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterItems");

	UWidget_CharacterSettingNewV2_C_FilterItems_Params params;
	params.Role = Role;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetIDs != nullptr)
		*AssetIDs = params.AssetIDs;
	if (Items != nullptr)
		*Items = params.Items;
	if (Number != nullptr)
		*Number = params.Number;
	if (Return != nullptr)
		*Return = params.Return;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.CheckChangeTime
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::CheckChangeTime()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.CheckChangeTime");

	UWidget_CharacterSettingNewV2_C_CheckChangeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.StartTrackChangeTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::StartTrackChangeTime()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.StartTrackChangeTime");

	UWidget_CharacterSettingNewV2_C_StartTrackChangeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterCosmetic
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> AssetIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> OutputPin                      (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::FilterCosmetic(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterCosmetic");

	UWidget_CharacterSettingNewV2_C_FilterCosmetic_Params params;
	params.Role = Role;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetIDs != nullptr)
		*AssetIDs = params.AssetIDs;
	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterPassivePerk
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> AssetIDs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> OutputPin                      (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::FilterPassivePerk(TEnumAsByte<E_Role_E_Role> Role, TArray<struct FPrimaryAssetId>* AssetIDs, const struct FPlayerInfoStruct_G& PlayerInfo, TArray<struct FPrimaryAssetId>* OutputPin)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.FilterPassivePerk");

	UWidget_CharacterSettingNewV2_C_FilterPassivePerk_Params params;
	params.Role = Role;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AssetIDs != nullptr)
		*AssetIDs = params.AssetIDs;
	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::DebugPrint()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.DebugPrint");

	UWidget_CharacterSettingNewV2_C_DebugPrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsCharacterHunterEqual
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHCharacterItem*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_HunterSlot>   Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsEqual                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_HunterSlot           Array_Element                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::IsCharacterHunterEqual(class UHSHCharacterItem* Character, TArray<struct FS_HunterSlot>* Inventory, bool* IsEqual, struct FS_HunterSlot* Array_Element, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsCharacterHunterEqual");

	UWidget_CharacterSettingNewV2_C_IsCharacterHunterEqual_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
	if (IsEqual != nullptr)
		*IsEqual = params.IsEqual;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsCharacterSurvivorEqual
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHSHCharacterItem*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_SurvivorSlot> Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsEqual                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_SurvivorSlot         Array_Element                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::IsCharacterSurvivorEqual(class UHSHCharacterItem* Character, TArray<struct FS_SurvivorSlot>* Inventory, bool* IsEqual, struct FS_SurvivorSlot* Array_Element, int* Array_Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.IsCharacterSurvivorEqual");

	UWidget_CharacterSettingNewV2_C_IsCharacterSurvivorEqual_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
	if (IsEqual != nullptr)
		*IsEqual = params.IsEqual;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetItemAsSurvivor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Header                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         AssetsID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::SetItemAsSurvivor(const struct FString& Header, const struct FPrimaryAssetId& AssetsID, const struct FPlayerInfoStruct_G& PlayerInfoStruct_G, struct FPlayerInfoStruct_G* PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetItemAsSurvivor");

	UWidget_CharacterSettingNewV2_C_SetItemAsSurvivor_Params params;
	params.Header = Header;
	params.AssetsID = AssetsID;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetItemAsHunter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Header                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         AssetsID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfoStruct_G             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FPlayerInfoStruct_G     PlayerInfo                     (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::SetItemAsHunter(const struct FString& Header, const struct FPrimaryAssetId& AssetsID, const struct FPlayerInfoStruct_G& PlayerInfoStruct_G, struct FPlayerInfoStruct_G* PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetItemAsHunter");

	UWidget_CharacterSettingNewV2_C_SetItemAsHunter_Params params;
	params.Header = Header;
	params.AssetsID = AssetsID;
	params.PlayerInfoStruct_G = PlayerInfoStruct_G;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIconAsHunter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::RefreshIconAsHunter(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIconAsHunter");

	UWidget_CharacterSettingNewV2_C_RefreshIconAsHunter_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIconAsSurvivor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::RefreshIconAsSurvivor(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIconAsSurvivor");

	UWidget_CharacterSettingNewV2_C_RefreshIconAsSurvivor_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::RefreshIcon(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.RefreshIcon");

	UWidget_CharacterSettingNewV2_C_RefreshIcon_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetSwitcherContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::SetSwitcherContent(int Index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SetSwitcherContent");

	UWidget_CharacterSettingNewV2_C_SetSwitcherContent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         OwnedItem                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPrimaryAssetId> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FS_ItemInventory> Items                          (Parm, OutParm, ZeroConstructor)
void UWidget_CharacterSettingNewV2_C::MakeInventory(TArray<struct FString>* OwnedItem, TArray<struct FPrimaryAssetId>* Array, TArray<struct FS_ItemInventory>* Items)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.MakeInventory");

	UWidget_CharacterSettingNewV2_C_MakeInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnedItem != nullptr)
		*OwnedItem = params.OwnedItem;
	if (Array != nullptr)
		*Array = params.Array;
	if (Items != nullptr)
		*Items = params.Items;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_CharacterSettingNewV2_C::GetCharacterName()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.GetCharacterName");

	UWidget_CharacterSettingNewV2_C_GetCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_B6890D1941820439D13FCF831FBDCBFC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_CharacterSettingNewV2_C::OnResponse_B6890D1941820439D13FCF831FBDCBFC(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_B6890D1941820439D13FCF831FBDCBFC");

	UWidget_CharacterSettingNewV2_C_OnResponse_B6890D1941820439D13FCF831FBDCBFC_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_1E31C845450C26A20A60E1B57FAA7519
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_CharacterSettingNewV2_C::OnResponse_1E31C845450C26A20A60E1B57FAA7519(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_1E31C845450C26A20A60E1B57FAA7519");

	UWidget_CharacterSettingNewV2_C_OnResponse_1E31C845450C26A20A60E1B57FAA7519_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_966DF74D4879098923528F81108F8B58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGSLogEventResponse     LogEventResponse               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           hasErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_CharacterSettingNewV2_C::OnResponse_966DF74D4879098923528F81108F8B58(const struct FGSLogEventResponse& LogEventResponse, bool hasErrors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnResponse_966DF74D4879098923528F81108F8B58");

	UWidget_CharacterSettingNewV2_C_OnResponse_966DF74D4879098923528F81108F8B58_Params params;
	params.LogEventResponse = LogEventResponse;
	params.hasErrors = hasErrors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnSkin
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnSkin()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnSkin");

	UWidget_CharacterSettingNewV2_C_OnSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk2
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnPerk2()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk2");

	UWidget_CharacterSettingNewV2_C_OnPerk2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk1
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnPerk1()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk1");

	UWidget_CharacterSettingNewV2_C_OnPerk1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnPerk()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPerk");

	UWidget_CharacterSettingNewV2_C_OnPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnEmoteVO
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnEmoteVO()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnEmoteVO");

	UWidget_CharacterSettingNewV2_C_OnEmoteVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccessories
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnAccessories()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccessories");

	UWidget_CharacterSettingNewV2_C_OnAccessories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccHead
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnAccHead()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccHead");

	UWidget_CharacterSettingNewV2_C_OnAccHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccBack
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnAccBack()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnAccBack");

	UWidget_CharacterSettingNewV2_C_OnAccBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_ItemInventory        SelectItem                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           SelectNull                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_CharacterSettingNewV2_C::OnClick(const struct FText& Header, const struct FS_ItemInventory& SelectItem, bool SelectNull)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnClick");

	UWidget_CharacterSettingNewV2_C_OnClick_Params params;
	params.Header = Header;
	params.SelectItem = SelectItem;
	params.SelectNull = SelectNull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Perk1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_Button_Perk1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Perk1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Perk1_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Perk2_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_Button_Perk2_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Perk2_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Perk2_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_3_OnClickCharacters__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_3_OnClickCharacters__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_3_OnClickCharacters__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_3_OnClickCharacters__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_4_OnClickPerk__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_4_OnClickPerk__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_4_OnClickPerk__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_4_OnClickPerk__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_6_OnClickSkin__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_6_OnClickSkin__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_6_OnClickSkin__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_6_OnClickSkin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_31_OnClickEmoteVO__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_31_OnClickEmoteVO__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_31_OnClickEmoteVO__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_31_OnClickEmoteVO__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHSHCharacterItem*       HSHItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature(class UHSHCharacterItem* HSHItem)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params params;
	params.HSHItem = HSHItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_12_OnUnHover__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_12_OnUnHover__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_12_OnUnHover__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CharacterSelector_K2Node_ComponentBoundEvent_12_OnUnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::OnPreview(const struct FS_ItemInventory& Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnPreview");

	UWidget_CharacterSettingNewV2_C_OnPreview_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_0_OnClickAcces__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_0_OnClickAcces__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_0_OnClickAcces__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_CustomizeList_K2Node_ComponentBoundEvent_0_OnClickAcces__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Head_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BndEvt__Widget_Button_Head_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BndEvt__Widget_Button_Head_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_BndEvt__Widget_Button_Head_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.Construct");

	UWidget_CharacterSettingNewV2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfoStruct_G     PlayerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::UpdatePlayerCharacter(const struct FPlayerInfoStruct_G& PlayerInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerCharacter");

	UWidget_CharacterSettingNewV2_C_UpdatePlayerCharacter_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnCharacters
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnCharacters()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnCharacters");

	UWidget_CharacterSettingNewV2_C_OnCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnChangeCharacter
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnChangeCharacter()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnChangeCharacter");

	UWidget_CharacterSettingNewV2_C_OnChangeCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SaveChangeSetting
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::SaveChangeSetting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.SaveChangeSetting");

	UWidget_CharacterSettingNewV2_C_SaveChangeSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerItems
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_CharacterSettingNewV2_C::UpdatePlayerItems(TArray<struct FString> Items, TArray<int> Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerItems");

	UWidget_CharacterSettingNewV2_C_UpdatePlayerItems_Params params;
	params.Items = Items;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BackAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::BackAction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.BackAction");

	UWidget_CharacterSettingNewV2_C_BackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerPerks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerPerks                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_CharacterSettingNewV2_C::UpdatePlayerPerks(TArray<struct FString>* PlayerPerks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerPerks");

	UWidget_CharacterSettingNewV2_C_UpdatePlayerPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerPerks != nullptr)
		*PlayerPerks = params.PlayerPerks;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerSkins
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerSkins                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_CharacterSettingNewV2_C::UpdatePlayerSkins(TArray<struct FString>* PlayerSkins)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerSkins");

	UWidget_CharacterSettingNewV2_C_UpdatePlayerSkins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerSkins != nullptr)
		*PlayerSkins = params.PlayerSkins;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnInitialized()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnInitialized");

	UWidget_CharacterSettingNewV2_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.LoopAnimation
// (BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::LoopAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.LoopAnimation");

	UWidget_CharacterSettingNewV2_C_LoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerHeads
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerHeads                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_CharacterSettingNewV2_C::UpdatePlayerHeads(TArray<struct FString> PlayerHeads)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerHeads");

	UWidget_CharacterSettingNewV2_C_UpdatePlayerHeads_Params params;
	params.PlayerHeads = PlayerHeads;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerBacks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         PlayerBacks                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWidget_CharacterSettingNewV2_C::UpdatePlayerBacks(TArray<struct FString>* PlayerBacks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.UpdatePlayerBacks");

	UWidget_CharacterSettingNewV2_C_UpdatePlayerBacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerBacks != nullptr)
		*PlayerBacks = params.PlayerBacks;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.ExecuteUbergraph_Widget_CharacterSettingNewV2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CharacterSettingNewV2_C::ExecuteUbergraph_Widget_CharacterSettingNewV2(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.ExecuteUbergraph_Widget_CharacterSettingNewV2");

	UWidget_CharacterSettingNewV2_C_ExecuteUbergraph_Widget_CharacterSettingNewV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnClickSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_CharacterSettingNewV2_C::OnClickSuccess__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_CharacterSettingNewV2.Widget_CharacterSettingNewV2_C.OnClickSuccess__DelegateSignature");

	UWidget_CharacterSettingNewV2_C_OnClickSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
