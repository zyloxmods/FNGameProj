#pragma once
#include "CoreMinimal.h"
#include "FortPlaylistCuratedContent.h"
#include "FortFeaturedIslandsState.generated.h"

USTRUCT(BlueprintType)
struct FFortFeaturedIslandsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IslandCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortPlaylistCuratedContent> PlaylistCuratedContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PlaylistCuratedHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IslandTemplates;
    
    FORTNITEGAME_API FFortFeaturedIslandsState();
};

