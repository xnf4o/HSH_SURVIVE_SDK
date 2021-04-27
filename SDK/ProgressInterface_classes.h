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

// BlueprintGeneratedClass ProgressInterface.ProgressInterface_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UProgressInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ProgressInterface.ProgressInterface_C");
		return ptr;
	}



	void IsLockCameraOnFinish(class AHSHCharacterBase* Character, bool* Return);
	void GetFinishSection(struct FName* Return);
	void GetSkilcheckFailedSection(struct FName* Return);
	void GetSkilcheckGreatSection(struct FName* Return);
	void GetSkilcheckPerfectSection(struct FName* Return);
	void OnStartProgressAction(class AHSHCharacterBase* hshcharacter);
	void OnCommitSkillCheck(TEnumAsByte<E_SkillcheckResult_E_SkillcheckResult> Result, class AHSHCharacterBase* Character);
	void IsForceSkillCheck_(bool* bForceSkillCheck);
	void IsNotCancelProgressonMove(bool* IsNotCancel);
	void OnCannotProgress(class AHSHCharacterBase* hshcharacter);
	void CanUseProgress(bool* UseProgress);
	void GetSpeedSkillCheck(float* Speed);
	void IsResetResult_(bool* IsReset);
	void OnStopProgress(class AHSHCharacterBase* hshcharacter);
	void OnFinishProgress(class AHSHCharacterBase* hshcharacter);
	void IsCanSkillCheck_(bool* IsImprement, bool* IsCan);
	void IsCanHelp_(bool* IsCan);
	void GetProgressTime(bool* IsReturnSuccess, float* progressTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
