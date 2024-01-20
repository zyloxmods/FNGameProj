#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAIEncounterTimedModifierTags.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterTimedModifierTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    FORTNITEGAME_API FFortAIEncounterTimedModifierTags();
};

