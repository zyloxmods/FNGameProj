#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnPointsBurst.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_SpawnPointsBurst : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BurstSpawnPointsPercentage;
    
public:
    UFortDifficultyOptionEncounter_SpawnPointsBurst();
};

