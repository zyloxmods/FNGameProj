#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnLimitPoints.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_SpawnLimitPoints : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnPointsPercentageLimit;
    
public:
    UFortDifficultyOptionEncounter_SpawnLimitPoints();
};

