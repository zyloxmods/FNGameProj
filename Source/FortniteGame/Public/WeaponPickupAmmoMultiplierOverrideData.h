#pragma once
#include "CoreMinimal.h"
#include "HelperGameplayTagToAmmoCountMultiplier.h"
#include "WeaponPickupAmmoMultiplierOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponPickupAmmoMultiplierOverrideData : public FHelperGameplayTagToAmmoCountMultiplier {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FWeaponPickupAmmoMultiplierOverrideData();
};

