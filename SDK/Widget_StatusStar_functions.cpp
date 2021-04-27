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

// Function Widget_StatusStar.Widget_StatusStar_C.RefreshValidStar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_StatusStar_C::RefreshValidStar()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StatusStar.Widget_StatusStar_C.RefreshValidStar");

	UWidget_StatusStar_C_RefreshValidStar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StatusStar.Widget_StatusStar_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StatusStar_C::Refresh(const struct FText& Name, const struct FText& Description, int Level, int MaxLevel)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Widget_StatusStar.Widget_StatusStar_C.Refresh");

	UWidget_StatusStar_C_Refresh_Params params;
	params.Name = Name;
	params.Description = Description;
	params.Level = Level;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
