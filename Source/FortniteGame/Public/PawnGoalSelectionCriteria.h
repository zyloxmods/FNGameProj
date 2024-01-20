#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GoalSelectionCriteria.h"
#include "PawnGoalSelectionCriteria.generated.h"

USTRUCT(BlueprintType)
struct FPawnGoalSelectionCriteria {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncludeEnemiesWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludeEnemiesWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGoalSelectionCriteria> GoalSelectionCriteria;
    
    FORTNITEGAME_API FPawnGoalSelectionCriteria();
};

