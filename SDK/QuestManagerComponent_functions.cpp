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

// Function QuestManagerComponent.QuestManagerComponent_C.StartCountingOpenDoor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UQuestManagerComponent_C::StartCountingOpenDoor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.StartCountingOpenDoor");

	UQuestManagerComponent_C_StartCountingOpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.UpdatePortalDetail
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestManagerComponent_C::UpdatePortalDetail()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.UpdatePortalDetail");

	UQuestManagerComponent_C_UpdatePortalDetail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.GetPortalDetail
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_PortalDetail         PortalDetail                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::GetPortalDetail(struct FS_PortalDetail* PortalDetail)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.GetPortalDetail");

	UQuestManagerComponent_C_GetPortalDetail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PortalDetail != nullptr)
		*PortalDetail = params.PortalDetail;

}


// Function QuestManagerComponent.QuestManagerComponent_C.QuestOpenPortalOneDoor
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestManagerComponent_C::QuestOpenPortalOneDoor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.QuestOpenPortalOneDoor");

	UQuestManagerComponent_C_QuestOpenPortalOneDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestDetailsNew
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestObjective_C*> QuestObjectives                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_QuestDetail>  QuestDetailsList               (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::CheckQuestDetailsNew(TArray<class UQuestObjective_C*>* QuestObjectives, class AController* Controller, TArray<struct FS_QuestDetail>* QuestDetailsList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestDetailsNew");

	UQuestManagerComponent_C_CheckQuestDetailsNew_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestObjectives != nullptr)
		*QuestObjectives = params.QuestObjectives;
	if (QuestDetailsList != nullptr)
		*QuestDetailsList = params.QuestDetailsList;

}


// Function QuestManagerComponent.QuestManagerComponent_C.OpenPortalFromQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  QuestClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::OpenPortalFromQuest(class UClass* QuestClass)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.OpenPortalFromQuest");

	UQuestManagerComponent_C_OpenPortalFromQuest_Params params;
	params.QuestClass = QuestClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.QuestOpenPortal
// (Public, BlueprintCallable, BlueprintEvent)
void UQuestManagerComponent_C::QuestOpenPortal()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.QuestOpenPortal");

	UQuestManagerComponent_C_QuestOpenPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.OpenPortal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQuestManagerComponent_C::OpenPortal(bool AutoActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.OpenPortal");

	UQuestManagerComponent_C_OpenPortal_Params params;
	params.AutoActive = AutoActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::CheckQuest(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.CheckQuest");

	UQuestManagerComponent_C_CheckQuest_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.CheckOneQuestSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UQuestObjective_C*       QuestObjective                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQuestManagerComponent_C::CheckOneQuestSuccess(class UQuestObjective_C** QuestObjective, class AController* Controller, bool* IsSuccess)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.CheckOneQuestSuccess");

	UQuestManagerComponent_C_CheckOneQuestSuccess_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestObjective != nullptr)
		*QuestObjective = params.QuestObjective;
	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest_TeamQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> Quests                         (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::RequestQuest_TeamQuest(int PlayerId, TArray<struct FPrimaryAssetId>* Quests)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest_TeamQuest");

	UQuestManagerComponent_C_RequestQuest_TeamQuest_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quests != nullptr)
		*Quests = params.Quests;

}


// Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest_New
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId> Quests                         (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::RequestQuest_New(int PlayerId, TArray<struct FPrimaryAssetId>* Quests)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest_New");

	UQuestManagerComponent_C_RequestQuest_New_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quests != nullptr)
		*Quests = params.Quests;

}


// Function QuestManagerComponent.QuestManagerComponent_C.RandomQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPrimaryAssetId> Quests                         (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::RandomQuest(TArray<struct FPrimaryAssetId>* Quests)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.RandomQuest");

	UQuestManagerComponent_C_RandomQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quests != nullptr)
		*Quests = params.Quests;

}


// Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrimaryAssetId> Quests                         (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::RequestQuest(TArray<struct FPrimaryAssetId>* Quests)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.RequestQuest");

	UQuestManagerComponent_C_RequestQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quests != nullptr)
		*Quests = params.Quests;

}


// Function QuestManagerComponent.QuestManagerComponent_C.DebugQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPrimaryAssetId> QuestDummy                     (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::DebugQuest(TArray<struct FPrimaryAssetId>* QuestDummy)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.DebugQuest");

	UQuestManagerComponent_C_DebugQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestDummy != nullptr)
		*QuestDummy = params.QuestDummy;

}


// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestObjective_C*> QuestObjectives                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AHSURPlayerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           QuestComplete                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQuestManagerComponent_C::CheckQuestSuccess(TArray<class UQuestObjective_C*>* QuestObjectives, class AHSURPlayerController_C* PlayerController, bool* QuestComplete)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestSuccess");

	UQuestManagerComponent_C_CheckQuestSuccess_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestObjectives != nullptr)
		*QuestObjectives = params.QuestObjectives;
	if (QuestComplete != nullptr)
		*QuestComplete = params.QuestComplete;

}


// Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestObjective_C*> QuestObjectives                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AHSURPlayerController_C* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         QuestDetailsList               (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::CheckQuestDetails(TArray<class UQuestObjective_C*>* QuestObjectives, class AHSURPlayerController_C* PlayerController, TArray<struct FString>* QuestDetailsList)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.CheckQuestDetails");

	UQuestManagerComponent_C_CheckQuestDetails_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestObjectives != nullptr)
		*QuestObjectives = params.QuestObjectives;
	if (QuestDetailsList != nullptr)
		*QuestDetailsList = params.QuestDetailsList;

}


// Function QuestManagerComponent.QuestManagerComponent_C.TryGetPlayerController
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AHSURPlayerController_C*> PlayerController               (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::TryGetPlayerController(TArray<class AHSURPlayerController_C*>* PlayerController)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.TryGetPlayerController");

	UQuestManagerComponent_C_TryGetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

}


// Function QuestManagerComponent.QuestManagerComponent_C.RandomQuestWithMaxQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrimaryAssetId> Quests                         (Parm, OutParm, ZeroConstructor)
void UQuestManagerComponent_C::RandomQuestWithMaxQuest(TArray<struct FPrimaryAssetId>* Quests)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.RandomQuestWithMaxQuest");

	UQuestManagerComponent_C_RandomQuestWithMaxQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Quests != nullptr)
		*Quests = params.Quests;

}


// Function QuestManagerComponent.QuestManagerComponent_C.TryCheckQuest
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::TryCheckQuest(class AController* Controller)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.TryCheckQuest");

	UQuestManagerComponent_C_TryCheckQuest_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.ForceOpenPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivorBase_C*         survivor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::ForceOpenPortal(class ASurvivorBase_C* survivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.ForceOpenPortal");

	UQuestManagerComponent_C_ForceOpenPortal_Params params;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.ForceOpenTeamPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UQuestManagerComponent_C::ForceOpenTeamPortal(bool AutoActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.ForceOpenTeamPortal");

	UQuestManagerComponent_C_ForceOpenTeamPortal_Params params;
	params.AutoActive = AutoActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.DisableRitual
// (BlueprintCallable, BlueprintEvent)
void UQuestManagerComponent_C::DisableRitual()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.DisableRitual");

	UQuestManagerComponent_C_DisableRitual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.RemoveKeyItems
// (BlueprintCallable, BlueprintEvent)
void UQuestManagerComponent_C::RemoveKeyItems()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.RemoveKeyItems");

	UQuestManagerComponent_C_RemoveKeyItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.TryRefreshAllPlayerCheckQuest
// (BlueprintCallable, BlueprintEvent)
void UQuestManagerComponent_C::TryRefreshAllPlayerCheckQuest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.TryRefreshAllPlayerCheckQuest");

	UQuestManagerComponent_C_TryRefreshAllPlayerCheckQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameStatisticComponent_C* GameStatisticComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::Initialize(class UGameStatisticComponent_C* GameStatisticComponent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.Initialize");

	UQuestManagerComponent_C_Initialize_Params params;
	params.GameStatisticComponent = GameStatisticComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.ReceiveTick");

	UQuestManagerComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.ExecuteUbergraph_QuestManagerComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::ExecuteUbergraph_QuestManagerComponent(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.ExecuteUbergraph_QuestManagerComponent");

	UQuestManagerComponent_C_ExecuteUbergraph_QuestManagerComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestManagerComponent.QuestManagerComponent_C.OnQuestSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  QuestObjective                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuestManagerComponent_C::OnQuestSuccess__DelegateSignature(class UClass* QuestObjective)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function QuestManagerComponent.QuestManagerComponent_C.OnQuestSuccess__DelegateSignature");

	UQuestManagerComponent_C_OnQuestSuccess__DelegateSignature_Params params;
	params.QuestObjective = QuestObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
