#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortStatManagerTag.generated.h"

USTRUCT(BlueprintType)
struct FFortStatManagerTag : public FGameplayTag {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortStatManagerTag();
};

