#pragma once
#include "CoreMinimal.h"
#include "EFortAlteration.generated.h"

UENUM(BlueprintType)
namespace EFortAlteration {
    enum Type {
        AttributeSlot,
        GameplaySlot,
        ComplexCosmeticSlot,
        UserPickedCosmeticSlot,
        ColorSlot,
        HeroSpecializationTier1Slot,
        HeroSpecializationTier2Slot,
        HeroSpecializationTier3Slot,
        HeroSpecializationTier4Slot,
        HeroSpecializationTier5Slot,
    };
}

