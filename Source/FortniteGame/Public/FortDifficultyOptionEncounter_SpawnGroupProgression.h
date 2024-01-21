#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnGroupProgression.generated.h"

class UFortAISpawnGroupProgressionInfo;

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_SpawnGroupProgression : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAISpawnGroupProgressionInfo* SpawnGroupProgression;
    
public:
    UFortDifficultyOptionEncounter_SpawnGroupProgression();
};

