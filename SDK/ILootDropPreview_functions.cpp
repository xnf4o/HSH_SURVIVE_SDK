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

// Function ILootDropPreview.ILootDropPreview_C.SetupLootGrantCurrency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UILootDropPreview_C::SetupLootGrantCurrency(int Currency)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ILootDropPreview.ILootDropPreview_C.SetupLootGrantCurrency");

	UILootDropPreview_C_SetupLootGrantCurrency_Params params;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ILootDropPreview.ILootDropPreview_C.SetupLootDropSkinPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           PreviewSkeletalMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*           previewAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   previewItemName                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UILootDropPreview_C::SetupLootDropSkinPreview(class USkeletalMesh* PreviewSkeletalMesh, class UAnimSequence* previewAnimation, const struct FText& previewItemName, int Index, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ILootDropPreview.ILootDropPreview_C.SetupLootDropSkinPreview");

	UILootDropPreview_C_SetupLootDropSkinPreview_Params params;
	params.PreviewSkeletalMesh = PreviewSkeletalMesh;
	params.previewAnimation = previewAnimation;
	params.previewItemName = previewItemName;
	params.Index = Index;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ILootDropPreview.ILootDropPreview_C.SetupLootDropPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             PreviewMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   previewItemName                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   previewItemAmount              (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UILootDropPreview_C::SetupLootDropPreview(class UStaticMesh* PreviewMesh, const struct FText& previewItemName, const struct FText& previewItemAmount, int Index, int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ILootDropPreview.ILootDropPreview_C.SetupLootDropPreview");

	UILootDropPreview_C_SetupLootDropPreview_Params params;
	params.PreviewMesh = PreviewMesh;
	params.previewItemName = previewItemName;
	params.previewItemAmount = previewItemAmount;
	params.Index = Index;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
