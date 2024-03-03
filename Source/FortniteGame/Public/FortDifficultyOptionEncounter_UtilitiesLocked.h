#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortEncounterLockedUtility.h"
#include "FortDifficultyOptionEncounter_UtilitiesLocked.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_UtilitiesLocked : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEncounterLockedUtility> LockedUtilities;
    
public:
    UFortDifficultyOptionEncounter_UtilitiesLocked();
};

