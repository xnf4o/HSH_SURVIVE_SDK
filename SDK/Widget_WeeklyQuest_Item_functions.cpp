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

// Function Widget_WeeklyQuest_Item.Widget_WeeklyQuest_Item_C.UpdateValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bIsComplete                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_WeeklyQuest_Item_C::UpdateValue(const struct FString& Name, const struct FString& Description, const struct FString& Value, bool bIsComplete)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuest_Item.Widget_WeeklyQuest_Item_C.UpdateValue");

	UWidget_WeeklyQuest_Item_C_UpdateValue_Params params;
	params.Name = Name;
	params.Description = Description;
	params.Value = Value;
	params.bIsComplete = bIsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_WeeklyQuest_Item.Widget_WeeklyQuest_Item_C.ExecuteUbergraph_Widget_WeeklyQuest_Item
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_WeeklyQuest_Item_C::ExecuteUbergraph_Widget_WeeklyQuest_Item(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_WeeklyQuest_Item.Widget_WeeklyQuest_Item_C.ExecuteUbergraph_Widget_WeeklyQuest_Item");

	UWidget_WeeklyQuest_Item_C_ExecuteUbergraph_Widget_WeeklyQuest_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
