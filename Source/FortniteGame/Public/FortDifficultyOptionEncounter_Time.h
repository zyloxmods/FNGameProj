#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_Time.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_Time : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterTimeSeconds;
    
public:
    UFortDifficultyOptionEncounter_Time();
};

