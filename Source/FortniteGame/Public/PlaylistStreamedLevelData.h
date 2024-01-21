#pragma once
#include "CoreMinimal.h"
#include "PlaylistStreamedLevelData.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistStreamedLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishedStreaming;
    
    FORTNITEGAME_API FPlaylistStreamedLevelData();
};

