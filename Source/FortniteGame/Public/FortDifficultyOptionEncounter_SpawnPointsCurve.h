#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnPointsCurve.generated.h"

class UFortSpawnPointsPercentageCurveSequence;

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_SpawnPointsCurve : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSpawnPointsPercentageCurveSequence* CurveSequence;
    
public:
    UFortDifficultyOptionEncounter_SpawnPointsCurve();
};

