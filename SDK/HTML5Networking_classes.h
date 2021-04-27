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

// Class HTML5Networking.WebSocketConnection
// 0x0010 (FullSize[0x1900] - InheritedSize[0x18F0])
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_7JCD[0x10];                                    // 0x18F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HTML5Networking.WebSocketConnection");
		return ptr;
	}



};

// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (FullSize[0x0768] - InheritedSize[0x0758])
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                             // 0x0758(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_053J[0xC];                                     // 0x075C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HTML5Networking.WebSocketNetDriver");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
