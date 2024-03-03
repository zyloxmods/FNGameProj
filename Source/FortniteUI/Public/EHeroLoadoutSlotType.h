#pragma once
#include "CoreMinimal.h"
#include "EHeroLoadoutSlotType.generated.h"

UENUM(BlueprintType)
enum class EHeroLoadoutSlotType : uint8 {
    CommanderSlot,
    TeamPerkSlot,
    CrewSlot,
    GadgetSlot,
};

