#pragma once
#include "CoreMinimal.h"
#include "ECatalogOfferType.generated.h"

UENUM(BlueprintType)
enum class ECatalogOfferType : uint8 {
    StaticPrice,
    DynamicBundle,
};

