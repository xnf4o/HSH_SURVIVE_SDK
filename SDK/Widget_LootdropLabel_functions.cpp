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

// Function Widget_LootdropLabel.Widget_LootdropLabel_C.SetItemRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootdropLabel_C::SetItemRarity(int Rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootdropLabel.Widget_LootdropLabel_C.SetItemRarity");

	UWidget_LootdropLabel_C_SetItemRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootdropLabel.Widget_LootdropLabel_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_LootdropLabel_C::SetItem(const struct FText& ItemName, const struct FText& ItemType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootdropLabel.Widget_LootdropLabel_C.SetItem");

	UWidget_LootdropLabel_C_SetItem_Params params;
	params.ItemName = ItemName;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootdropLabel.Widget_LootdropLabel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_LootdropLabel_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootdropLabel.Widget_LootdropLabel_C.Construct");

	UWidget_LootdropLabel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_LootdropLabel.Widget_LootdropLabel_C.ExecuteUbergraph_Widget_LootdropLabel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_LootdropLabel_C::ExecuteUbergraph_Widget_LootdropLabel(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_LootdropLabel.Widget_LootdropLabel_C.ExecuteUbergraph_Widget_LootdropLabel");

	UWidget_LootdropLabel_C_ExecuteUbergraph_Widget_LootdropLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
