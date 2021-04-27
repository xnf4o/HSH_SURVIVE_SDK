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

// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData_L9YZ[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8TNI[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFaceDetectionResult                        FaceDetectionResult;                                       // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IFJS[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy");
		return ptr;
	}



	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForDetectFaces(class UTexture* SourceImage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
