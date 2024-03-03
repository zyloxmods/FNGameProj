#pragma once
#include "CoreMinimal.h"
#include "HelperGameplayTagToAmmoCountMultiplier.h"
#include "SourceToAmmoMultiplierOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FSourceToAmmoMultiplierOverrideData : public FHelperGameplayTagToAmmoCountMultiplier {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FSourceToAmmoMultiplierOverrideData();
};

