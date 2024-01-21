#pragma once
#include "CoreMinimal.h"
#include "MinigameScoreData.generated.h"

USTRUCT(BlueprintType)
struct FMinigameScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    FORTNITEGAME_API FMinigameScoreData();
};

