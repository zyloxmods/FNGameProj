#pragma once
#include "CoreMinimal.h"
#include "ECatalogRequirementType.generated.h"

UENUM(BlueprintType)
enum class ECatalogRequirementType : uint8 {
    RequireFulfillment,
    DenyOnFulfillment,
    RequireItemOwnership,
    DenyOnItemOwnership,
};

