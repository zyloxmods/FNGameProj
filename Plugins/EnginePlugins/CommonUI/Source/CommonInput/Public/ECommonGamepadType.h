#pragma once
#include "CoreMinimal.h"
#include "ECommonGamepadType.generated.h"

UENUM(BlueprintType)
enum class ECommonGamepadType : uint8 {
    XboxOneController,
    PS4Controller,
    SwitchController,
    GenericController,
    XboxSeriesXController,
    PS5Controller,
    Count,
};

