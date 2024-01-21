#pragma once
#include "CoreMinimal.h"
#include "MinigameScoreData.h"
#include "MinigameTeamScoreData.generated.h"

USTRUCT(BlueprintType)
struct FMinigameTeamScoreData : public FMinigameScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    FORTNITEGAME_API FMinigameTeamScoreData();
};

