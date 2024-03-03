#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponListRemovalBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortWeaponListRemovalBehavior : uint8 {
    DestroyImmediately,
    DeferredLifespan,
    DoNotDestroy,
};

