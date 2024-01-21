#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_DirectionNumber.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_DirectionNumber : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfDirections;
    
public:
    UFortDifficultyOptionEncounter_DirectionNumber();
};

