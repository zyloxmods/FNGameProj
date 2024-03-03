#pragma once
#include "CoreMinimal.h"
#include "ESupplyDropSpawnType.generated.h"

UENUM(BlueprintType)
enum class ESupplyDropSpawnType : uint8 {
    SafeZoneDriven,
    ItemDeliveryManagement,
    MutatorManaged,
};

