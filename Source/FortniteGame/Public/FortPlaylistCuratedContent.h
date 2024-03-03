#pragma once
#include "CoreMinimal.h"
#include "FortPlaylistCuratedContent.generated.h"

USTRUCT(BlueprintType)
struct FFortPlaylistCuratedContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CuratedLinkCodes;
    
    FORTNITEGAME_API FFortPlaylistCuratedContent();
};

