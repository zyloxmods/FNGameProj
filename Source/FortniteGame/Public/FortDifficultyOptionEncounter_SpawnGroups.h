#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_SpawnGroups.generated.h"

class UFortAISpawnGroupProgressionInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortDifficultyOptionEncounter_SpawnGroups : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAISpawnGroupProgressionInfo* SpawnGroupProgression;
    
public:
    UFortDifficultyOptionEncounter_SpawnGroups();
};

