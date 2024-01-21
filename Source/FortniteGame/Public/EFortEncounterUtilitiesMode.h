#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterUtilitiesMode.generated.h"

UENUM(BlueprintType)
namespace EFortEncounterUtilitiesMode {
    enum Type {
        LockedOnly,
        LockedAndFree,
    };
}

