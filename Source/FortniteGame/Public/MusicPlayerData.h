#pragma once
#include "CoreMinimal.h"
#include "MusicPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FMusicPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SongIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeSongStarted;
    
    FORTNITEGAME_API FMusicPlayerData();
};

