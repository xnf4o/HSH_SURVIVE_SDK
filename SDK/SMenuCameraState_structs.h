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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SMenuCameraState.SMenuCameraState
// 0x0030
struct FSMenuCameraState
{
	TEnumAsByte<E_MenuState_E_MenuState>               State_5_6534E5A04869B43AAF4D1388AA70702D;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I7K1[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Camera_4_CDF741BC428E417C3CA68A8AF8FFE9DF[0x28];           // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty SMenuCameraState.SMenuCameraState.Camera_4_CDF741BC428E417C3CA68A8AF8FFE9DF

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
