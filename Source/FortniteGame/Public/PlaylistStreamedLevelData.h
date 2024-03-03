#pragma once
#include "CoreMinimal.h"
#include "PlaylistStreamedLevelData.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistStreamedLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishedStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServerOnly;
    
    FORTNITEGAME_API FPlaylistStreamedLevelData();
};

