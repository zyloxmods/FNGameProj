#pragma once
#include "CoreMinimal.h"
#include "EAthenaTimeOfDayOverride.generated.h"

UENUM(BlueprintType)
enum class EAthenaTimeOfDayOverride : uint8 {
    NoOverride,
    ForceDay,
    ForceNight,
    Custom,
    Hour0,
    Hour1,
    Hour2,
    Hour3,
    Hour4,
    Hour5,
    Hour6,
    Hour7,
    Hour8,
    Hour9,
    Hour10,
    Hour11,
    Hour12,
    Hour13,
    Hour14,
    Hour15,
    Hour16,
    Hour17,
    Hour18,
    Hour19,
    Hour20,
    Hour21,
    Hour22,
    Hour23,
    Random,
};

