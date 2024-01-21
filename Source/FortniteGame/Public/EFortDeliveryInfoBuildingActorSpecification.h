#pragma once
#include "CoreMinimal.h"
#include "EFortDeliveryInfoBuildingActorSpecification.generated.h"

UENUM(BlueprintType)
enum class EFortDeliveryInfoBuildingActorSpecification : uint8 {
    All,
    PlayerBuildable,
    NonPlayerBuildable,
};

