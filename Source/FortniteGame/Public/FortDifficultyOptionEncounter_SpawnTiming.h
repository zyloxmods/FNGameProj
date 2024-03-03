#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnTiming.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_SpawnTiming : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnIntervalSeconds;
    
public:
    UFortDifficultyOptionEncounter_SpawnTiming();
};

