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

// Function VaRestPlugin.VaRestJsonObject.WriteToFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsRelativeToProjectDir        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::WriteToFilePath(const struct FString& Path, bool bIsRelativeToProjectDir)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.WriteToFilePath");

	UVaRestJsonObject_WriteToFilePath_Params params;
	params.Path = Path;
	params.bIsRelativeToProjectDir = bIsRelativeToProjectDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.SetStringField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetStringField(const struct FString& FieldName, const struct FString& StringValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetStringField");

	UVaRestJsonObject_SetStringField_Params params;
	params.FieldName = FieldName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         StringArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetStringArrayField");

	UVaRestJsonObject_SetStringArrayField_Params params;
	params.FieldName = FieldName;
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetObjectField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetObjectField");

	UVaRestJsonObject_SetObjectField_Params params;
	params.FieldName = FieldName;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*> ObjectArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField");

	UVaRestJsonObject_SetObjectArrayField_Params params;
	params.FieldName = FieldName;
	params.ObjectArray = ObjectArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetNumberField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Number                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetNumberField(const struct FString& FieldName, float Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetNumberField");

	UVaRestJsonObject_SetNumberField_Params params;
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  NumberArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField");

	UVaRestJsonObject_SetNumberArrayField_Params params;
	params.FieldName = FieldName;
	params.NumberArray = NumberArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetIntegerField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetIntegerField(const struct FString& FieldName, int Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetIntegerField");

	UVaRestJsonObject_SetIntegerField_Params params;
	params.FieldName = FieldName;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        JsonValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetField");

	UVaRestJsonObject_SetField_Params params;
	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetBoolField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetBoolField(const struct FString& FieldName, bool InValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetBoolField");

	UVaRestJsonObject_SetBoolField_Params params;
	params.FieldName = FieldName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   BoolArray                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField");

	UVaRestJsonObject_SetBoolArrayField_Params params;
	params.FieldName = FieldName;
	params.BoolArray = BoolArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.SetArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestJsonObject::SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetArrayField");

	UVaRestJsonObject_SetArrayField_Params params;
	params.FieldName = FieldName;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.Reset
// (Final, Native, Public, BlueprintCallable)
void UVaRestJsonObject::Reset()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.Reset");

	UVaRestJsonObject_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.RemoveField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::RemoveField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.RemoveField");

	UVaRestJsonObject_RemoveField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       InJsonObject                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Overwrite                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.MergeJsonObject");

	UVaRestJsonObject_MergeJsonObject_Params params;
	params.InJsonObject = InJsonObject;
	params.Overwrite = Overwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestJsonObject.HasField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::HasField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.HasField");

	UVaRestJsonObject_HasField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetStringField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::GetStringField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetStringField");

	UVaRestJsonObject_GetStringField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestJsonObject::GetStringArrayField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetStringArrayField");

	UVaRestJsonObject_GetStringArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetObjectField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetObjectField");

	UVaRestJsonObject_GetObjectField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField");

	UVaRestJsonObject_GetObjectArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetNumberField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVaRestJsonObject::GetNumberField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetNumberField");

	UVaRestJsonObject_GetNumberField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UVaRestJsonObject::GetNumberArrayField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField");

	UVaRestJsonObject_GetNumberArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetIntegerField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestJsonObject::GetIntegerField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetIntegerField");

	UVaRestJsonObject_GetIntegerField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetFieldNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestJsonObject::GetFieldNames()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetFieldNames");

	UVaRestJsonObject_GetFieldNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonObject::GetField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetField");

	UVaRestJsonObject_GetField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetBoolField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::GetBoolField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetBoolField");

	UVaRestJsonObject_GetBoolField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> UVaRestJsonObject::GetBoolArrayField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField");

	UVaRestJsonObject_GetBoolArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.GetArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const struct FString& FieldName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetArrayField");

	UVaRestJsonObject_GetArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::EncodeJsonToSingleString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString");

	UVaRestJsonObject_EncodeJsonToSingleString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.EncodeJson
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonObject::EncodeJson()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.EncodeJson");

	UVaRestJsonObject_EncodeJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.DecodeJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JSONString                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseIncrementalParser          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonObject::DecodeJson(const struct FString& JSONString, bool bUseIncrementalParser)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.DecodeJson");

	UVaRestJsonObject_DecodeJson_Params params;
	params.JSONString = JSONString;
	params.bUseIncrementalParser = bUseIncrementalParser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonObject::STATIC_ConstructJsonObject(class UObject* WorldContextObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject");

	UVaRestJsonObject_ConstructJsonObject_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.IsNull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonValue::IsNull()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.IsNull");

	UVaRestJsonValue_IsNull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.GetTypeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonValue::GetTypeString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.GetTypeString");

	UVaRestJsonValue_GetTypeString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// VaRestPlugin_EVaJson           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VaRestPlugin_EVaJson UVaRestJsonValue::GetType()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.GetType");

	UVaRestJsonValue_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const struct FString& StringValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString");

	UVaRestJsonValue_ConstructJsonValueString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject");

	UVaRestJsonValue_ConstructJsonValueObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Number                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber");

	UVaRestJsonValue_ConstructJsonValueNumber_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool");

	UVaRestJsonValue_ConstructJsonValueBool_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*> inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray");

	UVaRestJsonValue_ConstructJsonValueArray_Params params;
	params.WorldContextObject = WorldContextObject;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestJsonValue::AsString()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsString");

	UVaRestJsonValue_AsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestJsonValue::AsObject()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsObject");

	UVaRestJsonValue_AsObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVaRestJsonValue::AsNumber()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsNumber");

	UVaRestJsonValue_AsNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestJsonValue::AsBool()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsBool");

	UVaRestJsonValue_AsBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestJsonValue.AsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVaRestJsonValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsArray");

	UVaRestJsonValue_AsArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.PercentEncode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::STATIC_PercentEncode(const struct FString& Source)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.PercentEncode");

	UVaRestLibrary_PercentEncode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.LoadJsonFromFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsRelativeToContentDir        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestLibrary::STATIC_LoadJsonFromFile(class UObject* WorldContextObject, const struct FString& Path, bool bIsRelativeToContentDir)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.LoadJsonFromFile");

	UVaRestLibrary_LoadJsonFromFile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Path = Path;
	params.bIsRelativeToContentDir = bIsRelativeToContentDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.CallURL
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestVerb      Verb                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestContentType ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       VaRestJson                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UVaRestLibrary::STATIC_CallURL(class UObject* WorldContextObject, const struct FString& URL, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.CallURL");

	UVaRestLibrary_CallURL_Params params;
	params.WorldContextObject = WorldContextObject;
	params.URL = URL;
	params.Verb = Verb;
	params.ContentType = ContentType;
	params.VaRestJson = VaRestJson;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestLibrary.Base64EncodeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 Dest                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::STATIC_Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64EncodeData");

	UVaRestLibrary_Base64EncodeData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64Encode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestLibrary::STATIC_Base64Encode(const struct FString& Source)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64Encode");

	UVaRestLibrary_Base64Encode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64DecodeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Dest                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::STATIC_Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64DecodeData");

	UVaRestLibrary_Base64DecodeData_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestLibrary.Base64Decode
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Dest                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestLibrary::STATIC_Base64Decode(const struct FString& Source, struct FString* Dest)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64Decode");

	UVaRestLibrary_Base64Decode_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dest != nullptr)
		*Dest = params.Dest;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.SetVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// VaRestPlugin_ERequestVerb      Verb                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetVerb(VaRestPlugin_ERequestVerb Verb)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetVerb");

	UVaRestRequestJSON_SetVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetURL(const struct FString& URL)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetURL");

	UVaRestRequestJSON_SetURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetStringRequestContent(const struct FString& Content)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent");

	UVaRestRequestJSON_SetStringRequestContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetResponseObject");

	UVaRestRequestJSON_SetResponseObject_Params params;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       JsonObject                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetRequestObject");

	UVaRestRequestJSON_SetRequestObject_Params params;
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeaderName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 HeaderValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetHeader");

	UVaRestRequestJSON_SetHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Verb                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetCustomVerb(const struct FString& Verb)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb");

	UVaRestRequestJSON_SetCustomVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// VaRestPlugin_ERequestContentType ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetContentType(VaRestPlugin_ERequestContentType ContentType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetContentType");

	UVaRestRequestJSON_SetContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetBinaryRequestContent(TArray<unsigned char> Content)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent");

	UVaRestRequestJSON_SetBinaryRequestContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ContentType                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::SetBinaryContentType(const struct FString& ContentType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType");

	UVaRestRequestJSON_SetBinaryContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
// (Final, Native, Public, BlueprintCallable)
void UVaRestRequestJSON::ResetResponseData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetResponseData");

	UVaRestRequestJSON_ResetResponseData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
// (Final, Native, Public, BlueprintCallable)
void UVaRestRequestJSON::ResetRequestData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetRequestData");

	UVaRestRequestJSON_ResetRequestData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetData
// (Final, Native, Public, BlueprintCallable)
void UVaRestRequestJSON::ResetData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetData");

	UVaRestRequestJSON_ResetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestRequestJSON::RemoveTag(const struct FName& Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.RemoveTag");

	UVaRestRequestJSON_RemoveTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ProcessURL
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::ProcessURL(const struct FString& URL)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ProcessURL");

	UVaRestRequestJSON_ProcessURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVaRestRequestJSON::HasTag(const struct FName& Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.HasTag");

	UVaRestRequestJSON_HasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetURL()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetURL");

	UVaRestRequestJSON_GetURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// VaRestPlugin_ERequestStatus    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VaRestPlugin_ERequestStatus UVaRestRequestJSON::GetStatus()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetStatus");

	UVaRestRequestJSON_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseObject");

	UVaRestRequestJSON_GetResponseObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeaderName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetResponseHeader(const struct FString& HeaderName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader");

	UVaRestRequestJSON_GetResponseHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseContentAsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCacheResponseContent          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVaRestRequestJSON::GetResponseContentAsString(bool bCacheResponseContent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseContentAsString");

	UVaRestRequestJSON_GetResponseContentAsString_Params params;
	params.bCacheResponseContent = bCacheResponseContent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVaRestRequestJSON::GetResponseCode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseCode");

	UVaRestRequestJSON_GetResponseCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetRequestObject");

	UVaRestRequestJSON_GetRequestObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UVaRestRequestJSON::GetAllResponseHeaders()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders");

	UVaRestRequestJSON_GetAllResponseHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ExecuteProcessRequest
// (Native, Public, BlueprintCallable)
void UVaRestRequestJSON::ExecuteProcessRequest()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ExecuteProcessRequest");

	UVaRestRequestJSON_ExecuteProcessRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestVerb      Verb                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VaRestPlugin_ERequestContentType ContentType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestRequestJSON* UVaRestRequestJSON::STATIC_ConstructRequestExt(class UObject* WorldContextObject, VaRestPlugin_ERequestVerb Verb, VaRestPlugin_ERequestContentType ContentType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt");

	UVaRestRequestJSON_ConstructRequestExt_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Verb = Verb;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVaRestRequestJSON* UVaRestRequestJSON::STATIC_ConstructRequest(class UObject* WorldContextObject)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ConstructRequest");

	UVaRestRequestJSON_ConstructRequest_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VaRestPlugin.VaRestRequestJSON.Cancel
// (Final, Native, Public, BlueprintCallable)
void UVaRestRequestJSON::Cancel()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.Cancel");

	UVaRestRequestJSON_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VaRestPlugin.VaRestRequestJSON.ApplyURL
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::ApplyURL(const struct FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ApplyURL");

	UVaRestRequestJSON_ApplyURL_Params params;
	params.URL = URL;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function VaRestPlugin.VaRestRequestJSON.AddTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVaRestRequestJSON::AddTag(const struct FName& Tag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.AddTag");

	UVaRestRequestJSON_AddTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
