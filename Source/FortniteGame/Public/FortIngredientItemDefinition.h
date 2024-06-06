#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortIngredientItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortIngredientItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    UFortIngredientItemDefinition(const FObjectInitializer& ObjectInitializer);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Ingredient", GetFName());
    }
};

