#pragma once
#include "CoreMinimal.h"
#include "FortAIEncounterTimedModifierTags.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_TimedModifierTags.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_TimedModifierTags : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterTimedModifierTags> TimedModifierTags;
    
public:
    UFortDifficultyOptionEncounter_TimedModifierTags();
};

