#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_UtilitiesAdjustment.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_UtilitiesAdjustment : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UtilitiesAdjustmentIntervalSeconds;
    
public:
    UFortDifficultyOptionEncounter_UtilitiesAdjustment();
};

