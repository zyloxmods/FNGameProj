#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "GameplayTagContainer.h"
#include "FortDifficultyOptionBudget.generated.h"

USTRUCT(BlueprintType)
struct FFortDifficultyOptionBudget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BudgetTypeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle DifficultyOptionPointsCurve;
    
    FORTNITEGAME_API FFortDifficultyOptionBudget();
};

