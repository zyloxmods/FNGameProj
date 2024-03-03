#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnLimitPawns.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_SpawnLimitPawns : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PawnNumberLimit;
    
public:
    UFortDifficultyOptionEncounter_SpawnLimitPawns();
};

