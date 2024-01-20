#pragma once
#include "CoreMinimal.h"
#include "EItemListViewDisplayType.generated.h"

UENUM(BlueprintType)
enum class EItemListViewDisplayType : uint8 {
    World,
    Outpost,
    Account,
    DeployableBase,
    Max,
};

