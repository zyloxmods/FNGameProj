#pragma once
#include "CoreMinimal.h"
#include "FortPlaylistCuratedContent.h"
#include "FortFeaturedIslandsState.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortFeaturedIslandsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IslandCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortPlaylistCuratedContent> PlayistCuratedContent;
    
    FFortFeaturedIslandsState();
};

