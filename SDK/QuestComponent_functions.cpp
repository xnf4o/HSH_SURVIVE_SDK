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

// Function QuestComponent.QuestComponent_C.UpdateQuestDetailsNew
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestComponent_C::UpdateQuestDetailsNew()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.UpdateQuestDetailsNew");

	UQuestComponent_C_UpdateQuestDetailsNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.OnRep_QuestDetailsNew
// (BlueprintCallable, BlueprintEvent)
void UQuestComponent_C::OnRep_QuestDetailsNew()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.OnRep_QuestDetailsNew");

	UQuestComponent_C_OnRep_QuestDetailsNew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.OpenPortal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASecretPortalBase_C*     Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::OpenPortal(class ASecretPortalBase_C* Portal)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.OpenPortal");

	UQuestComponent_C_OpenPortal_Params params;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.TryGetController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::TryGetController(class AController** Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.TryGetController");

	UQuestComponent_C_TryGetController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Controller != nullptr)
		*Controller = params.Controller;

}


// Function QuestComponent.QuestComponent_C.OnRep_QuestID
// (BlueprintCallable, BlueprintEvent)
void UQuestComponent_C::OnRep_QuestID()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.OnRep_QuestID");

	UQuestComponent_C_OnRep_QuestID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.RequestQuest
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void UQuestComponent_C::RequestQuest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.RequestQuest");

	UQuestComponent_C_RequestQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSURPlayerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::Initialize(class AHSURPlayerController_C* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.Initialize");

	UQuestComponent_C_Initialize_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.ServerOpenPortal
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASecretPortalBase_C*     Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::ServerOpenPortal(class ASecretPortalBase_C* Portal)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.ServerOpenPortal");

	UQuestComponent_C_ServerOpenPortal_Params params;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.ClientOpenPortal
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASecretPortalBase_C*     Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::ClientOpenPortal(class ASecretPortalBase_C* Portal)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.ClientOpenPortal");

	UQuestComponent_C_ClientOpenPortal_Params params;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.HandleSecrectPortal
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void UQuestComponent_C::HandleSecrectPortal()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.HandleSecrectPortal");

	UQuestComponent_C_HandleSecrectPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.ForcePingPortalSuddenDeath
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void UQuestComponent_C::ForcePingPortalSuddenDeath()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.ForcePingPortalSuddenDeath");

	UQuestComponent_C_ForcePingPortalSuddenDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.ForcePingPortal
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASecretPortalTeamBase_C* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::ForcePingPortal(class ASecretPortalTeamBase_C* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.ForcePingPortal");

	UQuestComponent_C_ForcePingPortal_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.AchievementCheck
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::AchievementCheck(class APawn* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.AchievementCheck");

	UQuestComponent_C_AchievementCheck_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.TryGetRequestQuest
// (BlueprintCallable, BlueprintEvent)
void UQuestComponent_C::TryGetRequestQuest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.TryGetRequestQuest");

	UQuestComponent_C_TryGetRequestQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestComponent.QuestComponent_C.ExecuteUbergraph_QuestComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestComponent_C::ExecuteUbergraph_QuestComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestComponent.QuestComponent_C.ExecuteUbergraph_QuestComponent");

	UQuestComponent_C_ExecuteUbergraph_QuestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
