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

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams              Params;                                                    // 0x00E8(0x0038) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		return ptr;
	}



};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
