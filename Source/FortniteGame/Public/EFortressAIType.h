#pragma once
#include "CoreMinimal.h"
#include "EFortressAIType.generated.h"

UENUM(BlueprintType)
enum class EFortressAIType : uint8 {
    FAT_Dormant,
    FAT_Cleaner,
    FAT_DayWanderer,
    FAT_NightWanderer,
    FAT_DebugOnly,
    FAT_Encounter,
    FAT_MAX UMETA(Hidden),
};

