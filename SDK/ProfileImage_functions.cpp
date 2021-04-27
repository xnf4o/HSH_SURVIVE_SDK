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

// Function ProfileImage.ProfileImage_C.SetProfileEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfileImage_C::SetProfileEnable(bool Enable)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.SetProfileEnable");

	UProfileImage_C_SetProfileEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.SetProfileOwned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Owned                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfileImage_C::SetProfileOwned(bool Owned)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.SetProfileOwned");

	UProfileImage_C_SetProfileOwned_Params params;
	params.Owned = Owned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.SetProfileEquipped?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfileImage_C::SetProfileEquipped_(bool Equip)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.SetProfileEquipped?");

	UProfileImage_C_SetProfileEquipped__Params params;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.SetProfileImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UProfileImage_C::SetProfileImage(const struct FSlateBrush& Brush)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.SetProfileImage");

	UProfileImage_C_SetProfileImage_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UProfileImage_C::BndEvt__BT_Profile_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UProfileImage_C_BndEvt__BT_Profile_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UProfileImage_C::BndEvt__BT_Profile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UProfileImage_C_BndEvt__BT_Profile_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UProfileImage_C::BndEvt__BT_Profile_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UProfileImage_C_BndEvt__BT_Profile_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UProfileImage_C::BndEvt__BT_Profile_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.BndEvt__BT_Profile_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UProfileImage_C_BndEvt__BT_Profile_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UProfileImage_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.PreConstruct");

	UProfileImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.ExecuteUbergraph_ProfileImage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UProfileImage_C::ExecuteUbergraph_ProfileImage(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.ExecuteUbergraph_ProfileImage");

	UProfileImage_C_ExecuteUbergraph_ProfileImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProfileImage.ProfileImage_C.OnProfileClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemInventory        PrimaryAssetId                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UProfileImage_C::OnProfileClick__DelegateSignature(const struct FS_ItemInventory& PrimaryAssetId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProfileImage.ProfileImage_C.OnProfileClick__DelegateSignature");

	UProfileImage_C_OnProfileClick__DelegateSignature_Params params;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
