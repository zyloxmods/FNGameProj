#pragma once
#include "CoreMinimal.h"
#include "EItemShopNavigationAction.generated.h"

UENUM(BlueprintType)
enum class EItemShopNavigationAction : uint8 {
    None,
    ShowOfferDetails,
    NavigateToOffer,
};

