#pragma once
#include "CoreMinimal.h"
#include "FortPlaylistCuratedContent.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlaylistCuratedContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CuratedLinkCodes;
    
    FFortPlaylistCuratedContent();
};

