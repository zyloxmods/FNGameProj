#pragma once
#include "CoreMinimal.h"
#include "MingiameScoreboardRow.h"
#include "MinigameScoreboardPlayerRow.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FMinigameScoreboardPlayerRow : public FMingiameScoreboardRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* PlayerState;
    
    FORTNITEGAME_API FMinigameScoreboardPlayerRow();
};

