#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_DirectionChange.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_DirectionChange : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeDirectionsOnRest;
    
public:
    UFortDifficultyOptionEncounter_DirectionChange();
};

