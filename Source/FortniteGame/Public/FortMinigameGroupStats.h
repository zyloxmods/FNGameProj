#pragma once
#include "CoreMinimal.h"
#include "FortMinigameStat.h"
#include "FortMinigameGroupStats.generated.h"

USTRUCT(BlueprintType)
struct FFortMinigameGroupStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMinigameStat> Stats;
    
    FORTNITEGAME_API FFortMinigameGroupStats();
};

