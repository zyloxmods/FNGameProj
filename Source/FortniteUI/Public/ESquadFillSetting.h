#pragma once
#include "CoreMinimal.h"
#include "ESquadFillSetting.generated.h"

UENUM(BlueprintType)
enum class ESquadFillSetting : uint8 {
    Invalid,
    Fill,
    NoFill,
};

