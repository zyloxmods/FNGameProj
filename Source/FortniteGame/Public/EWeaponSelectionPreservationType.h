#pragma once
#include "CoreMinimal.h"
#include "EWeaponSelectionPreservationType.generated.h"

UENUM(BlueprintType)
enum class EWeaponSelectionPreservationType : uint8 {
    KeepSelectionWhenRespawning,
    NeverKeepSelection,
};

