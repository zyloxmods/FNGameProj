#pragma once
#include "CoreMinimal.h"
#include "MinigameScoreData.h"
#include "MinigameSoloScoreData.h"
#include "MinigameTeamScoreData.h"
#include "MinigameScoreTracker.generated.h"

USTRUCT(BlueprintType)
struct FMinigameScoreTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameScoreData GroupScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinigameTeamScoreData> TeamScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinigameSoloScoreData> SoloScores;
    
    FORTNITEGAME_API FMinigameScoreTracker();
};

