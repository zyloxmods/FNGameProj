#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GoalSelectionCriteria.h"
#include "EncounterGoalSelectionTableEntry.generated.h"

USTRUCT(BlueprintType)
struct FEncounterGoalSelectionTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoalSelectionCriteria GoalSelectionCriteria;
    
    FORTNITEGAME_API FEncounterGoalSelectionTableEntry();
};

