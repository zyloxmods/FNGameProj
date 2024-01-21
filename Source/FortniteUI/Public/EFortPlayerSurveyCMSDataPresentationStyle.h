#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataPresentationStyle.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyCMSDataPresentationStyle : uint8 {
    standard = 0x1,
    rating,
};

