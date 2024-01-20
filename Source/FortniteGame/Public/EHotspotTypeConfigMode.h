#pragma once
#include "CoreMinimal.h"
#include "EHotspotTypeConfigMode.generated.h"

UENUM(BlueprintType)
enum class EHotspotTypeConfigMode : uint8 {
    AlwaysAdd,
    WhenNotDefined,
    WhenNotValid,
};

