#pragma once
#include "CoreMinimal.h"
#include "MinigameScoreData.h"
#include "MinigameSoloScoreData.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FMinigameSoloScoreData : public FMinigameScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* PlayerState;
    
    FORTNITEGAME_API FMinigameSoloScoreData();
};

