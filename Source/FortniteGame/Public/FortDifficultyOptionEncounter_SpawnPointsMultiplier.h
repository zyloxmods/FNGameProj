#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnPointsMultiplier.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_SpawnPointsMultiplier : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Multiplier;
    
public:
    UFortDifficultyOptionEncounter_SpawnPointsMultiplier();
};

