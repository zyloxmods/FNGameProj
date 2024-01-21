#pragma once
#include "CoreMinimal.h"
#include "EMinigameScoreType.h"
#include "MinigameScoreTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMinigameScoreTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinigameScoreType ScoreType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHighScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAscending;
    
    FORTNITEGAME_API FMinigameScoreTemplate();
};

