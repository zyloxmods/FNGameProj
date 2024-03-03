#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortStatManagerTag.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortStatManagerTag : public FGameplayTag {
    GENERATED_BODY()
public:
    FFortStatManagerTag();
};

