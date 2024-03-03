#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortEncounterMutatorReplacedTag.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterMutatorReplacedTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAdd;
    
    FORTNITEGAME_API FFortEncounterMutatorReplacedTag();
};

