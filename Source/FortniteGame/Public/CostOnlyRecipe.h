#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FortItemQuantityPair.h"
#include "CostOnlyRecipe.generated.h"

USTRUCT(BlueprintType)
struct FCostOnlyRecipe : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> RecipeCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredCatalysts;
    
    FORTNITEGAME_API FCostOnlyRecipe();
};

