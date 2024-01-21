#pragma once
#include "CoreMinimal.h"
#include "EFortSquadSlottingRestrictionReason.generated.h"

UENUM(BlueprintType)
enum class EFortSquadSlottingRestrictionReason : uint8 {
    ItemIsInInventoryOverflow,
    MandatorySlotWouldBeEmptied,
    ItemIsOnActiveExpedition,
    HeroRequiresMissingGameplayTag,
    HeroAlreadyEquippedInLoadout,
};

