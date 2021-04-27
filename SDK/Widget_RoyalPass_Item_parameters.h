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
// Parameters
//---------------------------------------------------------------------------

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ParseIntToRarity
struct UWidget_RoyalPass_Item_C_ParseIntToRarity_Params
{
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetBackgroundRarity
struct UWidget_RoyalPass_Item_C_SetBackgroundRarity_Params
{
	class UImage*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rarity;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetBrushProductImage
struct UWidget_RoyalPass_Item_C_SetBrushProductImage_Params
{
	class UImage*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrush;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.AssignWidgetManager
struct UWidget_RoyalPass_Item_C_AssignWidgetManager_Params
{
	class AWidgetMainMenuManager_C*                    WidgetManager;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BeginMenuAnimation
struct UWidget_RoyalPass_Item_C_BeginMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.EndMenuAnimation
struct UWidget_RoyalPass_Item_C_EndMenuAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ShowPreview
struct UWidget_RoyalPass_Item_C_ShowPreview_Params
{
	struct FText                                       Header;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     Image;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RefreshButton
struct UWidget_RoyalPass_Item_C_RefreshButton_Params
{
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RefreshContent
struct UWidget_RoyalPass_Item_C_RefreshContent_Params
{
	bool                                               bIsPremium;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RewardIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetPremiumBackground
struct UWidget_RoyalPass_Item_C_SetPremiumBackground_Params
{
	bool                                               bIsPremium;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BndEvt__Button_Free_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_RoyalPass_Item_C_BndEvt__Button_Free_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.BndEvt__Button_Premium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWidget_RoyalPass_Item_C_BndEvt__Button_Premium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.UpdateValue
struct UWidget_RoyalPass_Item_C_UpdateValue_Params
{
	bool                                               bIsPremiumItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             Name;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIsClaimed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RewardIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.RewardIndex
struct UWidget_RoyalPass_Item_C_RewardIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.SetPremium
struct UWidget_RoyalPass_Item_C_SetPremium_Params
{
	bool                                               bIsPremium;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.InitializeContent
struct UWidget_RoyalPass_Item_C_InitializeContent_Params
{
	bool                                               bIsPremium;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RewardIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RoyalPass_Item.Widget_RoyalPass_Item_C.ExecuteUbergraph_Widget_RoyalPass_Item
struct UWidget_RoyalPass_Item_C_ExecuteUbergraph_Widget_RoyalPass_Item_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
