#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HSHProcessParameter.HSHProcessParameter_C
// 0x00D0 (FullSize[0x0118] - InheritedSize[0x0048])
class UHSHProcessParameter_C : public UProcessParameters
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0048(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnStartGameSession;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUpdateGameSession;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FAWSGameSessionServer                       GameSession;                                               // 0x0078(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnProcessTerminate;                                        // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass HSHProcessParameter.HSHProcessParameter_C");
		return ptr;
	}



	void GetGameSession(struct FAWSGameSessionServer* GameSession);
	void GetDebugText(struct FString* String);
	bool HealthCheck();
	void StartGameSession(const struct FAWSGameSessionServer& GameSession);
	void UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession);
	void ProcessTerminate();
	void ExecuteUbergraph_HSHProcessParameter(int EntryPoint);
	void OnProcessTerminate__DelegateSignature();
	void OnUpdateGameSession__DelegateSignature(const struct FUpdateGameSessionServer& UpdateGameSession);
	void OnStartGameSession__DelegateSignature(const struct FAWSGameSessionServer& GameSession);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
