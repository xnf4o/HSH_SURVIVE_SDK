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

// Function IOptionSubscriber.IOptionSubscriber_C.OnOptionValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UIOptionSubscriber_C::OnOptionValueChanged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IOptionSubscriber.IOptionSubscriber_C.OnOptionValueChanged");

	UIOptionSubscriber_C_OnOptionValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
