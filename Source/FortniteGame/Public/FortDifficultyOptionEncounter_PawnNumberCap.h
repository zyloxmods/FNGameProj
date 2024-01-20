#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortEncounterPawnNumberCaps.h"
#include "FortDifficultyOptionEncounter_PawnNumberCap.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_PawnNumberCap : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterPawnNumberCaps PawnCapsPerPlayerCount;
    
public:
    UFortDifficultyOptionEncounter_PawnNumberCap();
};

