#pragma once
#include "CoreMinimal.h"
#include "EFortItemCollectorTrackingType.generated.h"

UENUM(BlueprintType)
enum class EFortItemCollectorTrackingType : uint8 {
    Player,
    Team,
};

