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

// BlueprintGeneratedClass ChatComponent.ChatComponent_C
// 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
class UChatComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                LimitCacheText;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HA9Q[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_ChatData>                         Chat;                                                      // 0x0118(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify)
	struct FScriptMulticastDelegate                    OnChatUpdate;                                              // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                                  DT_Filter;                                                 // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ChatComponent.ChatComponent_C");
		return ptr;
	}



	struct FS_ChatData FilterChat(const struct FS_ChatData& Chat);
	void OnRep_Chat();
	void CommitText(const struct FS_ChatData& Chat);
	void AddChat(const struct FS_ChatData& Chat);
	void ExecuteUbergraph_ChatComponent(int EntryPoint);
	void OnChatUpdate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
