#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortCurrencyItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortCurrencyItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortCurrencyItemDefinition(const FObjectInitializer& ObjectInitializer);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Currency", GetFName());
    }
};

