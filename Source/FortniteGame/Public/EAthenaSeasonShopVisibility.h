#pragma once
#include "CoreMinimal.h"
#include "EAthenaSeasonShopVisibility.generated.h"

UENUM(BlueprintType)
enum class EAthenaSeasonShopVisibility : uint8 {
    Hide,
    ShowIfOffersAvailable,
    ShowAlways,
};

