#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PawnGoalSelectionCriteria.h"
#include "PawnGoalSelectionTableEntry.generated.h"

USTRUCT(BlueprintType)
struct FPawnGoalSelectionTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnGoalSelectionCriteria PawnGoalSelectionCriteria;
    
    FORTNITEGAME_API FPawnGoalSelectionTableEntry();
};

