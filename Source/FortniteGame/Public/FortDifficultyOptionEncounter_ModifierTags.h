#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_ModifierTags.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_ModifierTags : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ModifierTags;
    
public:
    UFortDifficultyOptionEncounter_ModifierTags();
};

