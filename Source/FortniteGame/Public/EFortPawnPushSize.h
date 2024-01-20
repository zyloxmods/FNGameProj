#pragma once
#include "CoreMinimal.h"
#include "EFortPawnPushSize.generated.h"

UENUM(BlueprintType)
enum class EFortPawnPushSize : uint8 {
    FFPS_Normal,
    FPPS_Player,
    FPPS_Large,
    FPPS_SuperLarge,
};

