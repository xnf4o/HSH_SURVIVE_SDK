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

// Function Pickable_HolyKnifePerk.Pickable_HolyKnifePerk_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_HolyKnifePerk_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_HolyKnifePerk.Pickable_HolyKnifePerk_C.Interaction");

	APickable_HolyKnifePerk_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pickable_HolyKnifePerk.Pickable_HolyKnifePerk_C.ExecuteUbergraph_Pickable_HolyKnifePerk
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APickable_HolyKnifePerk_C::ExecuteUbergraph_Pickable_HolyKnifePerk(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Pickable_HolyKnifePerk.Pickable_HolyKnifePerk_C.ExecuteUbergraph_Pickable_HolyKnifePerk");

	APickable_HolyKnifePerk_C_ExecuteUbergraph_Pickable_HolyKnifePerk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
