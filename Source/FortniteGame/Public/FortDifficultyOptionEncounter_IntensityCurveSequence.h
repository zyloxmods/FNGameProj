#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_IntensityCurveSequence.generated.h"

class UFortIntensityCurveSequence;

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_IntensityCurveSequence : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortIntensityCurveSequence* CurveSequence;
    
public:
    UFortDifficultyOptionEncounter_IntensityCurveSequence();
};

