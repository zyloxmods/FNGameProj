#pragma once
#include "CoreMinimal.h"
#include "FortSimpleItemConditionIconIndicator.h"
#include "FortInventoryOverflowIndicator.generated.h"

UCLASS(Blueprintable)
class UFortInventoryOverflowIndicator : public UFortSimpleItemConditionIconIndicator {
    GENERATED_BODY()
public:
    UFortInventoryOverflowIndicator();
};

