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

// Function AnnouncementSaveGame.AnnouncementSaveGame_C.ResetToDefualt
// (Public, BlueprintCallable, BlueprintEvent)
void UAnnouncementSaveGame_C::ResetToDefualt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnnouncementSaveGame.AnnouncementSaveGame_C.ResetToDefualt");

	UAnnouncementSaveGame_C_ResetToDefualt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnnouncementSaveGame.AnnouncementSaveGame_C.ExecuteUbergraph_AnnouncementSaveGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnnouncementSaveGame_C::ExecuteUbergraph_AnnouncementSaveGame(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnnouncementSaveGame.AnnouncementSaveGame_C.ExecuteUbergraph_AnnouncementSaveGame");

	UAnnouncementSaveGame_C_ExecuteUbergraph_AnnouncementSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
